/*
 * Copyright (c) 2006
 *	The President and Fellows of Harvard College.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE UNIVERSITY AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE UNIVERSITY OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

/**
 * <pre>URL: http://www.eecs.harvard.edu/~konrad/projects/shimmer</pre>
 * @author Konrad Lorincz
 * @version 1.0, November 10, 2006
 */
import net.tinyos.util.*;
import net.tinyos.message.*;
import java.util.*;
import java.text.*;

public class Receiver implements MessageListener
{
    private static DecimalFormat dbFormat = new DecimalFormat("#.###");
    private static double RAW_TIME_RATE = 32768;


    public static void main(String args[])
    {
        Receiver myapp = new Receiver();
    }

    Receiver()
    {
        MoteIF mote = new MoteIF(PrintStreamMessenger.err); // uses MOTECOM!
        mote.registerListener(new SamplingMsg(), this);
    }

    public void messageReceived(int dstaddr, Message msg)
    {
        if (msg instanceof SamplingMsg) {

            SamplingMsg sMsg = (SamplingMsg) msg;

            int srcAddr = sMsg.get_srcAddr();
            long timeRaw = sMsg.get_timeStamp();
            int nbrSamples = sMsg.get_nbrSamples();
            int[] samples = sMsg.get_samples();
            double timeSec = (double)timeRaw/RAW_TIME_RATE;

            System.out.print("\n# srcAddr= " + srcAddr +
                             "  timeRaw= " + timeRaw +
                             "  timeSec= " + dbFormat.format(timeSec) +
                             "  nbrSamples= " + nbrSamples);

            for (int i = 0; i < nbrSamples; ++i) {
                if (i % TestSamplingStorageRadio.NBR_ADC_CHANS == 0) {
                    double timeSecOffset = i/TestSamplingStorageRadio.NBR_ADC_CHANS * 1.0/(double)TestSamplingStorageRadio.SAMPLING_RATE_HZ;
                    System.out.print("\n" + dbFormat.format(timeSec + timeSecOffset) + " ");
                }
                System.out.print(" " + samples[i]);
            }            
        }
    }
}
