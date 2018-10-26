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
module TestCryptC @safe() {
  uses {
    interface Boot;
    interface Timer<TMilli>;
    interface CRYPTO;
  }
}
implementation {
  //skipjack_key skey;
  //rc2_key skey;
  
  //uint32_t skey[4] = {0x9474B8E8, 0xC73BCA7D, 0x53239142, 0xf3c3121a}; //Xtea
  //unsigned char Skey[10] = {0x94,0x74,0xB8,0xE8,0xC7,0x3B,0xCA,0x7D,0xCA,0x7D};
  //unsigned char Bkey[8]  = {0x94,0x74,0xB8,0xE8,0xC7,0x3B,0xCA,0x7D};
  //unsigned char key[16]  = {0x94,0x74,0xB8,0xE8,0xC7,0x3B,0xCA,0x7D,0x53,0x23,0x91,0x42,0xf3,0xc3,0x12,0x1a};
  unsigned char pt[8]= {0x28, 0x85, 0x84, 0x2e, 0xa3, 0xe6, 0x99, 0x9b};
  //unsigned char ct[8];
  //int i;
    

  event void Boot.booted() {
    //call CRYPTO.skipjack_setup(Skey, 10, 0, &skey);
    //call CRYPTO.rc2_setup (key, 16, 0, &skey);
    call Timer.startPeriodic(1);
  }

	event void Timer.fired() {

    //call CRYPTO.skipjack_encrypt(pt, ct, &skey);
    //call CRYPTO.rc2_encrypt(pt,ct,&skey);
    //call CRYPTO.xtea_encrypt(pt,ct,key);
    //call CRYPTO.rc4_encrypt(pt,8);
    call CRYPTO.xxtea_encrypt(pt,8);
    
   //  printf("input\n");
   //  for (i = 0; i < 8; ++i)
   //    printf("%x ",pt[i]);
   //  printf("\n");    

   //  printf("output\n");
   //  for (i = 0; i < 8; ++i)
   //    printf("%x ",ct[i]);
   //  printf("\n");  
    
  	// printfflush();
  }
}