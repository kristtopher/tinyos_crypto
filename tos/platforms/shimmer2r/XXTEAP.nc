module XXTEAP @safe() {
  provides interface XXTEA;
}

implementation {
 
  uint32_t key[4] = {0x9474B8E8, 0xC73BCA7D, 0x53239142, 0xf3c3121a};
  uint8_t z, y;
  uint32_t p, q, e, sum = 0, DELTA = 0x9e3779b9; 


  async command XXTEA.encrypt( uint8_t *block, uint32_t len ){
    z = block[len - 1];
    y = block[0];

    q = 6 + 52/len;
    while (q-- > 0) {
      sum += DELTA;
      e = (sum >> 2) & 3;
      for (p=0; p<len-1; p++){
        y = block[p+1];
        block[p] += (z>>5^y<<2) + (y>>3^z<<4)^(sum^y) + (key[p&3^e]^z);
        z = block[p];
      }
      y = block[0];
      block[len-1] += (z>>5^y<<2) + (y>>3^z<<4)^(sum^y) + (key[p&3^e]^z);
      z = block[len-1];
    }

  }
  async command XXTEA.decrypt( uint8_t *block, uint32_t len ){
    z = block[len - 1];
    y = block[0];

    q = 6 + 52/len;
    sum = q*DELTA ;
    while (sum != 0) {
      e = (sum >> 2) & 3;
      for (p=len-1; p>0; p--){
        z = block[p-1];
        block[p] -= (z>>5^y<<2) + (y>>3^z<<4)^(sum^y) + (key[p&3^e]^z);
        y = block[p];
      }
      z = block[len-1];
      block[0] -= (z>>5^y<<2) + (y>>3^z<<4)^(sum^y) + (key[p&3^e]^z);
      y =  block[0];
      sum -= DELTA;
    }
  }

  async command XXTEA.lsb( uint16_t data){
    data = data << 8;
    return data >> 8;
  }

  async command XXTEA.msb( uint16_t data){
    return data >> 8;
  }
  
}