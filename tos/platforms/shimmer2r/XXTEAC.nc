configuration XXTEAC {
  provides interface XXTEA;
}
implementation {
  components XXTEAP;
  XXTEA = XXTEAP;
}
