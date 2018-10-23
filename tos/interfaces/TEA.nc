interface Tea {
  async command encrypt( uint8_t v0, uint8_t v1);
  async command decrypt( uint8_t v0, uint8_t v1 );
  async command lsb( uint16_t data);
  async command msb( uint16_t data);
}