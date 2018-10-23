module RC4P @safe() {
  provides interface RC4;
}

implementation {	
	uint8_t keylen = 16;
	uint8_t key[16] = {0x94, 0x74, 0xB8, 0xE8, 0xC7, 0x3B, 0xCA, 0x7D, 0x53, 0x23, 0x91, 0x42, 0xf3, 0xc3, 0x12, 0x1a};
	uint32_t i, j, k, kpos;
	uint8_t S[256], *pos;

	async command RC4.rc4(uint8_t *data, uint8_t data_len){
		
		/* Setup RC4 state */
	    for (i = 0; i < 256; i++)	S[i] = i;
	    j = 0;
	    kpos = 0;
	    for (i = 0; i < 256; i++) {
	        j = (j + S[i] + key[kpos]) & 0xff;
	        kpos++;
	        if (kpos >= keylen)	kpos = 0;
	        i^=j;
	        j^=i;
	        i^=j;
	    }

	    /* Apply RC4 to data */
	    pos = data;
	    for (k = 0; k < data_len; k++) {
	        i = (i + 1) & 0xff;
	        j = (j + S[i]) & 0xff;
	        i^=j;
	        j^=i;
	        i^=j;
	        *pos++ ^= S[(S[i] + S[j]) & 0xff];
	    }
	}

	async command RC4.lsb( uint16_t data){
	    data = data << 8;
	    return data >> 8;
	  }

	  async command RC4.msb( uint16_t data){
	    return data >> 8;
	  }
}