module TEAP @safe() {
  provides interface TEA;
}

implementation {
  
  async command TEA.encrypt( uint8_t v0, uint8_t v1){
    uint32_t k[4] = {0x9474B8E8, 0xC73BCA7D, 0x53239142, 0xf3c3121a};
    uint32_t sum = 0;
    uint32_t delta = 0x9e3779b9;
    uint32_t i = 0;
    uint16_t out = 0;

  	for (i = 0; i < 32; i++) {
      sum   += delta;
      v0 += ((v1 << 4) + k[0]) ^ (v1 + sum) ^ ((v1 >> 5) + k[1]);
      v1 += ((v0 << 4) + k[2]) ^ (v0 + sum) ^ ((v0 >> 5) + k[3]);
    }
    out = v0;
    out = out << 8;
    out = out | v1;
    return out;
  }
  
  async command TEA.decrypt( uint8_t v0, uint8_t v1 ){
    uint32_t k[4] = {0x9474B8E8, 0xC73BCA7D, 0x53239142, 0xf3c3121a};
    uint32_t sum = 0xC6EF3720;
    uint32_t delta = 0x9e3779b9;
    uint32_t i = 0;
    uint16_t out = 0;

  	for (i = 0; i < 32; i++) {
     	v1 -= ((v0 << 4) + k[2]) ^ (v0 + sum) ^ ((v0 >> 5) + k[3]);;
      v0 -= ((v1 << 4) + k[0]) ^ (v1 + sum) ^ ((v1 >> 5) + k[1]);
      sum   -= delta;
    }
    out = v0;
    out = out << 8;
    out = out | v1;
    return out;
  }

  async command TEA.lsb( uint16_t data){
    data = data << 8;
    return data >> 8;
  }

  async command TEA.msb( uint16_t data){
    return data >> 8;
  }
}