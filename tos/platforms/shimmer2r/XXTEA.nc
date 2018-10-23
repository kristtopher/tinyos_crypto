interface XXTEA {
  async command encrypt( uint8_t *block, uint32_t len );
  async command decrypt( uint8_t *block, uint32_t len );
  async command lsb( uint16_t data);
  async command msb( uint16_t data);
}