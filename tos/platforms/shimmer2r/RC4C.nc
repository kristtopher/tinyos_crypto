configuration RC4C {
  provides interface RC4;
}
implementation {
  components RC4P;
  RC4 = RC4P;
}