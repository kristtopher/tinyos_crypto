interface RC4 {
	async command rc4(uint8_t *data, uint8_t data_len);
	async command lsb( uint16_t data);
  	async command msb( uint16_t data);
}