/*
 * Copyright (c) 2006 Washington University in St. Louis.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the
 *   distribution.
 * - Neither the name of the copyright holders nor the names of
 *   its contributors may be used to endorse or promote products derived
 *   from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL
 * THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/**
 *
 * This application is used to test the basic functionality of the printf service.
 * Calls to the standard c-style printf command are made to print various strings
 * of text over the serial line.  Only upon calling printfflush() does the
 * data actually get sent out over the serial line.
 *
 * @author Kevin Klues (klueska@cs.wustl.edu)
 * @version $Revision: 1.11 $
 * @date $Date: 2010-06-29 22:07:25 $
 */

#include "printf.h"
module TestPrintfC @safe() {
  uses {
    interface Boot;
    interface Timer<TMilli>;
    interface Leds;
    interface Read<uint16_t> as Read;
  }
}
implementation {
  uint32_t dummyVar2 = 0;
  uint32_t v0 = 0x2885842e;
  uint32_t v1 = 0xa3e6999b;
  uint32_t k[4] = {0x9474B8E8, 0xC73BCA7D, 0x53239142, 0xf3c3121a};
  uint32_t  sum = 0, delta = 0x9e3779b9;
  int i;
  int a = 0;

  event void Boot.booted() {
    call Timer.startPeriodic(1000);
  }

  event void Timer.fired() {
    call Read.read();
    call Leds.led1Off();
    if(a % 2 == 0){
      call Leds.led2On();
      call Leds.led0Off();
      printf("Input   IN0 0x%x IN1 0x%x \n", (unsigned)v0, (unsigned)v1);
        for (i = 0; i < 32; i++) {
            sum   += delta;
            v0 += ((v1 << 4) + k[0]) ^ (v1 + sum) ^ ((v1 >> 5) + k[1]);
            v1 += ((v0 << 4) + k[2]) ^ (v0 + sum) ^ ((v0 >> 5) + k[3]);
        }
      printf("Encrypt IN0 0x%x IN1 0x%x \n\n", (unsigned)v0, (unsigned)v1);
    }
    else{
      call Leds.led0On();
      call Leds.led2Off();
      printf("Input   IN0 0x%x IN1 0x%x \n", (unsigned)v0, (unsigned)v1);
      for (i = 0; i < 32; i++) {
            v1 -= ((v0 << 4) + k[2]) ^ (v0 + sum) ^ ((v0 >> 5) + k[3]);;
            v0 -= ((v1 << 4) + k[0]) ^ (v1 + sum) ^ ((v1 >> 5) + k[1]);
            sum   -= delta;
        }
        printf("Decrypt IN0 0x%x IN1 0x%x \n\n", (unsigned)v0, (unsigned)v1);
    }
    printf("%d\n",dummyVar2);
    a += 1;
    printfflush();
  }

  event void Read.readDone(error_t result, uint16_t data){
    if (result == SUCCESS)
      call Leds.led1On();
      dummyVar2 = data;
      v0 = v1 = data;
  }
}

