 #ifndef PACKGE_H
 #define PACKGE_H

 typedef nx_struct PktMsg {
  nx_uint8_t nodeid;
  nx_uint8_t data[2];
} PktMsg;
 
 #endif