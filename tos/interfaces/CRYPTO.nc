interface CRYPTO {
	async command rc4(uint8_t *data, uint8_t data_len);
	async command XXTEA_encrypt( uint8_t *block, uint32_t len );
  	async command XXTEA_decrypt( uint8_t *block, uint32_t len );
	async command lsb( uint16_t data);
  	async command msb( uint16_t data);
}