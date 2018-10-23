#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 150 "/usr/lib/gcc/msp430/4.6.3/include/stddef.h" 3
typedef long int ptrdiff_t;
#line 212
typedef unsigned int size_t;
#line 324
typedef int wchar_t;
# 8 "/usr/local/lib/ncc/deputy_nodeputy.h"
struct __nesc_attr_nonnull {
#line 8
  int dummy;
}  ;
#line 9
struct __nesc_attr_bnd {
#line 9
  void *lo, *hi;
}  ;
#line 10
struct __nesc_attr_bnd_nok {
#line 10
  void *lo, *hi;
}  ;
#line 11
struct __nesc_attr_count {
#line 11
  int n;
}  ;
#line 12
struct __nesc_attr_count_nok {
#line 12
  int n;
}  ;
#line 13
struct __nesc_attr_one {
#line 13
  int dummy;
}  ;
#line 14
struct __nesc_attr_one_nok {
#line 14
  int dummy;
}  ;
#line 15
struct __nesc_attr_dmemset {
#line 15
  int a1, a2, a3;
}  ;
#line 16
struct __nesc_attr_dmemcpy {
#line 16
  int a1, a2, a3;
}  ;
#line 17
struct __nesc_attr_nts {
#line 17
  int dummy;
}  ;
# 38 "/usr/lib/gcc/msp430/4.6.3/../../../../msp430/include/stdint.h" 3
typedef signed char int8_t;
typedef int int16_t;
typedef long int int32_t;
__extension__ 
#line 41
typedef long long int int64_t;

typedef unsigned char uint8_t;
typedef unsigned int uint16_t;
typedef unsigned long int uint32_t;
__extension__ 
#line 46
typedef unsigned long long int uint64_t;





typedef signed char int_least8_t;
typedef int int_least16_t;
typedef long int int_least32_t;
__extension__ 
#line 55
typedef long long int int_least64_t;


typedef unsigned char uint_least8_t;
typedef unsigned int uint_least16_t;
typedef unsigned long int uint_least32_t;
__extension__ 
#line 61
typedef unsigned long long int uint_least64_t;





typedef signed char int_fast8_t;
typedef int int_fast16_t;
typedef long int int_fast32_t;
__extension__ 
#line 70
typedef long long int int_fast64_t;


typedef unsigned char uint_fast8_t;
typedef unsigned int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
__extension__ 
#line 76
typedef unsigned long long int uint_fast64_t;









typedef int16_t intptr_t;
typedef uint16_t uintptr_t;





__extension__ 
#line 93
typedef long long int intmax_t;
__extension__ 
#line 94
typedef unsigned long long int uintmax_t;
# 281 "/usr/local/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void * source)  ;




static __inline uint8_t __nesc_hton_uint8(void * target, uint8_t value)  ;
#line 310
static __inline uint16_t __nesc_ntoh_uint16(const void * source)  ;




static __inline uint16_t __nesc_hton_uint16(void * target, uint16_t value)  ;
#line 431
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 48 "/usr/lib/gcc/msp430/4.6.3/../../../../msp430/include/sys/types.h" 3
typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;
typedef unsigned short ushort;
typedef unsigned int uint;

typedef uint8_t u_int8_t;
typedef uint16_t u_int16_t;
typedef uint32_t u_int32_t;
typedef uint64_t u_int64_t;

typedef u_int64_t u_quad_t;
typedef int64_t quad_t;
typedef quad_t *qaddr_t;

typedef char *caddr_t;
typedef const char *c_caddr_t;
typedef volatile char *v_caddr_t;
typedef u_int32_t fixpt_t;
typedef u_int32_t gid_t;
typedef u_int32_t in_addr_t;
typedef u_int16_t in_port_t;
typedef u_int32_t ino_t;
typedef long key_t;
typedef u_int16_t mode_t;
typedef u_int16_t nlink_t;
typedef quad_t rlim_t;
typedef int32_t segsz_t;
typedef int32_t swblk_t;
typedef int32_t ufs_daddr_t;
typedef int32_t ufs_time_t;
typedef u_int32_t uid_t;
# 44 "/usr/lib/gcc/msp430/4.6.3/../../../../msp430/include/string.h" 3
extern void *memset(void *arg_0x7f18f0253020, int arg_0x7f18f02532a0, size_t arg_0x7f18f0253560);


extern int strcmp(const char *arg_0x7f18f0250680, const char *arg_0x7f18f0250980);
extern char *strcpy(char *arg_0x7f18f024f2b0, const char *arg_0x7f18f024f5b0);

extern size_t strlen(const char *arg_0x7f18f024dc40);
#line 65
extern void *memset(void *arg_0x7f18f023b060, int arg_0x7f18f023b2e0, size_t arg_0x7f18f023b5a0);
# 62 "/usr/lib/gcc/msp430/4.6.3/../../../../msp430/include/stdlib.h" 3
#line 59
typedef struct __nesc_unnamed4242 {
  int quot;
  int rem;
} div_t;






#line 66
typedef struct __nesc_unnamed4243 {
  long int quot;
  long int rem;
} ldiv_t;
# 122 "/usr/lib/gcc/msp430/4.6.3/../../../../msp430/include/sys/config.h" 3
typedef long int __int32_t;
typedef unsigned long int __uint32_t;
# 12 "/usr/lib/gcc/msp430/4.6.3/../../../../msp430/include/sys/_types.h" 3
typedef long _off_t;
typedef long _ssize_t;
# 19 "/usr/lib/gcc/msp430/4.6.3/../../../../msp430/include/sys/reent.h" 3
typedef unsigned long __ULong;
#line 31
struct _glue {

  struct _glue *_next;
  int _niobs;
  struct __sFILE *_iobs;
};

struct _Bigint {

  struct _Bigint *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong _x[1];
};


struct __tm {

  int __tm_sec;
  int __tm_min;
  int __tm_hour;
  int __tm_mday;
  int __tm_mon;
  int __tm_year;
  int __tm_wday;
  int __tm_yday;
  int __tm_isdst;
};







struct _atexit {
  struct _atexit *_next;
  int _ind;
  void (*_fns[32])(void );
};








struct __sbuf {
  unsigned char *_base;
  int _size;
};






typedef long _fpos_t;
#line 116
struct __sFILE {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf _bf;
  int _lbfsize;


  void *_cookie;

  int (*_read)(void *_cookie, char *_buf, int _n);
  int (*_write)(void *_cookie, const char *_buf, int _n);

  _fpos_t (*_seek)(void *_cookie, _fpos_t _offset, int _whence);
  int (*_close)(void *_cookie);


  struct __sbuf _ub;
  unsigned char *_up;
  int _ur;


  unsigned char _ubuf[3];
  unsigned char _nbuf[1];


  struct __sbuf _lb;


  int _blksize;
  int _offset;

  struct _reent *_data;
};
#line 174
struct _rand48 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;
};









struct _reent {


  int _errno;




  struct __sFILE *_stdin, *_stdout, *_stderr;

  int _inc;
  char _emergency[25];

  int _current_category;
  const char *_current_locale;

  int __sdidinit;

  void (*__cleanup)(struct _reent *arg_0x7f18f01fe170);


  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;


  int _cvtlen;
  char *_cvtbuf;

  union __nesc_unnamed4244 {

    struct __nesc_unnamed4245 {

      unsigned int _unused_rand;
      char *_strtok_last;
      char _asctime_buf[26];
      struct __tm _localtime_buf;
      int _gamma_signgam;
      __extension__ unsigned long long _rand_next;
      struct _rand48 _r48;
    } _reent;



    struct __nesc_unnamed4246 {


      unsigned char *_nextf[30];
      unsigned int _nmalloc[30];
    } _unused;
  } _new;


  struct _atexit *_atexit;
  struct _atexit _atexit0;


  void (**_sig_func)(int arg_0x7f18f01f9480);




  struct _glue __sglue;
  struct __sFILE __sf[3];
};
#line 273
struct _reent;
# 18 "/usr/lib/gcc/msp430/4.6.3/../../../../msp430/include/math.h" 3
union __dmath {

  __uint32_t i[2];
  double d;
};




union __dmath;
#line 212
struct exception {


  int type;
  char *name;
  double arg1;
  double arg2;
  double retval;
  int err;
};
#line 265
enum __fdlibm_version {

  __fdlibm_ieee = -1, 
  __fdlibm_svid, 
  __fdlibm_xopen, 
  __fdlibm_posix
};




enum __fdlibm_version;
# 40 "/usr/lib/gcc/msp430/4.6.3/../../../../msp430/include/ctype.h" 3
static int isalpha(int c) __attribute((const)) ;
#line 57
static __inline int isalpha(int c);
# 25 "../../../tos/system/tos.h"
typedef uint8_t bool;
enum __nesc_unnamed4247 {
#line 26
  FALSE = 0, TRUE = 1
};
typedef nx_int8_t nx_bool;







struct __nesc_attr_atmostonce {
};
#line 37
struct __nesc_attr_atleastonce {
};
#line 38
struct __nesc_attr_exactlyonce {
};
# 51 "../../../tos/types/TinyError.h"
enum __nesc_unnamed4248 {
  SUCCESS = 0, 
  FAIL = 1, 
  ESIZE = 2, 
  ECANCEL = 3, 
  EOFF = 4, 
  EBUSY = 5, 
  EINVAL = 6, 
  ERETRY = 7, 
  ERESERVE = 8, 
  EALREADY = 9, 
  ENOMEM = 10, 
  ENOACK = 11, 
  ETIMEOUT = 12, 
  ELAST = 12
};

typedef uint8_t error_t  ;

static inline error_t ecombine(error_t r1, error_t r2)  ;
# 47 "/usr/lib/gcc/msp430/4.6.3/../../../../msp430/include/intrinsics.h" 3
void __nop(void );



void __dint(void );



void __eint(void );


unsigned int __read_status_register(void );


typedef unsigned int __istate_t;
# 164 "/usr/lib/gcc/msp430/4.6.3/../../../../msp430/include/msp430f1611.h" 3
extern volatile unsigned char ME1 __asm ("__""ME1");
#line 183
extern volatile unsigned char ME2 __asm ("__""ME2");
#line 195
extern volatile unsigned int WDTCTL __asm ("__""WDTCTL");
#line 265
extern const volatile unsigned char P1IN __asm ("__""P1IN");





extern volatile unsigned char P1IFG __asm ("__""P1IFG");

extern volatile unsigned char P1IES __asm ("__""P1IES");

extern volatile unsigned char P1IE __asm ("__""P1IE");




extern const volatile unsigned char P2IN __asm ("__""P2IN");





extern volatile unsigned char P2IFG __asm ("__""P2IFG");

extern volatile unsigned char P2IES __asm ("__""P2IES");

extern volatile unsigned char P2IE __asm ("__""P2IE");
#line 382
extern volatile unsigned char U0CTL __asm ("__""U0CTL");

extern volatile unsigned char U0TCTL __asm ("__""U0TCTL");



extern volatile unsigned char U0MCTL __asm ("__""U0MCTL");

extern volatile unsigned char U0BR0 __asm ("__""U0BR0");

extern volatile unsigned char U0BR1 __asm ("__""U0BR1");

extern const volatile unsigned char U0RXBUF __asm ("__""U0RXBUF");
#line 439
extern volatile unsigned char U1CTL __asm ("__""U1CTL");

extern volatile unsigned char U1TCTL __asm ("__""U1TCTL");



extern volatile unsigned char U1MCTL __asm ("__""U1MCTL");

extern volatile unsigned char U1BR0 __asm ("__""U1BR0");

extern volatile unsigned char U1BR1 __asm ("__""U1BR1");

extern const volatile unsigned char U1RXBUF __asm ("__""U1RXBUF");
#line 595
extern volatile unsigned int TACTL __asm ("__""TACTL");

extern volatile unsigned int TACCTL0 __asm ("__""TACCTL0");

extern volatile unsigned int TACCTL1 __asm ("__""TACCTL1");

extern volatile unsigned int TACCTL2 __asm ("__""TACCTL2");

extern volatile unsigned int TAR __asm ("__""TAR");
#line 720
extern volatile unsigned int TBCCTL0 __asm ("__""TBCCTL0");
#line 734
extern volatile unsigned int TBR __asm ("__""TBR");

extern volatile unsigned int TBCCR0 __asm ("__""TBCCR0");
#line 849
extern volatile unsigned char DCOCTL __asm ("__""DCOCTL");

extern volatile unsigned char BCSCTL1 __asm ("__""BCSCTL1");

extern volatile unsigned char BCSCTL2 __asm ("__""BCSCTL2");
#line 1021
extern volatile unsigned int ADC12CTL0 __asm ("__""ADC12CTL0");

extern volatile unsigned int ADC12CTL1 __asm ("__""ADC12CTL1");
#line 1444
extern volatile unsigned int DMA0DA __asm ("__""DMA0DA");
# 345 "../../../tos/platforms/shimmer/chips/msp430/msp430hardware.h"
static volatile uint8_t U0CTLnr __asm ("0x0070");
static volatile uint8_t I2CTCTLnr __asm ("0x0071");
static volatile uint8_t I2CDCTLnr __asm ("0x0072");
#line 375
static inline void brief_pause(unsigned int n);
#line 406
typedef uint8_t mcu_power_t  ;
static inline mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)  ;


enum __nesc_unnamed4249 {
  MSP430_POWER_ACTIVE = 0, 
  MSP430_POWER_LPM0 = 1, 
  MSP430_POWER_LPM1 = 2, 
  MSP430_POWER_LPM2 = 3, 
  MSP430_POWER_LPM3 = 4, 
  MSP430_POWER_LPM4 = 5
};

static inline void __nesc_disable_interrupt(void )  ;





static inline void __nesc_enable_interrupt(void )  ;




typedef bool __nesc_atomic_t;
__nesc_atomic_t __nesc_atomic_start(void );
void __nesc_atomic_end(__nesc_atomic_t reenable_interrupts);






__nesc_atomic_t __nesc_atomic_start(void )   ;







void __nesc_atomic_end(__nesc_atomic_t reenable_interrupts)   ;
#line 461
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_float;typedef float __nesc_nxbase_nx_float  ;
#line 476
enum __nesc_unnamed4250 {
  MSP430_PORT_RESISTOR_INVALID, 
  MSP430_PORT_RESISTOR_OFF, 
  MSP430_PORT_RESISTOR_PULLDOWN, 
  MSP430_PORT_RESISTOR_PULLUP
};
# 50 "../../../tos/platforms/shimmer2r/hardware.h"
static inline void TOSH_SET_RED_LED_PIN()  ;
#line 50
static inline void TOSH_MAKE_RED_LED_OUTPUT()  ;
#line 50
static inline void TOSH_SEL_RED_LED_IOFUNC()  ;
static inline void TOSH_SET_YELLOW_LED_PIN()  ;
#line 51
static inline void TOSH_MAKE_YELLOW_LED_OUTPUT()  ;
#line 51
static inline void TOSH_SEL_YELLOW_LED_IOFUNC()  ;
static inline void TOSH_SET_GREEN_LED_PIN()  ;
#line 52
static inline void TOSH_MAKE_GREEN_LED_OUTPUT()  ;
#line 52
static inline void TOSH_SEL_GREEN_LED_IOFUNC()  ;


static inline void TOSH_MAKE_RADIO_FIFO_INPUT()  ;
#line 55
static inline void TOSH_SEL_RADIO_FIFO_IOFUNC()  ;
static inline void TOSH_MAKE_RADIO_FIFOP_INPUT()  ;
#line 56
static inline void TOSH_SEL_RADIO_FIFOP_IOFUNC()  ;
static inline void TOSH_MAKE_RADIO_CCA_INPUT()  ;
#line 57
static inline void TOSH_SEL_RADIO_CCA_IOFUNC()  ;


static inline void TOSH_CLR_RADIO_VREF_PIN()  ;
#line 60
static inline void TOSH_MAKE_RADIO_VREF_OUTPUT()  ;
#line 60
static inline void TOSH_SEL_RADIO_VREF_IOFUNC()  ;

static inline void TOSH_MAKE_RADIO_SFD_INPUT()  ;
#line 62
static inline void TOSH_SEL_RADIO_SFD_IOFUNC()  ;


static inline void TOSH_SET_RADIO_CSN_PIN()  ;
#line 65
static inline void TOSH_MAKE_RADIO_CSN_OUTPUT()  ;
#line 65
static inline void TOSH_SEL_RADIO_CSN_IOFUNC()  ;
static inline void TOSH_CLR_RADIO_RESET_PIN()  ;
#line 66
static inline void TOSH_MAKE_RADIO_RESET_OUTPUT()  ;
#line 66
static inline void TOSH_SEL_RADIO_RESET_IOFUNC()  ;









static inline void TOSH_MAKE_BT_PIO_INPUT()  ;
#line 76
static inline void TOSH_SEL_BT_PIO_IOFUNC()  ;
static inline void TOSH_MAKE_BT_RTS_INPUT()  ;
#line 77
static inline void TOSH_SEL_BT_RTS_IOFUNC()  ;
static inline void TOSH_SET_BT_CTS_PIN()  ;
#line 78
static inline void TOSH_CLR_BT_CTS_PIN()  ;
#line 78
static inline void TOSH_MAKE_BT_CTS_OUTPUT()  ;
#line 78
static inline void TOSH_SEL_BT_CTS_IOFUNC()  ;
static inline void TOSH_MAKE_BT_TXD_OUTPUT()  ;
#line 79
static inline void TOSH_SEL_BT_TXD_IOFUNC()  ;
static inline void TOSH_MAKE_BT_RXD_INPUT()  ;
#line 80
static inline void TOSH_SEL_BT_RXD_MODFUNC()  ;
#line 80
static inline void TOSH_SEL_BT_RXD_IOFUNC()  ;
static inline void TOSH_SET_BT_RESET_PIN()  ;
#line 81
static inline void TOSH_CLR_BT_RESET_PIN()  ;
#line 81
static inline void TOSH_MAKE_BT_RESET_OUTPUT()  ;
#line 81
static inline void TOSH_SEL_BT_RESET_IOFUNC()  ;


static inline void TOSH_SET_PROG_OUT_PIN()  ;
#line 84
static inline void TOSH_MAKE_PROG_OUT_OUTPUT()  ;
#line 84
static inline void TOSH_SEL_PROG_OUT_IOFUNC()  ;
static inline void TOSH_MAKE_PROG_IN_OUTPUT()  ;
#line 85
static inline void TOSH_SEL_PROG_IN_IOFUNC()  ;


static inline void TOSH_SET_SD_CS_N_PIN()  ;
#line 88
static inline void TOSH_CLR_SD_CS_N_PIN()  ;
#line 88
static inline void TOSH_MAKE_SD_CS_N_OUTPUT()  ;
#line 88
static inline void TOSH_SEL_SD_CS_N_IOFUNC()  ;

static inline void TOSH_MAKE_TILT_INPUT()  ;
#line 90
static inline void TOSH_SEL_TILT_IOFUNC()  ;


static inline void TOSH_MAKE_ADC_0_OUTPUT()  ;
#line 93
static inline void TOSH_MAKE_ADC_0_INPUT()  ;
#line 93
static inline void TOSH_SEL_ADC_0_MODFUNC()  ;
#line 93
static inline void TOSH_SEL_ADC_0_IOFUNC()  ;
static inline void TOSH_MAKE_ADC_1_OUTPUT()  ;
#line 94
static inline void TOSH_SEL_ADC_1_IOFUNC()  ;
static inline void TOSH_MAKE_ADC_2_OUTPUT()  ;
#line 95
static inline void TOSH_SEL_ADC_2_IOFUNC()  ;
static inline void TOSH_MAKE_ADC_3_INPUT()  ;
#line 96
static inline void TOSH_SEL_ADC_3_MODFUNC()  ;
static inline void TOSH_MAKE_ADC_4_INPUT()  ;
#line 97
static inline void TOSH_SEL_ADC_4_MODFUNC()  ;
static inline void TOSH_MAKE_ADC_5_INPUT()  ;
#line 98
static inline void TOSH_SEL_ADC_5_MODFUNC()  ;
static inline void TOSH_MAKE_ADC_6_OUTPUT()  ;
#line 99
static inline void TOSH_SEL_ADC_6_IOFUNC()  ;
static inline void TOSH_MAKE_ADC_7_OUTPUT()  ;
#line 100
static inline void TOSH_MAKE_ADC_7_INPUT()  ;
#line 100
static inline void TOSH_SEL_ADC_7_MODFUNC()  ;
#line 100
static inline void TOSH_SEL_ADC_7_IOFUNC()  ;

static inline void TOSH_MAKE_ADC_ACCELZ_INPUT()  ;
#line 102
static inline void TOSH_SEL_ADC_ACCELZ_MODFUNC()  ;
#line 102
static inline void TOSH_SEL_ADC_ACCELZ_IOFUNC()  ;
static inline void TOSH_MAKE_ADC_ACCELY_INPUT()  ;
#line 103
static inline void TOSH_SEL_ADC_ACCELY_MODFUNC()  ;
#line 103
static inline void TOSH_SEL_ADC_ACCELY_IOFUNC()  ;
static inline void TOSH_MAKE_ADC_ACCELX_INPUT()  ;
#line 104
static inline void TOSH_SEL_ADC_ACCELX_MODFUNC()  ;
#line 104
static inline void TOSH_SEL_ADC_ACCELX_IOFUNC()  ;








static inline void TOSH_SET_SW_SD_PWR_N_PIN()  ;
#line 113
static inline void TOSH_MAKE_SW_SD_PWR_N_OUTPUT()  ;
#line 113
static inline void TOSH_SEL_SW_SD_PWR_N_IOFUNC()  ;
static inline void TOSH_SET_SW_BT_PWR_N_PIN()  ;
#line 114
static inline void TOSH_CLR_SW_BT_PWR_N_PIN()  ;
#line 114
static inline void TOSH_MAKE_SW_BT_PWR_N_OUTPUT()  ;
#line 114
static inline void TOSH_SEL_SW_BT_PWR_N_IOFUNC()  ;


static inline void TOSH_CLR_SER0_RTS_PIN()  ;
#line 117
static inline void TOSH_MAKE_SER0_RTS_OUTPUT()  ;
#line 117
static inline void TOSH_SEL_SER0_RTS_IOFUNC()  ;
static inline void TOSH_MAKE_SER0_CTS_OUTPUT()  ;
#line 118
static inline void TOSH_SEL_SER0_CTS_IOFUNC()  ;




static inline void TOSH_MAKE_UTXD0_OUTPUT()  ;
#line 123
static inline void TOSH_SEL_UTXD0_IOFUNC()  ;
static inline void TOSH_SET_URXD0_PIN()  ;
#line 124
static inline void TOSH_MAKE_URXD0_OUTPUT()  ;
#line 124
static inline void TOSH_SEL_URXD0_IOFUNC()  ;


static inline void TOSH_SET_SD_DI_PIN()  ;
#line 127
static inline void TOSH_CLR_SD_DI_PIN()  ;
#line 127
static inline void TOSH_MAKE_SD_DI_OUTPUT()  ;
#line 127
static inline void TOSH_SEL_SD_DI_IOFUNC()  ;
static inline void TOSH_MAKE_SD_DO_INPUT()  ;
#line 128
static inline void TOSH_SEL_SD_DO_IOFUNC()  ;
static inline void TOSH_SET_SD_CLK_PIN()  ;
#line 129
static inline void TOSH_CLR_SD_CLK_PIN()  ;
#line 129
static inline void TOSH_MAKE_SD_CLK_OUTPUT()  ;
#line 129
static inline void TOSH_SEL_SD_CLK_IOFUNC()  ;


static inline void TOSH_SET_SIMO1_PIN()  ;
#line 132
static inline void TOSH_MAKE_SIMO1_OUTPUT()  ;
#line 132
static inline void TOSH_SEL_SIMO1_IOFUNC()  ;
static inline void TOSH_MAKE_SOMI1_INPUT()  ;
#line 133
static inline void TOSH_SEL_SOMI1_IOFUNC()  ;
static inline void TOSH_SET_UCLK1_PIN()  ;
#line 134
static inline void TOSH_MAKE_UCLK1_OUTPUT()  ;
#line 134
static inline void TOSH_SEL_UCLK1_IOFUNC()  ;
static inline void TOSH_MAKE_UTXD1_OUTPUT()  ;
#line 135
static inline void TOSH_SEL_UTXD1_IOFUNC()  ;
static inline void TOSH_MAKE_URXD1_OUTPUT()  ;
#line 136
static inline void TOSH_SEL_URXD1_IOFUNC()  ;

static inline void TOSH_CLR_GIO0_PIN()  ;
#line 138
static inline void TOSH_MAKE_GIO0_OUTPUT()  ;
#line 138
static inline void TOSH_SEL_GIO0_IOFUNC()  ;
static inline void TOSH_MAKE_GIO1_OUTPUT()  ;
#line 139
static inline void TOSH_SEL_GIO1_IOFUNC()  ;



static inline void TOSH_SET_ONEWIRE_PIN()  ;
#line 143
static inline void TOSH_MAKE_ONEWIRE_OUTPUT()  ;
#line 143
static inline void TOSH_SEL_ONEWIRE_IOFUNC()  ;


static inline void TOSH_MAKE_ROSC_INPUT()  ;
#line 146
static inline void TOSH_SEL_ROSC_IOFUNC()  ;


static inline void TOSH_SET_DOCK_N_PIN()  ;
#line 149
static inline void TOSH_MAKE_DOCK_N_OUTPUT()  ;
#line 149
static inline void TOSH_MAKE_DOCK_N_INPUT()  ;
#line 149
static inline void TOSH_SEL_DOCK_N_IOFUNC()  ;


static inline void TOSH_SET_PWRMUX_SEL_PIN()  ;
#line 152
static inline void TOSH_CLR_PWRMUX_SEL_PIN()  ;
#line 152
static inline void TOSH_MAKE_PWRMUX_SEL_OUTPUT()  ;
#line 152
static inline void TOSH_SEL_PWRMUX_SEL_IOFUNC()  ;
static inline void TOSH_SET_ACCEL_SEL0_PIN()  ;
#line 153
static inline void TOSH_CLR_ACCEL_SEL0_PIN()  ;
#line 153
static inline void TOSH_MAKE_ACCEL_SEL0_OUTPUT()  ;
#line 153
static inline void TOSH_SEL_ACCEL_SEL0_IOFUNC()  ;
static inline void TOSH_SET_ACCEL_SLEEP_N_PIN()  ;
#line 154
static inline void TOSH_CLR_ACCEL_SLEEP_N_PIN()  ;
#line 154
static inline void TOSH_MAKE_ACCEL_SLEEP_N_OUTPUT()  ;
#line 154
static inline void TOSH_SEL_ACCEL_SLEEP_N_IOFUNC()  ;
# 40 "/usr/lib/gcc/msp430/4.6.3/include/stdarg.h" 3
typedef __builtin_va_list __gnuc_va_list;
#line 102
typedef __gnuc_va_list va_list;
# 51 "/usr/lib/gcc/msp430/4.6.3/../../../../msp430/include/stdio.h" 3
int __attribute((format(printf, 2, 3))) sprintf(char *buf, const char *fmt, ...);







int putchar(int c);
# 39 "../../../tos/chips/cc2420/CC2420.h"
typedef uint8_t cc2420_status_t;
#line 93
#line 87
typedef nx_struct security_header_t {
  unsigned char __nesc_filler0[1];


  nx_uint32_t frameCounter;
  nx_uint8_t keyID[1];
} __attribute__((packed)) security_header_t;
#line 113
#line 95
typedef nx_struct cc2420_header_t {
  nxle_uint8_t length;
  nxle_uint16_t fcf;
  nxle_uint8_t dsn;
  nxle_uint16_t destpan;
  nxle_uint16_t dest;
  nxle_uint16_t src;







  nxle_uint8_t network;


  nxle_uint8_t type;
} __attribute__((packed)) cc2420_header_t;





#line 118
typedef nx_struct cc2420_footer_t {
} __attribute__((packed)) cc2420_footer_t;
#line 143
#line 128
typedef nx_struct cc2420_metadata_t {
  nx_uint8_t rssi;
  nx_uint8_t lqi;
  nx_uint8_t tx_power;
  nx_bool crc;
  nx_bool ack;
  nx_bool timesync;
  nx_uint32_t timestamp;
  nx_uint16_t rxInterval;
} __attribute__((packed)) 





cc2420_metadata_t;





#line 146
typedef nx_struct cc2420_packet_t {
  cc2420_header_t packet;
  nx_uint8_t data[];
} __attribute__((packed)) cc2420_packet_t;
#line 179
enum __nesc_unnamed4251 {

  MAC_HEADER_SIZE = sizeof(cc2420_header_t ) - 1, 

  MAC_FOOTER_SIZE = sizeof(uint16_t ), 

  MAC_PACKET_SIZE = MAC_HEADER_SIZE + 28 + MAC_FOOTER_SIZE, 

  CC2420_SIZE = MAC_HEADER_SIZE + MAC_FOOTER_SIZE
};

enum cc2420_enums {
  CC2420_TIME_ACK_TURNAROUND = 7, 
  CC2420_TIME_VREN = 20, 
  CC2420_TIME_SYMBOL = 2, 
  CC2420_BACKOFF_PERIOD = 20 / CC2420_TIME_SYMBOL, 
  CC2420_MIN_BACKOFF = 20 / CC2420_TIME_SYMBOL, 
  CC2420_ACK_WAIT_DELAY = 256
};

enum cc2420_status_enums {
  CC2420_STATUS_RSSI_VALID = 1 << 1, 
  CC2420_STATUS_LOCK = 1 << 2, 
  CC2420_STATUS_TX_ACTIVE = 1 << 3, 
  CC2420_STATUS_ENC_BUSY = 1 << 4, 
  CC2420_STATUS_TX_UNDERFLOW = 1 << 5, 
  CC2420_STATUS_XOSC16M_STABLE = 1 << 6
};

enum cc2420_config_reg_enums {
  CC2420_SNOP = 0x00, 
  CC2420_SXOSCON = 0x01, 
  CC2420_STXCAL = 0x02, 
  CC2420_SRXON = 0x03, 
  CC2420_STXON = 0x04, 
  CC2420_STXONCCA = 0x05, 
  CC2420_SRFOFF = 0x06, 
  CC2420_SXOSCOFF = 0x07, 
  CC2420_SFLUSHRX = 0x08, 
  CC2420_SFLUSHTX = 0x09, 
  CC2420_SACK = 0x0a, 
  CC2420_SACKPEND = 0x0b, 
  CC2420_SRXDEC = 0x0c, 
  CC2420_STXENC = 0x0d, 
  CC2420_SAES = 0x0e, 
  CC2420_MAIN = 0x10, 
  CC2420_MDMCTRL0 = 0x11, 
  CC2420_MDMCTRL1 = 0x12, 
  CC2420_RSSI = 0x13, 
  CC2420_SYNCWORD = 0x14, 
  CC2420_TXCTRL = 0x15, 
  CC2420_RXCTRL0 = 0x16, 
  CC2420_RXCTRL1 = 0x17, 
  CC2420_FSCTRL = 0x18, 
  CC2420_SECCTRL0 = 0x19, 
  CC2420_SECCTRL1 = 0x1a, 
  CC2420_BATTMON = 0x1b, 
  CC2420_IOCFG0 = 0x1c, 
  CC2420_IOCFG1 = 0x1d, 
  CC2420_MANFIDL = 0x1e, 
  CC2420_MANFIDH = 0x1f, 
  CC2420_FSMTC = 0x20, 
  CC2420_MANAND = 0x21, 
  CC2420_MANOR = 0x22, 
  CC2420_AGCCTRL = 0x23, 
  CC2420_AGCTST0 = 0x24, 
  CC2420_AGCTST1 = 0x25, 
  CC2420_AGCTST2 = 0x26, 
  CC2420_FSTST0 = 0x27, 
  CC2420_FSTST1 = 0x28, 
  CC2420_FSTST2 = 0x29, 
  CC2420_FSTST3 = 0x2a, 
  CC2420_RXBPFTST = 0x2b, 
  CC2420_FSMSTATE = 0x2c, 
  CC2420_ADCTST = 0x2d, 
  CC2420_DACTST = 0x2e, 
  CC2420_TOPTST = 0x2f, 
  CC2420_TXFIFO = 0x3e, 
  CC2420_RXFIFO = 0x3f
};

enum cc2420_ram_addr_enums {
  CC2420_RAM_TXFIFO = 0x000, 
  CC2420_RAM_RXFIFO = 0x080, 
  CC2420_RAM_KEY0 = 0x100, 
  CC2420_RAM_RXNONCE = 0x110, 
  CC2420_RAM_SABUF = 0x120, 
  CC2420_RAM_KEY1 = 0x130, 
  CC2420_RAM_TXNONCE = 0x140, 
  CC2420_RAM_CBCSTATE = 0x150, 
  CC2420_RAM_IEEEADR = 0x160, 
  CC2420_RAM_PANID = 0x168, 
  CC2420_RAM_SHORTADR = 0x16a
};

enum cc2420_nonce_enums {
  CC2420_NONCE_BLOCK_COUNTER = 0, 
  CC2420_NONCE_KEY_SEQ_COUNTER = 2, 
  CC2420_NONCE_FRAME_COUNTER = 3, 
  CC2420_NONCE_SOURCE_ADDRESS = 7, 
  CC2420_NONCE_FLAGS = 15
};

enum cc2420_main_enums {
  CC2420_MAIN_RESETn = 15, 
  CC2420_MAIN_ENC_RESETn = 14, 
  CC2420_MAIN_DEMOD_RESETn = 13, 
  CC2420_MAIN_MOD_RESETn = 12, 
  CC2420_MAIN_FS_RESETn = 11, 
  CC2420_MAIN_XOSC16M_BYPASS = 0
};

enum cc2420_mdmctrl0_enums {
  CC2420_MDMCTRL0_RESERVED_FRAME_MODE = 13, 
  CC2420_MDMCTRL0_PAN_COORDINATOR = 12, 
  CC2420_MDMCTRL0_ADR_DECODE = 11, 
  CC2420_MDMCTRL0_CCA_HYST = 8, 
  CC2420_MDMCTRL0_CCA_MOD = 6, 
  CC2420_MDMCTRL0_AUTOCRC = 5, 
  CC2420_MDMCTRL0_AUTOACK = 4, 
  CC2420_MDMCTRL0_PREAMBLE_LENGTH = 0
};

enum cc2420_mdmctrl1_enums {
  CC2420_MDMCTRL1_CORR_THR = 6, 
  CC2420_MDMCTRL1_DEMOD_AVG_MODE = 5, 
  CC2420_MDMCTRL1_MODULATION_MODE = 4, 
  CC2420_MDMCTRL1_TX_MODE = 2, 
  CC2420_MDMCTRL1_RX_MODE = 0
};

enum cc2420_rssi_enums {
  CC2420_RSSI_CCA_THR = 8, 
  CC2420_RSSI_RSSI_VAL = 0
};

enum cc2420_syncword_enums {
  CC2420_SYNCWORD_SYNCWORD = 0
};

enum cc2420_txctrl_enums {
  CC2420_TXCTRL_TXMIXBUF_CUR = 14, 
  CC2420_TXCTRL_TX_TURNAROUND = 13, 
  CC2420_TXCTRL_TXMIX_CAP_ARRAY = 11, 
  CC2420_TXCTRL_TXMIX_CURRENT = 9, 
  CC2420_TXCTRL_PA_CURRENT = 6, 
  CC2420_TXCTRL_RESERVED = 5, 
  CC2420_TXCTRL_PA_LEVEL = 0
};

enum cc2420_rxctrl0_enums {
  CC2420_RXCTRL0_RXMIXBUF_CUR = 12, 
  CC2420_RXCTRL0_HIGH_LNA_GAIN = 10, 
  CC2420_RXCTRL0_MED_LNA_GAIN = 8, 
  CC2420_RXCTRL0_LOW_LNA_GAIN = 6, 
  CC2420_RXCTRL0_HIGH_LNA_CURRENT = 4, 
  CC2420_RXCTRL0_MED_LNA_CURRENT = 2, 
  CC2420_RXCTRL0_LOW_LNA_CURRENT = 0
};

enum cc2420_rxctrl1_enums {
  CC2420_RXCTRL1_RXBPF_LOCUR = 13, 
  CC2420_RXCTRL1_RXBPF_MIDCUR = 12, 
  CC2420_RXCTRL1_LOW_LOWGAIN = 11, 
  CC2420_RXCTRL1_MED_LOWGAIN = 10, 
  CC2420_RXCTRL1_HIGH_HGM = 9, 
  CC2420_RXCTRL1_MED_HGM = 8, 
  CC2420_RXCTRL1_LNA_CAP_ARRAY = 6, 
  CC2420_RXCTRL1_RXMIX_TAIL = 4, 
  CC2420_RXCTRL1_RXMIX_VCM = 2, 
  CC2420_RXCTRL1_RXMIX_CURRENT = 0
};

enum cc2420_rsctrl_enums {
  CC2420_FSCTRL_LOCK_THR = 14, 
  CC2420_FSCTRL_CAL_DONE = 13, 
  CC2420_FSCTRL_CAL_RUNNING = 12, 
  CC2420_FSCTRL_LOCK_LENGTH = 11, 
  CC2420_FSCTRL_LOCK_STATUS = 10, 
  CC2420_FSCTRL_FREQ = 0
};

enum cc2420_secctrl0_enums {
  CC2420_SECCTRL0_RXFIFO_PROTECTION = 9, 
  CC2420_SECCTRL0_SEC_CBC_HEAD = 8, 
  CC2420_SECCTRL0_SEC_SAKEYSEL = 7, 
  CC2420_SECCTRL0_SEC_TXKEYSEL = 6, 
  CC2420_SECCTRL0_SEC_RXKEYSEL = 5, 
  CC2420_SECCTRL0_SEC_M = 2, 
  CC2420_SECCTRL0_SEC_MODE = 0
};

enum cc2420_secctrl1_enums {
  CC2420_SECCTRL1_SEC_TXL = 8, 
  CC2420_SECCTRL1_SEC_RXL = 0
};

enum cc2420_battmon_enums {
  CC2420_BATTMON_BATT_OK = 6, 
  CC2420_BATTMON_BATTMON_EN = 5, 
  CC2420_BATTMON_BATTMON_VOLTAGE = 0
};

enum cc2420_iocfg0_enums {
  CC2420_IOCFG0_BCN_ACCEPT = 11, 
  CC2420_IOCFG0_FIFO_POLARITY = 10, 
  CC2420_IOCFG0_FIFOP_POLARITY = 9, 
  CC2420_IOCFG0_SFD_POLARITY = 8, 
  CC2420_IOCFG0_CCA_POLARITY = 7, 
  CC2420_IOCFG0_FIFOP_THR = 0
};

enum cc2420_iocfg1_enums {
  CC2420_IOCFG1_HSSD_SRC = 10, 
  CC2420_IOCFG1_SFDMUX = 5, 
  CC2420_IOCFG1_CCAMUX = 0
};

enum cc2420_manfidl_enums {
  CC2420_MANFIDL_PARTNUM = 12, 
  CC2420_MANFIDL_MANFID = 0
};

enum cc2420_manfidh_enums {
  CC2420_MANFIDH_VERSION = 12, 
  CC2420_MANFIDH_PARTNUM = 0
};

enum cc2420_fsmtc_enums {
  CC2420_FSMTC_TC_RXCHAIN2RX = 13, 
  CC2420_FSMTC_TC_SWITCH2TX = 10, 
  CC2420_FSMTC_TC_PAON2TX = 6, 
  CC2420_FSMTC_TC_TXEND2SWITCH = 3, 
  CC2420_FSMTC_TC_TXEND2PAOFF = 0
};

enum cc2420_sfdmux_enums {
  CC2420_SFDMUX_SFD = 0, 
  CC2420_SFDMUX_XOSC16M_STABLE = 24
};

enum cc2420_security_enums {
  CC2420_NO_SEC = 0, 
  CC2420_CBC_MAC = 1, 
  CC2420_CTR = 2, 
  CC2420_CCM = 3, 
  NO_SEC = 0, 
  CBC_MAC_4 = 1, 
  CBC_MAC_8 = 2, 
  CBC_MAC_16 = 3, 
  CTR = 4, 
  CCM_4 = 5, 
  CCM_8 = 6, 
  CCM_16 = 7
};


enum __nesc_unnamed4252 {

  CC2420_INVALID_TIMESTAMP = 0x80000000L
};
# 6 "../../../tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4253 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4254 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 83 "../../../tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4255 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4256 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4257 {
  SERIAL_PROTO_ACK = 67, 
  SERIAL_PROTO_PACKET_ACK = 68, 
  SERIAL_PROTO_PACKET_NOACK = 69, 
  SERIAL_PROTO_PACKET_UNKNOWN = 255
};
#line 121
#line 109
typedef struct radio_stats {
  uint8_t version;
  uint8_t flags;
  uint8_t reserved;
  uint8_t platform;
  uint16_t MTU;
  uint16_t radio_crc_fail;
  uint16_t radio_queue_drops;
  uint16_t serial_crc_fail;
  uint16_t serial_tx_fail;
  uint16_t serial_short_packets;
  uint16_t serial_proto_drops;
} radio_stats_t;







#line 123
typedef nx_struct serial_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) serial_header_t;




#line 131
typedef nx_struct serial_packet {
  serial_header_t header;
  nx_uint8_t data[];
} __attribute__((packed)) serial_packet_t;



#line 136
typedef nx_struct serial_metadata {
  nx_uint8_t ack;
} __attribute__((packed)) serial_metadata_t;
# 59 "../../../tos/platforms/shimmer2r/platform_message.h"
#line 56
typedef union message_header {
  cc2420_header_t cc2420;
  serial_header_t serial;
} message_header_t;



#line 61
typedef union TOSRadioFooter {
  cc2420_footer_t cc2420;
} message_footer_t;




#line 65
typedef union TOSRadioMetadata {
  cc2420_metadata_t cc2420;
  serial_metadata_t serial;
} message_metadata_t;
# 19 "../../../tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[28];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 72 "../../../tos/lib/printf/printf.h"
int printfflush();






#line 77
typedef nx_struct printf_msg {
  nx_uint8_t buffer[28];
} __attribute__((packed)) printf_msg_t;

enum __nesc_unnamed4258 {
  AM_PRINTF_MSG = 100
};
# 39 "../../../tos/chips/msp430/timer/Msp430Timer.h"
enum __nesc_unnamed4259 {
  MSP430TIMER_CM_NONE = 0, 
  MSP430TIMER_CM_RISING = 1, 
  MSP430TIMER_CM_FALLING = 2, 
  MSP430TIMER_CM_BOTH = 3, 

  MSP430TIMER_STOP_MODE = 0, 
  MSP430TIMER_UP_MODE = 1, 
  MSP430TIMER_CONTINUOUS_MODE = 2, 
  MSP430TIMER_UPDOWN_MODE = 3, 

  MSP430TIMER_TACLK = 0, 
  MSP430TIMER_TBCLK = 0, 
  MSP430TIMER_ACLK = 1, 
  MSP430TIMER_SMCLK = 2, 
  MSP430TIMER_INCLK = 3, 

  MSP430TIMER_CLOCKDIV_1 = 0, 
  MSP430TIMER_CLOCKDIV_2 = 1, 
  MSP430TIMER_CLOCKDIV_4 = 2, 
  MSP430TIMER_CLOCKDIV_8 = 3
};
#line 75
#line 62
typedef struct __nesc_unnamed4260 {

  int ccifg : 1;
  int cov : 1;
  int out : 1;
  int cci : 1;
  int ccie : 1;
  int outmod : 3;
  int cap : 1;
  int clld : 2;
  int scs : 1;
  int ccis : 2;
  int cm : 2;
} msp430_compare_control_t;
#line 87
#line 77
typedef struct __nesc_unnamed4261 {

  int taifg : 1;
  int taie : 1;
  int taclr : 1;
  int _unused0 : 1;
  int mc : 2;
  int id : 2;
  int tassel : 2;
  int _unused1 : 6;
} msp430_timer_a_control_t;
#line 102
#line 89
typedef struct __nesc_unnamed4262 {

  int tbifg : 1;
  int tbie : 1;
  int tbclr : 1;
  int _unused0 : 1;
  int mc : 2;
  int id : 2;
  int tbssel : 2;
  int _unused1 : 1;
  int cntl : 2;
  int tbclgrp : 2;
  int _unused2 : 1;
} msp430_timer_b_control_t;
# 43 "../../../tos/types/Leds.h"
enum __nesc_unnamed4263 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 91 "../../../tos/system/crc.h"
static uint16_t crcByte(uint16_t crc, uint8_t b);
# 56 "../../../tos/chips/msp430/usart/msp430usart.h"
#line 48
typedef enum __nesc_unnamed4264 {

  USART_NONE = 0, 
  USART_UART = 1, 
  USART_UART_TX = 2, 
  USART_UART_RX = 3, 
  USART_SPI = 4, 
  USART_I2C = 5
} msp430_usartmode_t;










#line 58
typedef struct __nesc_unnamed4265 {
  unsigned int swrst : 1;
  unsigned int mm : 1;
  unsigned int sync : 1;
  unsigned int listen : 1;
  unsigned int clen : 1;
  unsigned int spb : 1;
  unsigned int pev : 1;
  unsigned int pena : 1;
} __attribute((packed))  msp430_uctl_t;









#line 69
typedef struct __nesc_unnamed4266 {
  unsigned int txept : 1;
  unsigned int stc : 1;
  unsigned int txwake : 1;
  unsigned int urxse : 1;
  unsigned int ssel : 2;
  unsigned int ckpl : 1;
  unsigned int ckph : 1;
} __attribute((packed))  msp430_utctl_t;










#line 79
typedef struct __nesc_unnamed4267 {
  unsigned int rxerr : 1;
  unsigned int rxwake : 1;
  unsigned int urxwie : 1;
  unsigned int urxeie : 1;
  unsigned int brk : 1;
  unsigned int oe : 1;
  unsigned int pe : 1;
  unsigned int fe : 1;
} __attribute((packed))  msp430_urctl_t;
#line 116
#line 99
typedef struct __nesc_unnamed4268 {
  unsigned int ubr : 16;

  unsigned int  : 1;
  unsigned int mm : 1;
  unsigned int  : 1;
  unsigned int listen : 1;
  unsigned int clen : 1;
  unsigned int  : 3;

  unsigned int  : 1;
  unsigned int stc : 1;
  unsigned int  : 2;
  unsigned int ssel : 2;
  unsigned int ckpl : 1;
  unsigned int ckph : 1;
  unsigned int  : 0;
} msp430_spi_config_t;





#line 118
typedef struct __nesc_unnamed4269 {
  uint16_t ubr;
  uint8_t uctl;
  uint8_t utctl;
} msp430_spi_registers_t;




#line 124
typedef union __nesc_unnamed4270 {
  msp430_spi_config_t spiConfig;
  msp430_spi_registers_t spiRegisters;
} msp430_spi_union_config_t;
#line 169
#line 150
typedef enum __nesc_unnamed4271 {

  UBR_32KHZ_1200 = 0x001B, UMCTL_32KHZ_1200 = 0x94, 
  UBR_32KHZ_1800 = 0x0012, UMCTL_32KHZ_1800 = 0x84, 
  UBR_32KHZ_2400 = 0x000D, UMCTL_32KHZ_2400 = 0x6D, 
  UBR_32KHZ_4800 = 0x0006, UMCTL_32KHZ_4800 = 0x77, 
  UBR_32KHZ_9600 = 0x0003, UMCTL_32KHZ_9600 = 0x29, 

  UBR_1MHZ_1200 = 0x0369, UMCTL_1MHZ_1200 = 0x7B, 
  UBR_1MHZ_1800 = 0x0246, UMCTL_1MHZ_1800 = 0x55, 
  UBR_1MHZ_2400 = 0x01B4, UMCTL_1MHZ_2400 = 0xDF, 
  UBR_1MHZ_4800 = 0x00DA, UMCTL_1MHZ_4800 = 0xAA, 
  UBR_1MHZ_9600 = 0x006D, UMCTL_1MHZ_9600 = 0x44, 
  UBR_1MHZ_19200 = 0x0036, UMCTL_1MHZ_19200 = 0xB5, 
  UBR_1MHZ_38400 = 0x001B, UMCTL_1MHZ_38400 = 0x94, 
  UBR_1MHZ_57600 = 0x0012, UMCTL_1MHZ_57600 = 0x84, 
  UBR_1MHZ_76800 = 0x000D, UMCTL_1MHZ_76800 = 0x6D, 
  UBR_1MHZ_115200 = 0x0009, UMCTL_1MHZ_115200 = 0x10, 
  UBR_1MHZ_230400 = 0x0004, UMCTL_1MHZ_230400 = 0x55
} msp430_uart_rate_t;
#line 200
#line 171
typedef struct __nesc_unnamed4272 {
  unsigned int ubr : 16;

  unsigned int umctl : 8;

  unsigned int  : 1;
  unsigned int mm : 1;
  unsigned int  : 1;
  unsigned int listen : 1;
  unsigned int clen : 1;
  unsigned int spb : 1;
  unsigned int pev : 1;
  unsigned int pena : 1;
  unsigned int  : 0;

  unsigned int  : 3;
  unsigned int urxse : 1;
  unsigned int ssel : 2;
  unsigned int ckpl : 1;
  unsigned int  : 1;

  unsigned int  : 2;
  unsigned int urxwie : 1;
  unsigned int urxeie : 1;
  unsigned int  : 4;
  unsigned int  : 0;

  unsigned int utxe : 1;
  unsigned int urxe : 1;
} msp430_uart_config_t;








#line 202
typedef struct __nesc_unnamed4273 {
  uint16_t ubr;
  uint8_t umctl;
  uint8_t uctl;
  uint8_t utctl;
  uint8_t urctl;
  uint8_t ume;
} msp430_uart_registers_t;




#line 211
typedef union __nesc_unnamed4274 {
  msp430_uart_config_t uartConfig;
  msp430_uart_registers_t uartRegisters;
} msp430_uart_union_config_t;

msp430_uart_union_config_t msp430_uart_default_config = { 
{ 
.utxe = 1, 
.urxe = 1, 
.ubr = UBR_1MHZ_57600, 
.umctl = UMCTL_1MHZ_57600, 
.ssel = 0x02, 
.pena = 0, 
.pev = 0, 
.spb = 0, 
.clen = 1, 
.listen = 0, 
.mm = 0, 
.ckpl = 0, 
.urxse = 0, 
.urxeie = 1, 
.urxwie = 0, 
.utxe = 1, 
.urxe = 1 } };
#line 248
#line 240
typedef struct __nesc_unnamed4275 {
  unsigned int i2cstt : 1;
  unsigned int i2cstp : 1;
  unsigned int i2cstb : 1;
  unsigned int i2cctrx : 1;
  unsigned int i2cssel : 2;
  unsigned int i2ccrm : 1;
  unsigned int i2cword : 1;
} __attribute((packed))  msp430_i2ctctl_t;
#line 276
#line 253
typedef struct __nesc_unnamed4276 {
  unsigned int  : 1;
  unsigned int mst : 1;
  unsigned int  : 1;
  unsigned int listen : 1;
  unsigned int xa : 1;
  unsigned int  : 1;
  unsigned int txdmaen : 1;
  unsigned int rxdmaen : 1;

  unsigned int  : 4;
  unsigned int i2cssel : 2;
  unsigned int i2crm : 1;
  unsigned int i2cword : 1;

  unsigned int i2cpsc : 8;

  unsigned int i2csclh : 8;

  unsigned int i2cscll : 8;

  unsigned int i2coa : 10;
  unsigned int  : 6;
} msp430_i2c_config_t;








#line 278
typedef struct __nesc_unnamed4277 {
  uint8_t uctl;
  uint8_t i2ctctl;
  uint8_t i2cpsc;
  uint8_t i2csclh;
  uint8_t i2cscll;
  uint16_t i2coa;
} msp430_i2c_registers_t;




#line 287
typedef union __nesc_unnamed4278 {
  msp430_i2c_config_t i2cConfig;
  msp430_i2c_registers_t i2cRegisters;
} msp430_i2c_union_config_t;
#line 309
typedef uint8_t uart_speed_t;
typedef uint8_t uart_parity_t;
typedef uint8_t uart_duplex_t;

enum __nesc_unnamed4279 {
  TOS_UART_1200 = 0, 
  TOS_UART_1800 = 1, 
  TOS_UART_2400 = 2, 
  TOS_UART_4800 = 3, 
  TOS_UART_9600 = 4, 
  TOS_UART_19200 = 5, 
  TOS_UART_38400 = 6, 
  TOS_UART_57600 = 7, 
  TOS_UART_76800 = 8, 
  TOS_UART_115200 = 9, 
  TOS_UART_230400 = 10
};

enum __nesc_unnamed4280 {
  TOS_UART_OFF, 
  TOS_UART_RONLY, 
  TOS_UART_TONLY, 
  TOS_UART_DUPLEX
};

enum __nesc_unnamed4281 {
  TOS_UART_PARITY_NONE, 
  TOS_UART_PARITY_EVEN, 
  TOS_UART_PARITY_ODD
};
# 41 "../../../tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4282 {
#line 41
  int notUsed;
} 
#line 41
TSecond;
typedef struct __nesc_unnamed4283 {
#line 42
  int notUsed;
} 
#line 42
TMilli;
typedef struct __nesc_unnamed4284 {
#line 43
  int notUsed;
} 
#line 43
T32khz;
typedef struct __nesc_unnamed4285 {
#line 44
  int notUsed;
} 
#line 44
TMicro;
# 33 "../../../tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
# 37 "../../../tos/platforms/shimmer/chips/mma7260/Mma_Accel.h"
enum MMA7260_RANGE {
  RANGE_1_5G = 0, 
  RANGE_2_0G = 1, 
  RANGE_4_0G = 2, 
  RANGE_6_0G = 3
};
# 6 "../../../tos/platforms/shimmer/chips/bluetooth/RovingNetworks.h"
enum __nesc_unnamed4286 {
  SLAVE_MODE, 
  MASTER_MODE, 
  TRIGGER_MASTER_MODE, 
  AUTO_MASTER_MODE
};

enum __nesc_unnamed4287 {
  NADA, 
  INITIAL, 
  FINAL
};
# 46 "../../../tos/chips/msp430/dma/Msp430Dma.h"
enum __nesc_unnamed4288 {
  DMA_CHANNELS = 3
};

enum __nesc_unnamed4289 {
  DMA_CHANNEL0 = 0, 
  DMA_CHANNEL1 = 1, 
  DMA_CHANNEL2 = 2, 
  DMA_CHANNEL_UNKNOWN = 3
};

enum __nesc_unnamed4290 {
  DMA_CHANNEL_AVAILABLE = 0, 
  DMA_CHANNEL_IN_USE = 1
};



enum __nesc_unnamed4291 {
  DMA0TSEL_SHIFT = 0, 
  DMA1TSEL_SHIFT = 4, 
  DMA2TSEL_SHIFT = 8, 
  DMATSEL_MASK = (uint16_t )0xf, 
  DMA0TSEL_MASK = 0xf, 
  DMA1TSEL_MASK = 0xf0, 
  DMA2TSEL_MASK = 0xf00
};
#line 103
#line 75
typedef enum __nesc_unnamed4292 {
  DMA_TRIGGER_DMAREQ = 0x0, 
  DMA_TRIGGER_TACCR2 = 0x1, 
  DMA_TRIGGER_TBCCR2 = 0x2, 





  DMA_TRIGGER_URXIFG0 = 0x3, 
  DMA_TRIGGER_UTXIFG0 = 0x4, 

  DMA_TRIGGER_DAC12IFG = 0x5, 
  DMA_TRIGGER_ADC12IFGx = 0x6, 
  DMA_TRIGGER_TACCR0 = 0x7, 
  DMA_TRIGGER_TBCCR0 = 0x8, 




  DMA_TRIGGER_URXIFG1 = 0x9, 
  DMA_TRIGGER_UTXIFG1 = 0xa, 

  DMA_TRIGGER_MULT = 0xb, 
  DMA_TRIGGER_DMAxIFG = 0xe, 


  DMA_TRIGGER_DMAE0 = 0xf
} dma_trigger_t;




#line 105
typedef struct dma_channel_trigger_s {
  unsigned int trigger : 4;
  unsigned int reserved : 12;
} __attribute((packed))  dma_channel_trigger_t;



enum __nesc_unnamed4293 {
  DISABLE_NMI = 0, 
  ENABLE_NMI = 1
};

enum __nesc_unnamed4294 {
  NOT_ROUND_ROBIN = 0, 
  ROUND_ROBIN = 1
};

enum __nesc_unnamed4295 {
  NOT_ON_FETCH = 0, 
  ON_FETCH = 1
};






#line 127
typedef struct dma_state_s {
  unsigned int enableNMI : 1;
  unsigned int roundRobin : 1;
  unsigned int onFetch : 1;
  unsigned int reserved : 13;
} __attribute((packed))  dma_state_t;





enum __nesc_unnamed4296 {
  DMADT_SHIFT = 12, 
  DMADT_MASK = 0x7
};








#line 143
typedef enum __nesc_unnamed4297 {
  DMA_SINGLE_TRANSFER = 0x0, 
  DMA_BLOCK_TRANSFER = 0x1, 
  DMA_BURST_BLOCK_TRANSFER = 0x2, 
  DMA_REPEATED_SINGLE_TRANSFER = 0x4, 
  DMA_REPEATED_BLOCK_TRANSFER = 0x5, 
  DMA_REPEATED_BURST_BLOCK_TRANSFER = 0x7
} dma_transfer_mode_t;


enum __nesc_unnamed4298 {
  DMASRCINCR_SHIFT = 8, 
  DMADSTINCR_SHIFT = 10, 
  DMAINCR_MASK = 0x3
};





#line 159
typedef enum __nesc_unnamed4299 {
  DMA_ADDRESS_UNCHANGED = 0x0, 
  DMA_ADDRESS_DECREMENTED = 0x2, 
  DMA_ADDRESS_INCREMENTED = 0x3
} dma_incr_t;




#line 165
typedef enum __nesc_unnamed4300 {
  DMA_WORD = 0x0, 
  DMA_BYTE = 0x1
} dma_byte_t;





#line 171
typedef enum __nesc_unnamed4301 {
  DMA_EDGE_SENSITIVE = 0x0, 
  DMA_LEVEL_SENSITIVE = 0x1
} dma_level_t;
#line 189
#line 176
typedef struct dma_channel_state_s {
  unsigned int request : 1;
  unsigned int abort : 1;
  unsigned int interruptEnable : 1;
  unsigned int interruptFlag : 1;
  unsigned int enable : 1;
  unsigned int level : 1;
  unsigned int srcByte : 1;
  unsigned int dstByte : 1;
  unsigned int srcIncrement : 2;
  unsigned int dstIncrement : 2;
  unsigned int transferMode : 3;
  unsigned int reserved2 : 1;
} __attribute((packed))  dma_channel_state_t;
# 56 "../../../tos/platforms/shimmer/shimmerMessage.h"
struct Message {
  uint8_t data[128];
  uint8_t start;
  uint8_t length;
  struct Message *next;
};
#line 194
static __inline bool msg_cmp_buf(const struct Message *msg, uint8_t offset, const uint8_t *buf, uint8_t len);
#line 219
static __inline void msg_append_uint8(struct Message *msg, uint8_t data);
#line 329
static __inline void msg_clear(struct Message *msg);
# 59 "../../../tos/chips/msp430/adc12/Msp430Adc12.h"
#line 48
typedef struct __nesc_unnamed4302 {

  unsigned int inch : 4;
  unsigned int sref : 3;
  unsigned int ref2_5v : 1;
  unsigned int adc12ssel : 2;
  unsigned int adc12div : 3;
  unsigned int sht : 4;
  unsigned int sampcon_ssel : 2;
  unsigned int sampcon_id : 2;
  unsigned int  : 0;
} msp430adc12_channel_config_t;








#line 61
typedef struct __nesc_unnamed4303 {


  volatile unsigned 
  inch : 4, 
  sref : 3, 
  eos : 1;
} __attribute((packed))  adc12memctl_t;

enum inch_enum {


  INPUT_CHANNEL_A0 = 0, 
  INPUT_CHANNEL_A1 = 1, 
  INPUT_CHANNEL_A2 = 2, 
  INPUT_CHANNEL_A3 = 3, 
  INPUT_CHANNEL_A4 = 4, 
  INPUT_CHANNEL_A5 = 5, 
  INPUT_CHANNEL_A6 = 6, 
  INPUT_CHANNEL_A7 = 7, 
  EXTERNAL_REF_VOLTAGE_CHANNEL = 8, 
  REF_VOLTAGE_NEG_TERMINAL_CHANNEL = 9, 
  TEMPERATURE_DIODE_CHANNEL = 10, 
  SUPPLY_VOLTAGE_HALF_CHANNEL = 11, 
  INPUT_CHANNEL_NONE = 12
};

enum sref_enum {

  REFERENCE_AVcc_AVss = 0, 
  REFERENCE_VREFplus_AVss = 1, 
  REFERENCE_VeREFplus_AVss = 2, 
  REFERENCE_AVcc_VREFnegterm = 4, 
  REFERENCE_VREFplus_VREFnegterm = 5, 
  REFERENCE_VeREFplus_VREFnegterm = 6
};

enum ref2_5v_enum {

  REFVOLT_LEVEL_1_5 = 0, 
  REFVOLT_LEVEL_2_5 = 1, 
  REFVOLT_LEVEL_NONE = 0
};

enum adc12ssel_enum {

  SHT_SOURCE_ADC12OSC = 0, 
  SHT_SOURCE_ACLK = 1, 
  SHT_SOURCE_MCLK = 2, 
  SHT_SOURCE_SMCLK = 3
};

enum adc12div_enum {

  SHT_CLOCK_DIV_1 = 0, 
  SHT_CLOCK_DIV_2 = 1, 
  SHT_CLOCK_DIV_3 = 2, 
  SHT_CLOCK_DIV_4 = 3, 
  SHT_CLOCK_DIV_5 = 4, 
  SHT_CLOCK_DIV_6 = 5, 
  SHT_CLOCK_DIV_7 = 6, 
  SHT_CLOCK_DIV_8 = 7
};

enum sht_enum {

  SAMPLE_HOLD_4_CYCLES = 0, 
  SAMPLE_HOLD_8_CYCLES = 1, 
  SAMPLE_HOLD_16_CYCLES = 2, 
  SAMPLE_HOLD_32_CYCLES = 3, 
  SAMPLE_HOLD_64_CYCLES = 4, 
  SAMPLE_HOLD_96_CYCLES = 5, 
  SAMPLE_HOLD_128_CYCLES = 6, 
  SAMPLE_HOLD_192_CYCLES = 7, 
  SAMPLE_HOLD_256_CYCLES = 8, 
  SAMPLE_HOLD_384_CYCLES = 9, 
  SAMPLE_HOLD_512_CYCLES = 10, 
  SAMPLE_HOLD_768_CYCLES = 11, 
  SAMPLE_HOLD_1024_CYCLES = 12
};

enum sampcon_ssel_enum {

  SAMPCON_SOURCE_TACLK = 0, 
  SAMPCON_SOURCE_ACLK = 1, 
  SAMPCON_SOURCE_SMCLK = 2, 
  SAMPCON_SOURCE_INCLK = 3
};

enum sampcon_id_enum {

  SAMPCON_CLOCK_DIV_1 = 0, 
  SAMPCON_CLOCK_DIV_2 = 1, 
  SAMPCON_CLOCK_DIV_4 = 2, 
  SAMPCON_CLOCK_DIV_8 = 3
};
#line 199
#line 186
typedef struct __nesc_unnamed4304 {
  volatile unsigned 
  adc12sc : 1, 
  enc : 1, 
  adc12tovie : 1, 
  adc12ovie : 1, 
  adc12on : 1, 
  refon : 1, 
  r2_5v : 1, 
  msc : 1, 
  sht0 : 4, 
  sht1 : 4;
  volatile unsigned int  : 0;
} __attribute((packed))  adc12ctl0_t;
#line 212
#line 201
typedef struct __nesc_unnamed4305 {
  volatile unsigned 
  adc12busy : 1, 
  conseq : 2, 
  adc12ssel : 2, 
  adc12div : 3, 
  issh : 1, 
  shp : 1, 
  shs : 2, 
  cstartadd : 4;
  volatile unsigned int  : 0;
} __attribute((packed))  adc12ctl1_t;
enum SerialAMQueueP____nesc_unnamed4306 {
  SerialAMQueueP__NUM_CLIENTS = 1U
};
enum /*PlatformSerialC.UartC*/Msp430Uart0C__0____nesc_unnamed4307 {
  Msp430Uart0C__0__CLIENT_ID = 0U
};
typedef T32khz /*Msp430Uart0P.UartP*/Msp430UartP__0__Counter__precision_tag;
typedef uint16_t /*Msp430Uart0P.UartP*/Msp430UartP__0__Counter__size_type;
typedef T32khz /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__frequency_tag;
typedef /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__frequency_tag /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__precision_tag;
typedef uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__size_type;
enum /*PlatformSerialC.UartC.UsartC*/Msp430Usart0C__0____nesc_unnamed4308 {
  Msp430Usart0C__0__CLIENT_ID = 0U
};
typedef uint8_t /*PrintfC.QueueC*/QueueC__0__queue_t;
typedef /*PrintfC.QueueC*/QueueC__0__queue_t /*PrintfC.QueueC*/QueueC__0__Queue__t;
typedef uint8_t PrintfP__Queue__t;
typedef TMilli SimpleAccelC__ActivityTimer__precision_tag;
typedef TMilli SimpleAccelC__SampleTimer__precision_tag;
enum /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Timer*/Msp430Timer32khzC__0____nesc_unnamed4309 {
  Msp430Timer32khzC__0__ALARM_ID = 0U
};
typedef T32khz /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__frequency_tag;
typedef /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__frequency_tag /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__precision_tag;
typedef uint16_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__size_type;
typedef TMilli /*CounterMilli32C.Transform*/TransformCounterC__0__to_precision_tag;
typedef uint32_t /*CounterMilli32C.Transform*/TransformCounterC__0__to_size_type;
typedef T32khz /*CounterMilli32C.Transform*/TransformCounterC__0__from_precision_tag;
typedef uint16_t /*CounterMilli32C.Transform*/TransformCounterC__0__from_size_type;
typedef uint32_t /*CounterMilli32C.Transform*/TransformCounterC__0__upper_count_type;
typedef /*CounterMilli32C.Transform*/TransformCounterC__0__from_precision_tag /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__precision_tag;
typedef /*CounterMilli32C.Transform*/TransformCounterC__0__from_size_type /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__size_type;
typedef /*CounterMilli32C.Transform*/TransformCounterC__0__to_precision_tag /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__precision_tag;
typedef /*CounterMilli32C.Transform*/TransformCounterC__0__to_size_type /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__size_type;
typedef TMilli /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type;
typedef T32khz /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__from_precision_tag;
typedef uint16_t /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__from_size_type;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_precision_tag /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__precision_tag;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__size_type;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__from_precision_tag /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__precision_tag;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__from_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_precision_tag /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__precision_tag;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__size_type;
typedef TMilli /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__LocalTime__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__precision_tag;
typedef uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__size_type;
# 62 "../../../tos/interfaces/Init.nc"
static error_t PlatformP__Init__init(void );
#line 62
static error_t MotePlatformC__Init__init(void );
# 46 "../../../tos/chips/msp430/timer/Msp430ClockInit.nc"
static void Msp430ClockP__Msp430ClockInit__defaultInitClocks(void );
#line 43
static void Msp430ClockP__Msp430ClockInit__default__initTimerB(void );



static void Msp430ClockP__Msp430ClockInit__defaultInitTimerA(void );
#line 42
static void Msp430ClockP__Msp430ClockInit__default__initTimerA(void );





static void Msp430ClockP__Msp430ClockInit__defaultInitTimerB(void );
#line 45
static void Msp430ClockP__Msp430ClockInit__defaultSetupDcoCalibrate(void );
#line 40
static void Msp430ClockP__Msp430ClockInit__default__setupDcoCalibrate(void );
static void Msp430ClockP__Msp430ClockInit__default__initClocks(void );
# 62 "../../../tos/interfaces/McuPowerOverride.nc"
static mcu_power_t Msp430ClockP__McuPowerOverride__lowestState(void );
# 62 "../../../tos/interfaces/Init.nc"
static error_t Msp430ClockP__Init__init(void );
# 39 "../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX0__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Overflow__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX1__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__default__fired(
# 51 "../../../tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x7f18ef9578b0);
# 39 "../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX0__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Overflow__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX1__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__default__fired(
# 51 "../../../tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x7f18ef9578b0);
# 45 "../../../tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get(void );
static bool /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__isOverflowPending(void );
# 44 "../../../tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__getEvent(void );
#line 91
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__default__captured(uint16_t time);
# 42 "../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Control__getControl(void );
# 39 "../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Event__fired(void );
# 45 "../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__default__fired(void );
# 48 "../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Timer__overflow(void );
# 44 "../../../tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__getEvent(void );
#line 91
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__default__captured(uint16_t time);
# 42 "../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__getControl(void );
# 39 "../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Event__fired(void );
# 45 "../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__default__fired(void );
# 48 "../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Timer__overflow(void );
# 44 "../../../tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__getEvent(void );
#line 91
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__default__captured(uint16_t time);
# 42 "../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Control__getControl(void );
# 39 "../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Event__fired(void );
# 45 "../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__default__fired(void );
# 48 "../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Timer__overflow(void );
# 44 "../../../tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__getEvent(void );
#line 91
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__default__captured(uint16_t time);
# 42 "../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__getControl(void );
#line 57
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__enableEvents(void );
#line 47
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__setControlAsCompare(void );










static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__disableEvents(void );
#line 44
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__clearPendingInterrupt(void );
# 39 "../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Event__fired(void );
# 41 "../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEvent(uint16_t time);

static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEventFromNow(uint16_t delta);
# 48 "../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__overflow(void );
# 44 "../../../tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__getEvent(void );
#line 91
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__default__captured(uint16_t time);
# 42 "../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__getControl(void );
# 39 "../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Event__fired(void );
# 45 "../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__default__fired(void );
# 48 "../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Timer__overflow(void );
# 44 "../../../tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__getEvent(void );
#line 91
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__default__captured(uint16_t time);
# 42 "../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__getControl(void );
# 39 "../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Event__fired(void );
# 45 "../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__default__fired(void );
# 48 "../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__overflow(void );
# 44 "../../../tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__getEvent(void );
#line 91
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__default__captured(uint16_t time);
# 42 "../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__getControl(void );
# 39 "../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Event__fired(void );
# 45 "../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__default__fired(void );
# 48 "../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Timer__overflow(void );
# 44 "../../../tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__getEvent(void );
#line 91
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__default__captured(uint16_t time);
# 42 "../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Control__getControl(void );
# 39 "../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Event__fired(void );
# 45 "../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__default__fired(void );
# 48 "../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Timer__overflow(void );
# 44 "../../../tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__getEvent(void );
#line 91
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__default__captured(uint16_t time);
# 42 "../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Control__getControl(void );
# 39 "../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Event__fired(void );
# 45 "../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__default__fired(void );
# 48 "../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Timer__overflow(void );
# 44 "../../../tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__getEvent(void );
#line 91
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__default__captured(uint16_t time);
# 42 "../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Control__getControl(void );
# 39 "../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Event__fired(void );
# 45 "../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__default__fired(void );
# 48 "../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Timer__overflow(void );
# 79 "../../../tos/interfaces/McuSleep.nc"
static void McuSleepC__McuSleep__sleep(void );
# 67 "../../../tos/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(
# 56 "../../../tos/system/SchedulerBasicP.nc"
uint8_t arg_0x7f18efabd9c0);
# 75 "../../../tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__default__runTask(
# 56 "../../../tos/system/SchedulerBasicP.nc"
uint8_t arg_0x7f18efabd9c0);
# 57 "../../../tos/interfaces/Scheduler.nc"
static void SchedulerBasicP__Scheduler__init(void );
#line 72
static void SchedulerBasicP__Scheduler__taskLoop(void );
#line 65
static bool SchedulerBasicP__Scheduler__runNextTask(void );
# 80 "../../../tos/interfaces/AMSend.nc"
static error_t /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 100 "../../../tos/interfaces/Send.nc"
static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(
#line 96
message_t * msg, 



error_t error);
# 110 "../../../tos/interfaces/AMSend.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(
# 48 "../../../tos/system/AMQueueImplP.nc"
am_id_t arg_0x7f18ef7f20d0, 
# 103 "../../../tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 75 "../../../tos/interfaces/Send.nc"
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(
# 46 "../../../tos/system/AMQueueImplP.nc"
uint8_t arg_0x7f18ef7f4cf0, 
# 67 "../../../tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 100
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(
# 46 "../../../tos/system/AMQueueImplP.nc"
uint8_t arg_0x7f18ef7f4cf0, 
# 96 "../../../tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 75 "../../../tos/interfaces/TaskBasic.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void );
#line 75
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void );
# 100 "../../../tos/interfaces/Send.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(
#line 96
message_t * msg, 



error_t error);
# 78 "../../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 80 "../../../tos/interfaces/AMSend.nc"
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(
# 47 "../../../tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x7f18ef78a920, 
# 80 "../../../tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 78 "../../../tos/interfaces/Packet.nc"
static uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(
#line 74
message_t * msg);
#line 126
static 
#line 123
void * 


/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void );
#line 94
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 78 "../../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(
# 48 "../../../tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x7f18ef789b00, 
# 71 "../../../tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 78 "../../../tos/interfaces/AMPacket.nc"
static am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(
#line 74
message_t * amsg);
#line 103
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 147
static am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(
#line 143
message_t * amsg);
#line 162
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setType(
#line 158
message_t * amsg, 



am_id_t t);
# 104 "../../../tos/interfaces/SplitControl.nc"
static error_t SerialP__SplitControl__start(void );
# 75 "../../../tos/interfaces/TaskBasic.nc"
static void SerialP__stopDoneTask__runTask(void );
#line 75
static void SerialP__RunTx__runTask(void );
# 62 "../../../tos/interfaces/Init.nc"
static error_t SerialP__Init__init(void );
# 54 "../../../tos/lib/serial/SerialFlush.nc"
static void SerialP__SerialFlush__flushDone(void );
#line 49
static void SerialP__SerialFlush__default__flush(void );
# 75 "../../../tos/interfaces/TaskBasic.nc"
static void SerialP__startDoneTask__runTask(void );
# 94 "../../../tos/lib/serial/SerialFrameComm.nc"
static void SerialP__SerialFrameComm__dataReceived(uint8_t data);





static void SerialP__SerialFrameComm__putDone(void );
#line 85
static void SerialP__SerialFrameComm__delimiterReceived(void );
# 75 "../../../tos/interfaces/TaskBasic.nc"
static void SerialP__defaultSerialFlushTask__runTask(void );
# 71 "../../../tos/lib/serial/SendBytePacket.nc"
static error_t SerialP__SendBytePacket__completeSend(void );
#line 62
static error_t SerialP__SendBytePacket__startSend(uint8_t first_byte);
# 75 "../../../tos/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void );
# 75 "../../../tos/interfaces/Send.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(
# 51 "../../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7f18ef64d110, 
# 67 "../../../tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 100
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(
# 51 "../../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7f18ef64d110, 
# 96 "../../../tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 75 "../../../tos/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void );
# 78 "../../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(
# 50 "../../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7f18ef64e570, 
# 71 "../../../tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "../../../tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(
# 54 "../../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7f18ef64c4d0, 
# 31 "../../../tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(
# 54 "../../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7f18ef64c4d0);
# 23 "../../../tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(
# 54 "../../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7f18ef64c4d0, 
# 23 "../../../tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen);
# 81 "../../../tos/lib/serial/SendBytePacket.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void );









static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error);
# 62 "../../../tos/lib/serial/ReceiveBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void );






static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t data);










static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result);
# 79 "../../../tos/interfaces/UartStream.nc"
static void HdlcTranslateC__UartStream__receivedByte(uint8_t byte);
#line 99
static void HdlcTranslateC__UartStream__receiveDone(
#line 95
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void HdlcTranslateC__UartStream__sendDone(
#line 53
uint8_t * buf, 



uint16_t len, error_t error);
# 56 "../../../tos/lib/serial/SerialFrameComm.nc"
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void );
#line 79
static void HdlcTranslateC__SerialFrameComm__resetReceive(void );
#line 65
static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data);
# 65 "../../../tos/interfaces/ResourceConfigure.nc"
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__ResourceConfigure__unconfigure(
# 44 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7f18ef53d110);
# 59 "../../../tos/interfaces/ResourceConfigure.nc"
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__ResourceConfigure__configure(
# 44 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7f18ef53d110);
# 39 "../../../tos/chips/msp430/usart/Msp430UartConfigure.nc"
static msp430_uart_union_config_t */*Msp430Uart0P.UartP*/Msp430UartP__0__Msp430UartConfigure__default__getConfig(
# 49 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7f18ef539890);
# 48 "../../../tos/interfaces/UartStream.nc"
static error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__send(
# 45 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7f18ef53de60, 
# 44 "../../../tos/interfaces/UartStream.nc"
uint8_t * buf, 



uint16_t len);
#line 79
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__default__receivedByte(
# 45 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7f18ef53de60, 
# 79 "../../../tos/interfaces/UartStream.nc"
uint8_t byte);
#line 99
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__default__receiveDone(
# 45 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7f18ef53de60, 
# 95 "../../../tos/interfaces/UartStream.nc"
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__default__sendDone(
# 45 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7f18ef53de60, 
# 53 "../../../tos/interfaces/UartStream.nc"
uint8_t * buf, 



uint16_t len, error_t error);
# 82 "../../../tos/lib/timer/Counter.nc"
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__Counter__overflow(void );
# 120 "../../../tos/interfaces/Resource.nc"
static error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__default__release(
# 48 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7f18ef53a580);
# 97 "../../../tos/interfaces/Resource.nc"
static error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__default__immediateRequest(
# 48 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7f18ef53a580);
# 102 "../../../tos/interfaces/Resource.nc"
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__granted(
# 48 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7f18ef53a580);
# 128 "../../../tos/interfaces/Resource.nc"
static bool /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__default__isOwner(
# 48 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7f18ef53a580);
# 120 "../../../tos/interfaces/Resource.nc"
static error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__Resource__release(
# 43 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7f18ef540e10);
# 97 "../../../tos/interfaces/Resource.nc"
static error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__Resource__immediateRequest(
# 43 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7f18ef540e10);
# 102 "../../../tos/interfaces/Resource.nc"
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__Resource__default__granted(
# 43 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7f18ef540e10);
# 54 "../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartInterrupts__rxDone(
# 51 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7f18ef5179b0, 
# 54 "../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
uint8_t data);
#line 49
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartInterrupts__txDone(
# 51 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7f18ef5179b0);
# 143 "../../../tos/chips/msp430/usart/HplMsp430Usart.nc"
static void HplMsp430Usart0P__Usart__enableUartRx(void );
#line 123
static void HplMsp430Usart0P__Usart__enableUart(void );
#line 97
static void HplMsp430Usart0P__Usart__resetUsart(bool reset);
#line 179
static void HplMsp430Usart0P__Usart__disableIntr(void );
#line 90
static void HplMsp430Usart0P__Usart__setUmctl(uint8_t umctl);
#line 133
static void HplMsp430Usart0P__Usart__enableUartTx(void );
#line 148
static void HplMsp430Usart0P__Usart__disableUartRx(void );
#line 182
static void HplMsp430Usart0P__Usart__enableIntr(void );
#line 207
static void HplMsp430Usart0P__Usart__clrIntr(void );
#line 80
static void HplMsp430Usart0P__Usart__setUbr(uint16_t ubr);
#line 224
static void HplMsp430Usart0P__Usart__tx(uint8_t data);
#line 128
static void HplMsp430Usart0P__Usart__disableUart(void );
#line 174
static void HplMsp430Usart0P__Usart__setModeUart(msp430_uart_union_config_t *config);
#line 158
static void HplMsp430Usart0P__Usart__disableSpi(void );
#line 138
static void HplMsp430Usart0P__Usart__disableUartTx(void );
# 99 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectIOFunc(void );
#line 99
static void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectIOFunc(void );
#line 99
static void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectIOFunc(void );
#line 99
static void /*HplMsp430GeneralIOC.P34*/HplMsp430GeneralIOP__20__IO__selectIOFunc(void );
#line 92
static void /*HplMsp430GeneralIOC.P34*/HplMsp430GeneralIOP__20__IO__selectModuleFunc(void );






static void /*HplMsp430GeneralIOC.P35*/HplMsp430GeneralIOP__21__IO__selectIOFunc(void );
#line 92
static void /*HplMsp430GeneralIOC.P35*/HplMsp430GeneralIOP__21__IO__selectModuleFunc(void );






static void /*HplMsp430GeneralIOC.P36*/HplMsp430GeneralIOP__22__IO__selectIOFunc(void );
#line 92
static void /*HplMsp430GeneralIOC.P36*/HplMsp430GeneralIOP__22__IO__selectModuleFunc(void );






static void /*HplMsp430GeneralIOC.P37*/HplMsp430GeneralIOP__23__IO__selectIOFunc(void );
#line 92
static void /*HplMsp430GeneralIOC.P37*/HplMsp430GeneralIOP__23__IO__selectModuleFunc(void );
#line 85
static void /*HplMsp430GeneralIOC.P40*/HplMsp430GeneralIOP__24__IO__makeOutput(void );
#line 48
static void /*HplMsp430GeneralIOC.P40*/HplMsp430GeneralIOP__24__IO__set(void );




static void /*HplMsp430GeneralIOC.P40*/HplMsp430GeneralIOP__24__IO__clr(void );




static void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__toggle(void );
#line 85
static void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__makeOutput(void );
#line 48
static void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__set(void );
#line 85
static void /*HplMsp430GeneralIOC.P43*/HplMsp430GeneralIOP__27__IO__makeOutput(void );
#line 48
static void /*HplMsp430GeneralIOC.P43*/HplMsp430GeneralIOP__27__IO__set(void );




static void /*HplMsp430GeneralIOC.P43*/HplMsp430GeneralIOP__27__IO__clr(void );
#line 99
static void /*HplMsp430GeneralIOC.P51*/HplMsp430GeneralIOP__33__IO__selectIOFunc(void );
#line 99
static void /*HplMsp430GeneralIOC.P52*/HplMsp430GeneralIOP__34__IO__selectIOFunc(void );
#line 99
static void /*HplMsp430GeneralIOC.P53*/HplMsp430GeneralIOP__35__IO__selectIOFunc(void );
# 48 "../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__overflow(void );
# 64 "../../../tos/lib/timer/Counter.nc"
static /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__size_type /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__get(void );






static bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__isOverflowPending(void );
# 62 "../../../tos/interfaces/Init.nc"
static error_t LedsP__Init__init(void );
# 84 "../../../tos/platforms/shimmer2r/Leds.nc"
static void LedsP__Leds__led1Toggle(void );
#line 78
static void LedsP__Leds__led1Off(void );
#line 95
static void LedsP__Leds__led2Off(void );
#line 57
static void LedsP__Leds__led0On(void );
#line 90
static void LedsP__Leds__led2On(void );
# 46 "../../../tos/interfaces/GeneralIO.nc"
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__makeOutput(void );
#line 40
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__set(void );
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__clr(void );
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__toggle(void );



static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__makeOutput(void );
#line 40
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__set(void );





static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__makeOutput(void );
#line 40
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__set(void );
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__clr(void );
# 54 "../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__rxDone(
# 39 "../../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x7f18ef122600, 
# 54 "../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
uint8_t data);
#line 49
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__txDone(
# 39 "../../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x7f18ef122600);
# 39 "../../../tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc"
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawI2CInterrupts__fired(void );
#line 39
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__I2CInterrupts__default__fired(
# 40 "../../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x7f18ef1214e0);
# 54 "../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__rxDone(uint8_t data);
#line 49
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__txDone(void );
# 62 "../../../tos/interfaces/Init.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__Init__init(void );
# 53 "../../../tos/interfaces/ResourceQueue.nc"
static bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );
#line 70
static resource_client_id_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
# 61 "../../../tos/interfaces/ResourceRequested.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__immediateRequested(
# 55 "../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7f18ef0e2cf0);
# 65 "../../../tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(
# 60 "../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7f18ef0de240);
# 59 "../../../tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(
# 60 "../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7f18ef0de240);
# 56 "../../../tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void );
#line 46
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__granted(void );
#line 81
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__immediateRequested(void );
# 120 "../../../tos/interfaces/Resource.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__release(
# 54 "../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7f18ef0e3a50);
# 97 "../../../tos/interfaces/Resource.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__immediateRequest(
# 54 "../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7f18ef0e3a50);
# 102 "../../../tos/interfaces/Resource.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__default__granted(
# 54 "../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7f18ef0e3a50);
# 128 "../../../tos/interfaces/Resource.nc"
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__isOwner(
# 54 "../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7f18ef0e3a50);
# 90 "../../../tos/interfaces/ArbiterInfo.nc"
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__inUse(void );







static uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__userId(void );
# 75 "../../../tos/interfaces/TaskBasic.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__runTask(void );
# 7 "../../../tos/chips/msp430/usart/HplMsp430I2C.nc"
static void HplMsp430I2C0P__HplI2C__clearModeI2C(void );
#line 6
static bool HplMsp430I2C0P__HplI2C__isI2C(void );
# 39 "../../../tos/chips/msp430/usart/Msp430UartConfigure.nc"
static msp430_uart_union_config_t *ShimmerSerialP__Msp430UartConfigure__getConfig(void );
# 102 "../../../tos/interfaces/Resource.nc"
static void ShimmerSerialP__Resource__granted(void );
# 95 "../../../tos/interfaces/StdControl.nc"
static error_t ShimmerSerialP__StdControl__start(void );









static error_t ShimmerSerialP__StdControl__stop(void );
# 31 "../../../tos/lib/serial/SerialPacketInfo.nc"
static uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t SerialPacketInfoActiveMessageP__Info__offset(void );







static uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen);
# 80 "../../../tos/interfaces/Queue.nc"
static 
#line 78
/*PrintfC.QueueC*/QueueC__0__Queue__t  

/*PrintfC.QueueC*/QueueC__0__Queue__head(void );
#line 97
static error_t /*PrintfC.QueueC*/QueueC__0__Queue__enqueue(
#line 93
/*PrintfC.QueueC*/QueueC__0__Queue__t  newVal);
#line 72
static uint8_t /*PrintfC.QueueC*/QueueC__0__Queue__maxSize(void );
#line 88
static 
#line 86
/*PrintfC.QueueC*/QueueC__0__Queue__t  

/*PrintfC.QueueC*/QueueC__0__Queue__dequeue(void );
#line 50
static bool /*PrintfC.QueueC*/QueueC__0__Queue__empty(void );
#line 65
static uint8_t /*PrintfC.QueueC*/QueueC__0__Queue__size(void );
# 110 "../../../tos/interfaces/AMSend.nc"
static void PrintfP__AMSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 75 "../../../tos/interfaces/TaskBasic.nc"
static void PrintfP__retrySend__runTask(void );
# 62 "../../../tos/interfaces/Init.nc"
static error_t PrintfP__Init__init(void );
# 49 "../../../tos/lib/printf/Putchar.nc"
static int PrintfP__Putchar__putchar(int c);
# 62 "../../../tos/interfaces/Init.nc"
static error_t PutcharP__Init__init(void );
# 60 "../../../tos/interfaces/Boot.nc"
static void SerialStartP__Boot__booted(void );
# 113 "../../../tos/interfaces/SplitControl.nc"
static void SerialStartP__SerialControl__startDone(error_t error);
#line 138
static void SerialStartP__SerialControl__stopDone(error_t error);
# 83 "../../../tos/lib/timer/Timer.nc"
static void SimpleAccelC__ActivityTimer__fired(void );
# 60 "../../../tos/interfaces/Boot.nc"
static void SimpleAccelC__Boot__booted(void );
# 83 "../../../tos/lib/timer/Timer.nc"
static void SimpleAccelC__SampleTimer__fired(void );
# 107 "../../../tos/chips/msp430/dma/Msp430DmaChannel.nc"
static void SimpleAccelC__DMA0__transferDone(error_t success);
# 75 "../../../tos/interfaces/TaskBasic.nc"
static void SimpleAccelC__stopSensing__runTask(void );
#line 75
static void SimpleAccelC__sendSensorData__runTask(void );
#line 75
static void SimpleAccelC__startSensing__runTask(void );
# 103 "../../../tos/platforms/shimmer/chips/bluetooth/Bluetooth.nc"
static void SimpleAccelC__Bluetooth__dataAvailable(uint8_t data);
#line 94
static void SimpleAccelC__Bluetooth__connectionClosed(uint8_t reason);









static void SimpleAccelC__Bluetooth__writeDone(void );
#line 93
static void SimpleAccelC__Bluetooth__connectionMade(uint8_t status);

static void SimpleAccelC__Bluetooth__commandModeEnded(void );
# 45 "../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__fired(void );
# 48 "../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__overflow(void );
# 103 "../../../tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__startAt(/*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__size_type dt);
#line 73
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__stop(void );
# 62 "../../../tos/interfaces/Init.nc"
static error_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Init__init(void );
# 82 "../../../tos/lib/timer/Counter.nc"
static void /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__overflow(void );
#line 64
static /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__size_type /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__get(void );
# 109 "../../../tos/lib/timer/Alarm.nc"
static /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__getNow(void );
#line 103
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__size_type dt);
#line 116
static /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__getAlarm(void );
#line 73
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__stop(void );




static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__fired(void );
# 82 "../../../tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__overflow(void );
# 75 "../../../tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );
# 78 "../../../tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
# 136 "../../../tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
#line 129
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );
# 75 "../../../tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
# 83 "../../../tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );
#line 83
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(
# 48 "../../../tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7f18eed6c020);
# 64 "../../../tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(
# 48 "../../../tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7f18eed6c020, 
# 64 "../../../tos/lib/timer/Timer.nc"
uint32_t dt);
#line 78
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(
# 48 "../../../tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7f18eed6c020);
# 82 "../../../tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 75 "../../../tos/interfaces/TaskBasic.nc"
static void RovingNetworksP__runSetCommands__runTask(void );
#line 75
static void RovingNetworksP__runMasterCommands__runTask(void );
# 72 "../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void RovingNetworksP__ConnectionInterrupt__fired(void );
# 62 "../../../tos/interfaces/Init.nc"
static error_t RovingNetworksP__Init__init(void );
# 54 "../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void RovingNetworksP__UARTData__rxDone(uint8_t data);
#line 49
static void RovingNetworksP__UARTData__txDone(void );
# 72 "../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void RovingNetworksP__RTSInterrupt__fired(void );
# 51 "../../../tos/platforms/shimmer/chips/bluetooth/Bluetooth.nc"
static error_t RovingNetworksP__Bluetooth__write(const uint8_t *buf, uint8_t len);
# 95 "../../../tos/interfaces/StdControl.nc"
static error_t RovingNetworksP__StdControl__start(void );
# 75 "../../../tos/interfaces/TaskBasic.nc"
static void RovingNetworksP__sendNextChar__runTask(void );
# 52 "../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void HplMsp430InterruptP__Port14__clear(void );
#line 72
static void HplMsp430InterruptP__Port14__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port26__clear(void );
#line 67
static void HplMsp430InterruptP__Port26__edge(bool low_to_high);
#line 42
static void HplMsp430InterruptP__Port26__enable(void );
#line 59
static bool HplMsp430InterruptP__Port26__getValue(void );
#line 52
static void HplMsp430InterruptP__Port17__clear(void );
#line 72
static void HplMsp430InterruptP__Port17__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port21__clear(void );
#line 72
static void HplMsp430InterruptP__Port21__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port12__clear(void );
#line 72
static void HplMsp430InterruptP__Port12__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port24__clear(void );
#line 72
static void HplMsp430InterruptP__Port24__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port15__clear(void );
#line 72
static void HplMsp430InterruptP__Port15__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port27__clear(void );
#line 72
static void HplMsp430InterruptP__Port27__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port10__clear(void );
#line 72
static void HplMsp430InterruptP__Port10__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port22__clear(void );
#line 72
static void HplMsp430InterruptP__Port22__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port13__clear(void );
#line 72
static void HplMsp430InterruptP__Port13__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port25__clear(void );
#line 72
static void HplMsp430InterruptP__Port25__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port16__clear(void );
#line 67
static void HplMsp430InterruptP__Port16__edge(bool low_to_high);
#line 42
static void HplMsp430InterruptP__Port16__enable(void );
#line 59
static bool HplMsp430InterruptP__Port16__getValue(void );
#line 52
static void HplMsp430InterruptP__Port20__clear(void );
#line 72
static void HplMsp430InterruptP__Port20__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port11__clear(void );
#line 72
static void HplMsp430InterruptP__Port11__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port23__clear(void );
#line 72
static void HplMsp430InterruptP__Port23__default__fired(void );
# 143 "../../../tos/chips/msp430/usart/HplMsp430Usart.nc"
static void HplMsp430Usart1P__Usart__enableUartRx(void );
#line 123
static void HplMsp430Usart1P__Usart__enableUart(void );
#line 180
static void HplMsp430Usart1P__Usart__enableRxIntr(void );
#line 97
static void HplMsp430Usart1P__Usart__resetUsart(bool reset);
#line 179
static void HplMsp430Usart1P__Usart__disableIntr(void );

static void HplMsp430Usart1P__Usart__enableTxIntr(void );
#line 90
static void HplMsp430Usart1P__Usart__setUmctl(uint8_t umctl);
#line 133
static void HplMsp430Usart1P__Usart__enableUartTx(void );
#line 148
static void HplMsp430Usart1P__Usart__disableUartRx(void );
#line 207
static void HplMsp430Usart1P__Usart__clrIntr(void );
#line 80
static void HplMsp430Usart1P__Usart__setUbr(uint16_t ubr);
#line 224
static void HplMsp430Usart1P__Usart__tx(uint8_t data);
#line 128
static void HplMsp430Usart1P__Usart__disableUart(void );
#line 174
static void HplMsp430Usart1P__Usart__setModeUart(msp430_uart_union_config_t *config);
#line 158
static void HplMsp430Usart1P__Usart__disableSpi(void );
#line 138
static void HplMsp430Usart1P__Usart__disableUartTx(void );
# 62 "../../../tos/interfaces/Init.nc"
static error_t Mma7361P__Init__init(void );
# 54 "../../../tos/platforms/shimmer/chips/mma7260/Mma_Accel.nc"
static void Mma7361P__Accel__setSensitivity(uint8_t sensitivity);
#line 47
static void Mma7361P__Accel__wake(bool wakeup);
# 107 "../../../tos/chips/msp430/dma/Msp430DmaChannel.nc"
static void shimmerAnalogSetupP__Msp430DmaChannel__transferDone(error_t success);
# 112 "../../../tos/chips/msp430/adc12/HplAdc12.nc"
static void shimmerAnalogSetupP__HplAdc12__conversionDone(uint16_t iv);
# 62 "../../../tos/interfaces/Init.nc"
static error_t shimmerAnalogSetupP__Init__init(void );
# 46 "../../../tos/platforms/shimmer/shimmerAnalogSetup.nc"
static void shimmerAnalogSetupP__shimmerAnalogSetup__addAccelInputs(void );
#line 79
static void shimmerAnalogSetupP__shimmerAnalogSetup__triggerConversion(void );



static uint8_t shimmerAnalogSetupP__shimmerAnalogSetup__getNumberOfChannels(void );
#line 64
static void shimmerAnalogSetupP__shimmerAnalogSetup__addAnExInput(uint8_t channel);
#line 77
static void shimmerAnalogSetupP__shimmerAnalogSetup__finishADCSetup(uint16_t *buffer);



static void shimmerAnalogSetupP__shimmerAnalogSetup__stopConversion(void );
# 106 "../../../tos/chips/msp430/adc12/HplAdc12.nc"
static void HplAdc12P__HplAdc12__resetIFGs(void );
#line 128
static void HplAdc12P__HplAdc12__startConversion(void );
#line 95
static void HplAdc12P__HplAdc12__setIEFlags(uint16_t mask);
#line 123
static void HplAdc12P__HplAdc12__stopConversion(void );
# 45 "../../../tos/chips/msp430/dma/HplMsp430DmaControl.nc"
static void HplMsp430DmaP__DmaControl__clearRoundRobin(void );
#line 44
static void HplMsp430DmaP__DmaControl__setRoundRobin(void );
#line 43
static void HplMsp430DmaP__DmaControl__clearOnFetch(void );


static void HplMsp430DmaP__DmaControl__setENNMI(void );



static void HplMsp430DmaP__DmaControl__reset(void );
#line 42
static void HplMsp430DmaP__DmaControl__setOnFetch(void );




static void HplMsp430DmaP__DmaControl__clearENNMI(void );
# 61 "../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
static void /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__disableDMA(void );
#line 39
static error_t /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__setTrigger(dma_trigger_t trigger);
#line 76
static void /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__setStateRaw(uint16_t state, uint16_t trigger, void *src, void *dest, uint16_t size);






static void /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__reset(void );
#line 71
static void /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__setSrc(void *saddr);
#line 60
static void /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__enableDMA(void );
#line 73
static void /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__setSize(uint16_t sz);

static void /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__setState(dma_channel_state_t s, dma_channel_trigger_t t, void *src, void *dest, uint16_t size);
#line 72
static void /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__setDst(void *daddr);
# 39 "../../../tos/chips/msp430/dma/HplMsp430DmaInterrupt.nc"
static void /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__Interrupt__fired(void );
# 83 "../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
static void /*HplMsp430DmaC.Dma1*/HplMsp430DmaXP__1__DMA__reset(void );
# 39 "../../../tos/chips/msp430/dma/HplMsp430DmaInterrupt.nc"
static void /*HplMsp430DmaC.Dma1*/HplMsp430DmaXP__1__Interrupt__fired(void );
# 83 "../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
static void /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__DMA__reset(void );
# 39 "../../../tos/chips/msp430/dma/HplMsp430DmaInterrupt.nc"
static void /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__Interrupt__fired(void );
# 85 "../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
static void /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__HplChannel__transferDone(error_t success);
# 102 "../../../tos/chips/msp430/dma/Msp430DmaChannel.nc"
static error_t /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__Channel__stopTransfer(void );
#line 91
static error_t /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__Channel__repeatTransfer(void *src_addr, void *dst_addr, 
uint16_t size);
#line 49
static error_t /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__Channel__setupTransfer(dma_transfer_mode_t transfer_mode, 
dma_trigger_t trigger, 
dma_level_t level, 
void *src_addr, 
void *dst_addr, 
uint16_t size, 
dma_byte_t src_byte, 
dma_byte_t dst_byte, 
dma_incr_t src_incr, 
dma_incr_t dst_incr);
#line 84
static error_t /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__Channel__startTransfer(void );
# 85 "../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
static void /*Msp430DmaC.Channel1P*/Msp430DmaChannelP__1__HplChannel__transferDone(error_t success);
# 107 "../../../tos/chips/msp430/dma/Msp430DmaChannel.nc"
static void /*Msp430DmaC.Channel1P*/Msp430DmaChannelP__1__Channel__default__transferDone(error_t success);
# 85 "../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
static void /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__HplChannel__transferDone(error_t success);
# 107 "../../../tos/chips/msp430/dma/Msp430DmaChannel.nc"
static void /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__Channel__default__transferDone(error_t success);
# 85 "../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
static void Msp430DmaControlP__HplChannel1__transferDone(error_t success);
#line 85
static void Msp430DmaControlP__HplChannel2__transferDone(error_t success);
# 42 "../../../tos/chips/msp430/dma/Msp430DmaControl.nc"
static void Msp430DmaControlP__Control__setFlags(bool enable_nmi, bool round_robin, 
bool on_fetch);
#line 41
static void Msp430DmaControlP__Control__init(void );
# 85 "../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
static void Msp430DmaControlP__HplChannel0__transferDone(error_t success);
# 62 "../../../tos/interfaces/Init.nc"
static error_t PlatformP__MoteInit__init(void );
#line 62
static error_t PlatformP__MoteClockInit__init(void );
#line 62
static error_t PlatformP__LedsInit__init(void );
# 10 "../../../tos/platforms/shimmer2r/PlatformP.nc"
static inline error_t PlatformP__Init__init(void );
# 44 "../../../tos/platforms/shimmer2r/MotePlatformC.nc"
static inline error_t MotePlatformC__Init__init(void );
# 43 "../../../tos/chips/msp430/timer/Msp430ClockInit.nc"
static void Msp430ClockP__Msp430ClockInit__initTimerB(void );
#line 42
static void Msp430ClockP__Msp430ClockInit__initTimerA(void );
#line 40
static void Msp430ClockP__Msp430ClockInit__setupDcoCalibrate(void );
static void Msp430ClockP__Msp430ClockInit__initClocks(void );
# 51 "../../../tos/chips/msp430/timer/Msp430ClockP.nc"
static volatile uint8_t Msp430ClockP__IE1 __asm ("0x0000");
static volatile uint16_t Msp430ClockP__TACTL __asm ("0x0160");
static volatile uint16_t Msp430ClockP__TAIV __asm ("0x012E");
static volatile uint16_t Msp430ClockP__TBCTL __asm ("0x0180");
static volatile uint16_t Msp430ClockP__TBIV __asm ("0x011E");

enum Msp430ClockP____nesc_unnamed4310 {

  Msp430ClockP__ACLK_CALIB_PERIOD = 8, 
  Msp430ClockP__TARGET_DCO_DELTA = 4096 / 32 * Msp430ClockP__ACLK_CALIB_PERIOD
};

static inline mcu_power_t Msp430ClockP__McuPowerOverride__lowestState(void );



static inline void Msp430ClockP__Msp430ClockInit__defaultSetupDcoCalibrate(void );
#line 79
static inline void Msp430ClockP__Msp430ClockInit__defaultInitClocks(void );
#line 100
static inline void Msp430ClockP__Msp430ClockInit__defaultInitTimerA(void );
#line 115
static inline void Msp430ClockP__Msp430ClockInit__defaultInitTimerB(void );
#line 130
static inline void Msp430ClockP__Msp430ClockInit__default__setupDcoCalibrate(void );




static inline void Msp430ClockP__Msp430ClockInit__default__initClocks(void );




static inline void Msp430ClockP__Msp430ClockInit__default__initTimerA(void );




static inline void Msp430ClockP__Msp430ClockInit__default__initTimerB(void );





static inline void Msp430ClockP__startTimerA(void );
#line 163
static inline void Msp430ClockP__startTimerB(void );
#line 175
static void Msp430ClockP__set_dco_calib(int calib);





static inline uint16_t Msp430ClockP__test_calib_busywait_delta(int calib);
#line 204
static inline void Msp430ClockP__busyCalibrateDco(void );
#line 229
static inline error_t Msp430ClockP__Init__init(void );
# 39 "../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__fired(
# 51 "../../../tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x7f18ef9578b0);
# 48 "../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__overflow(void );
# 126 "../../../tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX0__fired(void );




static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX1__fired(void );





static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Overflow__fired(void );








static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__default__fired(uint8_t n);
# 39 "../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__fired(
# 51 "../../../tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x7f18ef9578b0);
# 48 "../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__overflow(void );
# 62 "../../../tos/chips/msp430/timer/Msp430TimerP.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get(void );
#line 81
static inline bool /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__isOverflowPending(void );
#line 126
static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX0__fired(void );




static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX1__fired(void );





static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Overflow__fired(void );








static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__default__fired(uint8_t n);
# 91 "../../../tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__captured(uint16_t time);
# 45 "../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__fired(void );
# 55 "../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t;


static inline /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Control__getControl(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__getEvent(void );
#line 180
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Timer__overflow(void );
# 91 "../../../tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__captured(uint16_t time);
# 45 "../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__fired(void );
# 55 "../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t;


static inline /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__getControl(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__getEvent(void );
#line 180
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Timer__overflow(void );
# 91 "../../../tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__captured(uint16_t time);
# 45 "../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__fired(void );
# 55 "../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t;


static inline /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Control__getControl(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__getEvent(void );
#line 180
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Timer__overflow(void );
# 91 "../../../tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__captured(uint16_t time);
# 45 "../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__fired(void );
# 45 "../../../tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__get(void );
# 55 "../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t;

static inline uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__CC2int(/*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t x)  ;
static inline /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__int2CC(uint16_t x)  ;

static inline uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__compareControl(void );
#line 85
static inline /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__getControl(void );









static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__clearPendingInterrupt(void );









static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__setControlAsCompare(void );
#line 130
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__enableEvents(void );




static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__disableEvents(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__getEvent(void );




static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEvent(uint16_t x);









static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEventFromNow(uint16_t x);
#line 180
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__default__captured(uint16_t n);







static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__overflow(void );
# 91 "../../../tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__captured(uint16_t time);
# 45 "../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__fired(void );
# 55 "../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t;


static inline /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__getControl(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__getEvent(void );
#line 180
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Timer__overflow(void );
# 91 "../../../tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__captured(uint16_t time);
# 45 "../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__fired(void );
# 55 "../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t;


static inline /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__getControl(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__getEvent(void );
#line 180
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__overflow(void );
# 91 "../../../tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__captured(uint16_t time);
# 45 "../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__fired(void );
# 55 "../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t;


static inline /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__getControl(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__getEvent(void );
#line 180
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Timer__overflow(void );
# 91 "../../../tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__captured(uint16_t time);
# 45 "../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__fired(void );
# 55 "../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__cc_t;


static inline /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__cc_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__cc_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Control__getControl(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__getEvent(void );
#line 180
static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Timer__overflow(void );
# 91 "../../../tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__captured(uint16_t time);
# 45 "../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__fired(void );
# 55 "../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__cc_t;


static inline /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__cc_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__cc_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Control__getControl(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__getEvent(void );
#line 180
static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Timer__overflow(void );
# 91 "../../../tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__captured(uint16_t time);
# 45 "../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__fired(void );
# 55 "../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__cc_t;


static inline /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__cc_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__cc_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Control__getControl(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__getEvent(void );
#line 180
static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Timer__overflow(void );
# 39 "../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void Msp430TimerCommonP__VectorTimerB1__fired(void );
#line 39
static void Msp430TimerCommonP__VectorTimerA0__fired(void );
#line 39
static void Msp430TimerCommonP__VectorTimerA1__fired(void );
#line 39
static void Msp430TimerCommonP__VectorTimerB0__fired(void );
# 11 "../../../tos/chips/msp430/timer/Msp430TimerCommonP.nc"
void sig_TIMERA0_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x000C)))  ;
void sig_TIMERA1_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x000A)))  ;
void sig_TIMERB0_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x001A)))  ;
void sig_TIMERB1_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x0018)))  ;
# 62 "../../../tos/interfaces/McuPowerOverride.nc"
static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void );
# 59 "../../../tos/chips/msp430/McuSleepC.nc"
bool McuSleepC__dirty = TRUE;
mcu_power_t McuSleepC__powerState = MSP430_POWER_ACTIVE;




const uint16_t McuSleepC__msp430PowerBits[MSP430_POWER_LPM4 + 1] = { 
0, 
0x0010, 
0x0040 + 0x0010, 
0x0080 + 0x0010, 
0x0080 + 0x0040 + 0x0010, 
0x0080 + 0x0040 + 0x0020 + 0x0010 };


static inline mcu_power_t McuSleepC__getPowerState(void );
#line 112
static inline void McuSleepC__computePowerState(void );




static inline void McuSleepC__McuSleep__sleep(void );
# 62 "../../../tos/interfaces/Init.nc"
static error_t RealMainP__SoftwareInit__init(void );
# 60 "../../../tos/interfaces/Boot.nc"
static void RealMainP__Boot__booted(void );
# 62 "../../../tos/interfaces/Init.nc"
static error_t RealMainP__PlatformInit__init(void );
# 57 "../../../tos/interfaces/Scheduler.nc"
static void RealMainP__Scheduler__init(void );
#line 72
static void RealMainP__Scheduler__taskLoop(void );
#line 65
static bool RealMainP__Scheduler__runNextTask(void );
# 63 "../../../tos/system/RealMainP.nc"
int main(void )   ;
# 75 "../../../tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(
# 56 "../../../tos/system/SchedulerBasicP.nc"
uint8_t arg_0x7f18efabd9c0);
# 79 "../../../tos/interfaces/McuSleep.nc"
static void SchedulerBasicP__McuSleep__sleep(void );
# 61 "../../../tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP____nesc_unnamed4311 {

  SchedulerBasicP__NUM_TASKS = 18U, 
  SchedulerBasicP__NO_TASK = 255
};

uint8_t SchedulerBasicP__m_head;
uint8_t SchedulerBasicP__m_tail;
uint8_t SchedulerBasicP__m_next[SchedulerBasicP__NUM_TASKS];








static __inline uint8_t SchedulerBasicP__popTask(void );
#line 97
static inline bool SchedulerBasicP__isWaiting(uint8_t id);




static inline bool SchedulerBasicP__pushTask(uint8_t id);
#line 124
static inline void SchedulerBasicP__Scheduler__init(void );









static bool SchedulerBasicP__Scheduler__runNextTask(void );
#line 149
static inline void SchedulerBasicP__Scheduler__taskLoop(void );
#line 170
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id);




static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id);
# 110 "../../../tos/interfaces/AMSend.nc"
static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 75 "../../../tos/interfaces/Send.nc"
static error_t /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__send(
#line 67
message_t * msg, 







uint8_t len);
# 103 "../../../tos/interfaces/AMPacket.nc"
static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 162
static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(
#line 158
message_t * amsg, 



am_id_t t);
# 53 "../../../tos/system/AMQueueEntryP.nc"
static error_t /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(message_t *m, error_t err);
# 80 "../../../tos/interfaces/AMSend.nc"
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(
# 48 "../../../tos/system/AMQueueImplP.nc"
am_id_t arg_0x7f18ef7f20d0, 
# 80 "../../../tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 100 "../../../tos/interfaces/Send.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(
# 46 "../../../tos/system/AMQueueImplP.nc"
uint8_t arg_0x7f18ef7f4cf0, 
# 96 "../../../tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 78 "../../../tos/interfaces/Packet.nc"
static uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(
#line 74
message_t * msg);
#line 94
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 67 "../../../tos/interfaces/TaskBasic.nc"
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask(void );
# 78 "../../../tos/interfaces/AMPacket.nc"
static am_addr_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(
#line 74
message_t * amsg);
#line 147
static am_id_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(
#line 143
message_t * amsg);
# 126 "../../../tos/system/AMQueueImplP.nc"
enum /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4312 {
#line 126
  AMQueueImplP__0__CancelTask = 0U
};
#line 126
typedef int /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_sillytask_CancelTask[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask];
#line 169
enum /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4313 {
#line 169
  AMQueueImplP__0__errorTask = 1U
};
#line 169
typedef int /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_sillytask_errorTask[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask];
#line 57
#line 55
typedef struct /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4314 {
  message_t * msg;
} /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue_entry_t;

uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current = 1;
/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue_entry_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[1];
uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[1 / 8 + 1];

static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void );

static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket(void );
#line 90
static inline error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(uint8_t clientId, message_t *msg, 
uint8_t len);
#line 126
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void );
#line 163
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(uint8_t last, message_t * msg, error_t err);





static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void );




static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void );
#line 189
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(am_id_t id, message_t *msg, error_t err);
#line 215
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(uint8_t id, message_t *msg, error_t err);
# 75 "../../../tos/interfaces/Send.nc"
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(
#line 67
message_t * msg, 







uint8_t len);
# 110 "../../../tos/interfaces/AMSend.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(
# 47 "../../../tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x7f18ef78a920, 
# 103 "../../../tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "../../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(
# 48 "../../../tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x7f18ef789b00, 
# 71 "../../../tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 60 "../../../tos/lib/serial/SerialActiveMessageP.nc"
static inline serial_header_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(message_t * msg);







static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len);
#line 101
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(message_t *msg, error_t result);







static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(uint8_t id, message_t *msg, void *payload, uint8_t len);



static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(message_t *msg, void *payload, uint8_t len);








static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(message_t *msg);




static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__setPayloadLength(message_t *msg, uint8_t len);



static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void );



static void */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(message_t *msg, uint8_t len);
#line 148
static am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(message_t *amsg);









static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setDestination(message_t *amsg, am_addr_t addr);
#line 172
static am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(message_t *amsg);




static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setType(message_t *amsg, am_id_t type);
# 113 "../../../tos/interfaces/SplitControl.nc"
static void SerialP__SplitControl__startDone(error_t error);
#line 138
static void SerialP__SplitControl__stopDone(error_t error);
# 67 "../../../tos/interfaces/TaskBasic.nc"
static error_t SerialP__stopDoneTask__postTask(void );
# 95 "../../../tos/interfaces/StdControl.nc"
static error_t SerialP__SerialControl__start(void );









static error_t SerialP__SerialControl__stop(void );
# 67 "../../../tos/interfaces/TaskBasic.nc"
static error_t SerialP__RunTx__postTask(void );
# 49 "../../../tos/lib/serial/SerialFlush.nc"
static void SerialP__SerialFlush__flush(void );
# 67 "../../../tos/interfaces/TaskBasic.nc"
static error_t SerialP__startDoneTask__postTask(void );
# 56 "../../../tos/lib/serial/SerialFrameComm.nc"
static error_t SerialP__SerialFrameComm__putDelimiter(void );
#line 79
static void SerialP__SerialFrameComm__resetReceive(void );
#line 65
static error_t SerialP__SerialFrameComm__putData(uint8_t data);
# 67 "../../../tos/interfaces/TaskBasic.nc"
static error_t SerialP__defaultSerialFlushTask__postTask(void );
# 81 "../../../tos/lib/serial/SendBytePacket.nc"
static uint8_t SerialP__SendBytePacket__nextByte(void );









static void SerialP__SendBytePacket__sendCompleted(error_t error);
# 62 "../../../tos/lib/serial/ReceiveBytePacket.nc"
static error_t SerialP__ReceiveBytePacket__startPacket(void );






static void SerialP__ReceiveBytePacket__byteReceived(uint8_t data);










static void SerialP__ReceiveBytePacket__endPacket(error_t result);
# 191 "../../../tos/lib/serial/SerialP.nc"
enum SerialP____nesc_unnamed4315 {
#line 191
  SerialP__RunTx = 2U
};
#line 191
typedef int SerialP____nesc_sillytask_RunTx[SerialP__RunTx];
#line 322
enum SerialP____nesc_unnamed4316 {
#line 322
  SerialP__startDoneTask = 3U
};
#line 322
typedef int SerialP____nesc_sillytask_startDoneTask[SerialP__startDoneTask];









enum SerialP____nesc_unnamed4317 {
#line 332
  SerialP__stopDoneTask = 4U
};
#line 332
typedef int SerialP____nesc_sillytask_stopDoneTask[SerialP__stopDoneTask];








enum SerialP____nesc_unnamed4318 {
#line 341
  SerialP__defaultSerialFlushTask = 5U
};
#line 341
typedef int SerialP____nesc_sillytask_defaultSerialFlushTask[SerialP__defaultSerialFlushTask];
#line 81
enum SerialP____nesc_unnamed4319 {
  SerialP__RX_DATA_BUFFER_SIZE = 2, 
  SerialP__TX_DATA_BUFFER_SIZE = 4, 
  SerialP__SERIAL_MTU = 255, 
  SerialP__SERIAL_VERSION = 1, 
  SerialP__ACK_QUEUE_SIZE = 5
};

enum SerialP____nesc_unnamed4320 {
  SerialP__RXSTATE_NOSYNC, 
  SerialP__RXSTATE_PROTO, 
  SerialP__RXSTATE_TOKEN, 
  SerialP__RXSTATE_INFO, 
  SerialP__RXSTATE_INACTIVE
};

enum SerialP____nesc_unnamed4321 {
  SerialP__TXSTATE_IDLE, 
  SerialP__TXSTATE_PROTO, 
  SerialP__TXSTATE_SEQNO, 
  SerialP__TXSTATE_INFO, 
  SerialP__TXSTATE_FCS1, 
  SerialP__TXSTATE_FCS2, 
  SerialP__TXSTATE_ENDFLAG, 
  SerialP__TXSTATE_ENDWAIT, 
  SerialP__TXSTATE_FINISH, 
  SerialP__TXSTATE_ERROR, 
  SerialP__TXSTATE_INACTIVE
};





#line 111
typedef enum SerialP____nesc_unnamed4322 {
  SerialP__BUFFER_AVAILABLE, 
  SerialP__BUFFER_FILLING, 
  SerialP__BUFFER_COMPLETE
} SerialP__tx_data_buffer_states_t;

enum SerialP____nesc_unnamed4323 {
  SerialP__TX_ACK_INDEX = 0, 
  SerialP__TX_DATA_INDEX = 1, 
  SerialP__TX_BUFFER_COUNT = 2
};






#line 124
typedef struct SerialP____nesc_unnamed4324 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP__RX_DATA_BUFFER_SIZE + 1];
} SerialP__rx_buf_t;




#line 130
typedef struct SerialP____nesc_unnamed4325 {
  uint8_t state;
  uint8_t buf;
} SerialP__tx_buf_t;





#line 135
typedef struct SerialP____nesc_unnamed4326 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP__ACK_QUEUE_SIZE + 1];
} SerialP__ack_queue_t;



SerialP__rx_buf_t SerialP__rxBuf;
SerialP__tx_buf_t SerialP__txBuf[SerialP__TX_BUFFER_COUNT];



uint8_t SerialP__rxState;
uint8_t SerialP__rxByteCnt;
uint8_t SerialP__rxProto;
uint8_t SerialP__rxSeqno;
uint16_t SerialP__rxCRC;



uint8_t SerialP__txState;
uint8_t SerialP__txByteCnt;
uint8_t SerialP__txProto;
uint8_t SerialP__txSeqno;
uint16_t SerialP__txCRC;
uint8_t SerialP__txPending;
uint8_t SerialP__txIndex;


SerialP__ack_queue_t SerialP__ackQ;

bool SerialP__offPending = FALSE;



static __inline void SerialP__txInit(void );
static __inline void SerialP__rxInit(void );
static __inline void SerialP__ackInit(void );

static __inline bool SerialP__ack_queue_is_full(void );
static __inline bool SerialP__ack_queue_is_empty(void );
static __inline void SerialP__ack_queue_push(uint8_t token);
static __inline uint8_t SerialP__ack_queue_top(void );
static inline uint8_t SerialP__ack_queue_pop(void );




static __inline void SerialP__rx_buffer_push(uint8_t data);
static __inline uint8_t SerialP__rx_buffer_top(void );
static __inline uint8_t SerialP__rx_buffer_pop(void );
static __inline uint16_t SerialP__rx_current_crc(void );

static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data);
static void SerialP__MaybeScheduleTx(void );




static __inline void SerialP__txInit(void );
#line 207
static __inline void SerialP__rxInit(void );








static __inline void SerialP__ackInit(void );



static inline error_t SerialP__Init__init(void );
#line 234
static __inline bool SerialP__ack_queue_is_full(void );









static __inline bool SerialP__ack_queue_is_empty(void );





static __inline void SerialP__ack_queue_push(uint8_t token);









static __inline uint8_t SerialP__ack_queue_top(void );









static inline uint8_t SerialP__ack_queue_pop(void );
#line 297
static __inline void SerialP__rx_buffer_push(uint8_t data);



static __inline uint8_t SerialP__rx_buffer_top(void );



static __inline uint8_t SerialP__rx_buffer_pop(void );





static __inline uint16_t SerialP__rx_current_crc(void );










static inline void SerialP__startDoneTask__runTask(void );









static inline void SerialP__stopDoneTask__runTask(void );



static inline void SerialP__SerialFlush__flushDone(void );




static inline void SerialP__defaultSerialFlushTask__runTask(void );


static inline void SerialP__SerialFlush__default__flush(void );



static inline error_t SerialP__SplitControl__start(void );








static void SerialP__testOff(void );
#line 394
static inline void SerialP__SerialFrameComm__delimiterReceived(void );


static inline void SerialP__SerialFrameComm__dataReceived(uint8_t data);



static inline bool SerialP__valid_rx_proto(uint8_t proto);










static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data);
#line 519
static void SerialP__MaybeScheduleTx(void );










static inline error_t SerialP__SendBytePacket__completeSend(void );








static inline error_t SerialP__SendBytePacket__startSend(uint8_t b);
#line 560
static inline void SerialP__RunTx__runTask(void );
#line 669
static inline void SerialP__SerialFrameComm__putDone(void );
# 67 "../../../tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask(void );
# 100 "../../../tos/interfaces/Send.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(
# 51 "../../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7f18ef64d110, 
# 96 "../../../tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 67 "../../../tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask(void );
# 78 "../../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(
# 50 "../../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7f18ef64e570, 
# 71 "../../../tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "../../../tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(
# 54 "../../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7f18ef64c4d0, 
# 31 "../../../tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(
# 54 "../../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7f18ef64c4d0);
# 23 "../../../tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(
# 54 "../../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7f18ef64c4d0, 
# 23 "../../../tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen);
# 71 "../../../tos/lib/serial/SendBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend(void );
#line 62
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(uint8_t first_byte);
# 158 "../../../tos/lib/serial/SerialDispatcherP.nc"
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4327 {
#line 158
  SerialDispatcherP__0__signalSendDone = 6U
};
#line 158
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_sillytask_signalSendDone[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone];
#line 275
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4328 {
#line 275
  SerialDispatcherP__0__receiveTask = 7U
};
#line 275
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_sillytask_receiveTask[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask];
#line 66
#line 62
typedef enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4329 {
  SerialDispatcherP__0__SEND_STATE_IDLE = 0, 
  SerialDispatcherP__0__SEND_STATE_BEGIN = 1, 
  SerialDispatcherP__0__SEND_STATE_DATA = 2
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__send_state_t;

enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4330 {
  SerialDispatcherP__0__RECV_STATE_IDLE = 0, 
  SerialDispatcherP__0__RECV_STATE_BEGIN = 1, 
  SerialDispatcherP__0__RECV_STATE_DATA = 2
};






#line 74
typedef struct /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4331 {
  uint8_t which : 1;
  uint8_t bufZeroLocked : 1;
  uint8_t bufOneLocked : 1;
  uint8_t state : 2;
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recv_state_t;



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recv_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState = { 0, 0, 0, /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE };
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = TOS_SERIAL_UNKNOWN_ID;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = 0;


message_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[2];
message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[2] = { &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[0], &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[1] };




uint8_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer = (uint8_t * )&/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[0];

uint8_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer = (void *)0;
/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__send_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex = 0;
error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = SUCCESS;
bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled = FALSE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId = 0;


uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = FALSE;
uart_id_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich;
message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf = (void *)0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize = 0;

static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(uint8_t id, message_t *msg, uint8_t len);
#line 158
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void );
#line 178
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void );
#line 194
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error);




static inline bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked(void );



static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer(void );








static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(uint8_t which);








static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap(void );




static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void );
#line 244
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t b);
#line 275
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void );
#line 296
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result);
#line 358
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(uart_id_t id);


static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen);


static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen);




static inline message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len);


static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(uart_id_t idxxx, message_t *msg, error_t error);
# 48 "../../../tos/interfaces/UartStream.nc"
static error_t HdlcTranslateC__UartStream__send(
#line 44
uint8_t * buf, 



uint16_t len);
# 94 "../../../tos/lib/serial/SerialFrameComm.nc"
static void HdlcTranslateC__SerialFrameComm__dataReceived(uint8_t data);





static void HdlcTranslateC__SerialFrameComm__putDone(void );
#line 85
static void HdlcTranslateC__SerialFrameComm__delimiterReceived(void );
# 59 "../../../tos/lib/serial/HdlcTranslateC.nc"
#line 56
typedef struct HdlcTranslateC____nesc_unnamed4332 {
  uint8_t sendEscape : 1;
  uint8_t receiveEscape : 1;
} HdlcTranslateC__HdlcState;


HdlcTranslateC__HdlcState HdlcTranslateC__state = { 0, 0 };
uint8_t HdlcTranslateC__txTemp;
uint8_t HdlcTranslateC__m_data;


static inline void HdlcTranslateC__SerialFrameComm__resetReceive(void );





static inline void HdlcTranslateC__UartStream__receivedByte(uint8_t data);
#line 98
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void );







static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data);
#line 118
static void HdlcTranslateC__UartStream__sendDone(uint8_t *buf, uint16_t len, 
error_t error);
#line 132
static inline void HdlcTranslateC__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error);
# 39 "../../../tos/chips/msp430/usart/Msp430UartConfigure.nc"
static msp430_uart_union_config_t */*Msp430Uart0P.UartP*/Msp430UartP__0__Msp430UartConfigure__getConfig(
# 49 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7f18ef539890);
# 97 "../../../tos/chips/msp430/usart/HplMsp430Usart.nc"
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__Usart__resetUsart(bool reset);
#line 179
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__Usart__disableIntr(void );


static void /*Msp430Uart0P.UartP*/Msp430UartP__0__Usart__enableIntr(void );
#line 224
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__Usart__tx(uint8_t data);
#line 128
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__Usart__disableUart(void );
#line 174
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__Usart__setModeUart(msp430_uart_union_config_t *config);
# 79 "../../../tos/interfaces/UartStream.nc"
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__receivedByte(
# 45 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7f18ef53de60, 
# 79 "../../../tos/interfaces/UartStream.nc"
uint8_t byte);
#line 99
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__receiveDone(
# 45 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7f18ef53de60, 
# 95 "../../../tos/interfaces/UartStream.nc"
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__sendDone(
# 45 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7f18ef53de60, 
# 53 "../../../tos/interfaces/UartStream.nc"
uint8_t * buf, 



uint16_t len, error_t error);
# 120 "../../../tos/interfaces/Resource.nc"
static error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__release(
# 48 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7f18ef53a580);
# 97 "../../../tos/interfaces/Resource.nc"
static error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__immediateRequest(
# 48 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7f18ef53a580);
# 128 "../../../tos/interfaces/Resource.nc"
static bool /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__isOwner(
# 48 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7f18ef53a580);
# 102 "../../../tos/interfaces/Resource.nc"
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__Resource__granted(
# 43 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7f18ef540e10);
#line 59
uint16_t /*Msp430Uart0P.UartP*/Msp430UartP__0__m_tx_len;
#line 59
uint16_t /*Msp430Uart0P.UartP*/Msp430UartP__0__m_rx_len;
uint8_t * /*Msp430Uart0P.UartP*/Msp430UartP__0__m_tx_buf;
#line 60
uint8_t * /*Msp430Uart0P.UartP*/Msp430UartP__0__m_rx_buf;
uint16_t /*Msp430Uart0P.UartP*/Msp430UartP__0__m_tx_pos;
#line 61
uint16_t /*Msp430Uart0P.UartP*/Msp430UartP__0__m_rx_pos;
uint8_t /*Msp430Uart0P.UartP*/Msp430UartP__0__m_byte_time;
uint8_t /*Msp430Uart0P.UartP*/Msp430UartP__0__current_owner;

static inline error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__Resource__immediateRequest(uint8_t id);
#line 77
static inline error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__Resource__release(uint8_t id);







static void /*Msp430Uart0P.UartP*/Msp430UartP__0__ResourceConfigure__configure(uint8_t id);






static inline void /*Msp430Uart0P.UartP*/Msp430UartP__0__ResourceConfigure__unconfigure(uint8_t id);








static inline void /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__granted(uint8_t id);
#line 134
static inline void /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartInterrupts__rxDone(uint8_t id, uint8_t data);
#line 147
static error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__send(uint8_t id, uint8_t *buf, uint16_t len);
#line 162
static inline void /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartInterrupts__txDone(uint8_t id);
#line 228
static inline void /*Msp430Uart0P.UartP*/Msp430UartP__0__Counter__overflow(void );

static inline bool /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__default__isOwner(uint8_t id);

static inline error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__default__immediateRequest(uint8_t id);
static inline error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__default__release(uint8_t id);
static inline msp430_uart_union_config_t */*Msp430Uart0P.UartP*/Msp430UartP__0__Msp430UartConfigure__default__getConfig(uint8_t id);



static inline void /*Msp430Uart0P.UartP*/Msp430UartP__0__Resource__default__granted(uint8_t id);

static inline void /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__default__sendDone(uint8_t id, uint8_t *buf, uint16_t len, error_t error);
static inline void /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__default__receivedByte(uint8_t id, uint8_t byte);
static inline void /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__default__receiveDone(uint8_t id, uint8_t *buf, uint16_t len, error_t error);
# 99 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430Usart0P__UCLK__selectIOFunc(void );
# 54 "../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void HplMsp430Usart0P__Interrupts__rxDone(uint8_t data);
#line 49
static void HplMsp430Usart0P__Interrupts__txDone(void );
# 99 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430Usart0P__URXD__selectIOFunc(void );
#line 92
static void HplMsp430Usart0P__URXD__selectModuleFunc(void );






static void HplMsp430Usart0P__UTXD__selectIOFunc(void );
#line 92
static void HplMsp430Usart0P__UTXD__selectModuleFunc(void );
# 7 "../../../tos/chips/msp430/usart/HplMsp430I2C.nc"
static void HplMsp430Usart0P__HplI2C__clearModeI2C(void );
#line 6
static bool HplMsp430Usart0P__HplI2C__isI2C(void );
# 99 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430Usart0P__SOMI__selectIOFunc(void );
# 39 "../../../tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc"
static void HplMsp430Usart0P__I2CInterrupts__fired(void );
# 99 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430Usart0P__SIMO__selectIOFunc(void );
# 91 "../../../tos/platforms/shimmer/chips/msp430/HplMsp430Usart0P.nc"
static volatile uint8_t HplMsp430Usart0P__IE1 __asm ("0x0000");
static volatile uint8_t HplMsp430Usart0P__ME1 __asm ("0x0004");
static volatile uint8_t HplMsp430Usart0P__IFG1 __asm ("0x0002");
static volatile uint8_t HplMsp430Usart0P__U0TCTL __asm ("0x0071");
static volatile uint8_t HplMsp430Usart0P__U0RCTL __asm ("0x0072");
static volatile uint8_t HplMsp430Usart0P__U0TXBUF __asm ("0x0077");

void sig_UART0RX_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x0012)))  ;





void sig_UART0TX_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x0010)))  ;
#line 139
static inline void HplMsp430Usart0P__Usart__setUbr(uint16_t control);










static inline void HplMsp430Usart0P__Usart__setUmctl(uint8_t control);







static inline void HplMsp430Usart0P__Usart__resetUsart(bool reset);
#line 206
static inline void HplMsp430Usart0P__Usart__enableUart(void );







static void HplMsp430Usart0P__Usart__disableUart(void );








static inline void HplMsp430Usart0P__Usart__enableUartTx(void );




static inline void HplMsp430Usart0P__Usart__disableUartTx(void );





static inline void HplMsp430Usart0P__Usart__enableUartRx(void );




static inline void HplMsp430Usart0P__Usart__disableUartRx(void );
#line 254
static inline void HplMsp430Usart0P__Usart__disableSpi(void );
#line 287
static inline void HplMsp430Usart0P__configUart(msp430_uart_union_config_t *config);









static inline void HplMsp430Usart0P__Usart__setModeUart(msp430_uart_union_config_t *config);
#line 352
static inline void HplMsp430Usart0P__Usart__clrIntr(void );
#line 364
static inline void HplMsp430Usart0P__Usart__disableIntr(void );
#line 382
static inline void HplMsp430Usart0P__Usart__enableIntr(void );






static inline void HplMsp430Usart0P__Usart__tx(uint8_t data);
# 67 "../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectIOFunc(void );
#line 67
static inline void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectIOFunc(void );
#line 67
static inline void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectIOFunc(void );
#line 65
static inline void /*HplMsp430GeneralIOC.P34*/HplMsp430GeneralIOP__20__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P34*/HplMsp430GeneralIOP__20__IO__selectIOFunc(void );
#line 65
static inline void /*HplMsp430GeneralIOC.P35*/HplMsp430GeneralIOP__21__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P35*/HplMsp430GeneralIOP__21__IO__selectIOFunc(void );
#line 65
static inline void /*HplMsp430GeneralIOC.P36*/HplMsp430GeneralIOP__22__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P36*/HplMsp430GeneralIOP__22__IO__selectIOFunc(void );
#line 65
static inline void /*HplMsp430GeneralIOC.P37*/HplMsp430GeneralIOP__23__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P37*/HplMsp430GeneralIOP__23__IO__selectIOFunc(void );
#line 56
static inline void /*HplMsp430GeneralIOC.P40*/HplMsp430GeneralIOP__24__IO__set(void );
static inline void /*HplMsp430GeneralIOC.P40*/HplMsp430GeneralIOP__24__IO__clr(void );





static inline void /*HplMsp430GeneralIOC.P40*/HplMsp430GeneralIOP__24__IO__makeOutput(void );
#line 56
static void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__set(void );

static inline void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__toggle(void );




static inline void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__makeOutput(void );
#line 56
static inline void /*HplMsp430GeneralIOC.P43*/HplMsp430GeneralIOP__27__IO__set(void );
static inline void /*HplMsp430GeneralIOC.P43*/HplMsp430GeneralIOP__27__IO__clr(void );





static inline void /*HplMsp430GeneralIOC.P43*/HplMsp430GeneralIOP__27__IO__makeOutput(void );



static inline void /*HplMsp430GeneralIOC.P51*/HplMsp430GeneralIOP__33__IO__selectIOFunc(void );
#line 67
static inline void /*HplMsp430GeneralIOC.P52*/HplMsp430GeneralIOP__34__IO__selectIOFunc(void );
#line 67
static inline void /*HplMsp430GeneralIOC.P53*/HplMsp430GeneralIOP__35__IO__selectIOFunc(void );
# 45 "../../../tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__get(void );
static bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__isOverflowPending(void );
# 82 "../../../tos/lib/timer/Counter.nc"
static void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__overflow(void );
# 49 "../../../tos/chips/msp430/timer/Msp430CounterC.nc"
static inline uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__get(void );




static inline bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__isOverflowPending(void );









static inline void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__overflow(void );
# 46 "../../../tos/interfaces/GeneralIO.nc"
static void LedsP__Led0__makeOutput(void );
#line 40
static void LedsP__Led0__set(void );
static void LedsP__Led0__clr(void );
static void LedsP__Led1__toggle(void );



static void LedsP__Led1__makeOutput(void );
#line 40
static void LedsP__Led1__set(void );





static void LedsP__Led2__makeOutput(void );
#line 40
static void LedsP__Led2__set(void );
static void LedsP__Led2__clr(void );
# 57 "../../../tos/platforms/shimmer2r/LedsP.nc"
static inline error_t LedsP__Init__init(void );
#line 75
static inline void LedsP__Leds__led0On(void );
#line 95
static inline void LedsP__Leds__led1Off(void );




static inline void LedsP__Leds__led1Toggle(void );




static inline void LedsP__Leds__led2On(void );




static inline void LedsP__Leds__led2Off(void );
# 85 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__makeOutput(void );
#line 48
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__set(void );




static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__clr(void );
# 48 "../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__set(void );
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__clr(void );




static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__makeOutput(void );
# 58 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__toggle(void );
#line 85
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__makeOutput(void );
#line 48
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__set(void );
# 48 "../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__set(void );

static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__toggle(void );



static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__makeOutput(void );
# 85 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__makeOutput(void );
#line 48
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__set(void );




static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__clr(void );
# 48 "../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__set(void );
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__clr(void );




static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__makeOutput(void );
# 90 "../../../tos/interfaces/ArbiterInfo.nc"
static bool /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__inUse(void );







static uint8_t /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__userId(void );
# 54 "../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__rxDone(
# 39 "../../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x7f18ef122600, 
# 54 "../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
uint8_t data);
#line 49
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__txDone(
# 39 "../../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x7f18ef122600);
# 39 "../../../tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc"
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__I2CInterrupts__fired(
# 40 "../../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x7f18ef1214e0);








static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__txDone(void );




static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__rxDone(uint8_t data);




static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawI2CInterrupts__fired(void );




static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__txDone(uint8_t id);
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__rxDone(uint8_t id, uint8_t data);
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__I2CInterrupts__default__fired(uint8_t id);
# 49 "../../../tos/system/FcfsResourceQueueC.nc"
enum /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0____nesc_unnamed4333 {
#line 49
  FcfsResourceQueueC__0__NO_ENTRY = 0xFF
};
uint8_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__resQ[1U];
uint8_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__qHead = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
uint8_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__qTail = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

static inline error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__Init__init(void );




static inline bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );







static inline resource_client_id_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
# 61 "../../../tos/interfaces/ResourceRequested.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__immediateRequested(
# 55 "../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7f18ef0e2cf0);
# 65 "../../../tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(
# 60 "../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7f18ef0de240);
# 59 "../../../tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__configure(
# 60 "../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7f18ef0de240);
# 53 "../../../tos/interfaces/ResourceQueue.nc"
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__dequeue(void );
# 46 "../../../tos/interfaces/ResourceDefaultOwner.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted(void );
#line 81
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__immediateRequested(void );
# 102 "../../../tos/interfaces/Resource.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__granted(
# 54 "../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7f18ef0e3a50);
# 67 "../../../tos/interfaces/TaskBasic.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__postTask(void );
# 75 "../../../tos/system/ArbiterP.nc"
enum /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0____nesc_unnamed4334 {
#line 75
  ArbiterP__0__grantedTask = 8U
};
#line 75
typedef int /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0____nesc_sillytask_grantedTask[/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask];
#line 67
enum /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0____nesc_unnamed4335 {
#line 67
  ArbiterP__0__RES_CONTROLLED, ArbiterP__0__RES_GRANTING, ArbiterP__0__RES_IMM_GRANTING, ArbiterP__0__RES_BUSY
};
#line 68
enum /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0____nesc_unnamed4336 {
#line 68
  ArbiterP__0__default_owner_id = 1U
};
#line 69
enum /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0____nesc_unnamed4337 {
#line 69
  ArbiterP__0__NO_RES = 0xFF
};
uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_CONTROLLED;
uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__default_owner_id;
uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__reqResId;
#line 93
static inline error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__immediateRequest(uint8_t id);
#line 111
static inline error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__release(uint8_t id);
#line 133
static inline error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void );
#line 153
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__inUse(void );
#line 166
static uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__userId(void );










static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__isOwner(uint8_t id);
#line 190
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__runTask(void );
#line 202
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__default__granted(uint8_t id);



static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__immediateRequested(uint8_t id);

static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__granted(void );




static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__immediateRequested(void );


static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(uint8_t id);

static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id);
# 97 "../../../tos/chips/msp430/usart/HplMsp430Usart.nc"
static void HplMsp430I2C0P__HplUsart__resetUsart(bool reset);
# 49 "../../../tos/platforms/shimmer/chips/msp430/HplMsp430I2C0P.nc"
static volatile uint8_t HplMsp430I2C0P__U0CTL __asm ("0x0070");





static inline bool HplMsp430I2C0P__HplI2C__isI2C(void );



static inline void HplMsp430I2C0P__HplI2C__clearModeI2C(void );
# 120 "../../../tos/interfaces/Resource.nc"
static error_t ShimmerSerialP__Resource__release(void );
#line 97
static error_t ShimmerSerialP__Resource__immediateRequest(void );
# 42 "../../../tos/platforms/shimmer2r/ShimmerSerialP.nc"
msp430_uart_union_config_t ShimmerSerialP__msp430_uart_shimmer2_config = { 
{ .ubr = UBR_1MHZ_115200, 
.umctl = UMCTL_1MHZ_115200, 
.ssel = 0x02, 
.pena = 0, 
.pev = 0, 
.spb = 0, 
.clen = 1, 
.listen = 0, 
.mm = 0, 
.ckpl = 0, 
.urxse = 0, 
.urxeie = 1, 
.urxwie = 0, 
.utxe = 1, 
.urxe = 1 } };



static inline error_t ShimmerSerialP__StdControl__start(void );



static inline error_t ShimmerSerialP__StdControl__stop(void );




static inline void ShimmerSerialP__Resource__granted(void );

static inline msp430_uart_union_config_t *ShimmerSerialP__Msp430UartConfigure__getConfig(void );
# 51 "../../../tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__offset(void );


static inline uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen);


static inline uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen);
# 48 "../../../tos/system/QueueC.nc"
/*PrintfC.QueueC*/QueueC__0__queue_t  /*PrintfC.QueueC*/QueueC__0__queue[250];
uint8_t /*PrintfC.QueueC*/QueueC__0__head = 0;
uint8_t /*PrintfC.QueueC*/QueueC__0__tail = 0;
uint8_t /*PrintfC.QueueC*/QueueC__0__size = 0;

static inline bool /*PrintfC.QueueC*/QueueC__0__Queue__empty(void );







static inline uint8_t /*PrintfC.QueueC*/QueueC__0__Queue__size(void );



static inline uint8_t /*PrintfC.QueueC*/QueueC__0__Queue__maxSize(void );



static inline /*PrintfC.QueueC*/QueueC__0__queue_t /*PrintfC.QueueC*/QueueC__0__Queue__head(void );



static inline void /*PrintfC.QueueC*/QueueC__0__printQueue(void );
#line 89
static inline /*PrintfC.QueueC*/QueueC__0__queue_t /*PrintfC.QueueC*/QueueC__0__Queue__dequeue(void );
#line 101
static inline error_t /*PrintfC.QueueC*/QueueC__0__Queue__enqueue(/*PrintfC.QueueC*/QueueC__0__queue_t newVal);
# 97 "../../../tos/interfaces/Queue.nc"
static error_t PrintfP__Queue__enqueue(
#line 93
PrintfP__Queue__t  newVal);
#line 88
static 
#line 86
PrintfP__Queue__t  

PrintfP__Queue__dequeue(void );
#line 50
static bool PrintfP__Queue__empty(void );
#line 65
static uint8_t PrintfP__Queue__size(void );
# 80 "../../../tos/interfaces/AMSend.nc"
static error_t PrintfP__AMSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 126 "../../../tos/interfaces/Packet.nc"
static 
#line 123
void * 


PrintfP__Packet__getPayload(
#line 121
message_t * msg, 




uint8_t len);
# 67 "../../../tos/interfaces/TaskBasic.nc"
static error_t PrintfP__retrySend__postTask(void );
# 114 "../../../tos/lib/printf/PrintfP.nc"
enum PrintfP____nesc_unnamed4338 {
#line 114
  PrintfP__retrySend = 9U
};
#line 114
typedef int PrintfP____nesc_sillytask_retrySend[PrintfP__retrySend];
#line 101
enum PrintfP____nesc_unnamed4339 {
  PrintfP__S_STARTED, 
  PrintfP__S_FLUSHING
};

message_t PrintfP__printfMsg;
uint8_t PrintfP__state = PrintfP__S_STARTED;

static inline error_t PrintfP__Init__init(void );




static inline void PrintfP__retrySend__runTask(void );




static void PrintfP__sendNext(void );










int printfflush(void )   ;
#line 142
static void PrintfP__AMSend__sendDone(message_t *msg, error_t error);









static inline int PrintfP__Putchar__putchar(int c);
# 49 "../../../tos/lib/printf/Putchar.nc"
static int PutcharP__Putchar__putchar(int c);
# 98 "../../../tos/lib/printf/PutcharP.nc"
static inline error_t PutcharP__Init__init(void );








int putchar(int c) __attribute((noinline))   ;
# 104 "../../../tos/interfaces/SplitControl.nc"
static error_t SerialStartP__SerialControl__start(void );
# 44 "../../../tos/lib/serial/SerialStartP.nc"
static inline void SerialStartP__Boot__booted(void );



static inline void SerialStartP__SerialControl__startDone(error_t error);
static inline void SerialStartP__SerialControl__stopDone(error_t error);
# 64 "../../../tos/lib/timer/Timer.nc"
static void SimpleAccelC__ActivityTimer__startPeriodic(uint32_t dt);
#line 78
static void SimpleAccelC__ActivityTimer__stop(void );
#line 64
static void SimpleAccelC__SampleTimer__startPeriodic(uint32_t dt);
#line 78
static void SimpleAccelC__SampleTimer__stop(void );
# 102 "../../../tos/chips/msp430/dma/Msp430DmaChannel.nc"
static error_t SimpleAccelC__DMA0__stopTransfer(void );
#line 91
static error_t SimpleAccelC__DMA0__repeatTransfer(void *src_addr, void *dst_addr, 
uint16_t size);
# 62 "../../../tos/interfaces/Init.nc"
static error_t SimpleAccelC__BluetoothInit__init(void );
# 67 "../../../tos/interfaces/TaskBasic.nc"
static error_t SimpleAccelC__stopSensing__postTask(void );
# 84 "../../../tos/platforms/shimmer2r/Leds.nc"
static void SimpleAccelC__Leds__led1Toggle(void );
#line 78
static void SimpleAccelC__Leds__led1Off(void );
#line 95
static void SimpleAccelC__Leds__led2Off(void );
#line 57
static void SimpleAccelC__Leds__led0On(void );
#line 90
static void SimpleAccelC__Leds__led2On(void );
# 67 "../../../tos/interfaces/TaskBasic.nc"
static error_t SimpleAccelC__sendSensorData__postTask(void );
#line 67
static error_t SimpleAccelC__startSensing__postTask(void );
# 51 "../../../tos/platforms/shimmer/chips/bluetooth/Bluetooth.nc"
static error_t SimpleAccelC__Bluetooth__write(const uint8_t *buf, uint8_t len);
# 62 "../../../tos/interfaces/Init.nc"
static error_t SimpleAccelC__AccelInit__init(void );
# 95 "../../../tos/interfaces/StdControl.nc"
static error_t SimpleAccelC__BTStdControl__start(void );
# 54 "../../../tos/platforms/shimmer/chips/mma7260/Mma_Accel.nc"
static void SimpleAccelC__Accel__setSensitivity(uint8_t sensitivity);
#line 47
static void SimpleAccelC__Accel__wake(bool wakeup);
# 46 "../../../tos/platforms/shimmer/shimmerAnalogSetup.nc"
static void SimpleAccelC__shimmerAnalogSetup__addAccelInputs(void );
#line 79
static void SimpleAccelC__shimmerAnalogSetup__triggerConversion(void );



static uint8_t SimpleAccelC__shimmerAnalogSetup__getNumberOfChannels(void );
#line 64
static void SimpleAccelC__shimmerAnalogSetup__addAnExInput(uint8_t channel);
#line 77
static void SimpleAccelC__shimmerAnalogSetup__finishADCSetup(uint16_t *buffer);



static void SimpleAccelC__shimmerAnalogSetup__stopConversion(void );
# 92 "SimpleAccelC.nc"
enum SimpleAccelC____nesc_unnamed4340 {
#line 92
  SimpleAccelC__sendSensorData = 10U
};
#line 92
typedef int SimpleAccelC____nesc_sillytask_sendSensorData[SimpleAccelC__sendSensorData];









enum SimpleAccelC____nesc_unnamed4341 {
#line 102
  SimpleAccelC__startSensing = 11U
};
#line 102
typedef int SimpleAccelC____nesc_sillytask_startSensing[SimpleAccelC__startSensing];





enum SimpleAccelC____nesc_unnamed4342 {
#line 108
  SimpleAccelC__stopSensing = 12U
};
#line 108
typedef int SimpleAccelC____nesc_sillytask_stopSensing[SimpleAccelC__stopSensing];
#line 60
uint8_t SimpleAccelC__NBR_ADC_CHANS;
#line 60
uint8_t SimpleAccelC__dma_blocks;
uint8_t SimpleAccelC__current_buffer;
uint16_t SimpleAccelC__sbuf0[60];
#line 62
uint16_t SimpleAccelC__sbuf1[60];
bool SimpleAccelC__enable_sending;
#line 63
bool SimpleAccelC__command_mode_complete;

uint16_t SimpleAccelC__sample_freq = 100;

static inline void SimpleAccelC__init(void );
#line 87
static inline void SimpleAccelC__Boot__booted(void );




static inline void SimpleAccelC__sendSensorData__runTask(void );









static inline void SimpleAccelC__startSensing__runTask(void );





static inline void SimpleAccelC__stopSensing__runTask(void );








static inline void SimpleAccelC__Bluetooth__connectionMade(uint8_t status);





static inline void SimpleAccelC__Bluetooth__commandModeEnded(void );



static inline void SimpleAccelC__Bluetooth__connectionClosed(uint8_t reason);





static inline void SimpleAccelC__Bluetooth__dataAvailable(uint8_t data);


static inline void SimpleAccelC__Bluetooth__writeDone(void );



static inline void SimpleAccelC__ActivityTimer__fired(void );



static inline void SimpleAccelC__SampleTimer__fired(void );





static inline void SimpleAccelC__DMA0__transferDone(error_t success);
# 41 "../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEvent(uint16_t time);

static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEventFromNow(uint16_t delta);
# 45 "../../../tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__get(void );
# 78 "../../../tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__fired(void );
# 57 "../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__enableEvents(void );
#line 47
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__setControlAsCompare(void );










static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents(void );
#line 44
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__clearPendingInterrupt(void );
# 53 "../../../tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline error_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Init__init(void );
#line 65
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__stop(void );




static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__fired(void );










static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__startAt(uint16_t t0, uint16_t dt);
#line 114
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__overflow(void );
# 64 "../../../tos/lib/timer/Counter.nc"
static /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__size_type /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__get(void );






static bool /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__isOverflowPending(void );










static void /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__overflow(void );
# 67 "../../../tos/lib/timer/TransformCounterC.nc"
/*CounterMilli32C.Transform*/TransformCounterC__0__upper_count_type /*CounterMilli32C.Transform*/TransformCounterC__0__m_upper;

enum /*CounterMilli32C.Transform*/TransformCounterC__0____nesc_unnamed4343 {

  TransformCounterC__0__LOW_SHIFT_RIGHT = 5, 
  TransformCounterC__0__HIGH_SHIFT_LEFT = 8 * sizeof(/*CounterMilli32C.Transform*/TransformCounterC__0__from_size_type ) - /*CounterMilli32C.Transform*/TransformCounterC__0__LOW_SHIFT_RIGHT, 
  TransformCounterC__0__NUM_UPPER_BITS = 8 * sizeof(/*CounterMilli32C.Transform*/TransformCounterC__0__to_size_type ) - 8 * sizeof(/*CounterMilli32C.Transform*/TransformCounterC__0__from_size_type ) + 5, 



  TransformCounterC__0__OVERFLOW_MASK = /*CounterMilli32C.Transform*/TransformCounterC__0__NUM_UPPER_BITS ? ((/*CounterMilli32C.Transform*/TransformCounterC__0__upper_count_type )2 << (/*CounterMilli32C.Transform*/TransformCounterC__0__NUM_UPPER_BITS - 1)) - 1 : 0
};

static /*CounterMilli32C.Transform*/TransformCounterC__0__to_size_type /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__get(void );
#line 133
static inline void /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__overflow(void );
# 78 "../../../tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__fired(void );
#line 103
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type dt);
#line 73
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__stop(void );
# 64 "../../../tos/lib/timer/Counter.nc"
static /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__get(void );
# 77 "../../../tos/lib/timer/TransformAlarmC.nc"
/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_t0;
/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_dt;

enum /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0____nesc_unnamed4344 {

  TransformAlarmC__0__MAX_DELAY_LOG2 = 8 * sizeof(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__from_size_type ) - 1 - 5, 
  TransformAlarmC__0__MAX_DELAY = (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type )1 << /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__MAX_DELAY_LOG2
};

static inline /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__getNow(void );




static inline /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__getAlarm(void );










static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__stop(void );




static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__set_alarm(void );
#line 147
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type dt);
#line 162
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__fired(void );
#line 177
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__overflow(void );
# 67 "../../../tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void );
# 109 "../../../tos/lib/timer/Alarm.nc"
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void );
#line 103
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt);
#line 116
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void );
#line 73
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void );
# 83 "../../../tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void );
# 74 "../../../tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_unnamed4345 {
#line 74
  AlarmToTimerC__0__fired = 13U
};
#line 74
typedef int /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_sillytask_fired[/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired];
#line 55
uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt;
bool /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot;

static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot);
#line 71
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );


static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );






static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
#line 93
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);


static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
# 67 "../../../tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void );
# 136 "../../../tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void );
#line 129
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(
# 48 "../../../tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7f18eed6c020);
#line 71
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4346 {
#line 71
  VirtualizeTimerC__0__updateFromTimer = 14U
};
#line 71
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer];
#line 53
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4347 {

  VirtualizeTimerC__0__NUM_TIMERS = 2U, 
  VirtualizeTimerC__0__END_OF_LIST = 255
};








#line 59
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4348 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t;

/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS];




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now);
#line 100
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
#line 139
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);









static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt);









static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num);
#line 204
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num);
# 58 "../../../tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 67 "../../../tos/interfaces/TaskBasic.nc"
static error_t RovingNetworksP__runSetCommands__postTask(void );
#line 67
static error_t RovingNetworksP__runMasterCommands__postTask(void );
# 52 "../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void RovingNetworksP__ConnectionInterrupt__clear(void );
#line 67
static void RovingNetworksP__ConnectionInterrupt__edge(bool low_to_high);
#line 42
static void RovingNetworksP__ConnectionInterrupt__enable(void );
#line 59
static bool RovingNetworksP__ConnectionInterrupt__getValue(void );
# 180 "../../../tos/chips/msp430/usart/HplMsp430Usart.nc"
static void RovingNetworksP__UARTControl__enableRxIntr(void );
static void RovingNetworksP__UARTControl__enableTxIntr(void );
#line 224
static void RovingNetworksP__UARTControl__tx(uint8_t data);
#line 174
static void RovingNetworksP__UARTControl__setModeUart(msp430_uart_union_config_t *config);
# 52 "../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void RovingNetworksP__RTSInterrupt__clear(void );
#line 67
static void RovingNetworksP__RTSInterrupt__edge(bool low_to_high);
#line 42
static void RovingNetworksP__RTSInterrupt__enable(void );
#line 59
static bool RovingNetworksP__RTSInterrupt__getValue(void );
# 103 "../../../tos/platforms/shimmer/chips/bluetooth/Bluetooth.nc"
static void RovingNetworksP__Bluetooth__dataAvailable(uint8_t data);
#line 94
static void RovingNetworksP__Bluetooth__connectionClosed(uint8_t reason);









static void RovingNetworksP__Bluetooth__writeDone(void );
#line 93
static void RovingNetworksP__Bluetooth__connectionMade(uint8_t status);

static void RovingNetworksP__Bluetooth__commandModeEnded(void );
# 67 "../../../tos/interfaces/TaskBasic.nc"
static error_t RovingNetworksP__sendNextChar__postTask(void );
# 88 "../../../tos/platforms/shimmer/chips/bluetooth/RovingNetworksP.nc"
enum RovingNetworksP____nesc_unnamed4349 {
#line 88
  RovingNetworksP__sendNextChar = 15U
};
#line 88
typedef int RovingNetworksP____nesc_sillytask_sendNextChar[RovingNetworksP__sendNextChar];
#line 302
enum RovingNetworksP____nesc_unnamed4350 {
#line 302
  RovingNetworksP__runMasterCommands = 16U
};
#line 302
typedef int RovingNetworksP____nesc_sillytask_runMasterCommands[RovingNetworksP__runMasterCommands];
#line 376
enum RovingNetworksP____nesc_unnamed4351 {
#line 376
  RovingNetworksP__runSetCommands = 17U
};
#line 376
typedef int RovingNetworksP____nesc_sillytask_runSetCommands[RovingNetworksP__runSetCommands];
#line 64
extern int sprintf(char *str, const char *format, ...)  ;


uint8_t RovingNetworksP__radioMode;
#line 67
uint8_t RovingNetworksP__charsSent;
#line 67
uint8_t RovingNetworksP__setupStep;
bool RovingNetworksP__discoverable;
#line 68
bool RovingNetworksP__authenticate;
#line 68
bool RovingNetworksP__encrypt;
#line 68
bool RovingNetworksP__setNameRequest;
#line 68
bool RovingNetworksP__setPINRequest;
#line 68
bool RovingNetworksP__resetDefaultsRequest;
#line 68
bool 
RovingNetworksP__setSvcClassRequest;
#line 69
#line 68
bool 
RovingNetworksP__setDevClassRequest;
#line 69
#line 68
bool 
RovingNetworksP__setSvcNameRequest;
#line 69
#line 68
bool 
RovingNetworksP__setRawBaudrate;
#line 69
#line 68
bool 
RovingNetworksP__setBaudrate;
#line 69
#line 68
bool 
RovingNetworksP__disableRemoteConfig;
#line 69
#line 68
bool 
RovingNetworksP__newMode;
#line 68
bool 

RovingNetworksP__setCustomInquiryTime;
#line 70
#line 68
bool 

RovingNetworksP__setCustomPagingTime;

char RovingNetworksP__commandbuf[32];



int RovingNetworksP__masterStep;
bool RovingNetworksP__deviceConn;
#line 77
bool RovingNetworksP__btConnected;
#line 77
bool RovingNetworksP__runningMasterCommands;
char RovingNetworksP__targetBt[16];

bool RovingNetworksP__transmissionOverflow;
#line 80
bool RovingNetworksP__messageInProgress;
char RovingNetworksP__expectedCommandResponse[8];
#line 81
char RovingNetworksP__newName[17];
#line 81
char RovingNetworksP__newPIN[17];
#line 81
char RovingNetworksP__newSvcClass[5];
#line 81
char RovingNetworksP__newDevClass[5];
#line 81
char RovingNetworksP__newSvcName[17];
#line 81
char RovingNetworksP__newRawBaudrate[5];
#line 81
char 
RovingNetworksP__newBaudrate[5];
#line 82
#line 81
char 
RovingNetworksP__newInquiryTime[5];
#line 82
#line 81
char 
RovingNetworksP__newPagingTime[5];

struct Message RovingNetworksP__incomingMsg;
uint8_t *RovingNetworksP__outgoingMsg;
#line 85
uint8_t RovingNetworksP__outgoingMsgLen;


static inline void RovingNetworksP__sendNextChar__runTask(void );
#line 101
static error_t RovingNetworksP__Bluetooth__write(const uint8_t *buf, uint8_t len);
#line 117
static inline void RovingNetworksP__initRN(void );
#line 143
static inline void RovingNetworksP__setupUART(void );
#line 183
static error_t RovingNetworksP__writeCommand(char *cmd, char *response);
#line 195
static error_t RovingNetworksP__writeCommandNoRsp(char *cmd);
#line 302
static inline void RovingNetworksP__runMasterCommands__runTask(void );
#line 376
static inline void RovingNetworksP__runSetCommands__runTask(void );
#line 518
static inline error_t RovingNetworksP__Init__init(void );
#line 562
static inline error_t RovingNetworksP__StdControl__start(void );
#line 590
static inline void RovingNetworksP__UARTData__rxDone(uint8_t data);
#line 616
static inline void RovingNetworksP__UARTData__txDone(void );






static inline void RovingNetworksP__RTSInterrupt__fired(void );
#line 636
static inline void RovingNetworksP__ConnectionInterrupt__fired(void );
# 72 "../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void HplMsp430InterruptP__Port14__fired(void );
#line 72
static void HplMsp430InterruptP__Port26__fired(void );
#line 72
static void HplMsp430InterruptP__Port17__fired(void );
#line 72
static void HplMsp430InterruptP__Port21__fired(void );
#line 72
static void HplMsp430InterruptP__Port12__fired(void );
#line 72
static void HplMsp430InterruptP__Port24__fired(void );
#line 72
static void HplMsp430InterruptP__Port15__fired(void );
#line 72
static void HplMsp430InterruptP__Port27__fired(void );
#line 72
static void HplMsp430InterruptP__Port10__fired(void );
#line 72
static void HplMsp430InterruptP__Port22__fired(void );
#line 72
static void HplMsp430InterruptP__Port13__fired(void );
#line 72
static void HplMsp430InterruptP__Port25__fired(void );
#line 72
static void HplMsp430InterruptP__Port16__fired(void );
#line 72
static void HplMsp430InterruptP__Port20__fired(void );
#line 72
static void HplMsp430InterruptP__Port11__fired(void );
#line 72
static void HplMsp430InterruptP__Port23__fired(void );
# 64 "../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
void sig_PORT1_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x0008)))  ;
#line 78
static inline void HplMsp430InterruptP__Port10__default__fired(void );
static inline void HplMsp430InterruptP__Port11__default__fired(void );
static inline void HplMsp430InterruptP__Port12__default__fired(void );
static inline void HplMsp430InterruptP__Port13__default__fired(void );
static inline void HplMsp430InterruptP__Port14__default__fired(void );
static inline void HplMsp430InterruptP__Port15__default__fired(void );

static inline void HplMsp430InterruptP__Port17__default__fired(void );






static inline void HplMsp430InterruptP__Port16__enable(void );









static inline void HplMsp430InterruptP__Port10__clear(void );
static inline void HplMsp430InterruptP__Port11__clear(void );
static inline void HplMsp430InterruptP__Port12__clear(void );
static inline void HplMsp430InterruptP__Port13__clear(void );
static inline void HplMsp430InterruptP__Port14__clear(void );
static inline void HplMsp430InterruptP__Port15__clear(void );
static inline void HplMsp430InterruptP__Port16__clear(void );
static inline void HplMsp430InterruptP__Port17__clear(void );






static inline bool HplMsp430InterruptP__Port16__getValue(void );
#line 154
static void HplMsp430InterruptP__Port16__edge(bool l2h);
#line 169
void sig_PORT2_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x0002)))  ;
#line 182
static inline void HplMsp430InterruptP__Port20__default__fired(void );
static inline void HplMsp430InterruptP__Port21__default__fired(void );
static inline void HplMsp430InterruptP__Port22__default__fired(void );
static inline void HplMsp430InterruptP__Port23__default__fired(void );
static inline void HplMsp430InterruptP__Port24__default__fired(void );
static inline void HplMsp430InterruptP__Port25__default__fired(void );

static inline void HplMsp430InterruptP__Port27__default__fired(void );






static inline void HplMsp430InterruptP__Port26__enable(void );









static inline void HplMsp430InterruptP__Port20__clear(void );
static inline void HplMsp430InterruptP__Port21__clear(void );
static inline void HplMsp430InterruptP__Port22__clear(void );
static inline void HplMsp430InterruptP__Port23__clear(void );
static inline void HplMsp430InterruptP__Port24__clear(void );
static inline void HplMsp430InterruptP__Port25__clear(void );
static inline void HplMsp430InterruptP__Port26__clear(void );
static inline void HplMsp430InterruptP__Port27__clear(void );






static inline bool HplMsp430InterruptP__Port26__getValue(void );
#line 258
static void HplMsp430InterruptP__Port26__edge(bool l2h);
# 99 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430Usart1P__UCLK__selectIOFunc(void );
# 54 "../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void HplMsp430Usart1P__Interrupts__rxDone(uint8_t data);
#line 49
static void HplMsp430Usart1P__Interrupts__txDone(void );
# 99 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430Usart1P__URXD__selectIOFunc(void );
#line 92
static void HplMsp430Usart1P__URXD__selectModuleFunc(void );






static void HplMsp430Usart1P__UTXD__selectIOFunc(void );
#line 92
static void HplMsp430Usart1P__UTXD__selectModuleFunc(void );






static void HplMsp430Usart1P__SOMI__selectIOFunc(void );
#line 99
static void HplMsp430Usart1P__SIMO__selectIOFunc(void );
# 87 "../../../tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static volatile uint8_t HplMsp430Usart1P__IE2 __asm ("0x0001");
static volatile uint8_t HplMsp430Usart1P__ME2 __asm ("0x0005");
static volatile uint8_t HplMsp430Usart1P__IFG2 __asm ("0x0003");
static volatile uint8_t HplMsp430Usart1P__U1TCTL __asm ("0x0079");
static volatile uint8_t HplMsp430Usart1P__U1RCTL __asm ("0x007A");
static volatile uint8_t HplMsp430Usart1P__U1TXBUF __asm ("0x007F");



void sig_UART1RX_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x0006)))  ;




void sig_UART1TX_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x0004)))  ;
#line 140
static inline void HplMsp430Usart1P__Usart__setUbr(uint16_t control);










static inline void HplMsp430Usart1P__Usart__setUmctl(uint8_t control);







static inline void HplMsp430Usart1P__Usart__resetUsart(bool reset);
#line 203
static inline void HplMsp430Usart1P__Usart__enableUart(void );







static inline void HplMsp430Usart1P__Usart__disableUart(void );








static inline void HplMsp430Usart1P__Usart__enableUartTx(void );




static inline void HplMsp430Usart1P__Usart__disableUartTx(void );





static inline void HplMsp430Usart1P__Usart__enableUartRx(void );




static inline void HplMsp430Usart1P__Usart__disableUartRx(void );
#line 251
static inline void HplMsp430Usart1P__Usart__disableSpi(void );
#line 283
static inline void HplMsp430Usart1P__configUart(msp430_uart_union_config_t *config);









static inline void HplMsp430Usart1P__Usart__setModeUart(msp430_uart_union_config_t *config);
#line 347
static inline void HplMsp430Usart1P__Usart__clrIntr(void );
#line 359
static inline void HplMsp430Usart1P__Usart__disableIntr(void );



static inline void HplMsp430Usart1P__Usart__enableRxIntr(void );






static inline void HplMsp430Usart1P__Usart__enableTxIntr(void );
#line 384
static inline void HplMsp430Usart1P__Usart__tx(uint8_t data);
# 47 "../../../tos/platforms/shimmer2r/Mma7361P.nc"
static inline error_t Mma7361P__Init__init(void );
#line 59
static inline void Mma7361P__Accel__wake(bool wakeup);






static inline void Mma7361P__Accel__setSensitivity(uint8_t sensitivity);
# 42 "../../../tos/chips/msp430/dma/Msp430DmaControl.nc"
static void shimmerAnalogSetupP__Msp430DmaControl__setFlags(bool enable_nmi, bool round_robin, 
bool on_fetch);
#line 41
static void shimmerAnalogSetupP__Msp430DmaControl__init(void );
# 49 "../../../tos/chips/msp430/dma/Msp430DmaChannel.nc"
static error_t shimmerAnalogSetupP__Msp430DmaChannel__setupTransfer(dma_transfer_mode_t transfer_mode, 
dma_trigger_t trigger, 
dma_level_t level, 
void *src_addr, 
void *dst_addr, 
uint16_t size, 
dma_byte_t src_byte, 
dma_byte_t dst_byte, 
dma_incr_t src_incr, 
dma_incr_t dst_incr);
#line 84
static error_t shimmerAnalogSetupP__Msp430DmaChannel__startTransfer(void );
# 106 "../../../tos/chips/msp430/adc12/HplAdc12.nc"
static void shimmerAnalogSetupP__HplAdc12__resetIFGs(void );
#line 128
static void shimmerAnalogSetupP__HplAdc12__startConversion(void );
#line 95
static void shimmerAnalogSetupP__HplAdc12__setIEFlags(uint16_t mask);
#line 123
static void shimmerAnalogSetupP__HplAdc12__stopConversion(void );
# 53 "../../../tos/platforms/shimmer/shimmerAnalogSetupP.nc"
static inline void shimmerAnalogSetupP__initADC12CTL0(void );
static inline void shimmerAnalogSetupP__initADC12CTL1(void );
static void shimmerAnalogSetupP__initADC12MEMCTLx(void );
static inline void shimmerAnalogSetupP__setupDMA(uint16_t *destAddr);
static void shimmerAnalogSetupP__addNewChannels(uint8_t *chans, uint8_t howmany_new);

uint8_t shimmerAnalogSetupP__NUM_ADC_CHANS = 0;
uint8_t shimmerAnalogSetupP__ADC_CHANS[8];

static inline void shimmerAnalogSetupP__shimmerAnalogSetup__addAccelInputs(void );
#line 151
static inline void shimmerAnalogSetupP__shimmerAnalogSetup__addAnExInput(uint8_t channel);
#line 174
static inline void shimmerAnalogSetupP__shimmerAnalogSetup__finishADCSetup(uint16_t *buffer);



static inline void shimmerAnalogSetupP__shimmerAnalogSetup__triggerConversion(void );




static inline void shimmerAnalogSetupP__shimmerAnalogSetup__stopConversion(void );





static inline uint8_t shimmerAnalogSetupP__shimmerAnalogSetup__getNumberOfChannels(void );







static inline error_t shimmerAnalogSetupP__Init__init(void );








static void shimmerAnalogSetupP__addNewChannels(uint8_t *chans, uint8_t howmany_new);








static inline void shimmerAnalogSetupP__initADC12CTL0(void );










static inline void shimmerAnalogSetupP__initADC12CTL1(void );








static void shimmerAnalogSetupP__initADC12MEMCTLx(void );
#line 247
static inline void shimmerAnalogSetupP__setupDMA(uint16_t *destAddr);
#line 265
static inline void shimmerAnalogSetupP__Msp430DmaChannel__transferDone(error_t success);

static inline void shimmerAnalogSetupP__HplAdc12__conversionDone(uint16_t iv);
# 112 "../../../tos/chips/msp430/adc12/HplAdc12.nc"
static void HplAdc12P__HplAdc12__conversionDone(uint16_t iv);
# 51 "../../../tos/chips/msp430/adc12/HplAdc12P.nc"
static volatile uint16_t HplAdc12P__ADC12CTL0 __asm ("0x01A0");
static volatile uint16_t HplAdc12P__ADC12CTL1 __asm ("0x01A2");
static volatile uint16_t HplAdc12P__ADC12IFG __asm ("0x01A4");
static volatile uint16_t HplAdc12P__ADC12IE __asm ("0x01A6");
static volatile uint16_t HplAdc12P__ADC12IV __asm ("0x01A8");
#line 92
static inline void HplAdc12P__HplAdc12__setIEFlags(uint16_t mask);


static inline void HplAdc12P__HplAdc12__resetIFGs(void );




static inline void HplAdc12P__HplAdc12__startConversion(void );




static inline void HplAdc12P__HplAdc12__stopConversion(void );
#line 120
void sig_ADC12_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x000E)))  ;
# 39 "../../../tos/chips/msp430/dma/HplMsp430DmaInterrupt.nc"
static void HplMsp430DmaP__Interrupt__fired(void );
# 50 "../../../tos/chips/msp430/dma/HplMsp430DmaP.nc"
static volatile uint16_t HplMsp430DmaP__DMACTL0 __asm ("0x0122");
static volatile uint16_t HplMsp430DmaP__DMACTL1 __asm ("0x0124");
#line 63
void sig_XX_DMA_VECTOR_XX(void ) __attribute((wakeup)) __attribute((interrupt(0x0000)))  ;



static inline void HplMsp430DmaP__DmaControl__setOnFetch(void );



static inline void HplMsp430DmaP__DmaControl__clearOnFetch(void );



static inline void HplMsp430DmaP__DmaControl__setRoundRobin(void );


static inline void HplMsp430DmaP__DmaControl__clearRoundRobin(void );



static inline void HplMsp430DmaP__DmaControl__setENNMI(void );



static inline void HplMsp430DmaP__DmaControl__clearENNMI(void );
#line 100
static inline void HplMsp430DmaP__DmaControl__reset(void );
# 85 "../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
static void /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__transferDone(error_t success);
# 56 "../../../tos/chips/msp430/dma/HplMsp430DmaXP.nc"
static volatile uint16_t /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMACTL0 __asm ("0x0122");






static inline void /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__Interrupt__fired(void );








static inline error_t /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__setTrigger(dma_trigger_t trigger);
#line 176
static inline void /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__enableDMA(void );



static inline void /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__disableDMA(void );
#line 204
static inline void /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__setSrc(void *saddr);



static inline void /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__setDst(void *daddr);



static inline void /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__setSize(uint16_t sz);



static inline void /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__setState(dma_channel_state_t s, 
dma_channel_trigger_t t, 
void *src, void *dest, 
uint16_t size);




static inline void /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__setStateRaw(uint16_t s, uint16_t t, 
void *src, void *dest, 
uint16_t size);
#line 257
static inline void /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__reset(void );
# 85 "../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
static void /*HplMsp430DmaC.Dma1*/HplMsp430DmaXP__1__DMA__transferDone(error_t success);
# 63 "../../../tos/chips/msp430/dma/HplMsp430DmaXP.nc"
static inline void /*HplMsp430DmaC.Dma1*/HplMsp430DmaXP__1__Interrupt__fired(void );
#line 257
static inline void /*HplMsp430DmaC.Dma1*/HplMsp430DmaXP__1__DMA__reset(void );
# 85 "../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
static void /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__DMA__transferDone(error_t success);
# 63 "../../../tos/chips/msp430/dma/HplMsp430DmaXP.nc"
static inline void /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__Interrupt__fired(void );
#line 257
static inline void /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__DMA__reset(void );
# 61 "../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
static void /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__HplChannel__disableDMA(void );









static void /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__HplChannel__setSrc(void *saddr);
#line 60
static void /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__HplChannel__enableDMA(void );
#line 73
static void /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__HplChannel__setSize(uint16_t sz);

static void /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__HplChannel__setState(dma_channel_state_t s, dma_channel_trigger_t t, void *src, void *dest, uint16_t size);
#line 72
static void /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__HplChannel__setDst(void *daddr);
# 107 "../../../tos/chips/msp430/dma/Msp430DmaChannel.nc"
static void /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__Channel__transferDone(error_t success);
# 51 "../../../tos/chips/msp430/dma/Msp430DmaChannelP.nc"
dma_channel_state_t /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__gChannelState;
dma_channel_trigger_t /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__gChannelTrigger;







static inline error_t /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__Channel__setupTransfer(dma_transfer_mode_t transfer_mode, 
dma_trigger_t trigger, 
dma_level_t level, 
void *src_addr, 
void *dst_addr, 
uint16_t size, 
dma_byte_t src_byte, 
dma_byte_t dst_byte, 
dma_incr_t src_incr, 
dma_incr_t dst_incr);
#line 92
static inline error_t /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__Channel__startTransfer(void );




static error_t /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__Channel__repeatTransfer(void *src_addr, 
void *dst_addr, 
uint16_t size);
#line 114
static inline error_t /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__Channel__stopTransfer(void );








static inline void /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__HplChannel__transferDone(error_t error);
# 107 "../../../tos/chips/msp430/dma/Msp430DmaChannel.nc"
static void /*Msp430DmaC.Channel1P*/Msp430DmaChannelP__1__Channel__transferDone(error_t success);
# 123 "../../../tos/chips/msp430/dma/Msp430DmaChannelP.nc"
static inline void /*Msp430DmaC.Channel1P*/Msp430DmaChannelP__1__HplChannel__transferDone(error_t error);



static inline void /*Msp430DmaC.Channel1P*/Msp430DmaChannelP__1__Channel__default__transferDone(error_t error);
# 107 "../../../tos/chips/msp430/dma/Msp430DmaChannel.nc"
static void /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__Channel__transferDone(error_t success);
# 123 "../../../tos/chips/msp430/dma/Msp430DmaChannelP.nc"
static inline void /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__HplChannel__transferDone(error_t error);



static inline void /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__Channel__default__transferDone(error_t error);
# 83 "../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
static void Msp430DmaControlP__HplChannel1__reset(void );
# 45 "../../../tos/chips/msp430/dma/HplMsp430DmaControl.nc"
static void Msp430DmaControlP__HplControl__clearRoundRobin(void );
#line 44
static void Msp430DmaControlP__HplControl__setRoundRobin(void );
#line 43
static void Msp430DmaControlP__HplControl__clearOnFetch(void );


static void Msp430DmaControlP__HplControl__setENNMI(void );



static void Msp430DmaControlP__HplControl__reset(void );
#line 42
static void Msp430DmaControlP__HplControl__setOnFetch(void );




static void Msp430DmaControlP__HplControl__clearENNMI(void );
# 83 "../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
static void Msp430DmaControlP__HplChannel2__reset(void );
#line 83
static void Msp430DmaControlP__HplChannel0__reset(void );
# 55 "../../../tos/chips/msp430/dma/Msp430DmaControlP.nc"
static inline void Msp430DmaControlP__Control__init(void );






static inline void Msp430DmaControlP__Control__setFlags(bool enable_nmi, bool round_robin, 
bool on_fetch);
#line 76
static inline void Msp430DmaControlP__HplChannel0__transferDone(error_t error);
static inline void Msp430DmaControlP__HplChannel1__transferDone(error_t error);
static inline void Msp430DmaControlP__HplChannel2__transferDone(error_t error);
# 425 "../../../tos/platforms/shimmer/chips/msp430/msp430hardware.h"
static inline  void __nesc_enable_interrupt(void )
{
  __eint();
}

# 196 "../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Timer__overflow(void )
{
}

# 48 "../../../tos/chips/msp430/timer/Msp430Timer.nc"
inline static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__overflow(void ){
#line 48
  /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Timer__overflow();
#line 48
}
#line 48
# 137 "../../../tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Overflow__fired(void )
{
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__overflow();
}





static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__default__fired(uint8_t n)
{
}

# 39 "../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__fired(uint8_t arg_0x7f18ef9578b0){
#line 39
  switch (arg_0x7f18ef9578b0) {
#line 39
    case 0:
#line 39
      /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Event__fired();
#line 39
      break;
#line 39
    case 1:
#line 39
      /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Event__fired();
#line 39
      break;
#line 39
    case 2:
#line 39
      /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Event__fired();
#line 39
      break;
#line 39
    case 5:
#line 39
      /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Overflow__fired();
#line 39
      break;
#line 39
    default:
#line 39
      /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__default__fired(arg_0x7f18ef9578b0);
#line 39
      break;
#line 39
    }
#line 39
}
#line 39
# 126 "../../../tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX0__fired(void )
{
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__fired(0);
}

# 39 "../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void Msp430TimerCommonP__VectorTimerA0__fired(void ){
#line 39
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX0__fired();
#line 39
}
#line 39
# 58 "../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0____nesc_unnamed4352 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__int2CC(* (volatile uint16_t * )354U);
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__default__captured(uint16_t n)
{
}

# 91 "../../../tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__captured(uint16_t time){
#line 91
  /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__default__captured(time);
#line 91
}
#line 91
# 150 "../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__getEvent(void )
{
  return * (volatile uint16_t * )370U;
}

#line 192
static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__default__fired(void )
{
}

# 45 "../../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__default__fired();
#line 45
}
#line 45
# 58 "../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1____nesc_unnamed4353 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__int2CC(* (volatile uint16_t * )356U);
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__default__captured(uint16_t n)
{
}

# 91 "../../../tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__captured(uint16_t time){
#line 91
  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__default__captured(time);
#line 91
}
#line 91
# 150 "../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__getEvent(void )
{
  return * (volatile uint16_t * )372U;
}

#line 192
static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__default__fired(void )
{
}

# 45 "../../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__default__fired();
#line 45
}
#line 45
# 58 "../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2____nesc_unnamed4354 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__int2CC(* (volatile uint16_t * )358U);
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__default__captured(uint16_t n)
{
}

# 91 "../../../tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__captured(uint16_t time){
#line 91
  /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__default__captured(time);
#line 91
}
#line 91
# 150 "../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__getEvent(void )
{
  return * (volatile uint16_t * )374U;
}

#line 192
static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__default__fired(void )
{
}

# 45 "../../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__default__fired();
#line 45
}
#line 45
# 131 "../../../tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX1__fired(void )
{
  uint8_t n = * (volatile uint16_t * )302U;

#line 134
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__fired(n >> 1);
}

# 39 "../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void Msp430TimerCommonP__VectorTimerA1__fired(void ){
#line 39
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX1__fired();
#line 39
}
#line 39
# 126 "../../../tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX0__fired(void )
{
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__fired(0);
}

# 39 "../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void Msp430TimerCommonP__VectorTimerB0__fired(void ){
#line 39
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX0__fired();
#line 39
}
#line 39
# 196 "../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__overflow(void )
{
}

# 228 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
static inline void /*Msp430Uart0P.UartP*/Msp430UartP__0__Counter__overflow(void )
#line 228
{
}

# 58 "../../../tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void )
{
}

# 177 "../../../tos/lib/timer/TransformAlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__overflow(void )
{
}

# 82 "../../../tos/lib/timer/Counter.nc"
inline static void /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__overflow(void ){
#line 82
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__overflow();
#line 82
  /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow();
#line 82
}
#line 82
# 133 "../../../tos/lib/timer/TransformCounterC.nc"
static inline void /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__overflow(void )
{
  /* atomic removed: atomic calls only */
  {
    /*CounterMilli32C.Transform*/TransformCounterC__0__m_upper++;
    if ((/*CounterMilli32C.Transform*/TransformCounterC__0__m_upper & /*CounterMilli32C.Transform*/TransformCounterC__0__OVERFLOW_MASK) == 0) {
      /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__overflow();
      }
  }
}

# 82 "../../../tos/lib/timer/Counter.nc"
inline static void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__overflow(void ){
#line 82
  /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__overflow();
#line 82
  /*Msp430Uart0P.UartP*/Msp430UartP__0__Counter__overflow();
#line 82
}
#line 82
# 64 "../../../tos/chips/msp430/timer/Msp430CounterC.nc"
static inline void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__overflow(void )
{
  /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__overflow();
}

# 114 "../../../tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__overflow(void )
{
}

# 48 "../../../tos/chips/msp430/timer/Msp430Timer.nc"
inline static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__overflow(void ){
#line 48
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__overflow();
#line 48
  /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Timer__overflow();
#line 48
}
#line 48
# 137 "../../../tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Overflow__fired(void )
{
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__overflow();
}

# 67 "../../../tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 81 "../../../tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void )
{
#line 82
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask();
}

# 78 "../../../tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__fired(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired();
#line 78
}
#line 78
# 162 "../../../tos/lib/timer/TransformAlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__fired(void )
{
  /* atomic removed: atomic calls only */
  {
    if (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_dt == 0) 
      {
        /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__fired();
      }
    else 
      {
        /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__set_alarm();
      }
  }
}

# 78 "../../../tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__fired(void ){
#line 78
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__fired();
#line 78
}
#line 78
# 135 "../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__disableEvents(void )
{
  * (volatile uint16_t * )386U &= ~0x0010;
}

# 58 "../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents(void ){
#line 58
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__disableEvents();
#line 58
}
#line 58
# 70 "../../../tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__fired(void )
{
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents();
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__fired();
}

# 45 "../../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__fired(void ){
#line 45
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__fired();
#line 45
}
#line 45
# 150 "../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__getEvent(void )
{
  return * (volatile uint16_t * )402U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__default__captured(uint16_t n)
{
}

# 91 "../../../tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__captured(uint16_t time){
#line 91
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__default__captured(time);
#line 91
}
#line 91
# 58 "../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3____nesc_unnamed4355 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__int2CC(* (volatile uint16_t * )386U);
}

#line 180
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__captured(/*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__fired();
    }
}

# 97 "../../../tos/system/SchedulerBasicP.nc"
static inline bool SchedulerBasicP__isWaiting(uint8_t id)
{
  return SchedulerBasicP__m_next[id] != SchedulerBasicP__NO_TASK || SchedulerBasicP__m_tail == id;
}

static inline bool SchedulerBasicP__pushTask(uint8_t id)
{
  if (!SchedulerBasicP__isWaiting(id)) 
    {
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_head = id;
          SchedulerBasicP__m_tail = id;
        }
      else 
        {
          SchedulerBasicP__m_next[SchedulerBasicP__m_tail] = id;
          SchedulerBasicP__m_tail = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

# 45 "../../../tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__get(void ){
#line 45
  unsigned int __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 49 "../../../tos/chips/msp430/timer/Msp430CounterC.nc"
static inline uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__get(void )
{
  return /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__get();
}

# 64 "../../../tos/lib/timer/Counter.nc"
inline static /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__size_type /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__get(void ){
#line 64
  unsigned int __nesc_result;
#line 64

#line 64
  __nesc_result = /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 81 "../../../tos/chips/msp430/timer/Msp430TimerP.nc"
static inline bool /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__isOverflowPending(void )
{
  return * (volatile uint16_t * )384U & 1U;
}

# 46 "../../../tos/chips/msp430/timer/Msp430Timer.nc"
inline static bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__isOverflowPending(void ){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__isOverflowPending();
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 54 "../../../tos/chips/msp430/timer/Msp430CounterC.nc"
static inline bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__isOverflowPending(void )
{
  return /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__isOverflowPending();
}

# 71 "../../../tos/lib/timer/Counter.nc"
inline static bool /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__isOverflowPending(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__isOverflowPending();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 130 "../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__enableEvents(void )
{
  * (volatile uint16_t * )386U |= 0x0010;
}

# 57 "../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__enableEvents(void ){
#line 57
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__enableEvents();
#line 57
}
#line 57
# 95 "../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__clearPendingInterrupt(void )
{
  * (volatile uint16_t * )386U &= ~0x0001;
}

# 44 "../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__clearPendingInterrupt(void ){
#line 44
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__clearPendingInterrupt();
#line 44
}
#line 44
# 155 "../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEvent(uint16_t x)
{
  * (volatile uint16_t * )402U = x;
}

# 41 "../../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEvent(uint16_t time){
#line 41
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEvent(time);
#line 41
}
#line 41
# 45 "../../../tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__get(void ){
#line 45
  unsigned int __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 165 "../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEventFromNow(uint16_t x)
{
  * (volatile uint16_t * )402U = /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__get() + x;
}

# 43 "../../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEventFromNow(uint16_t delta){
#line 43
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEventFromNow(delta);
#line 43
}
#line 43
# 45 "../../../tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__get(void ){
#line 45
  unsigned int __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 81 "../../../tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__startAt(uint16_t t0, uint16_t dt)
{
  /* atomic removed: atomic calls only */
  {
    uint16_t now = /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__get();
    uint16_t elapsed = now - t0;

#line 87
    if (elapsed >= dt) 
      {
        /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEventFromNow(2);
      }
    else 
      {
        uint16_t remaining = dt - elapsed;

#line 94
        if (remaining <= 2) {
          /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEventFromNow(2);
          }
        else {
#line 97
          /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEvent(now + remaining);
          }
      }
#line 99
    /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__clearPendingInterrupt();
    /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__enableEvents();
  }
}

# 103 "../../../tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type dt){
#line 103
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 192 "../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__default__fired(void )
{
}

# 45 "../../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__default__fired();
#line 45
}
#line 45
# 150 "../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__getEvent(void )
{
  return * (volatile uint16_t * )404U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__default__captured(uint16_t n)
{
}

# 91 "../../../tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__captured(uint16_t time){
#line 91
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__default__captured(time);
#line 91
}
#line 91
# 58 "../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4____nesc_unnamed4356 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__int2CC(* (volatile uint16_t * )388U);
}

#line 180
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__captured(/*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__fired();
    }
}




static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__default__fired(void )
{
}

# 45 "../../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__default__fired();
#line 45
}
#line 45
# 150 "../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__getEvent(void )
{
  return * (volatile uint16_t * )406U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__default__captured(uint16_t n)
{
}

# 91 "../../../tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__captured(uint16_t time){
#line 91
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__default__captured(time);
#line 91
}
#line 91
# 58 "../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5____nesc_unnamed4357 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__int2CC(* (volatile uint16_t * )390U);
}

#line 180
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__captured(/*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__fired();
    }
}




static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__default__fired(void )
{
}

# 45 "../../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__default__fired();
#line 45
}
#line 45
# 150 "../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__getEvent(void )
{
  return * (volatile uint16_t * )408U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__default__captured(uint16_t n)
{
}

# 91 "../../../tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__captured(uint16_t time){
#line 91
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__default__captured(time);
#line 91
}
#line 91
# 58 "../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6____nesc_unnamed4358 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__int2CC(* (volatile uint16_t * )392U);
}

#line 180
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__captured(/*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__fired();
    }
}




static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__default__fired(void )
{
}

# 45 "../../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__default__fired();
#line 45
}
#line 45
# 150 "../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__getEvent(void )
{
  return * (volatile uint16_t * )410U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__default__captured(uint16_t n)
{
}

# 91 "../../../tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__captured(uint16_t time){
#line 91
  /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__default__captured(time);
#line 91
}
#line 91
# 58 "../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__cc_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7____nesc_unnamed4359 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__cc_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__int2CC(* (volatile uint16_t * )394U);
}

#line 180
static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__captured(/*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__fired();
    }
}




static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__default__fired(void )
{
}

# 45 "../../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__default__fired();
#line 45
}
#line 45
# 150 "../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__getEvent(void )
{
  return * (volatile uint16_t * )412U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__default__captured(uint16_t n)
{
}

# 91 "../../../tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__captured(uint16_t time){
#line 91
  /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__default__captured(time);
#line 91
}
#line 91
# 58 "../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__cc_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8____nesc_unnamed4360 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__cc_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__int2CC(* (volatile uint16_t * )396U);
}

#line 180
static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__captured(/*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__fired();
    }
}




static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__default__fired(void )
{
}

# 45 "../../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__default__fired();
#line 45
}
#line 45
# 150 "../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__getEvent(void )
{
  return * (volatile uint16_t * )414U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__default__captured(uint16_t n)
{
}

# 91 "../../../tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__captured(uint16_t time){
#line 91
  /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__default__captured(time);
#line 91
}
#line 91
# 58 "../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__cc_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9____nesc_unnamed4361 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__cc_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__int2CC(* (volatile uint16_t * )398U);
}

#line 180
static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__captured(/*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__fired();
    }
}

# 131 "../../../tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX1__fired(void )
{
  uint8_t n = * (volatile uint16_t * )286U;

#line 134
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__fired(n >> 1);
}

# 39 "../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void Msp430TimerCommonP__VectorTimerB1__fired(void ){
#line 39
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX1__fired();
#line 39
}
#line 39
# 124 "../../../tos/system/SchedulerBasicP.nc"
static inline void SchedulerBasicP__Scheduler__init(void )
{
  /* atomic removed: atomic calls only */
  {
    memset((void *)SchedulerBasicP__m_next, SchedulerBasicP__NO_TASK, sizeof SchedulerBasicP__m_next);
    SchedulerBasicP__m_head = SchedulerBasicP__NO_TASK;
    SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
  }
}

# 57 "../../../tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__init(void ){
#line 57
  SchedulerBasicP__Scheduler__init();
#line 57
}
#line 57
# 56 "../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P43*/HplMsp430GeneralIOP__27__IO__set(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 56
  * (volatile uint8_t * )29U |= 0x01 << 3;
}

# 48 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__set(void ){
#line 48
  /*HplMsp430GeneralIOC.P43*/HplMsp430GeneralIOP__27__IO__set();
#line 48
}
#line 48
# 48 "../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__set(void )
#line 48
{
#line 48
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__set();
}

# 40 "../../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__set(void ){
#line 40
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__set();
#line 40
}
#line 40
# 48 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__set(void ){
#line 48
  /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__set();
#line 48
}
#line 48
# 48 "../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__set(void )
#line 48
{
#line 48
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__set();
}

# 40 "../../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__set(void ){
#line 40
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__set();
#line 40
}
#line 40
# 56 "../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P40*/HplMsp430GeneralIOP__24__IO__set(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 56
  * (volatile uint8_t * )29U |= 0x01 << 0;
}

# 48 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__set(void ){
#line 48
  /*HplMsp430GeneralIOC.P40*/HplMsp430GeneralIOP__24__IO__set();
#line 48
}
#line 48
# 48 "../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__set(void )
#line 48
{
#line 48
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__set();
}

# 40 "../../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__set(void ){
#line 40
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__set();
#line 40
}
#line 40
# 63 "../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P43*/HplMsp430GeneralIOP__27__IO__makeOutput(void )
#line 63
{
  /* atomic removed: atomic calls only */
#line 63
  * (volatile uint8_t * )30U |= 0x01 << 3;
}

# 85 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__makeOutput(void ){
#line 85
  /*HplMsp430GeneralIOC.P43*/HplMsp430GeneralIOP__27__IO__makeOutput();
#line 85
}
#line 85
# 54 "../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__makeOutput();
}

# 46 "../../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__makeOutput(void ){
#line 46
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__makeOutput();
#line 46
}
#line 46
# 63 "../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__makeOutput(void )
#line 63
{
  /* atomic removed: atomic calls only */
#line 63
  * (volatile uint8_t * )30U |= 0x01 << 2;
}

# 85 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__makeOutput(void ){
#line 85
  /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__makeOutput();
#line 85
}
#line 85
# 54 "../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__makeOutput();
}

# 46 "../../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__makeOutput(void ){
#line 46
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__makeOutput();
#line 46
}
#line 46
# 63 "../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P40*/HplMsp430GeneralIOP__24__IO__makeOutput(void )
#line 63
{
  /* atomic removed: atomic calls only */
#line 63
  * (volatile uint8_t * )30U |= 0x01 << 0;
}

# 85 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__makeOutput(void ){
#line 85
  /*HplMsp430GeneralIOC.P40*/HplMsp430GeneralIOP__24__IO__makeOutput();
#line 85
}
#line 85
# 54 "../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__makeOutput();
}

# 46 "../../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__makeOutput(void ){
#line 46
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__makeOutput();
#line 46
}
#line 46
# 57 "../../../tos/platforms/shimmer2r/LedsP.nc"
static inline error_t LedsP__Init__init(void )
#line 57
{
  /* atomic removed: atomic calls only */
#line 58
  {
    ;
    LedsP__Led0__makeOutput();
    LedsP__Led1__makeOutput();
    LedsP__Led2__makeOutput();
    LedsP__Led0__set();
    LedsP__Led1__set();
    LedsP__Led2__set();
  }
  return SUCCESS;
}

# 62 "../../../tos/interfaces/Init.nc"
inline static error_t PlatformP__LedsInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = LedsP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 149 "../../../tos/platforms/shimmer2r/hardware.h"
static inline  void TOSH_MAKE_DOCK_N_INPUT()
#line 149
{
#line 149
  static volatile uint8_t r __asm ("0x002A");

#line 149
  r &= ~(1 << 3);
}

#line 134
static inline  void TOSH_SET_UCLK1_PIN()
#line 134
{
#line 134
  static volatile uint8_t r __asm ("0x0031");

#line 134
  r |= 1 << 3;
}

#line 132
static inline  void TOSH_SET_SIMO1_PIN()
#line 132
{
#line 132
  static volatile uint8_t r __asm ("0x0031");

#line 132
  r |= 1 << 1;
}

#line 129
static inline  void TOSH_SET_SD_CLK_PIN()
#line 129
{
#line 129
  static volatile uint8_t r __asm ("0x0019");

#line 129
  r |= 1 << 3;
}

#line 127
static inline  void TOSH_SET_SD_DI_PIN()
#line 127
{
#line 127
  static volatile uint8_t r __asm ("0x0019");

#line 127
  r |= 1 << 1;
}

#line 88
static inline  void TOSH_SET_SD_CS_N_PIN()
#line 88
{
#line 88
  static volatile uint8_t r __asm ("0x0019");

#line 88
  r |= 1 << 0;
}

#line 133
static inline  void TOSH_MAKE_SOMI1_INPUT()
#line 133
{
#line 133
  static volatile uint8_t r __asm ("0x0032");

#line 133
  r &= ~(1 << 2);
}

#line 133
static inline  void TOSH_SEL_SOMI1_IOFUNC()
#line 133
{
#line 133
  static volatile uint8_t r __asm ("0x0033");

#line 133
  r &= ~(1 << 2);
}

#line 132
static inline  void TOSH_MAKE_SIMO1_OUTPUT()
#line 132
{
#line 132
  static volatile uint8_t r __asm ("0x0032");

#line 132
  r |= 1 << 1;
}

#line 132
static inline  void TOSH_SEL_SIMO1_IOFUNC()
#line 132
{
#line 132
  static volatile uint8_t r __asm ("0x0033");

#line 132
  r &= ~(1 << 1);
}

#line 134
static inline  void TOSH_MAKE_UCLK1_OUTPUT()
#line 134
{
#line 134
  static volatile uint8_t r __asm ("0x0032");

#line 134
  r |= 1 << 3;
}

#line 134
static inline  void TOSH_SEL_UCLK1_IOFUNC()
#line 134
{
#line 134
  static volatile uint8_t r __asm ("0x0033");

#line 134
  r &= ~(1 << 3);
}

#line 136
static inline  void TOSH_MAKE_URXD1_OUTPUT()
#line 136
{
#line 136
  static volatile uint8_t r __asm ("0x001A");

#line 136
  r |= 1 << 7;
}

#line 136
static inline  void TOSH_SEL_URXD1_IOFUNC()
#line 136
{
#line 136
  static volatile uint8_t r __asm ("0x001B");

#line 136
  r &= ~(1 << 7);
}

#line 135
static inline  void TOSH_MAKE_UTXD1_OUTPUT()
#line 135
{
#line 135
  static volatile uint8_t r __asm ("0x001A");

#line 135
  r |= 1 << 6;
}

#line 135
static inline  void TOSH_SEL_UTXD1_IOFUNC()
#line 135
{
#line 135
  static volatile uint8_t r __asm ("0x001B");

#line 135
  r &= ~(1 << 6);
}

#line 124
static inline  void TOSH_SET_URXD0_PIN()
#line 124
{
#line 124
  static volatile uint8_t r __asm ("0x0019");

#line 124
  r |= 1 << 5;
}

#line 124
static inline  void TOSH_MAKE_URXD0_OUTPUT()
#line 124
{
#line 124
  static volatile uint8_t r __asm ("0x001A");

#line 124
  r |= 1 << 5;
}

#line 124
static inline  void TOSH_SEL_URXD0_IOFUNC()
#line 124
{
#line 124
  static volatile uint8_t r __asm ("0x001B");

#line 124
  r &= ~(1 << 5);
}

#line 123
static inline  void TOSH_MAKE_UTXD0_OUTPUT()
#line 123
{
#line 123
  static volatile uint8_t r __asm ("0x001A");

#line 123
  r |= 1 << 4;
}

#line 123
static inline  void TOSH_SEL_UTXD0_IOFUNC()
#line 123
{
#line 123
  static volatile uint8_t r __asm ("0x001B");

#line 123
  r &= ~(1 << 4);
}

#line 139
static inline  void TOSH_MAKE_GIO1_OUTPUT()
#line 139
{
#line 139
  static volatile uint8_t r __asm ("0x002A");

#line 139
  r |= 1 << 1;
}

#line 139
static inline  void TOSH_SEL_GIO1_IOFUNC()
#line 139
{
#line 139
  static volatile uint8_t r __asm ("0x002E");

#line 139
  r &= ~(1 << 1);
}

#line 138
static inline  void TOSH_CLR_GIO0_PIN()
#line 138
{
#line 138
  static volatile uint8_t r __asm ("0x0029");

#line 138
  r &= ~(1 << 0);
}

#line 138
static inline  void TOSH_MAKE_GIO0_OUTPUT()
#line 138
{
#line 138
  static volatile uint8_t r __asm ("0x002A");

#line 138
  r |= 1 << 0;
}

#line 138
static inline  void TOSH_SEL_GIO0_IOFUNC()
#line 138
{
#line 138
  static volatile uint8_t r __asm ("0x002E");

#line 138
  r &= ~(1 << 0);
}

#line 117
static inline  void TOSH_CLR_SER0_RTS_PIN()
#line 117
{
#line 117
  static volatile uint8_t r __asm ("0x0021");

#line 117
  r &= ~(1 << 3);
}

#line 117
static inline  void TOSH_MAKE_SER0_RTS_OUTPUT()
#line 117
{
#line 117
  static volatile uint8_t r __asm ("0x0022");

#line 117
  r |= 1 << 3;
}

#line 117
static inline  void TOSH_SEL_SER0_RTS_IOFUNC()
#line 117
{
#line 117
  static volatile uint8_t r __asm ("0x0026");

#line 117
  r &= ~(1 << 3);
}

#line 118
static inline  void TOSH_MAKE_SER0_CTS_OUTPUT()
#line 118
{
#line 118
  static volatile uint8_t r __asm ("0x0022");

#line 118
  r |= 1 << 4;
}

#line 118
static inline  void TOSH_SEL_SER0_CTS_IOFUNC()
#line 118
{
#line 118
  static volatile uint8_t r __asm ("0x0026");

#line 118
  r &= ~(1 << 4);
}

#line 152
static inline  void TOSH_CLR_PWRMUX_SEL_PIN()
#line 152
{
#line 152
  static volatile uint8_t r __asm ("0x001D");

#line 152
  r &= ~(1 << 1);
}

#line 152
static inline  void TOSH_MAKE_PWRMUX_SEL_OUTPUT()
#line 152
{
#line 152
  static volatile uint8_t r __asm ("0x001E");

#line 152
  r |= 1 << 1;
}

#line 152
static inline  void TOSH_SEL_PWRMUX_SEL_IOFUNC()
#line 152
{
#line 152
  static volatile uint8_t r __asm ("0x001F");

#line 152
  r &= ~(1 << 1);
}

#line 154
static inline  void TOSH_CLR_ACCEL_SLEEP_N_PIN()
#line 154
{
#line 154
  static volatile uint8_t r __asm ("0x0031");

#line 154
  r &= ~(1 << 0);
}

#line 154
static inline  void TOSH_MAKE_ACCEL_SLEEP_N_OUTPUT()
#line 154
{
#line 154
  static volatile uint8_t r __asm ("0x0032");

#line 154
  r |= 1 << 0;
}

#line 154
static inline  void TOSH_SEL_ACCEL_SLEEP_N_IOFUNC()
#line 154
{
#line 154
  static volatile uint8_t r __asm ("0x0033");

#line 154
  r &= ~(1 << 0);
}

#line 153
static inline  void TOSH_CLR_ACCEL_SEL0_PIN()
#line 153
{
#line 153
  static volatile uint8_t r __asm ("0x001D");

#line 153
  r &= ~(1 << 4);
}

#line 153
static inline  void TOSH_MAKE_ACCEL_SEL0_OUTPUT()
#line 153
{
#line 153
  static volatile uint8_t r __asm ("0x001E");

#line 153
  r |= 1 << 4;
}

#line 153
static inline  void TOSH_SEL_ACCEL_SEL0_IOFUNC()
#line 153
{
#line 153
  static volatile uint8_t r __asm ("0x001F");

#line 153
  r &= ~(1 << 4);
}

#line 143
static inline  void TOSH_SET_ONEWIRE_PIN()
#line 143
{
#line 143
  static volatile uint8_t r __asm ("0x001D");

#line 143
  r |= 1 << 7;
}

#line 143
static inline  void TOSH_MAKE_ONEWIRE_OUTPUT()
#line 143
{
#line 143
  static volatile uint8_t r __asm ("0x001E");

#line 143
  r |= 1 << 7;
}

#line 143
static inline  void TOSH_SEL_ONEWIRE_IOFUNC()
#line 143
{
#line 143
  static volatile uint8_t r __asm ("0x001F");

#line 143
  r &= ~(1 << 7);
}

static inline  void TOSH_MAKE_ROSC_INPUT()
#line 146
{
#line 146
  static volatile uint8_t r __asm ("0x002A");

#line 146
  r &= ~(1 << 5);
}

#line 146
static inline  void TOSH_SEL_ROSC_IOFUNC()
#line 146
{
#line 146
  static volatile uint8_t r __asm ("0x002E");

#line 146
  r &= ~(1 << 5);
}

#line 104
static inline  void TOSH_MAKE_ADC_ACCELX_INPUT()
#line 104
{
#line 104
  static volatile uint8_t r __asm ("0x0036");

#line 104
  r &= ~(1 << 5);
}

#line 104
static inline  void TOSH_SEL_ADC_ACCELX_IOFUNC()
#line 104
{
#line 104
  static volatile uint8_t r __asm ("0x0037");

#line 104
  r &= ~(1 << 5);
}

#line 103
static inline  void TOSH_MAKE_ADC_ACCELY_INPUT()
#line 103
{
#line 103
  static volatile uint8_t r __asm ("0x0036");

#line 103
  r &= ~(1 << 4);
}

#line 103
static inline  void TOSH_SEL_ADC_ACCELY_IOFUNC()
#line 103
{
#line 103
  static volatile uint8_t r __asm ("0x0037");

#line 103
  r &= ~(1 << 4);
}

#line 102
static inline  void TOSH_MAKE_ADC_ACCELZ_INPUT()
#line 102
{
#line 102
  static volatile uint8_t r __asm ("0x0036");

#line 102
  r &= ~(1 << 3);
}

#line 102
static inline  void TOSH_SEL_ADC_ACCELZ_IOFUNC()
#line 102
{
#line 102
  static volatile uint8_t r __asm ("0x0037");

#line 102
  r &= ~(1 << 3);
}

#line 100
static inline  void TOSH_MAKE_ADC_7_OUTPUT()
#line 100
{
#line 100
  static volatile uint8_t r __asm ("0x0036");

#line 100
  r |= 1 << 7;
}

#line 100
static inline  void TOSH_SEL_ADC_7_IOFUNC()
#line 100
{
#line 100
  static volatile uint8_t r __asm ("0x0037");

#line 100
  r &= ~(1 << 7);
}

#line 99
static inline  void TOSH_MAKE_ADC_6_OUTPUT()
#line 99
{
#line 99
  static volatile uint8_t r __asm ("0x0036");

#line 99
  r |= 1 << 6;
}

#line 99
static inline  void TOSH_SEL_ADC_6_IOFUNC()
#line 99
{
#line 99
  static volatile uint8_t r __asm ("0x0037");

#line 99
  r &= ~(1 << 6);
}

#line 95
static inline  void TOSH_MAKE_ADC_2_OUTPUT()
#line 95
{
#line 95
  static volatile uint8_t r __asm ("0x0036");

#line 95
  r |= 1 << 2;
}

#line 95
static inline  void TOSH_SEL_ADC_2_IOFUNC()
#line 95
{
#line 95
  static volatile uint8_t r __asm ("0x0037");

#line 95
  r &= ~(1 << 2);
}

#line 94
static inline  void TOSH_MAKE_ADC_1_OUTPUT()
#line 94
{
#line 94
  static volatile uint8_t r __asm ("0x0036");

#line 94
  r |= 1 << 1;
}

#line 94
static inline  void TOSH_SEL_ADC_1_IOFUNC()
#line 94
{
#line 94
  static volatile uint8_t r __asm ("0x0037");

#line 94
  r &= ~(1 << 1);
}

#line 93
static inline  void TOSH_MAKE_ADC_0_OUTPUT()
#line 93
{
#line 93
  static volatile uint8_t r __asm ("0x0036");

#line 93
  r |= 1 << 0;
}

#line 93
static inline  void TOSH_SEL_ADC_0_IOFUNC()
#line 93
{
#line 93
  static volatile uint8_t r __asm ("0x0037");

#line 93
  r &= ~(1 << 0);
}

#line 84
static inline  void TOSH_SEL_PROG_OUT_IOFUNC()
#line 84
{
#line 84
  static volatile uint8_t r __asm ("0x0026");

#line 84
  r &= ~(1 << 1);
}

#line 85
static inline  void TOSH_SEL_PROG_IN_IOFUNC()
#line 85
{
#line 85
  static volatile uint8_t r __asm ("0x002E");

#line 85
  r &= ~(1 << 2);
}

#line 84
static inline  void TOSH_SET_PROG_OUT_PIN()
#line 84
{
#line 84
  static volatile uint8_t r __asm ("0x0021");

#line 84
  r |= 1 << 1;
}

#line 84
static inline  void TOSH_MAKE_PROG_OUT_OUTPUT()
#line 84
{
#line 84
  static volatile uint8_t r __asm ("0x0022");

#line 84
  r |= 1 << 1;
}

#line 85
static inline  void TOSH_MAKE_PROG_IN_OUTPUT()
#line 85
{
#line 85
  static volatile uint8_t r __asm ("0x002A");

#line 85
  r |= 1 << 2;
}

#line 80
static inline  void TOSH_SEL_BT_RXD_IOFUNC()
#line 80
{
#line 80
  static volatile uint8_t r __asm ("0x001B");

#line 80
  r &= ~(1 << 7);
}

#line 80
static inline  void TOSH_MAKE_BT_RXD_INPUT()
#line 80
{
#line 80
  static volatile uint8_t r __asm ("0x001A");

#line 80
  r &= ~(1 << 7);
}

#line 79
static inline  void TOSH_SEL_BT_TXD_IOFUNC()
#line 79
{
#line 79
  static volatile uint8_t r __asm ("0x001B");

#line 79
  r &= ~(1 << 6);
}

#line 79
static inline  void TOSH_MAKE_BT_TXD_OUTPUT()
#line 79
{
#line 79
  static volatile uint8_t r __asm ("0x001A");

#line 79
  r |= 1 << 6;
}

#line 78
static inline  void TOSH_SEL_BT_CTS_IOFUNC()
#line 78
{
#line 78
  static volatile uint8_t r __asm ("0x0026");

#line 78
  r &= ~(1 << 7);
}

#line 78
static inline  void TOSH_MAKE_BT_CTS_OUTPUT()
#line 78
{
#line 78
  static volatile uint8_t r __asm ("0x0022");

#line 78
  r |= 1 << 7;
}

#line 76
static inline  void TOSH_SEL_BT_PIO_IOFUNC()
#line 76
{
#line 76
  static volatile uint8_t r __asm ("0x002E");

#line 76
  r &= ~(1 << 6);
}

#line 76
static inline  void TOSH_MAKE_BT_PIO_INPUT()
#line 76
{
#line 76
  static volatile uint8_t r __asm ("0x002A");

#line 76
  r &= ~(1 << 6);
}

#line 77
static inline  void TOSH_SEL_BT_RTS_IOFUNC()
#line 77
{
#line 77
  static volatile uint8_t r __asm ("0x0026");

#line 77
  r &= ~(1 << 6);
}

#line 77
static inline  void TOSH_MAKE_BT_RTS_INPUT()
#line 77
{
#line 77
  static volatile uint8_t r __asm ("0x0022");

#line 77
  r &= ~(1 << 6);
}


static inline  void TOSH_CLR_BT_RESET_PIN()
#line 81
{
#line 81
  static volatile uint8_t r __asm ("0x0031");

#line 81
  r &= ~(1 << 5);
}

#line 81
static inline  void TOSH_SEL_BT_RESET_IOFUNC()
#line 81
{
#line 81
  static volatile uint8_t r __asm ("0x0033");

#line 81
  r &= ~(1 << 5);
}

#line 81
static inline  void TOSH_MAKE_BT_RESET_OUTPUT()
#line 81
{
#line 81
  static volatile uint8_t r __asm ("0x0032");

#line 81
  r |= 1 << 5;
}







static inline  void TOSH_MAKE_TILT_INPUT()
#line 90
{
#line 90
  static volatile uint8_t r __asm ("0x002A");

#line 90
  r &= ~(1 << 4);
}

#line 90
static inline  void TOSH_SEL_TILT_IOFUNC()
#line 90
{
#line 90
  static volatile uint8_t r __asm ("0x002E");

#line 90
  r &= ~(1 << 4);
}

#line 62
static inline  void TOSH_MAKE_RADIO_SFD_INPUT()
#line 62
{
#line 62
  static volatile uint8_t r __asm ("0x0022");

#line 62
  r &= ~(1 << 2);
}

#line 62
static inline  void TOSH_SEL_RADIO_SFD_IOFUNC()
#line 62
{
#line 62
  static volatile uint8_t r __asm ("0x0026");

#line 62
  r &= ~(1 << 2);
}

#line 56
static inline  void TOSH_MAKE_RADIO_FIFOP_INPUT()
#line 56
{
#line 56
  static volatile uint8_t r __asm ("0x0022");

#line 56
  r &= ~(1 << 0);
}

#line 56
static inline  void TOSH_SEL_RADIO_FIFOP_IOFUNC()
#line 56
{
#line 56
  static volatile uint8_t r __asm ("0x0026");

#line 56
  r &= ~(1 << 0);
}

#line 55
static inline  void TOSH_MAKE_RADIO_FIFO_INPUT()
#line 55
{
#line 55
  static volatile uint8_t r __asm ("0x0022");

#line 55
  r &= ~(1 << 5);
}

#line 55
static inline  void TOSH_SEL_RADIO_FIFO_IOFUNC()
#line 55
{
#line 55
  static volatile uint8_t r __asm ("0x0026");

#line 55
  r &= ~(1 << 5);
}

#line 57
static inline  void TOSH_MAKE_RADIO_CCA_INPUT()
#line 57
{
#line 57
  static volatile uint8_t r __asm ("0x002A");

#line 57
  r &= ~(1 << 7);
}

#line 57
static inline  void TOSH_SEL_RADIO_CCA_IOFUNC()
#line 57
{
#line 57
  static volatile uint8_t r __asm ("0x002E");

#line 57
  r &= ~(1 << 7);
}







static inline  void TOSH_CLR_RADIO_RESET_PIN()
#line 66
{
#line 66
  static volatile uint8_t r __asm ("0x0031");

#line 66
  r &= ~(1 << 7);
}

#line 66
static inline  void TOSH_SEL_RADIO_RESET_IOFUNC()
#line 66
{
#line 66
  static volatile uint8_t r __asm ("0x0033");

#line 66
  r &= ~(1 << 7);
}

#line 66
static inline  void TOSH_MAKE_RADIO_RESET_OUTPUT()
#line 66
{
#line 66
  static volatile uint8_t r __asm ("0x0032");

#line 66
  r |= 1 << 7;
}

#line 65
static inline  void TOSH_SET_RADIO_CSN_PIN()
#line 65
{
#line 65
  static volatile uint8_t r __asm ("0x0031");

#line 65
  r |= 1 << 4;
}

#line 65
static inline  void TOSH_SEL_RADIO_CSN_IOFUNC()
#line 65
{
#line 65
  static volatile uint8_t r __asm ("0x0033");

#line 65
  r &= ~(1 << 4);
}

#line 65
static inline  void TOSH_MAKE_RADIO_CSN_OUTPUT()
#line 65
{
#line 65
  static volatile uint8_t r __asm ("0x0032");

#line 65
  r |= 1 << 4;
}

#line 60
static inline  void TOSH_CLR_RADIO_VREF_PIN()
#line 60
{
#line 60
  static volatile uint8_t r __asm ("0x0031");

#line 60
  r &= ~(1 << 6);
}

#line 60
static inline  void TOSH_SEL_RADIO_VREF_IOFUNC()
#line 60
{
#line 60
  static volatile uint8_t r __asm ("0x0033");

#line 60
  r &= ~(1 << 6);
}

#line 60
static inline  void TOSH_MAKE_RADIO_VREF_OUTPUT()
#line 60
{
#line 60
  static volatile uint8_t r __asm ("0x0032");

#line 60
  r |= 1 << 6;
}

#line 52
static inline  void TOSH_SET_GREEN_LED_PIN()
#line 52
{
#line 52
  static volatile uint8_t r __asm ("0x001D");

#line 52
  r |= 1 << 3;
}

#line 51
static inline  void TOSH_SET_YELLOW_LED_PIN()
#line 51
{
#line 51
  static volatile uint8_t r __asm ("0x001D");

#line 51
  r |= 1 << 2;
}

#line 50
static inline  void TOSH_SET_RED_LED_PIN()
#line 50
{
#line 50
  static volatile uint8_t r __asm ("0x001D");

#line 50
  r |= 1 << 0;
}

#line 52
static inline  void TOSH_MAKE_GREEN_LED_OUTPUT()
#line 52
{
#line 52
  static volatile uint8_t r __asm ("0x001E");

#line 52
  r |= 1 << 3;
}

#line 52
static inline  void TOSH_SEL_GREEN_LED_IOFUNC()
#line 52
{
#line 52
  static volatile uint8_t r __asm ("0x001F");

#line 52
  r &= ~(1 << 3);
}

#line 51
static inline  void TOSH_MAKE_YELLOW_LED_OUTPUT()
#line 51
{
#line 51
  static volatile uint8_t r __asm ("0x001E");

#line 51
  r |= 1 << 2;
}

#line 51
static inline  void TOSH_SEL_YELLOW_LED_IOFUNC()
#line 51
{
#line 51
  static volatile uint8_t r __asm ("0x001F");

#line 51
  r &= ~(1 << 2);
}

#line 50
static inline  void TOSH_MAKE_RED_LED_OUTPUT()
#line 50
{
#line 50
  static volatile uint8_t r __asm ("0x001E");

#line 50
  r |= 1 << 0;
}

#line 50
static inline  void TOSH_SEL_RED_LED_IOFUNC()
#line 50
{
#line 50
  static volatile uint8_t r __asm ("0x001F");

#line 50
  r &= ~(1 << 0);
}

#line 114
static inline  void TOSH_SET_SW_BT_PWR_N_PIN()
#line 114
{
#line 114
  static volatile uint8_t r __asm ("0x001D");

#line 114
  r |= 1 << 6;
}

#line 114
static inline  void TOSH_MAKE_SW_BT_PWR_N_OUTPUT()
#line 114
{
#line 114
  static volatile uint8_t r __asm ("0x001E");

#line 114
  r |= 1 << 6;
}

#line 114
static inline  void TOSH_SEL_SW_BT_PWR_N_IOFUNC()
#line 114
{
#line 114
  static volatile uint8_t r __asm ("0x001F");

#line 114
  r &= ~(1 << 6);
}

#line 129
static inline  void TOSH_CLR_SD_CLK_PIN()
#line 129
{
#line 129
  static volatile uint8_t r __asm ("0x0019");

#line 129
  r &= ~(1 << 3);
}

#line 127
static inline  void TOSH_CLR_SD_DI_PIN()
#line 127
{
#line 127
  static volatile uint8_t r __asm ("0x0019");

#line 127
  r &= ~(1 << 1);
}

#line 88
static inline  void TOSH_CLR_SD_CS_N_PIN()
#line 88
{
#line 88
  static volatile uint8_t r __asm ("0x0019");

#line 88
  r &= ~(1 << 0);
}

#line 113
static inline  void TOSH_SET_SW_SD_PWR_N_PIN()
#line 113
{
#line 113
  static volatile uint8_t r __asm ("0x001D");

#line 113
  r |= 1 << 5;
}

#line 127
static inline  void TOSH_MAKE_SD_DI_OUTPUT()
#line 127
{
#line 127
  static volatile uint8_t r __asm ("0x001A");

#line 127
  r |= 1 << 1;
}

#line 127
static inline  void TOSH_SEL_SD_DI_IOFUNC()
#line 127
{
#line 127
  static volatile uint8_t r __asm ("0x001B");

#line 127
  r &= ~(1 << 1);
}

#line 128
static inline  void TOSH_MAKE_SD_DO_INPUT()
#line 128
{
#line 128
  static volatile uint8_t r __asm ("0x001A");

#line 128
  r &= ~(1 << 2);
}

#line 128
static inline  void TOSH_SEL_SD_DO_IOFUNC()
#line 128
{
#line 128
  static volatile uint8_t r __asm ("0x001B");

#line 128
  r &= ~(1 << 2);
}

#line 129
static inline  void TOSH_MAKE_SD_CLK_OUTPUT()
#line 129
{
#line 129
  static volatile uint8_t r __asm ("0x001A");

#line 129
  r |= 1 << 3;
}

#line 129
static inline  void TOSH_SEL_SD_CLK_IOFUNC()
#line 129
{
#line 129
  static volatile uint8_t r __asm ("0x001B");

#line 129
  r &= ~(1 << 3);
}

#line 88
static inline  void TOSH_MAKE_SD_CS_N_OUTPUT()
#line 88
{
#line 88
  static volatile uint8_t r __asm ("0x001A");

#line 88
  r |= 1 << 0;
}

#line 88
static inline  void TOSH_SEL_SD_CS_N_IOFUNC()
#line 88
{
#line 88
  static volatile uint8_t r __asm ("0x001B");

#line 88
  r &= ~(1 << 0);
}

#line 113
static inline  void TOSH_MAKE_SW_SD_PWR_N_OUTPUT()
#line 113
{
#line 113
  static volatile uint8_t r __asm ("0x001E");

#line 113
  r |= 1 << 5;
}

#line 113
static inline  void TOSH_SEL_SW_SD_PWR_N_IOFUNC()
#line 113
{
#line 113
  static volatile uint8_t r __asm ("0x001F");

#line 113
  r &= ~(1 << 5);
}

#line 149
static inline  void TOSH_SET_DOCK_N_PIN()
#line 149
{
#line 149
  static volatile uint8_t r __asm ("0x0029");

#line 149
  r |= 1 << 3;
}

#line 149
static inline  void TOSH_MAKE_DOCK_N_OUTPUT()
#line 149
{
#line 149
  static volatile uint8_t r __asm ("0x002A");

#line 149
  r |= 1 << 3;
}

#line 149
static inline  void TOSH_SEL_DOCK_N_IOFUNC()
#line 149
{
#line 149
  static volatile uint8_t r __asm ("0x002E");

#line 149
  r &= ~(1 << 3);
}

# 44 "../../../tos/platforms/shimmer2r/MotePlatformC.nc"
static inline error_t MotePlatformC__Init__init(void )
#line 44
{


  TOSH_SEL_DOCK_N_IOFUNC();
  TOSH_MAKE_DOCK_N_OUTPUT();
  TOSH_SET_DOCK_N_PIN();


  TOSH_SEL_SW_SD_PWR_N_IOFUNC();
  TOSH_MAKE_SW_SD_PWR_N_OUTPUT();

  TOSH_SEL_SD_CS_N_IOFUNC();
  TOSH_MAKE_SD_CS_N_OUTPUT();

  TOSH_SEL_SD_CLK_IOFUNC();
  TOSH_MAKE_SD_CLK_OUTPUT();
  TOSH_SEL_SD_DO_IOFUNC();
  TOSH_MAKE_SD_DO_INPUT();
  TOSH_SEL_SD_DI_IOFUNC();
  TOSH_MAKE_SD_DI_OUTPUT();






  TOSH_SET_SW_SD_PWR_N_PIN();
  TOSH_CLR_SD_CS_N_PIN();
  TOSH_CLR_SD_DI_PIN();
  TOSH_CLR_SD_CLK_PIN();

  TOSH_SEL_SW_BT_PWR_N_IOFUNC();
  TOSH_MAKE_SW_BT_PWR_N_OUTPUT();
  TOSH_SET_SW_BT_PWR_N_PIN();


  TOSH_SEL_RED_LED_IOFUNC();
  TOSH_MAKE_RED_LED_OUTPUT();
  TOSH_SEL_YELLOW_LED_IOFUNC();
  TOSH_MAKE_YELLOW_LED_OUTPUT();
  TOSH_SEL_GREEN_LED_IOFUNC();
  TOSH_MAKE_GREEN_LED_OUTPUT();

  TOSH_SET_RED_LED_PIN();
  TOSH_SET_YELLOW_LED_PIN();
  TOSH_SET_GREEN_LED_PIN();



  TOSH_MAKE_RADIO_VREF_OUTPUT();
  TOSH_SEL_RADIO_VREF_IOFUNC();
  TOSH_CLR_RADIO_VREF_PIN();

  TOSH_MAKE_RADIO_CSN_OUTPUT();
  TOSH_SEL_RADIO_CSN_IOFUNC();
  TOSH_SET_RADIO_CSN_PIN();


  TOSH_MAKE_RADIO_RESET_OUTPUT();
  TOSH_SEL_RADIO_RESET_IOFUNC();
  TOSH_CLR_RADIO_RESET_PIN();

  TOSH_SEL_RADIO_CCA_IOFUNC();
  TOSH_MAKE_RADIO_CCA_INPUT();
  TOSH_SEL_RADIO_FIFO_IOFUNC();
  TOSH_MAKE_RADIO_FIFO_INPUT();
  TOSH_SEL_RADIO_FIFOP_IOFUNC();
  TOSH_MAKE_RADIO_FIFOP_INPUT();
  TOSH_SEL_RADIO_SFD_IOFUNC();
  TOSH_MAKE_RADIO_SFD_INPUT();

  TOSH_SEL_TILT_IOFUNC();
  TOSH_MAKE_TILT_INPUT();


  TOSH_MAKE_BT_RESET_OUTPUT();
  TOSH_SEL_BT_RESET_IOFUNC();
  TOSH_CLR_BT_RESET_PIN();

  TOSH_MAKE_BT_RTS_INPUT();
  TOSH_SEL_BT_RTS_IOFUNC();

  TOSH_MAKE_BT_PIO_INPUT();
  TOSH_SEL_BT_PIO_IOFUNC();

  TOSH_MAKE_BT_CTS_OUTPUT();
  TOSH_SEL_BT_CTS_IOFUNC();

  TOSH_MAKE_BT_TXD_OUTPUT();
  TOSH_SEL_BT_TXD_IOFUNC();

  TOSH_MAKE_BT_RXD_INPUT();
  TOSH_SEL_BT_RXD_IOFUNC();


  TOSH_MAKE_PROG_IN_OUTPUT();
  TOSH_MAKE_PROG_OUT_OUTPUT();
  TOSH_SET_PROG_OUT_PIN();
  TOSH_SEL_PROG_IN_IOFUNC();
  TOSH_SEL_PROG_OUT_IOFUNC();


  TOSH_SEL_ADC_0_IOFUNC();
  TOSH_MAKE_ADC_0_OUTPUT();
  TOSH_SEL_ADC_1_IOFUNC();
  TOSH_MAKE_ADC_1_OUTPUT();
  TOSH_SEL_ADC_2_IOFUNC();
  TOSH_MAKE_ADC_2_OUTPUT();
  TOSH_SEL_ADC_6_IOFUNC();
  TOSH_MAKE_ADC_6_OUTPUT();
  TOSH_SEL_ADC_7_IOFUNC();
  TOSH_MAKE_ADC_7_OUTPUT();

  TOSH_SEL_ADC_ACCELZ_IOFUNC();
  TOSH_MAKE_ADC_ACCELZ_INPUT();
  TOSH_SEL_ADC_ACCELY_IOFUNC();
  TOSH_MAKE_ADC_ACCELY_INPUT();
  TOSH_SEL_ADC_ACCELX_IOFUNC();
  TOSH_MAKE_ADC_ACCELX_INPUT();

  TOSH_SEL_ROSC_IOFUNC();
  TOSH_MAKE_ROSC_INPUT();


  TOSH_SEL_ONEWIRE_IOFUNC();
  TOSH_MAKE_ONEWIRE_OUTPUT();
  TOSH_SET_ONEWIRE_PIN();







  TOSH_SEL_ACCEL_SEL0_IOFUNC();
  TOSH_MAKE_ACCEL_SEL0_OUTPUT();
  TOSH_CLR_ACCEL_SEL0_PIN();
  TOSH_SEL_ACCEL_SLEEP_N_IOFUNC();
  TOSH_MAKE_ACCEL_SLEEP_N_OUTPUT();
  TOSH_CLR_ACCEL_SLEEP_N_PIN();





  TOSH_SEL_PWRMUX_SEL_IOFUNC();
  TOSH_MAKE_PWRMUX_SEL_OUTPUT();
  TOSH_CLR_PWRMUX_SEL_PIN();


  TOSH_SEL_SER0_CTS_IOFUNC();
  TOSH_MAKE_SER0_CTS_OUTPUT();
  TOSH_SEL_SER0_RTS_IOFUNC();
  TOSH_MAKE_SER0_RTS_OUTPUT();
  TOSH_CLR_SER0_RTS_PIN();


  TOSH_SEL_GIO0_IOFUNC();
  TOSH_MAKE_GIO0_OUTPUT();
  TOSH_CLR_GIO0_PIN();

  TOSH_SEL_GIO1_IOFUNC();
  TOSH_MAKE_GIO1_OUTPUT();

  TOSH_SEL_UTXD0_IOFUNC();
  TOSH_MAKE_UTXD0_OUTPUT();
  TOSH_SEL_URXD0_IOFUNC();
  TOSH_MAKE_URXD0_OUTPUT();
  TOSH_SET_URXD0_PIN();

  TOSH_SEL_UTXD1_IOFUNC();
  TOSH_MAKE_UTXD1_OUTPUT();
  TOSH_SEL_URXD1_IOFUNC();
  TOSH_MAKE_URXD1_OUTPUT();
  TOSH_SEL_UCLK1_IOFUNC();
  TOSH_MAKE_UCLK1_OUTPUT();
  TOSH_SEL_SIMO1_IOFUNC();
  TOSH_MAKE_SIMO1_OUTPUT();
  TOSH_SEL_SOMI1_IOFUNC();
  TOSH_MAKE_SOMI1_INPUT();

  TOSH_SET_SD_CS_N_PIN();
  TOSH_SET_SD_DI_PIN();
  TOSH_SET_SD_CLK_PIN();


  TOSH_SET_SIMO1_PIN();
  TOSH_SET_UCLK1_PIN();


  TOSH_MAKE_DOCK_N_INPUT();

  return SUCCESS;
}

# 62 "../../../tos/interfaces/Init.nc"
inline static error_t PlatformP__MoteInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = MotePlatformC__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 163 "../../../tos/chips/msp430/timer/Msp430ClockP.nc"
static inline void Msp430ClockP__startTimerB(void )
{

  Msp430ClockP__TBCTL = 0x0020 | (Msp430ClockP__TBCTL & ~(0x0020 | 0x0010));
}

#line 151
static inline void Msp430ClockP__startTimerA(void )
{

  Msp430ClockP__TACTL = 0x0020 | (Msp430ClockP__TACTL & ~(0x0020 | 0x0010));
}

#line 115
static inline void Msp430ClockP__Msp430ClockInit__defaultInitTimerB(void )
{
  TBR = 0;









  Msp430ClockP__TBCTL = 0x0100 | 0x0002;
}

#line 145
static inline void Msp430ClockP__Msp430ClockInit__default__initTimerB(void )
{
  Msp430ClockP__Msp430ClockInit__defaultInitTimerB();
}

# 43 "../../../tos/chips/msp430/timer/Msp430ClockInit.nc"
inline static void Msp430ClockP__Msp430ClockInit__initTimerB(void ){
#line 43
  Msp430ClockP__Msp430ClockInit__default__initTimerB();
#line 43
}
#line 43
# 100 "../../../tos/chips/msp430/timer/Msp430ClockP.nc"
static inline void Msp430ClockP__Msp430ClockInit__defaultInitTimerA(void )
{
  TAR = 0;









  Msp430ClockP__TACTL = 0x0200 | 0x0002;
}

#line 140
static inline void Msp430ClockP__Msp430ClockInit__default__initTimerA(void )
{
  Msp430ClockP__Msp430ClockInit__defaultInitTimerA();
}

# 42 "../../../tos/chips/msp430/timer/Msp430ClockInit.nc"
inline static void Msp430ClockP__Msp430ClockInit__initTimerA(void ){
#line 42
  Msp430ClockP__Msp430ClockInit__default__initTimerA();
#line 42
}
#line 42
# 79 "../../../tos/chips/msp430/timer/Msp430ClockP.nc"
static inline void Msp430ClockP__Msp430ClockInit__defaultInitClocks(void )
{





  BCSCTL1 = 0x80 | (BCSCTL1 & ((0x04 | 0x02) | 0x01));







  BCSCTL2 = 0x04;


  Msp430ClockP__IE1 &= ~0x02;
}

#line 135
static inline void Msp430ClockP__Msp430ClockInit__default__initClocks(void )
{
  Msp430ClockP__Msp430ClockInit__defaultInitClocks();
}

# 41 "../../../tos/chips/msp430/timer/Msp430ClockInit.nc"
inline static void Msp430ClockP__Msp430ClockInit__initClocks(void ){
#line 41
  Msp430ClockP__Msp430ClockInit__default__initClocks();
#line 41
}
#line 41
# 181 "../../../tos/chips/msp430/timer/Msp430ClockP.nc"
static inline uint16_t Msp430ClockP__test_calib_busywait_delta(int calib)
{
  int8_t aclk_count = 2;
  uint16_t dco_prev = 0;
  uint16_t dco_curr = 0;

  Msp430ClockP__set_dco_calib(calib);

  while (aclk_count-- > 0) 
    {
      TBCCR0 = TBR + Msp430ClockP__ACLK_CALIB_PERIOD;
      TBCCTL0 &= ~0x0001;
      while ((TBCCTL0 & 0x0001) == 0) ;
      dco_prev = dco_curr;
      dco_curr = TAR;
    }

  return dco_curr - dco_prev;
}




static inline void Msp430ClockP__busyCalibrateDco(void )
{

  int calib;
  int step;






  for (calib = 0, step = 0x800; step != 0; step >>= 1) 
    {

      if (Msp430ClockP__test_calib_busywait_delta(calib | step) <= Msp430ClockP__TARGET_DCO_DELTA) {
        calib |= step;
        }
    }

  if ((calib & 0x0e0) == 0x0e0) {
    calib &= ~0x01f;
    }
  Msp430ClockP__set_dco_calib(calib);
}

#line 67
static inline void Msp430ClockP__Msp430ClockInit__defaultSetupDcoCalibrate(void )
{



  Msp430ClockP__TACTL = 0x0200 | 0x0020;
  Msp430ClockP__TBCTL = 0x0100 | 0x0020;
  BCSCTL1 = 0x80 | 0x04;
  BCSCTL2 = 0;
  TBCCTL0 = 0x4000;
}

#line 130
static inline void Msp430ClockP__Msp430ClockInit__default__setupDcoCalibrate(void )
{
  Msp430ClockP__Msp430ClockInit__defaultSetupDcoCalibrate();
}

# 40 "../../../tos/chips/msp430/timer/Msp430ClockInit.nc"
inline static void Msp430ClockP__Msp430ClockInit__setupDcoCalibrate(void ){
#line 40
  Msp430ClockP__Msp430ClockInit__default__setupDcoCalibrate();
#line 40
}
#line 40
# 229 "../../../tos/chips/msp430/timer/Msp430ClockP.nc"
static inline error_t Msp430ClockP__Init__init(void )
{

  Msp430ClockP__TACTL = 0x0004;
  Msp430ClockP__TAIV = 0;
  Msp430ClockP__TBCTL = 0x0004;
  Msp430ClockP__TBIV = 0;
  /* atomic removed: atomic calls only */

  {
    Msp430ClockP__Msp430ClockInit__setupDcoCalibrate();
    Msp430ClockP__busyCalibrateDco();
    Msp430ClockP__Msp430ClockInit__initClocks();
    Msp430ClockP__Msp430ClockInit__initTimerA();
    Msp430ClockP__Msp430ClockInit__initTimerB();
    Msp430ClockP__startTimerA();
    Msp430ClockP__startTimerB();
  }

  return SUCCESS;
}

# 62 "../../../tos/interfaces/Init.nc"
inline static error_t PlatformP__MoteClockInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = Msp430ClockP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 10 "../../../tos/platforms/shimmer2r/PlatformP.nc"
static inline error_t PlatformP__Init__init(void )
#line 10
{
  WDTCTL = 0x5A00 + 0x0080;
  PlatformP__MoteClockInit__init();
  PlatformP__MoteInit__init();
  PlatformP__LedsInit__init();
  return SUCCESS;
}

# 62 "../../../tos/interfaces/Init.nc"
inline static error_t RealMainP__PlatformInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = PlatformP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 65 "../../../tos/interfaces/Scheduler.nc"
inline static bool RealMainP__Scheduler__runNextTask(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = SchedulerBasicP__Scheduler__runNextTask();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 376 "../../../tos/platforms/shimmer/chips/bluetooth/RovingNetworksP.nc"
static inline void RovingNetworksP__runSetCommands__runTask(void )
#line 376
{
  switch (RovingNetworksP__setupStep) {
      case 0: 
        RovingNetworksP__setupStep++;
      RovingNetworksP__writeCommand("$$$", "CMD");
      break;
      case 1: 
        RovingNetworksP__setupStep++;

      if (RovingNetworksP__resetDefaultsRequest) {
          RovingNetworksP__writeCommand("SF,1\r", "AOK");
          break;
        }
      case 2: 
        RovingNetworksP__setupStep++;

      if (RovingNetworksP__newMode) {
          sprintf(RovingNetworksP__commandbuf, "SM,%d\r", RovingNetworksP__radioMode);
          RovingNetworksP__writeCommand(RovingNetworksP__commandbuf, "AOK");
          break;
        }
      case 3: 
        RovingNetworksP__setupStep++;




      if (!RovingNetworksP__discoverable) {
          RovingNetworksP__writeCommand("SI,0000\r", "AOK");
          break;
        }
      case 4: 
        RovingNetworksP__setupStep++;

      if (RovingNetworksP__authenticate) {
          RovingNetworksP__writeCommand("SA,1\r", "AOK");
          break;
        }
      case 5: 
        RovingNetworksP__setupStep++;

      if (RovingNetworksP__encrypt) {
          RovingNetworksP__writeCommand("SE,1\r", "AOK");
          break;
        }
      case 6: 
        RovingNetworksP__setupStep++;

      if (RovingNetworksP__setNameRequest) {
          sprintf(RovingNetworksP__commandbuf, "SN,%s\r", RovingNetworksP__newName);
          RovingNetworksP__writeCommand(RovingNetworksP__commandbuf, "AOK");
          break;
        }
      case 7: 
        RovingNetworksP__setupStep++;

      if (RovingNetworksP__setPINRequest) {
          sprintf(RovingNetworksP__commandbuf, "SP,%s\r", RovingNetworksP__newPIN);
          RovingNetworksP__writeCommand(RovingNetworksP__commandbuf, "AOK");
          break;
        }
      case 8: 
        RovingNetworksP__setupStep++;
      if (RovingNetworksP__setSvcClassRequest) {
          sprintf(RovingNetworksP__commandbuf, "SC,%s\r", RovingNetworksP__newSvcClass);
          RovingNetworksP__writeCommand(RovingNetworksP__commandbuf, "AOK");
          break;
        }
      case 9: 
        RovingNetworksP__setupStep++;
      if (RovingNetworksP__setDevClassRequest) {
          sprintf(RovingNetworksP__commandbuf, "SD,%s\r", RovingNetworksP__newDevClass);
          RovingNetworksP__writeCommand(RovingNetworksP__commandbuf, "AOK");
          break;
        }
      case 10: 
        RovingNetworksP__setupStep++;
      if (RovingNetworksP__setSvcNameRequest) {
          sprintf(RovingNetworksP__commandbuf, "SS,%s\r", RovingNetworksP__newSvcName);
          RovingNetworksP__writeCommand(RovingNetworksP__commandbuf, "AOK");
          break;
        }
      case 11: 
        RovingNetworksP__setupStep++;
      if (RovingNetworksP__setRawBaudrate) {

          sprintf(RovingNetworksP__commandbuf, "SZ,%s\r", RovingNetworksP__newRawBaudrate);
          RovingNetworksP__writeCommand(RovingNetworksP__commandbuf, "AOK");
          break;
        }
      case 12: 
        RovingNetworksP__setupStep++;
      if (RovingNetworksP__disableRemoteConfig) {

          RovingNetworksP__writeCommand("ST,0\r", "AOK");
        }
      else {

          RovingNetworksP__writeCommand("ST,60\r", "AOK");
        }
      break;
      case 13: 
        RovingNetworksP__setupStep++;
      if (RovingNetworksP__setCustomInquiryTime) {
          sprintf(RovingNetworksP__commandbuf, "SI,%s\r", RovingNetworksP__newInquiryTime);
          RovingNetworksP__writeCommand(RovingNetworksP__commandbuf, "AOK");
        }
      else {

          RovingNetworksP__writeCommand("SI,0040\r", "AOK");
        }
      break;
      case 14: 
        RovingNetworksP__setupStep++;
      if (RovingNetworksP__setCustomPagingTime) {
          sprintf(RovingNetworksP__commandbuf, "SJ,%s\r", RovingNetworksP__newPagingTime);
          RovingNetworksP__writeCommand(RovingNetworksP__commandbuf, "AOK");
        }
      else {

          RovingNetworksP__writeCommand("SJ,0080\r", "AOK");
        }
      break;
      case 15: 
        RovingNetworksP__setupStep++;
      if (RovingNetworksP__setBaudrate) {

          sprintf(RovingNetworksP__commandbuf, "SU,%s\r", RovingNetworksP__newBaudrate);
          RovingNetworksP__writeCommand(RovingNetworksP__commandbuf, "AOK");
          break;
        }

      case 16: 
        RovingNetworksP__setupStep++;

      RovingNetworksP__writeCommand("---\r", "END");
      break;
      default: 
        break;
    }
}

#line 302
static inline void RovingNetworksP__runMasterCommands__runTask(void )
{
  switch (RovingNetworksP__masterStep) {
      case 0: 
        RovingNetworksP__masterStep++;
      RovingNetworksP__writeCommand("$$$", "CMD");
      break;
      case 1: 
        RovingNetworksP__masterStep++;

      if (RovingNetworksP__deviceConn && !RovingNetworksP__btConnected) {
          RovingNetworksP__masterStep = -1;
          sprintf(RovingNetworksP__commandbuf, "C,%s\r", RovingNetworksP__targetBt);
          RovingNetworksP__writeCommandNoRsp(RovingNetworksP__commandbuf);
          RovingNetworksP__runningMasterCommands = FALSE;
          break;
        }
      case 2: 
        RovingNetworksP__masterStep++;

      if (!RovingNetworksP__deviceConn && RovingNetworksP__btConnected) {
          RovingNetworksP__masterStep = -1;
          RovingNetworksP__writeCommandNoRsp("K,\r");
          RovingNetworksP__runningMasterCommands = FALSE;
          break;
        }
      case 3: 

        RovingNetworksP__masterStep++;

      RovingNetworksP__writeCommand("---\r", "END");
      break;
      default: 
        RovingNetworksP__deviceConn = FALSE;
      RovingNetworksP__runningMasterCommands = FALSE;
      break;
    }
}

# 136 "SimpleAccelC.nc"
static inline void SimpleAccelC__Bluetooth__writeDone(void )
#line 136
{
  /* atomic removed: atomic calls only */
#line 137
  SimpleAccelC__enable_sending = TRUE;
}

# 104 "../../../tos/platforms/shimmer/chips/bluetooth/Bluetooth.nc"
inline static void RovingNetworksP__Bluetooth__writeDone(void ){
#line 104
  SimpleAccelC__Bluetooth__writeDone();
#line 104
}
#line 104
# 384 "../../../tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static inline void HplMsp430Usart1P__Usart__tx(uint8_t data)
#line 384
{
  HplMsp430Usart1P__U1TXBUF = data;
}

# 224 "../../../tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void RovingNetworksP__UARTControl__tx(uint8_t data){
#line 224
  HplMsp430Usart1P__Usart__tx(data);
#line 224
}
#line 224
# 88 "../../../tos/platforms/shimmer/chips/bluetooth/RovingNetworksP.nc"
static inline void RovingNetworksP__sendNextChar__runTask(void )
#line 88
{
  if (RovingNetworksP__charsSent < RovingNetworksP__outgoingMsgLen) {
      RovingNetworksP__UARTControl__tx(*(RovingNetworksP__outgoingMsg + RovingNetworksP__charsSent));
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 91
        RovingNetworksP__charsSent++;
#line 91
        __nesc_atomic_end(__nesc_atomic); }
    }
  else {
      RovingNetworksP__messageInProgress = FALSE;
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 95
        if (! *RovingNetworksP__expectedCommandResponse) {
          RovingNetworksP__Bluetooth__writeDone();
          }
#line 97
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 103 "../../../tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt){
#line 103
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 58 "../../../tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt = dt;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot = oneshot;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(t0, dt);
}

#line 93
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 94
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(t0, dt, TRUE);
}

# 129 "../../../tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt){
#line 129
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(t0, dt);
#line 129
}
#line 129
# 65 "../../../tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__stop(void )
{
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents();
}

# 73 "../../../tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__stop(void ){
#line 73
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__stop();
#line 73
}
#line 73
# 102 "../../../tos/lib/timer/TransformAlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__stop(void )
{
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__stop();
}

# 73 "../../../tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void ){
#line 73
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__stop();
#line 73
}
#line 73
# 71 "../../../tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void )
{
#line 72
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop();
}

# 78 "../../../tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop();
#line 78
}
#line 78
# 64 "../../../tos/lib/timer/Counter.nc"
inline static /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__get(void ){
#line 64
  unsigned long __nesc_result;
#line 64

#line 64
  __nesc_result = /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 86 "../../../tos/lib/timer/TransformAlarmC.nc"
static inline /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__getNow(void )
{
  return /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__get();
}

# 109 "../../../tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void ){
#line 109
  unsigned long __nesc_result;
#line 109

#line 109
  __nesc_result = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 96 "../../../tos/lib/timer/AlarmToTimerC.nc"
static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void )
{
#line 97
  return /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow();
}

# 136 "../../../tos/lib/timer/Timer.nc"
inline static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void ){
#line 136
  unsigned long __nesc_result;
#line 136

#line 136
  __nesc_result = /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow();
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 100 "../../../tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void )
{




  uint32_t now = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint16_t num;

  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop();

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;
          int32_t remaining = timer->dt - elapsed;

          if (remaining < min_remaining) 
            {
              min_remaining = remaining;
              min_remaining_isset = TRUE;
            }
        }
    }

  if (min_remaining_isset) 
    {
      if (min_remaining <= 0) {
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(now);
        }
      else {
#line 135
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(now, min_remaining);
        }
    }
}

# 100 "../../../tos/chips/msp430/adc12/HplAdc12P.nc"
static inline void HplAdc12P__HplAdc12__startConversion(void )
#line 100
{
  HplAdc12P__ADC12CTL0 |= 0x010;
  HplAdc12P__ADC12CTL0 |= 0x001 + 0x002;
}

# 128 "../../../tos/chips/msp430/adc12/HplAdc12.nc"
inline static void shimmerAnalogSetupP__HplAdc12__startConversion(void ){
#line 128
  HplAdc12P__HplAdc12__startConversion();
#line 128
}
#line 128
# 176 "../../../tos/chips/msp430/dma/HplMsp430DmaXP.nc"
static inline void /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__enableDMA(void )
#line 176
{
  * (volatile uint16_t *)480U |= 0x0010;
}

# 60 "../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
inline static void /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__HplChannel__enableDMA(void ){
#line 60
  /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__enableDMA();
#line 60
}
#line 60
# 92 "../../../tos/chips/msp430/dma/Msp430DmaChannelP.nc"
static inline error_t /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__Channel__startTransfer(void )
#line 92
{
  /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__HplChannel__enableDMA();
  return SUCCESS;
}

# 84 "../../../tos/chips/msp430/dma/Msp430DmaChannel.nc"
inline static error_t shimmerAnalogSetupP__Msp430DmaChannel__startTransfer(void ){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__Channel__startTransfer();
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 178 "../../../tos/platforms/shimmer/shimmerAnalogSetupP.nc"
static inline void shimmerAnalogSetupP__shimmerAnalogSetup__triggerConversion(void )
#line 178
{
  shimmerAnalogSetupP__Msp430DmaChannel__startTransfer();
  shimmerAnalogSetupP__HplAdc12__startConversion();
}

# 79 "../../../tos/platforms/shimmer/shimmerAnalogSetup.nc"
inline static void SimpleAccelC__shimmerAnalogSetup__triggerConversion(void ){
#line 79
  shimmerAnalogSetupP__shimmerAnalogSetup__triggerConversion();
#line 79
}
#line 79
# 57 "../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P40*/HplMsp430GeneralIOP__24__IO__clr(void )
#line 57
{
#line 57
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 57
    * (volatile uint8_t * )29U &= ~(0x01 << 0);
#line 57
    __nesc_atomic_end(__nesc_atomic); }
}

# 53 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__clr(void ){
#line 53
  /*HplMsp430GeneralIOC.P40*/HplMsp430GeneralIOP__24__IO__clr();
#line 53
}
#line 53
# 49 "../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__clr(void )
#line 49
{
#line 49
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__clr();
}

# 41 "../../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__clr(void ){
#line 41
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__clr();
#line 41
}
#line 41
# 75 "../../../tos/platforms/shimmer2r/LedsP.nc"
static inline void LedsP__Leds__led0On(void )
#line 75
{
  LedsP__Led0__clr();
  ;
#line 77
  ;
}

# 57 "../../../tos/platforms/shimmer2r/Leds.nc"
inline static void SimpleAccelC__Leds__led0On(void ){
#line 57
  LedsP__Leds__led0On();
#line 57
}
#line 57
# 144 "SimpleAccelC.nc"
static inline void SimpleAccelC__SampleTimer__fired(void )
#line 144
{
  SimpleAccelC__Leds__led0On();

  SimpleAccelC__shimmerAnalogSetup__triggerConversion();
}

# 58 "../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__toggle(void )
#line 58
{
#line 58
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 58
    * (volatile uint8_t * )29U ^= 0x01 << 2;
#line 58
    __nesc_atomic_end(__nesc_atomic); }
}

# 58 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__toggle(void ){
#line 58
  /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__toggle();
#line 58
}
#line 58
# 50 "../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__toggle(void )
#line 50
{
#line 50
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__toggle();
}

# 42 "../../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__toggle(void ){
#line 42
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__toggle();
#line 42
}
#line 42
# 100 "../../../tos/platforms/shimmer2r/LedsP.nc"
static inline void LedsP__Leds__led1Toggle(void )
#line 100
{
  LedsP__Led1__toggle();
  ;
#line 102
  ;
}

# 84 "../../../tos/platforms/shimmer2r/Leds.nc"
inline static void SimpleAccelC__Leds__led1Toggle(void ){
#line 84
  LedsP__Leds__led1Toggle();
#line 84
}
#line 84
# 140 "SimpleAccelC.nc"
static inline void SimpleAccelC__ActivityTimer__fired(void )
#line 140
{
  SimpleAccelC__Leds__led1Toggle();
}

# 204 "../../../tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num)
{
}

# 83 "../../../tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(uint8_t arg_0x7f18eed6c020){
#line 83
  switch (arg_0x7f18eed6c020) {
#line 83
    case 0U:
#line 83
      SimpleAccelC__SampleTimer__fired();
#line 83
      break;
#line 83
    case 1U:
#line 83
      SimpleAccelC__ActivityTimer__fired();
#line 83
      break;
#line 83
    default:
#line 83
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(arg_0x7f18eed6c020);
#line 83
      break;
#line 83
    }
#line 83
}
#line 83
# 139 "../../../tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void )
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow());
}

# 83 "../../../tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void ){
#line 83
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired();
#line 83
}
#line 83
# 91 "../../../tos/lib/timer/TransformAlarmC.nc"
static inline /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__getAlarm(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 93
    {
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type __nesc_temp = 
#line 93
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_t0 + /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_dt;

      {
#line 93
        __nesc_atomic_end(__nesc_atomic); 
#line 93
        return __nesc_temp;
      }
    }
#line 95
    __nesc_atomic_end(__nesc_atomic); }
}

# 116 "../../../tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void ){
#line 116
  unsigned long __nesc_result;
#line 116

#line 116
  __nesc_result = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__getAlarm();
#line 116

#line 116
  return __nesc_result;
#line 116
}
#line 116
# 74 "../../../tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void )
{
  if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot == FALSE) {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt, FALSE);
    }
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired();
}

# 95 "../../../tos/platforms/shimmer2r/LedsP.nc"
static inline void LedsP__Leds__led1Off(void )
#line 95
{
  LedsP__Led1__set();
  ;
#line 97
  ;
}

# 78 "../../../tos/platforms/shimmer2r/Leds.nc"
inline static void SimpleAccelC__Leds__led1Off(void ){
#line 78
  LedsP__Leds__led1Off();
#line 78
}
#line 78
# 154 "../../../tos/platforms/shimmer2r/hardware.h"
static inline  void TOSH_SET_ACCEL_SLEEP_N_PIN()
#line 154
{
#line 154
  static volatile uint8_t r __asm ("0x0031");

#line 154
  r |= 1 << 0;
}

# 59 "../../../tos/platforms/shimmer2r/Mma7361P.nc"
static inline void Mma7361P__Accel__wake(bool wakeup)
#line 59
{
  if (wakeup) {
    TOSH_SET_ACCEL_SLEEP_N_PIN();
    }
  else {
#line 63
    TOSH_CLR_ACCEL_SLEEP_N_PIN();
    }
}

# 47 "../../../tos/platforms/shimmer/chips/mma7260/Mma_Accel.nc"
inline static void SimpleAccelC__Accel__wake(bool wakeup){
#line 47
  Mma7361P__Accel__wake(wakeup);
#line 47
}
#line 47
# 180 "../../../tos/chips/msp430/dma/HplMsp430DmaXP.nc"
static inline void /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__disableDMA(void )
#line 180
{
  * (volatile uint16_t *)480U &= ~0x0010;
}

# 61 "../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
inline static void /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__HplChannel__disableDMA(void ){
#line 61
  /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__disableDMA();
#line 61
}
#line 61
# 114 "../../../tos/chips/msp430/dma/Msp430DmaChannelP.nc"
static inline error_t /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__Channel__stopTransfer(void )
#line 114
{
  if (/*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__gChannelState.transferMode != DMA_BURST_BLOCK_TRANSFER || 
  /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__gChannelState.transferMode != DMA_REPEATED_BURST_BLOCK_TRANSFER) {
    return FAIL;
    }
#line 118
  /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__HplChannel__disableDMA();
  return SUCCESS;
}

# 102 "../../../tos/chips/msp430/dma/Msp430DmaChannel.nc"
inline static error_t SimpleAccelC__DMA0__stopTransfer(void ){
#line 102
  unsigned char __nesc_result;
#line 102

#line 102
  __nesc_result = /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__Channel__stopTransfer();
#line 102

#line 102
  return __nesc_result;
#line 102
}
#line 102
# 95 "../../../tos/chips/msp430/adc12/HplAdc12P.nc"
static inline void HplAdc12P__HplAdc12__resetIFGs(void )
#line 95
{
  HplAdc12P__ADC12IV = 0;
  HplAdc12P__ADC12IFG = 0;
}

# 106 "../../../tos/chips/msp430/adc12/HplAdc12.nc"
inline static void shimmerAnalogSetupP__HplAdc12__resetIFGs(void ){
#line 106
  HplAdc12P__HplAdc12__resetIFGs();
#line 106
}
#line 106
# 92 "../../../tos/chips/msp430/adc12/HplAdc12P.nc"
static inline void HplAdc12P__HplAdc12__setIEFlags(uint16_t mask)
#line 92
{
#line 92
  HplAdc12P__ADC12IE = mask;
}

# 95 "../../../tos/chips/msp430/adc12/HplAdc12.nc"
inline static void shimmerAnalogSetupP__HplAdc12__setIEFlags(uint16_t mask){
#line 95
  HplAdc12P__HplAdc12__setIEFlags(mask);
#line 95
}
#line 95
# 105 "../../../tos/chips/msp430/adc12/HplAdc12P.nc"
static inline void HplAdc12P__HplAdc12__stopConversion(void )
#line 105
{

  uint16_t ctl1 = HplAdc12P__ADC12CTL1;

#line 108
  HplAdc12P__ADC12CTL1 &= ~(0x0002 | 0x0004);
  HplAdc12P__ADC12CTL0 &= ~(0x001 + 0x002);
  HplAdc12P__ADC12CTL0 &= ~0x010;
  HplAdc12P__ADC12CTL1 |= ctl1 & (0x0002 | 0x0004);
}

# 123 "../../../tos/chips/msp430/adc12/HplAdc12.nc"
inline static void shimmerAnalogSetupP__HplAdc12__stopConversion(void ){
#line 123
  HplAdc12P__HplAdc12__stopConversion();
#line 123
}
#line 123
# 183 "../../../tos/platforms/shimmer/shimmerAnalogSetupP.nc"
static inline void shimmerAnalogSetupP__shimmerAnalogSetup__stopConversion(void )
#line 183
{
  shimmerAnalogSetupP__HplAdc12__stopConversion();
  shimmerAnalogSetupP__HplAdc12__setIEFlags(0);
  shimmerAnalogSetupP__HplAdc12__resetIFGs();
}

# 81 "../../../tos/platforms/shimmer/shimmerAnalogSetup.nc"
inline static void SimpleAccelC__shimmerAnalogSetup__stopConversion(void ){
#line 81
  shimmerAnalogSetupP__shimmerAnalogSetup__stopConversion();
#line 81
}
#line 81
# 164 "../../../tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].isrunning = FALSE;
}

# 78 "../../../tos/lib/timer/Timer.nc"
inline static void SimpleAccelC__ActivityTimer__stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(1U);
#line 78
}
#line 78
inline static void SimpleAccelC__SampleTimer__stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(0U);
#line 78
}
#line 78
# 108 "SimpleAccelC.nc"
static inline void SimpleAccelC__stopSensing__runTask(void )
#line 108
{
  SimpleAccelC__SampleTimer__stop();
  SimpleAccelC__ActivityTimer__stop();
  SimpleAccelC__shimmerAnalogSetup__stopConversion();
  SimpleAccelC__DMA0__stopTransfer();
  SimpleAccelC__Accel__wake(FALSE);
  SimpleAccelC__Leds__led1Off();
}

# 64 "../../../tos/lib/timer/Timer.nc"
inline static void SimpleAccelC__SampleTimer__startPeriodic(uint32_t dt){
#line 64
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(0U, dt);
#line 64
}
#line 64
inline static void SimpleAccelC__ActivityTimer__startPeriodic(uint32_t dt){
#line 64
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(1U, dt);
#line 64
}
#line 64
# 102 "SimpleAccelC.nc"
static inline void SimpleAccelC__startSensing__runTask(void )
#line 102
{
  SimpleAccelC__ActivityTimer__startPeriodic(1024);
  SimpleAccelC__Accel__wake(TRUE);
  SimpleAccelC__SampleTimer__startPeriodic(SimpleAccelC__sample_freq);
}

# 67 "../../../tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 144 "../../../tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

#line 147
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 51 "../../../tos/platforms/shimmer/chips/bluetooth/Bluetooth.nc"
inline static error_t SimpleAccelC__Bluetooth__write(const uint8_t *buf, uint8_t len){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = RovingNetworksP__Bluetooth__write(buf, len);
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 92 "SimpleAccelC.nc"
static inline void SimpleAccelC__sendSensorData__runTask(void )
#line 92
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 93
    if (SimpleAccelC__enable_sending) {
        if (SimpleAccelC__current_buffer == 1) {
          SimpleAccelC__Bluetooth__write((uint8_t *)SimpleAccelC__sbuf0, 120);
          }
        else {
#line 97
          SimpleAccelC__Bluetooth__write((uint8_t *)SimpleAccelC__sbuf1, 120);
          }
#line 98
        SimpleAccelC__enable_sending = FALSE;
      }
#line 99
    __nesc_atomic_end(__nesc_atomic); }
}

# 67 "../../../tos/interfaces/TaskBasic.nc"
inline static error_t PrintfP__retrySend__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(PrintfP__retrySend);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 80 "../../../tos/interfaces/AMSend.nc"
inline static error_t PrintfP__AMSend__send(am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 114 "../../../tos/lib/printf/PrintfP.nc"
static inline void PrintfP__retrySend__runTask(void )
#line 114
{
  if (PrintfP__AMSend__send(AM_BROADCAST_ADDR, &PrintfP__printfMsg, sizeof(printf_msg_t )) != SUCCESS) {
    PrintfP__retrySend__postTask();
    }
}

# 315 "/usr/local/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_hton_uint16(void * target, uint16_t value)
#line 315
{
  uint8_t *base = target;

#line 317
  base[1] = value;
  base[0] = value >> 8;
  return value;
}

# 60 "../../../tos/lib/serial/SerialActiveMessageP.nc"
static inline serial_header_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(message_t * msg)
#line 60
{
  return (serial_header_t * )((uint8_t *)msg + (unsigned short )& ((message_t *)0)->data - sizeof(serial_header_t ));
}

#line 158
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setDestination(message_t *amsg, am_addr_t addr)
#line 158
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 160
  __nesc_hton_uint16(header->dest.nxdata, addr);
}

# 103 "../../../tos/interfaces/AMPacket.nc"
inline static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(message_t * amsg, am_addr_t addr){
#line 103
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setDestination(amsg, addr);
#line 103
}
#line 103
# 286 "/usr/local/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_uint8(void * target, uint8_t value)
#line 286
{
  uint8_t *base = target;

#line 288
  base[0] = value;
  return value;
}

# 177 "../../../tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setType(message_t *amsg, am_id_t type)
#line 177
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 179
  __nesc_hton_uint8(header->type.nxdata, type);
}

# 162 "../../../tos/interfaces/AMPacket.nc"
inline static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(message_t * amsg, am_id_t t){
#line 162
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setType(amsg, t);
#line 162
}
#line 162
# 80 "../../../tos/interfaces/AMSend.nc"
inline static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(am_id_t arg_0x7f18ef7f20d0, am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(arg_0x7f18ef7f20d0, addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 78 "../../../tos/interfaces/AMPacket.nc"
inline static am_addr_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(message_t * amsg){
#line 78
  unsigned int __nesc_result;
#line 78

#line 78
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(amsg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
#line 147
inline static am_id_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(message_t * amsg){
#line 147
  unsigned char __nesc_result;
#line 147

#line 147
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(amsg);
#line 147

#line 147
  return __nesc_result;
#line 147
}
#line 147
# 127 "../../../tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__setPayloadLength(message_t *msg, uint8_t len)
#line 127
{
  __nesc_hton_uint8(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(msg)->length.nxdata, len);
}

# 94 "../../../tos/interfaces/Packet.nc"
inline static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(message_t * msg, uint8_t len){
#line 94
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__setPayloadLength(msg, len);
#line 94
}
#line 94
# 90 "../../../tos/system/AMQueueImplP.nc"
static inline error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(uint8_t clientId, message_t *msg, 
uint8_t len)
#line 91
{
  if (clientId >= 1) {
      return FAIL;
    }
  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[clientId].msg != (void *)0) {
      return EBUSY;
    }
  ;

  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[clientId].msg = msg;
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(msg, len);

  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current >= 1) {
      error_t err;
      am_id_t amId = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(msg);
      am_addr_t dest = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(msg);

      ;
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current = clientId;

      err = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(amId, dest, msg, len);
      if (err != SUCCESS) {
          ;
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current = 1;
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[clientId].msg = (void *)0;
        }

      return err;
    }
  else {
      ;
    }
  return SUCCESS;
}

# 75 "../../../tos/interfaces/Send.nc"
inline static error_t /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(0U, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 310 "/usr/local/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_ntoh_uint16(const void * source)
#line 310
{
  const uint8_t *base = source;

#line 312
  return ((uint16_t )base[0] << 8) | base[1];
}

# 131 "../../../tos/lib/serial/SerialActiveMessageP.nc"
static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void )
#line 131
{
  return 28;
}

# 539 "../../../tos/lib/serial/SerialP.nc"
static inline error_t SerialP__SendBytePacket__startSend(uint8_t b)
#line 539
{
  bool not_busy = FALSE;

#line 541
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 541
    {
      if (SerialP__txState == SerialP__TXSTATE_INACTIVE) 
        {
          unsigned char __nesc_temp = 
#line 543
          EOFF;

          {
#line 543
            __nesc_atomic_end(__nesc_atomic); 
#line 543
            return __nesc_temp;
          }
        }
    }
#line 546
    __nesc_atomic_end(__nesc_atomic); }
#line 545
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 545
    {
      if (SerialP__txBuf[SerialP__TX_DATA_INDEX].state == SerialP__BUFFER_AVAILABLE) {
          SerialP__txBuf[SerialP__TX_DATA_INDEX].state = SerialP__BUFFER_FILLING;
          SerialP__txBuf[SerialP__TX_DATA_INDEX].buf = b;
          not_busy = TRUE;
        }
    }
#line 551
    __nesc_atomic_end(__nesc_atomic); }
  if (not_busy) {
      SerialP__MaybeScheduleTx();
      return SUCCESS;
    }
  return EBUSY;
}

# 62 "../../../tos/lib/serial/SendBytePacket.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(uint8_t first_byte){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = SerialP__SendBytePacket__startSend(first_byte);
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 54 "../../../tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen)
#line 54
{
  return upperLen + sizeof(serial_header_t );
}

# 361 "../../../tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen)
#line 362
{
  return 0;
}

# 23 "../../../tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(uart_id_t arg_0x7f18ef64c4d0, message_t *msg, uint8_t upperLen){
#line 23
  unsigned char __nesc_result;
#line 23

#line 23
  switch (arg_0x7f18ef64c4d0) {
#line 23
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 23
      __nesc_result = SerialPacketInfoActiveMessageP__Info__dataLinkLength(msg, upperLen);
#line 23
      break;
#line 23
    default:
#line 23
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(arg_0x7f18ef64c4d0, msg, upperLen);
#line 23
      break;
#line 23
    }
#line 23

#line 23
  return __nesc_result;
#line 23
}
#line 23
# 51 "../../../tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__offset(void )
#line 51
{
  return (uint8_t )(sizeof(message_header_t ) - sizeof(serial_header_t ));
}

# 358 "../../../tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(uart_id_t id)
#line 358
{
  return 0;
}

# 15 "../../../tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(uart_id_t arg_0x7f18ef64c4d0){
#line 15
  unsigned char __nesc_result;
#line 15

#line 15
  switch (arg_0x7f18ef64c4d0) {
#line 15
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 15
      __nesc_result = SerialPacketInfoActiveMessageP__Info__offset();
#line 15
      break;
#line 15
    default:
#line 15
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(arg_0x7f18ef64c4d0);
#line 15
      break;
#line 15
    }
#line 15

#line 15
  return __nesc_result;
#line 15
}
#line 15
# 111 "../../../tos/lib/serial/SerialDispatcherP.nc"
static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(uint8_t id, message_t *msg, uint8_t len)
#line 111
{
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState != /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE) {
      return EBUSY;
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 116
    {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(id);
      if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex > sizeof(message_header_t )) {
          {
            unsigned char __nesc_temp = 
#line 119
            ESIZE;

            {
#line 119
              __nesc_atomic_end(__nesc_atomic); 
#line 119
              return __nesc_temp;
            }
          }
        }
#line 122
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = SUCCESS;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer = (uint8_t *)msg;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_DATA;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId = id;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled = FALSE;






      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(id, msg, len) + /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex;
    }
#line 134
    __nesc_atomic_end(__nesc_atomic); }
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(id) == SUCCESS) {
      return SUCCESS;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
      return FAIL;
    }
}

# 75 "../../../tos/interfaces/Send.nc"
inline static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(TOS_SERIAL_ACTIVE_MESSAGE_ID, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 67 "../../../tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__RunTx__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__RunTx);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 70 "../../../tos/platforms/shimmer2r/ShimmerSerialP.nc"
static inline void ShimmerSerialP__Resource__granted(void )
#line 70
{
}

# 238 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
static inline void /*Msp430Uart0P.UartP*/Msp430UartP__0__Resource__default__granted(uint8_t id)
#line 238
{
}

# 102 "../../../tos/interfaces/Resource.nc"
inline static void /*Msp430Uart0P.UartP*/Msp430UartP__0__Resource__granted(uint8_t arg_0x7f18ef540e10){
#line 102
  switch (arg_0x7f18ef540e10) {
#line 102
    case /*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID:
#line 102
      ShimmerSerialP__Resource__granted();
#line 102
      break;
#line 102
    default:
#line 102
      /*Msp430Uart0P.UartP*/Msp430UartP__0__Resource__default__granted(arg_0x7f18ef540e10);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 101 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
static inline void /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__granted(uint8_t id)
#line 101
{
  /*Msp430Uart0P.UartP*/Msp430UartP__0__Resource__granted(id);
}

# 202 "../../../tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__default__granted(uint8_t id)
#line 202
{
}

# 102 "../../../tos/interfaces/Resource.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__granted(uint8_t arg_0x7f18ef0e3a50){
#line 102
  switch (arg_0x7f18ef0e3a50) {
#line 102
    case /*PlatformSerialC.UartC.UsartC*/Msp430Usart0C__0__CLIENT_ID:
#line 102
      /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__granted(/*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID);
#line 102
      break;
#line 102
    default:
#line 102
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__default__granted(arg_0x7f18ef0e3a50);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 216 "../../../tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(uint8_t id)
#line 216
{
}

# 59 "../../../tos/interfaces/ResourceConfigure.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__configure(uint8_t arg_0x7f18ef0de240){
#line 59
  switch (arg_0x7f18ef0de240) {
#line 59
    case /*PlatformSerialC.UartC.UsartC*/Msp430Usart0C__0__CLIENT_ID:
#line 59
      /*Msp430Uart0P.UartP*/Msp430UartP__0__ResourceConfigure__configure(/*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID);
#line 59
      break;
#line 59
    default:
#line 59
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(arg_0x7f18ef0de240);
#line 59
      break;
#line 59
    }
#line 59
}
#line 59
# 190 "../../../tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__runTask(void )
#line 190
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 191
    {
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__reqResId;
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_BUSY;
    }
#line 194
    __nesc_atomic_end(__nesc_atomic); }
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__configure(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId);
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__granted(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId);
}

# 72 "../../../tos/platforms/shimmer2r/ShimmerSerialP.nc"
static inline msp430_uart_union_config_t *ShimmerSerialP__Msp430UartConfigure__getConfig(void )
#line 72
{
  return &ShimmerSerialP__msp430_uart_shimmer2_config;
}

# 234 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
static inline msp430_uart_union_config_t */*Msp430Uart0P.UartP*/Msp430UartP__0__Msp430UartConfigure__default__getConfig(uint8_t id)
#line 234
{
  return &msp430_uart_default_config;
}

# 39 "../../../tos/chips/msp430/usart/Msp430UartConfigure.nc"
inline static msp430_uart_union_config_t */*Msp430Uart0P.UartP*/Msp430UartP__0__Msp430UartConfigure__getConfig(uint8_t arg_0x7f18ef539890){
#line 39
  union __nesc_unnamed4274 *__nesc_result;
#line 39

#line 39
  switch (arg_0x7f18ef539890) {
#line 39
    case /*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID:
#line 39
      __nesc_result = ShimmerSerialP__Msp430UartConfigure__getConfig();
#line 39
      break;
#line 39
    default:
#line 39
      __nesc_result = /*Msp430Uart0P.UartP*/Msp430UartP__0__Msp430UartConfigure__default__getConfig(arg_0x7f18ef539890);
#line 39
      break;
#line 39
    }
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 364 "../../../tos/platforms/shimmer/chips/msp430/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P__Usart__disableIntr(void )
#line 364
{
  HplMsp430Usart0P__IE1 &= ~(0x80 | 0x40);
}

#line 352
static inline void HplMsp430Usart0P__Usart__clrIntr(void )
#line 352
{
  HplMsp430Usart0P__IFG1 &= ~(0x80 | 0x40);
}

#line 158
static inline void HplMsp430Usart0P__Usart__resetUsart(bool reset)
#line 158
{
  if (reset) {
      U0CTL = 0x01;
    }
  else {
      U0CTL &= ~0x01;
    }
}

# 65 "../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P34*/HplMsp430GeneralIOP__20__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )27U |= 0x01 << 4;
}

# 92 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__UTXD__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P34*/HplMsp430GeneralIOP__20__IO__selectModuleFunc();
#line 92
}
#line 92
# 223 "../../../tos/platforms/shimmer/chips/msp430/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P__Usart__enableUartTx(void )
#line 223
{
  HplMsp430Usart0P__UTXD__selectModuleFunc();
  HplMsp430Usart0P__ME1 |= 0x80;
}

# 67 "../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P35*/HplMsp430GeneralIOP__21__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )27U &= ~(0x01 << 5);
}

# 99 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__URXD__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P35*/HplMsp430GeneralIOP__21__IO__selectIOFunc();
#line 99
}
#line 99
# 239 "../../../tos/platforms/shimmer/chips/msp430/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P__Usart__disableUartRx(void )
#line 239
{
  HplMsp430Usart0P__ME1 &= ~0x40;
  HplMsp430Usart0P__URXD__selectIOFunc();
}

# 65 "../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P35*/HplMsp430GeneralIOP__21__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )27U |= 0x01 << 5;
}

# 92 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__URXD__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P35*/HplMsp430GeneralIOP__21__IO__selectModuleFunc();
#line 92
}
#line 92
# 234 "../../../tos/platforms/shimmer/chips/msp430/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P__Usart__enableUartRx(void )
#line 234
{
  HplMsp430Usart0P__URXD__selectModuleFunc();
  HplMsp430Usart0P__ME1 |= 0x40;
}

# 67 "../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P34*/HplMsp430GeneralIOP__20__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )27U &= ~(0x01 << 4);
}

# 99 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__UTXD__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P34*/HplMsp430GeneralIOP__20__IO__selectIOFunc();
#line 99
}
#line 99
# 228 "../../../tos/platforms/shimmer/chips/msp430/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P__Usart__disableUartTx(void )
#line 228
{
  HplMsp430Usart0P__ME1 &= ~0x80;
  HplMsp430Usart0P__UTXD__selectIOFunc();
}

#line 206
static inline void HplMsp430Usart0P__Usart__enableUart(void )
#line 206
{
  /* atomic removed: atomic calls only */
#line 207
  {
    HplMsp430Usart0P__UTXD__selectModuleFunc();
    HplMsp430Usart0P__URXD__selectModuleFunc();
  }
  HplMsp430Usart0P__ME1 |= 0x80 | 0x40;
}

#line 150
static inline void HplMsp430Usart0P__Usart__setUmctl(uint8_t control)
#line 150
{
  U0MCTL = control;
}

#line 139
static inline void HplMsp430Usart0P__Usart__setUbr(uint16_t control)
#line 139
{
  /* atomic removed: atomic calls only */
#line 140
  {
    U0BR0 = control & 0x00FF;
    U0BR1 = (control >> 8) & 0x00FF;
  }
}

#line 287
static inline void HplMsp430Usart0P__configUart(msp430_uart_union_config_t *config)
#line 287
{

  U0CTL = (config->uartRegisters.uctl & ~0x04) | 0x01;
  HplMsp430Usart0P__U0TCTL = config->uartRegisters.utctl;
  HplMsp430Usart0P__U0RCTL = config->uartRegisters.urctl;

  HplMsp430Usart0P__Usart__setUbr(config->uartRegisters.ubr);
  HplMsp430Usart0P__Usart__setUmctl(config->uartRegisters.umctl);
}

# 67 "../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )27U &= ~(0x01 << 3);
}

# 99 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__UCLK__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectIOFunc();
#line 99
}
#line 99
# 67 "../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )27U &= ~(0x01 << 2);
}

# 99 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__SOMI__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectIOFunc();
#line 99
}
#line 99
# 67 "../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )27U &= ~(0x01 << 1);
}

# 99 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__SIMO__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectIOFunc();
#line 99
}
#line 99
# 254 "../../../tos/platforms/shimmer/chips/msp430/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P__Usart__disableSpi(void )
#line 254
{
  /* atomic removed: atomic calls only */
#line 255
  {
    HplMsp430Usart0P__ME1 &= ~0x40;
    HplMsp430Usart0P__SIMO__selectIOFunc();
    HplMsp430Usart0P__SOMI__selectIOFunc();
    HplMsp430Usart0P__UCLK__selectIOFunc();
  }
}

# 97 "../../../tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void HplMsp430I2C0P__HplUsart__resetUsart(bool reset){
#line 97
  HplMsp430Usart0P__Usart__resetUsart(reset);
#line 97
}
#line 97
# 59 "../../../tos/platforms/shimmer/chips/msp430/HplMsp430I2C0P.nc"
static inline void HplMsp430I2C0P__HplI2C__clearModeI2C(void )
#line 59
{
  /* atomic removed: atomic calls only */
#line 60
  {
    HplMsp430I2C0P__U0CTL &= ~((0x20 | 0x04) | 0x01);
    HplMsp430I2C0P__HplUsart__resetUsart(TRUE);
  }
}

# 7 "../../../tos/chips/msp430/usart/HplMsp430I2C.nc"
inline static void HplMsp430Usart0P__HplI2C__clearModeI2C(void ){
#line 7
  HplMsp430I2C0P__HplI2C__clearModeI2C();
#line 7
}
#line 7
# 297 "../../../tos/platforms/shimmer/chips/msp430/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P__Usart__setModeUart(msp430_uart_union_config_t *config)
#line 297
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 299
    {
      HplMsp430Usart0P__Usart__resetUsart(TRUE);
      HplMsp430Usart0P__HplI2C__clearModeI2C();
      HplMsp430Usart0P__Usart__disableSpi();
      HplMsp430Usart0P__configUart(config);
      if (config->uartConfig.utxe == 1 && config->uartConfig.urxe == 1) {
          HplMsp430Usart0P__Usart__enableUart();
        }
      else {
#line 306
        if (config->uartConfig.utxe == 0 && config->uartConfig.urxe == 1) {
            HplMsp430Usart0P__Usart__disableUartTx();
            HplMsp430Usart0P__Usart__enableUartRx();
          }
        else {
#line 309
          if (config->uartConfig.utxe == 1 && config->uartConfig.urxe == 0) {
              HplMsp430Usart0P__Usart__disableUartRx();
              HplMsp430Usart0P__Usart__enableUartTx();
            }
          else 
#line 312
            {
              HplMsp430Usart0P__Usart__disableUart();
            }
          }
        }
#line 315
      HplMsp430Usart0P__Usart__resetUsart(FALSE);
      HplMsp430Usart0P__Usart__clrIntr();
      HplMsp430Usart0P__Usart__disableIntr();
    }
#line 318
    __nesc_atomic_end(__nesc_atomic); }

  return;
}

# 174 "../../../tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430Uart0P.UartP*/Msp430UartP__0__Usart__setModeUart(msp430_uart_union_config_t *config){
#line 174
  HplMsp430Usart0P__Usart__setModeUart(config);
#line 174
}
#line 174
# 382 "../../../tos/platforms/shimmer/chips/msp430/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P__Usart__enableIntr(void )
#line 382
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 383
    {
      HplMsp430Usart0P__IFG1 &= ~(0x80 | 0x40);
      HplMsp430Usart0P__IE1 |= 0x80 | 0x40;
    }
#line 386
    __nesc_atomic_end(__nesc_atomic); }
}

# 182 "../../../tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430Uart0P.UartP*/Msp430UartP__0__Usart__enableIntr(void ){
#line 182
  HplMsp430Usart0P__Usart__enableIntr();
#line 182
}
#line 182
# 110 "../../../tos/interfaces/AMSend.nc"
inline static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(message_t * msg, error_t error){
#line 110
  PrintfP__AMSend__sendDone(msg, error);
#line 110
}
#line 110
# 65 "../../../tos/system/AMQueueEntryP.nc"
static inline void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(message_t *m, error_t err)
#line 65
{
  /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(m, err);
}

# 215 "../../../tos/system/AMQueueImplP.nc"
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(uint8_t id, message_t *msg, error_t err)
#line 215
{
}

# 100 "../../../tos/interfaces/Send.nc"
inline static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(uint8_t arg_0x7f18ef7f4cf0, message_t * msg, error_t error){
#line 100
  switch (arg_0x7f18ef7f4cf0) {
#line 100
    case 0U:
#line 100
      /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(msg, error);
#line 100
      break;
#line 100
    default:
#line 100
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(arg_0x7f18ef7f4cf0, msg, error);
#line 100
      break;
#line 100
    }
#line 100
}
#line 100
# 163 "../../../tos/system/AMQueueImplP.nc"
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(uint8_t last, message_t * msg, error_t err)
#line 163
{
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[last].msg = (void *)0;
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend();
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(last, msg, err);
}

#line 189
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(am_id_t id, message_t *msg, error_t err)
#line 189
{





  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current >= 1) {
      return;
    }
  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg == msg) {
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current, msg, err);
    }
  else {
      ;
    }
}

# 110 "../../../tos/interfaces/AMSend.nc"
inline static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(am_id_t arg_0x7f18ef78a920, message_t * msg, error_t error){
#line 110
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(arg_0x7f18ef78a920, msg, error);
#line 110
}
#line 110
# 101 "../../../tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(message_t *msg, error_t result)
#line 101
{
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(msg), msg, result);
}

# 376 "../../../tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(uart_id_t idxxx, message_t *msg, error_t error)
#line 376
{
  return;
}

# 100 "../../../tos/interfaces/Send.nc"
inline static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(uart_id_t arg_0x7f18ef64d110, message_t * msg, error_t error){
#line 100
  switch (arg_0x7f18ef64d110) {
#line 100
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 100
      /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(msg, error);
#line 100
      break;
#line 100
    default:
#line 100
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(arg_0x7f18ef64d110, msg, error);
#line 100
      break;
#line 100
    }
#line 100
}
#line 100
# 158 "../../../tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void )
#line 158
{
  error_t error;

  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 162
    error = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError;
#line 162
    __nesc_atomic_end(__nesc_atomic); }

  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled) {
#line 164
    error = ECANCEL;
    }
#line 165
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId, (message_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer, error);
}

# 65 "../../../tos/system/AMQueueImplP.nc"
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket(void )
#line 65
{
  uint8_t i;

#line 67
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current = (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current + 1) % 1;
  for (i = 0; i < 1; i++) {
      if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg == (void *)0 || 
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current / 8] & (1 << /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current % 8)) 
        {
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current = (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current + 1) % 1;
        }
      else {
          break;
        }
    }
  if (i >= 1) {
#line 78
    /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current = 1;
    }
}

# 281 "/usr/local/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_uint8(const void * source)
#line 281
{
  const uint8_t *base = source;

#line 283
  return base[0];
}

# 122 "../../../tos/lib/serial/SerialActiveMessageP.nc"
static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(message_t *msg)
#line 122
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(msg);

#line 124
  return __nesc_ntoh_uint8(header->length.nxdata);
}

# 78 "../../../tos/interfaces/Packet.nc"
inline static uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(message_t * msg){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(msg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 67 "../../../tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 126 "../../../tos/interfaces/Packet.nc"
inline static void * PrintfP__Packet__getPayload(message_t * msg, uint8_t len){
#line 126
  void *__nesc_result;
#line 126

#line 126
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(msg, len);
#line 126

#line 126
  return __nesc_result;
#line 126
}
#line 126
# 73 "../../../tos/system/QueueC.nc"
static inline void /*PrintfC.QueueC*/QueueC__0__printQueue(void )
#line 73
{
}

#line 53
static inline bool /*PrintfC.QueueC*/QueueC__0__Queue__empty(void )
#line 53
{
  return /*PrintfC.QueueC*/QueueC__0__size == 0;
}

#line 69
static inline /*PrintfC.QueueC*/QueueC__0__queue_t /*PrintfC.QueueC*/QueueC__0__Queue__head(void )
#line 69
{
  return /*PrintfC.QueueC*/QueueC__0__queue[/*PrintfC.QueueC*/QueueC__0__head];
}

#line 89
static inline /*PrintfC.QueueC*/QueueC__0__queue_t /*PrintfC.QueueC*/QueueC__0__Queue__dequeue(void )
#line 89
{
  /*PrintfC.QueueC*/QueueC__0__queue_t t = /*PrintfC.QueueC*/QueueC__0__Queue__head();

#line 91
  ;
  if (!/*PrintfC.QueueC*/QueueC__0__Queue__empty()) {
      /*PrintfC.QueueC*/QueueC__0__head++;
      if (/*PrintfC.QueueC*/QueueC__0__head == 250) {
#line 94
        /*PrintfC.QueueC*/QueueC__0__head = 0;
        }
#line 95
      /*PrintfC.QueueC*/QueueC__0__size--;
      /*PrintfC.QueueC*/QueueC__0__printQueue();
    }
  return t;
}

# 88 "../../../tos/interfaces/Queue.nc"
inline static PrintfP__Queue__t  PrintfP__Queue__dequeue(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = /*PrintfC.QueueC*/QueueC__0__Queue__dequeue();
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 212 "../../../tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(uint8_t which)
#line 212
{
  if (which) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked = 0;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked = 0;
    }
}

# 109 "../../../tos/lib/serial/SerialActiveMessageP.nc"
static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(uint8_t id, message_t *msg, void *payload, uint8_t len)
#line 109
{
  return msg;
}

# 78 "../../../tos/interfaces/Receive.nc"
inline static message_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(am_id_t arg_0x7f18ef789b00, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
    __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(arg_0x7f18ef789b00, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 113 "../../../tos/lib/serial/SerialActiveMessageP.nc"
static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(message_t *msg, void *payload, uint8_t len)
#line 113
{
  return /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(msg), msg, msg->data, len);
}

# 371 "../../../tos/lib/serial/SerialDispatcherP.nc"
static inline message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len)
#line 373
{
  return msg;
}

# 78 "../../../tos/interfaces/Receive.nc"
inline static message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(uart_id_t arg_0x7f18ef64e570, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  switch (arg_0x7f18ef64e570) {
#line 78
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 78
      __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(msg, payload, len);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(arg_0x7f18ef64e570, msg, payload, len);
#line 78
      break;
#line 78
    }
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 57 "../../../tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen)
#line 57
{
  return dataLinkLen - sizeof(serial_header_t );
}

# 365 "../../../tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen)
#line 366
{
  return 0;
}

# 31 "../../../tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(uart_id_t arg_0x7f18ef64c4d0, message_t *msg, uint8_t dataLinkLen){
#line 31
  unsigned char __nesc_result;
#line 31

#line 31
  switch (arg_0x7f18ef64c4d0) {
#line 31
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 31
      __nesc_result = SerialPacketInfoActiveMessageP__Info__upperLength(msg, dataLinkLen);
#line 31
      break;
#line 31
    default:
#line 31
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(arg_0x7f18ef64c4d0, msg, dataLinkLen);
#line 31
      break;
#line 31
    }
#line 31

#line 31
  return __nesc_result;
#line 31
}
#line 31
# 275 "../../../tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void )
#line 275
{
  uart_id_t myType;
  message_t *myBuf;
  uint8_t mySize;
  uint8_t myWhich;

#line 280
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 280
    {
      myType = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType;
      myBuf = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf;
      mySize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize;
      myWhich = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich;
    }
#line 285
    __nesc_atomic_end(__nesc_atomic); }
  mySize -= /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(myType);
  mySize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(myType, myBuf, mySize);
  myBuf = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(myType, myBuf, myBuf, mySize);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 289
    {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[myWhich] = myBuf;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(myWhich);
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = FALSE;
    }
#line 293
    __nesc_atomic_end(__nesc_atomic); }
}

# 49 "../../../tos/lib/serial/SerialStartP.nc"
static inline void SerialStartP__SerialControl__stopDone(error_t error)
#line 49
{
}

# 138 "../../../tos/interfaces/SplitControl.nc"
inline static void SerialP__SplitControl__stopDone(error_t error){
#line 138
  SerialStartP__SerialControl__stopDone(error);
#line 138
}
#line 138
# 208 "../../../tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__granted(void )
#line 208
{
}

# 46 "../../../tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted(void ){
#line 46
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__granted();
#line 46
}
#line 46
# 128 "../../../tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430Uart0P.UartP*/Msp430UartP__0__Usart__disableUart(void ){
#line 128
  HplMsp430Usart0P__Usart__disableUart();
#line 128
}
#line 128
#line 179
inline static void /*Msp430Uart0P.UartP*/Msp430UartP__0__Usart__disableIntr(void ){
#line 179
  HplMsp430Usart0P__Usart__disableIntr();
#line 179
}
#line 179
#line 97
inline static void /*Msp430Uart0P.UartP*/Msp430UartP__0__Usart__resetUsart(bool reset){
#line 97
  HplMsp430Usart0P__Usart__resetUsart(reset);
#line 97
}
#line 97
# 92 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
static inline void /*Msp430Uart0P.UartP*/Msp430UartP__0__ResourceConfigure__unconfigure(uint8_t id)
#line 92
{
  /*Msp430Uart0P.UartP*/Msp430UartP__0__Usart__resetUsart(TRUE);
  /*Msp430Uart0P.UartP*/Msp430UartP__0__Usart__disableIntr();
  /*Msp430Uart0P.UartP*/Msp430UartP__0__Usart__disableUart();
}

# 218 "../../../tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id)
#line 218
{
}

# 65 "../../../tos/interfaces/ResourceConfigure.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(uint8_t arg_0x7f18ef0de240){
#line 65
  switch (arg_0x7f18ef0de240) {
#line 65
    case /*PlatformSerialC.UartC.UsartC*/Msp430Usart0C__0__CLIENT_ID:
#line 65
      /*Msp430Uart0P.UartP*/Msp430UartP__0__ResourceConfigure__unconfigure(/*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID);
#line 65
      break;
#line 65
    default:
#line 65
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(arg_0x7f18ef0de240);
#line 65
      break;
#line 65
    }
#line 65
}
#line 65
# 67 "../../../tos/interfaces/TaskBasic.nc"
inline static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 68 "../../../tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void )
#line 68
{
  /* atomic removed: atomic calls only */
#line 69
  {
    if (/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__qHead != /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
        uint8_t id = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__qHead;

#line 72
        /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__qHead = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__resQ[/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__qHead];
        if (/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__qHead == /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
          /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__qTail = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
          }
#line 75
        /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__resQ[id] = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
        {
          unsigned char __nesc_temp = 
#line 76
          id;

#line 76
          return __nesc_temp;
        }
      }
#line 78
    {
      unsigned char __nesc_temp = 
#line 78
      /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

#line 78
      return __nesc_temp;
    }
  }
}

# 70 "../../../tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 60 "../../../tos/system/FcfsResourceQueueC.nc"
static inline bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void )
#line 60
{
  /* atomic removed: atomic calls only */
#line 61
  {
    unsigned char __nesc_temp = 
#line 61
    /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__qHead == /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

#line 61
    return __nesc_temp;
  }
}

# 53 "../../../tos/interfaces/ResourceQueue.nc"
inline static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 111 "../../../tos/system/ArbiterP.nc"
static inline error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__release(uint8_t id)
#line 111
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 112
    {
      if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_BUSY && /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId == id) {
          if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__isEmpty() == FALSE) {
              /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__reqResId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__dequeue();
              /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__NO_RES;
              /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_GRANTING;
              /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__postTask();
              /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(id);
            }
          else {
              /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__default_owner_id;
              /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_CONTROLLED;
              /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(id);
              /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted();
            }
          {
            unsigned char __nesc_temp = 
#line 127
            SUCCESS;

            {
#line 127
              __nesc_atomic_end(__nesc_atomic); 
#line 127
              return __nesc_temp;
            }
          }
        }
    }
#line 131
    __nesc_atomic_end(__nesc_atomic); }
#line 130
  return FAIL;
}

# 233 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
static inline error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__default__release(uint8_t id)
#line 233
{
#line 233
  return FAIL;
}

# 120 "../../../tos/interfaces/Resource.nc"
inline static error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__release(uint8_t arg_0x7f18ef53a580){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  switch (arg_0x7f18ef53a580) {
#line 120
    case /*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID:
#line 120
      __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__release(/*PlatformSerialC.UartC.UsartC*/Msp430Usart0C__0__CLIENT_ID);
#line 120
      break;
#line 120
    default:
#line 120
      __nesc_result = /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__default__release(arg_0x7f18ef53a580);
#line 120
      break;
#line 120
    }
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 230 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
static inline bool /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__default__isOwner(uint8_t id)
#line 230
{
#line 230
  return FALSE;
}

# 128 "../../../tos/interfaces/Resource.nc"
inline static bool /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__isOwner(uint8_t arg_0x7f18ef53a580){
#line 128
  unsigned char __nesc_result;
#line 128

#line 128
  switch (arg_0x7f18ef53a580) {
#line 128
    case /*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID:
#line 128
      __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__isOwner(/*PlatformSerialC.UartC.UsartC*/Msp430Usart0C__0__CLIENT_ID);
#line 128
      break;
#line 128
    default:
#line 128
      __nesc_result = /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__default__isOwner(arg_0x7f18ef53a580);
#line 128
      break;
#line 128
    }
#line 128

#line 128
  return __nesc_result;
#line 128
}
#line 128
# 77 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
static inline error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__Resource__release(uint8_t id)
#line 77
{
  if (/*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__isOwner(id) == FALSE) {
    return FAIL;
    }
#line 80
  if (/*Msp430Uart0P.UartP*/Msp430UartP__0__m_rx_buf || /*Msp430Uart0P.UartP*/Msp430UartP__0__m_tx_buf) {
    return EBUSY;
    }
#line 82
  return /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__release(id);
}

# 120 "../../../tos/interfaces/Resource.nc"
inline static error_t ShimmerSerialP__Resource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*Msp430Uart0P.UartP*/Msp430UartP__0__Resource__release(/*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 65 "../../../tos/platforms/shimmer2r/ShimmerSerialP.nc"
static inline error_t ShimmerSerialP__StdControl__stop(void )
#line 65
{
  ShimmerSerialP__Resource__release();
  return SUCCESS;
}

# 105 "../../../tos/interfaces/StdControl.nc"
inline static error_t SerialP__SerialControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = ShimmerSerialP__StdControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 336 "../../../tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFlush__flushDone(void )
#line 336
{
  SerialP__SerialControl__stop();
  SerialP__SplitControl__stopDone(SUCCESS);
}

static inline void SerialP__defaultSerialFlushTask__runTask(void )
#line 341
{
  SerialP__SerialFlush__flushDone();
}

# 67 "../../../tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__defaultSerialFlushTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__defaultSerialFlushTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 344 "../../../tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFlush__default__flush(void )
#line 344
{
  SerialP__defaultSerialFlushTask__postTask();
}

# 49 "../../../tos/lib/serial/SerialFlush.nc"
inline static void SerialP__SerialFlush__flush(void ){
#line 49
  SerialP__SerialFlush__default__flush();
#line 49
}
#line 49
# 332 "../../../tos/lib/serial/SerialP.nc"
static inline void SerialP__stopDoneTask__runTask(void )
#line 332
{
  SerialP__SerialFlush__flush();
}

# 48 "../../../tos/lib/serial/SerialStartP.nc"
static inline void SerialStartP__SerialControl__startDone(error_t error)
#line 48
{
}

# 113 "../../../tos/interfaces/SplitControl.nc"
inline static void SerialP__SplitControl__startDone(error_t error){
#line 113
  SerialStartP__SerialControl__startDone(error);
#line 113
}
#line 113
# 133 "../../../tos/system/ArbiterP.nc"
static inline error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void )
#line 133
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 134
    {
      if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__default_owner_id) {
          if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_GRANTING) {
              /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__postTask();
              {
                unsigned char __nesc_temp = 
#line 138
                SUCCESS;

                {
#line 138
                  __nesc_atomic_end(__nesc_atomic); 
#line 138
                  return __nesc_temp;
                }
              }
            }
          else {
#line 140
            if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_IMM_GRANTING) {
                /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__reqResId;
                /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_BUSY;
                {
                  unsigned char __nesc_temp = 
#line 143
                  SUCCESS;

                  {
#line 143
                    __nesc_atomic_end(__nesc_atomic); 
#line 143
                    return __nesc_temp;
                  }
                }
              }
            }
        }
    }
#line 149
    __nesc_atomic_end(__nesc_atomic); }
#line 147
  return FAIL;
}

#line 213
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__immediateRequested(void )
#line 213
{
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release();
}

# 81 "../../../tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__immediateRequested(void ){
#line 81
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__immediateRequested();
#line 81
}
#line 81
# 206 "../../../tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__immediateRequested(uint8_t id)
#line 206
{
}

# 61 "../../../tos/interfaces/ResourceRequested.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__immediateRequested(uint8_t arg_0x7f18ef0e2cf0){
#line 61
    /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__immediateRequested(arg_0x7f18ef0e2cf0);
#line 61
}
#line 61
# 93 "../../../tos/system/ArbiterP.nc"
static inline error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__immediateRequest(uint8_t id)
#line 93
{
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__immediateRequested(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 95
    {
      if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_CONTROLLED) {
          /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_IMM_GRANTING;
          /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__reqResId = id;
        }
      else {
          unsigned char __nesc_temp = 
#line 100
          FAIL;

          {
#line 100
            __nesc_atomic_end(__nesc_atomic); 
#line 100
            return __nesc_temp;
          }
        }
    }
#line 103
    __nesc_atomic_end(__nesc_atomic); }
#line 102
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__immediateRequested();
  if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId == id) {
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__configure(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId);
      return SUCCESS;
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 107
    /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_CONTROLLED;
#line 107
    __nesc_atomic_end(__nesc_atomic); }
  return FAIL;
}

# 232 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
static inline error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__default__immediateRequest(uint8_t id)
#line 232
{
#line 232
  return FAIL;
}

# 97 "../../../tos/interfaces/Resource.nc"
inline static error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__immediateRequest(uint8_t arg_0x7f18ef53a580){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  switch (arg_0x7f18ef53a580) {
#line 97
    case /*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID:
#line 97
      __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__immediateRequest(/*PlatformSerialC.UartC.UsartC*/Msp430Usart0C__0__CLIENT_ID);
#line 97
      break;
#line 97
    default:
#line 97
      __nesc_result = /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__default__immediateRequest(arg_0x7f18ef53a580);
#line 97
      break;
#line 97
    }
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 65 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
static inline error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__Resource__immediateRequest(uint8_t id)
#line 65
{
  return /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__immediateRequest(id);
}

# 97 "../../../tos/interfaces/Resource.nc"
inline static error_t ShimmerSerialP__Resource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = /*Msp430Uart0P.UartP*/Msp430UartP__0__Resource__immediateRequest(/*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 61 "../../../tos/platforms/shimmer2r/ShimmerSerialP.nc"
static inline error_t ShimmerSerialP__StdControl__start(void )
#line 61
{
  return ShimmerSerialP__Resource__immediateRequest();
}

# 95 "../../../tos/interfaces/StdControl.nc"
inline static error_t SerialP__SerialControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = ShimmerSerialP__StdControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 322 "../../../tos/lib/serial/SerialP.nc"
static inline void SerialP__startDoneTask__runTask(void )
#line 322
{
  SerialP__SerialControl__start();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 324
    {
      SerialP__txState = SerialP__TXSTATE_IDLE;
      SerialP__rxState = SerialP__RXSTATE_NOSYNC;
    }
#line 327
    __nesc_atomic_end(__nesc_atomic); }
  SerialP__SplitControl__startDone(SUCCESS);
}

# 56 "../../../tos/lib/serial/SerialFrameComm.nc"
inline static error_t SerialP__SerialFrameComm__putDelimiter(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = HdlcTranslateC__SerialFrameComm__putDelimiter();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 67 "../../../tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 194 "../../../tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error)
#line 194
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 195
    /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = error;
#line 195
    __nesc_atomic_end(__nesc_atomic); }
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask();
}

# 91 "../../../tos/lib/serial/SendBytePacket.nc"
inline static void SerialP__SendBytePacket__sendCompleted(error_t error){
#line 91
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error);
#line 91
}
#line 91
# 244 "../../../tos/lib/serial/SerialP.nc"
static __inline bool SerialP__ack_queue_is_empty(void )
#line 244
{
  bool ret;

#line 246
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 246
    ret = SerialP__ackQ.writePtr == SerialP__ackQ.readPtr;
#line 246
    __nesc_atomic_end(__nesc_atomic); }
  return ret;
}











static __inline uint8_t SerialP__ack_queue_top(void )
#line 260
{
  uint8_t tmp = 0;

  /* atomic removed: atomic calls only */
#line 262
  {
    if (!SerialP__ack_queue_is_empty()) {
        tmp = SerialP__ackQ.buf[SerialP__ackQ.readPtr];
      }
  }
  return tmp;
}

static inline uint8_t SerialP__ack_queue_pop(void )
#line 270
{
  uint8_t retval = 0;

  /* atomic removed: atomic calls only */
#line 272
  {
    if (SerialP__ackQ.writePtr != SerialP__ackQ.readPtr) {
        retval = SerialP__ackQ.buf[SerialP__ackQ.readPtr];
        if (++ SerialP__ackQ.readPtr > SerialP__ACK_QUEUE_SIZE) {
#line 275
          SerialP__ackQ.readPtr = 0;
          }
      }
  }
#line 278
  return retval;
}

#line 560
static inline void SerialP__RunTx__runTask(void )
#line 560
{
  uint8_t idle;
  uint8_t done;
  uint8_t fail;









  error_t result = SUCCESS;
  bool send_completed = FALSE;
  bool start_it = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 577
    {
      SerialP__txPending = 0;
      idle = SerialP__txState == SerialP__TXSTATE_IDLE;
      done = SerialP__txState == SerialP__TXSTATE_FINISH;
      fail = SerialP__txState == SerialP__TXSTATE_ERROR;
      if (done || fail) {
          SerialP__txState = SerialP__TXSTATE_IDLE;
          SerialP__txBuf[SerialP__txIndex].state = SerialP__BUFFER_AVAILABLE;
        }
    }
#line 586
    __nesc_atomic_end(__nesc_atomic); }


  if (done || fail) {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 590
        {
          SerialP__txSeqno++;
          if (SerialP__txProto == SERIAL_PROTO_ACK) {
              SerialP__ack_queue_pop();
            }
          else {
              result = done ? SUCCESS : FAIL;
              send_completed = TRUE;
            }
        }
#line 599
        __nesc_atomic_end(__nesc_atomic); }
      idle = TRUE;
    }


  if (idle) {
      bool goInactive;

#line 606
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 606
        goInactive = SerialP__offPending;
#line 606
        __nesc_atomic_end(__nesc_atomic); }
      if (goInactive) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 608
            SerialP__txState = SerialP__TXSTATE_INACTIVE;
#line 608
            __nesc_atomic_end(__nesc_atomic); }
        }
      else {

          uint8_t myAckState;
          uint8_t myDataState;

#line 614
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 614
            {
              myAckState = SerialP__txBuf[SerialP__TX_ACK_INDEX].state;
              myDataState = SerialP__txBuf[SerialP__TX_DATA_INDEX].state;
            }
#line 617
            __nesc_atomic_end(__nesc_atomic); }
          if (!SerialP__ack_queue_is_empty() && myAckState == SerialP__BUFFER_AVAILABLE) {
              { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 619
                {
                  SerialP__txBuf[SerialP__TX_ACK_INDEX].state = SerialP__BUFFER_COMPLETE;
                  SerialP__txBuf[SerialP__TX_ACK_INDEX].buf = SerialP__ack_queue_top();

                  SerialP__txProto = SERIAL_PROTO_ACK;
                  SerialP__txIndex = SerialP__TX_ACK_INDEX;
                  start_it = TRUE;
                }
#line 626
                __nesc_atomic_end(__nesc_atomic); }
            }
          else {
#line 628
            if (myDataState == SerialP__BUFFER_FILLING || myDataState == SerialP__BUFFER_COMPLETE) {
                { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 629
                  {
                    SerialP__txProto = SERIAL_PROTO_PACKET_NOACK;
                    SerialP__txIndex = SerialP__TX_DATA_INDEX;
                    start_it = TRUE;
                  }
#line 633
                  __nesc_atomic_end(__nesc_atomic); }
              }
            else {
              }
            }
        }
    }
  else {
    }


  if (send_completed) {
      SerialP__SendBytePacket__sendCompleted(result);
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 647
    {
      if (SerialP__txState == SerialP__TXSTATE_INACTIVE) {
          SerialP__testOff();
          {
#line 650
            __nesc_atomic_end(__nesc_atomic); 
#line 650
            return;
          }
        }
    }
#line 653
    __nesc_atomic_end(__nesc_atomic); }
  if (start_it) {

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 656
        {
          SerialP__txCRC = 0;
          SerialP__txByteCnt = 0;
          SerialP__txState = SerialP__TXSTATE_PROTO;
        }
#line 660
        __nesc_atomic_end(__nesc_atomic); }
      if (SerialP__SerialFrameComm__putDelimiter() != SUCCESS) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 662
            SerialP__txState = SerialP__TXSTATE_ERROR;
#line 662
            __nesc_atomic_end(__nesc_atomic); }
          SerialP__MaybeScheduleTx();
        }
    }
}

# 67 "../../../tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__stopDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__stopDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 48 "../../../tos/interfaces/UartStream.nc"
inline static error_t HdlcTranslateC__UartStream__send(uint8_t * buf, uint16_t len){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__send(/*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID, buf, len);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 126 "../../../tos/system/AMQueueImplP.nc"
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void )
#line 126
{
  uint8_t i;
#line 127
  uint8_t j;
#line 127
  uint8_t mask;
#line 127
  uint8_t last;
  message_t *msg;

#line 129
  for (i = 0; i < 1 / 8 + 1; i++) {
      if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[i]) {
          for (mask = 1, j = 0; j < 8; j++) {
              if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[i] & mask) {
                  last = i * 8 + j;
                  msg = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[last].msg;
                  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[last].msg = (void *)0;
                  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[i] &= ~mask;
                  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(last, msg, ECANCEL);
                }
              mask <<= 1;
            }
        }
    }
}

#line 169
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void )
#line 169
{
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current, /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg, FAIL);
}

# 70 "../../../tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 375 "../../../tos/platforms/shimmer/chips/msp430/msp430hardware.h"
static inline void brief_pause(unsigned int n)
{
   __asm volatile ("1: \n\t"
  "dec	%0 \n\t"
  "jne	1b\n\t" : 
  "+r"(n));}

# 226 "../../../tos/platforms/shimmer/shimmerAnalogSetupP.nc"
static inline void shimmerAnalogSetupP__initADC12CTL1(void )
{
  ADC12CTL1 = 0;
  ADC12CTL1 |= 0x0002;
  ADC12CTL1 |= 0x0018;
  ADC12CTL1 |= 0x0000;
  ADC12CTL1 |= 0x0200;
}

#line 215
static inline void shimmerAnalogSetupP__initADC12CTL0(void )
{

  ADC12CTL0 = 0;
  ADC12CTL0 |= 0x010;
  ADC12CTL0 |= 0x040;
  ADC12CTL0 |= 0x080;
  ADC12CTL0 |= 0x0000;
  ADC12CTL0 |= 0x0000;
}

#line 197
static inline error_t shimmerAnalogSetupP__Init__init(void )
#line 197
{
  shimmerAnalogSetupP__initADC12CTL0();
  shimmerAnalogSetupP__initADC12CTL1();


  brief_pause(((unsigned long long )50000UL * 4096 * 1024 / 1000000 - 2) / 3);
  return SUCCESS;
}

# 109 "../../../tos/lib/printf/PrintfP.nc"
static inline error_t PrintfP__Init__init(void )
#line 109
{
  /* atomic removed: atomic calls only */
#line 110
  PrintfP__state = PrintfP__S_STARTED;
  return SUCCESS;
}

# 216 "../../../tos/lib/serial/SerialP.nc"
static __inline void SerialP__ackInit(void )
#line 216
{
  SerialP__ackQ.writePtr = SerialP__ackQ.readPtr = 0;
}

#line 207
static __inline void SerialP__rxInit(void )
#line 207
{
  SerialP__rxBuf.writePtr = SerialP__rxBuf.readPtr = 0;
  SerialP__rxState = SerialP__RXSTATE_INACTIVE;
  SerialP__rxByteCnt = 0;
  SerialP__rxProto = 0;
  SerialP__rxSeqno = 0;
  SerialP__rxCRC = 0;
}

#line 195
static __inline void SerialP__txInit(void )
#line 195
{
  uint8_t i;

  /* atomic removed: atomic calls only */
#line 197
  for (i = 0; i < SerialP__TX_BUFFER_COUNT; i++) SerialP__txBuf[i].state = SerialP__BUFFER_AVAILABLE;
  SerialP__txState = SerialP__TXSTATE_INACTIVE;
  SerialP__txByteCnt = 0;
  SerialP__txProto = 0;
  SerialP__txSeqno = 0;
  SerialP__txCRC = 0;
  SerialP__txPending = FALSE;
  SerialP__txIndex = 0;
}

#line 220
static inline error_t SerialP__Init__init(void )
#line 220
{

  SerialP__txInit();
  SerialP__rxInit();
  SerialP__ackInit();

  return SUCCESS;
}

# 55 "../../../tos/system/FcfsResourceQueueC.nc"
static inline error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__Init__init(void )
#line 55
{
  memset(/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__resQ, /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY, sizeof /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__resQ);
  return SUCCESS;
}

# 98 "../../../tos/lib/printf/PutcharP.nc"
static inline error_t PutcharP__Init__init(void )
#line 98
{
  error_t rv = SUCCESS;



  return rv;
}

# 57 "../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__CC2int(/*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t x)
#line 57
{
#line 57
  union /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3____nesc_unnamed4362 {
#line 57
    /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t f;
#line 57
    uint16_t t;
  } 
#line 57
  c = { .f = x };

#line 57
  return c.t;
}

static inline uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__compareControl(void )
{
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t x = { 
  .cm = 1, 
  .ccis = 0, 
  .clld = 0, 
  .cap = 0, 
  .ccie = 0 };

  return /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__CC2int(x);
}

#line 105
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__setControlAsCompare(void )
{
  * (volatile uint16_t * )386U = /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__compareControl();
}

# 47 "../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__setControlAsCompare(void ){
#line 47
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__setControlAsCompare();
#line 47
}
#line 47
# 53 "../../../tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline error_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Init__init(void )
{
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents();
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__setControlAsCompare();
  return SUCCESS;
}

# 62 "../../../tos/interfaces/Init.nc"
inline static error_t RealMainP__SoftwareInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, PutcharP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, SerialP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, PrintfP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, shimmerAnalogSetupP__Init__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 67 "../../../tos/interfaces/TaskBasic.nc"
inline static error_t RovingNetworksP__runSetCommands__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(RovingNetworksP__runSetCommands);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 562 "../../../tos/platforms/shimmer/chips/bluetooth/RovingNetworksP.nc"
static inline error_t RovingNetworksP__StdControl__start(void )
#line 562
{
  brief_pause(((unsigned long long )15000 * 4096 * 1024 / 1000000 - 2) / 3);
  RovingNetworksP__runSetCommands__postTask();

  return SUCCESS;
}

# 95 "../../../tos/interfaces/StdControl.nc"
inline static error_t SimpleAccelC__BTStdControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = RovingNetworksP__StdControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 189 "../../../tos/platforms/shimmer/shimmerAnalogSetupP.nc"
static inline uint8_t shimmerAnalogSetupP__shimmerAnalogSetup__getNumberOfChannels(void )
#line 189
{
  return shimmerAnalogSetupP__NUM_ADC_CHANS;
}

# 83 "../../../tos/platforms/shimmer/shimmerAnalogSetup.nc"
inline static uint8_t SimpleAccelC__shimmerAnalogSetup__getNumberOfChannels(void ){
#line 83
  unsigned char __nesc_result;
#line 83

#line 83
  __nesc_result = shimmerAnalogSetupP__shimmerAnalogSetup__getNumberOfChannels();
#line 83

#line 83
  return __nesc_result;
#line 83
}
#line 83
# 72 "../../../tos/chips/msp430/dma/HplMsp430DmaXP.nc"
static inline error_t /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__setTrigger(dma_trigger_t trigger)
#line 72
{

  if (* (volatile uint16_t *)480U & 0x0010) {
    return FAIL;
    }
  /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMACTL0 = (/*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMACTL0 & ~15) | ((
  trigger << 0) & 15);

  return SUCCESS;
}

#line 224
static inline void /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__setStateRaw(uint16_t s, uint16_t t, 
void *src, void *dest, 
uint16_t size)
#line 226
{
  * (volatile uint16_t *)482U = (uint16_t )src;
  * (volatile uint16_t *)484U = (uint16_t )dest;
  * (volatile uint16_t *)486U = size;
  /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__setTrigger((dma_trigger_t )t);
  * (volatile uint16_t *)480U = s;
}

#line 216
static inline void /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__setState(dma_channel_state_t s, 
dma_channel_trigger_t t, 
void *src, void *dest, 
uint16_t size)
#line 219
{
  /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__setStateRaw(* (uint16_t *)&s, * (uint16_t *)&t, 
  src, dest, size);
}

# 75 "../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
inline static void /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__HplChannel__setState(dma_channel_state_t s, dma_channel_trigger_t t, void *src, void *dest, uint16_t size){
#line 75
  /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__setState(s, t, src, dest, size);
#line 75
}
#line 75
# 60 "../../../tos/chips/msp430/dma/Msp430DmaChannelP.nc"
static inline error_t /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__Channel__setupTransfer(dma_transfer_mode_t transfer_mode, 
dma_trigger_t trigger, 
dma_level_t level, 
void *src_addr, 
void *dst_addr, 
uint16_t size, 
dma_byte_t src_byte, 
dma_byte_t dst_byte, 
dma_incr_t src_incr, 
dma_incr_t dst_incr)
#line 69
{

  /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__gChannelState.request = 0;
  /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__gChannelState.abort = 0;
  /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__gChannelState.interruptEnable = 1;
  /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__gChannelState.interruptFlag = 0;
  /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__gChannelState.enable = 0;
  /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__gChannelState.level = level;
  /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__gChannelState.srcByte = src_byte;
  /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__gChannelState.dstByte = dst_byte;
  /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__gChannelState.srcIncrement = src_incr;
  /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__gChannelState.dstIncrement = dst_incr;
  /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__gChannelState.transferMode = transfer_mode;

  /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__gChannelTrigger.trigger = trigger;

  /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__HplChannel__setState(/*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__gChannelState, /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__gChannelTrigger, 
  src_addr, dst_addr, size);

  return SUCCESS;
}

# 49 "../../../tos/chips/msp430/dma/Msp430DmaChannel.nc"
inline static error_t shimmerAnalogSetupP__Msp430DmaChannel__setupTransfer(dma_transfer_mode_t transfer_mode, dma_trigger_t trigger, dma_level_t level, void *src_addr, void *dst_addr, uint16_t size, dma_byte_t src_byte, dma_byte_t dst_byte, dma_incr_t src_incr, dma_incr_t dst_incr){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__Channel__setupTransfer(transfer_mode, trigger, level, src_addr, dst_addr, size, src_byte, dst_byte, src_incr, dst_incr);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 71 "../../../tos/chips/msp430/dma/HplMsp430DmaP.nc"
static inline void HplMsp430DmaP__DmaControl__clearOnFetch(void )
#line 71
{
  HplMsp430DmaP__DMACTL1 &= ~0x0004;
}

# 43 "../../../tos/chips/msp430/dma/HplMsp430DmaControl.nc"
inline static void Msp430DmaControlP__HplControl__clearOnFetch(void ){
#line 43
  HplMsp430DmaP__DmaControl__clearOnFetch();
#line 43
}
#line 43
# 67 "../../../tos/chips/msp430/dma/HplMsp430DmaP.nc"
static inline void HplMsp430DmaP__DmaControl__setOnFetch(void )
#line 67
{
  HplMsp430DmaP__DMACTL1 |= 0x0004;
}

# 42 "../../../tos/chips/msp430/dma/HplMsp430DmaControl.nc"
inline static void Msp430DmaControlP__HplControl__setOnFetch(void ){
#line 42
  HplMsp430DmaP__DmaControl__setOnFetch();
#line 42
}
#line 42
# 78 "../../../tos/chips/msp430/dma/HplMsp430DmaP.nc"
static inline void HplMsp430DmaP__DmaControl__clearRoundRobin(void )
#line 78
{
  HplMsp430DmaP__DMACTL1 &= ~0x0002;
}

# 45 "../../../tos/chips/msp430/dma/HplMsp430DmaControl.nc"
inline static void Msp430DmaControlP__HplControl__clearRoundRobin(void ){
#line 45
  HplMsp430DmaP__DmaControl__clearRoundRobin();
#line 45
}
#line 45
# 75 "../../../tos/chips/msp430/dma/HplMsp430DmaP.nc"
static inline void HplMsp430DmaP__DmaControl__setRoundRobin(void )
#line 75
{
  HplMsp430DmaP__DMACTL1 |= 0x0002;
}

# 44 "../../../tos/chips/msp430/dma/HplMsp430DmaControl.nc"
inline static void Msp430DmaControlP__HplControl__setRoundRobin(void ){
#line 44
  HplMsp430DmaP__DmaControl__setRoundRobin();
#line 44
}
#line 44
# 86 "../../../tos/chips/msp430/dma/HplMsp430DmaP.nc"
static inline void HplMsp430DmaP__DmaControl__clearENNMI(void )
#line 86
{
  HplMsp430DmaP__DMACTL1 &= ~0x0001;
}

# 47 "../../../tos/chips/msp430/dma/HplMsp430DmaControl.nc"
inline static void Msp430DmaControlP__HplControl__clearENNMI(void ){
#line 47
  HplMsp430DmaP__DmaControl__clearENNMI();
#line 47
}
#line 47
# 82 "../../../tos/chips/msp430/dma/HplMsp430DmaP.nc"
static inline void HplMsp430DmaP__DmaControl__setENNMI(void )
#line 82
{
  HplMsp430DmaP__DMACTL1 |= 0x0001;
}

# 46 "../../../tos/chips/msp430/dma/HplMsp430DmaControl.nc"
inline static void Msp430DmaControlP__HplControl__setENNMI(void ){
#line 46
  HplMsp430DmaP__DmaControl__setENNMI();
#line 46
}
#line 46
# 62 "../../../tos/chips/msp430/dma/Msp430DmaControlP.nc"
static inline void Msp430DmaControlP__Control__setFlags(bool enable_nmi, bool round_robin, 
bool on_fetch)
#line 63
{



  if (enable_nmi) {
#line 67
    Msp430DmaControlP__HplControl__setENNMI();
    }
  else {
#line 68
    Msp430DmaControlP__HplControl__clearENNMI();
    }
#line 69
  if (round_robin) {
#line 69
    Msp430DmaControlP__HplControl__setRoundRobin();
    }
  else {
#line 70
    Msp430DmaControlP__HplControl__clearRoundRobin();
    }
#line 71
  if (on_fetch) {
#line 71
    Msp430DmaControlP__HplControl__setOnFetch();
    }
  else {
#line 72
    Msp430DmaControlP__HplControl__clearOnFetch();
    }
}

# 42 "../../../tos/chips/msp430/dma/Msp430DmaControl.nc"
inline static void shimmerAnalogSetupP__Msp430DmaControl__setFlags(bool enable_nmi, bool round_robin, bool on_fetch){
#line 42
  Msp430DmaControlP__Control__setFlags(enable_nmi, round_robin, on_fetch);
#line 42
}
#line 42
# 257 "../../../tos/chips/msp430/dma/HplMsp430DmaXP.nc"
static inline void /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__DMA__reset(void )
#line 257
{
  * (volatile uint16_t *)496U = 0;
  * (volatile uint16_t *)498U = 0;
  * (volatile uint16_t *)500U = 0;
  * (volatile uint16_t *)502U = 0;
}

# 83 "../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
inline static void Msp430DmaControlP__HplChannel2__reset(void ){
#line 83
  /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__DMA__reset();
#line 83
}
#line 83
# 257 "../../../tos/chips/msp430/dma/HplMsp430DmaXP.nc"
static inline void /*HplMsp430DmaC.Dma1*/HplMsp430DmaXP__1__DMA__reset(void )
#line 257
{
  * (volatile uint16_t *)488U = 0;
  * (volatile uint16_t *)490U = 0;
  * (volatile uint16_t *)492U = 0;
  * (volatile uint16_t *)494U = 0;
}

# 83 "../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
inline static void Msp430DmaControlP__HplChannel1__reset(void ){
#line 83
  /*HplMsp430DmaC.Dma1*/HplMsp430DmaXP__1__DMA__reset();
#line 83
}
#line 83
# 257 "../../../tos/chips/msp430/dma/HplMsp430DmaXP.nc"
static inline void /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__reset(void )
#line 257
{
  * (volatile uint16_t *)480U = 0;
  * (volatile uint16_t *)482U = 0;
  * (volatile uint16_t *)484U = 0;
  * (volatile uint16_t *)486U = 0;
}

# 83 "../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
inline static void Msp430DmaControlP__HplChannel0__reset(void ){
#line 83
  /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__reset();
#line 83
}
#line 83
# 100 "../../../tos/chips/msp430/dma/HplMsp430DmaP.nc"
static inline void HplMsp430DmaP__DmaControl__reset(void )
#line 100
{
  HplMsp430DmaP__DMACTL0 = 0;
  HplMsp430DmaP__DMACTL1 = 0;
}

# 50 "../../../tos/chips/msp430/dma/HplMsp430DmaControl.nc"
inline static void Msp430DmaControlP__HplControl__reset(void ){
#line 50
  HplMsp430DmaP__DmaControl__reset();
#line 50
}
#line 50
# 55 "../../../tos/chips/msp430/dma/Msp430DmaControlP.nc"
static inline void Msp430DmaControlP__Control__init(void )
#line 55
{
  Msp430DmaControlP__HplControl__reset();
  Msp430DmaControlP__HplChannel0__reset();
  Msp430DmaControlP__HplChannel1__reset();
  Msp430DmaControlP__HplChannel2__reset();
}

# 41 "../../../tos/chips/msp430/dma/Msp430DmaControl.nc"
inline static void shimmerAnalogSetupP__Msp430DmaControl__init(void ){
#line 41
  Msp430DmaControlP__Control__init();
#line 41
}
#line 41
# 247 "../../../tos/platforms/shimmer/shimmerAnalogSetupP.nc"
static inline void shimmerAnalogSetupP__setupDMA(uint16_t *destAddr)
#line 247
{
  shimmerAnalogSetupP__Msp430DmaControl__init();

  shimmerAnalogSetupP__Msp430DmaControl__setFlags(FALSE, FALSE, FALSE);

  shimmerAnalogSetupP__Msp430DmaChannel__setupTransfer(DMA_BLOCK_TRANSFER, 
  DMA_TRIGGER_ADC12IFGx, 
  DMA_EDGE_SENSITIVE, 
  (void *)0x0140, 
  (void *)destAddr, 
  shimmerAnalogSetupP__NUM_ADC_CHANS, 
  DMA_WORD, 
  DMA_WORD, 
  DMA_ADDRESS_INCREMENTED, 
  DMA_ADDRESS_INCREMENTED);

  shimmerAnalogSetupP__Msp430DmaChannel__startTransfer();
}

#line 174
static inline void shimmerAnalogSetupP__shimmerAnalogSetup__finishADCSetup(uint16_t *buffer)
#line 174
{
  shimmerAnalogSetupP__setupDMA(buffer);
}

# 77 "../../../tos/platforms/shimmer/shimmerAnalogSetup.nc"
inline static void SimpleAccelC__shimmerAnalogSetup__finishADCSetup(uint16_t *buffer){
#line 77
  shimmerAnalogSetupP__shimmerAnalogSetup__finishADCSetup(buffer);
#line 77
}
#line 77
# 100 "../../../tos/platforms/shimmer2r/hardware.h"
static inline  void TOSH_SEL_ADC_7_MODFUNC()
#line 100
{
#line 100
  static volatile uint8_t r __asm ("0x0037");

#line 100
  r |= 1 << 7;
}

#line 100
static inline  void TOSH_MAKE_ADC_7_INPUT()
#line 100
{
#line 100
  static volatile uint8_t r __asm ("0x0036");

#line 100
  r &= ~(1 << 7);
}

#line 93
static inline  void TOSH_SEL_ADC_0_MODFUNC()
#line 93
{
#line 93
  static volatile uint8_t r __asm ("0x0037");

#line 93
  r |= 1 << 0;
}

#line 93
static inline  void TOSH_MAKE_ADC_0_INPUT()
#line 93
{
#line 93
  static volatile uint8_t r __asm ("0x0036");

#line 93
  r &= ~(1 << 0);
}

# 151 "../../../tos/platforms/shimmer/shimmerAnalogSetupP.nc"
static inline void shimmerAnalogSetupP__shimmerAnalogSetup__addAnExInput(uint8_t channel)
#line 151
{
  uint8_t new_chans[1];

  if (channel == 0) {
      new_chans[0] = 0;
      shimmerAnalogSetupP__addNewChannels(new_chans, 1);

      shimmerAnalogSetupP__initADC12MEMCTLx();

      TOSH_MAKE_ADC_0_INPUT();
      TOSH_SEL_ADC_0_MODFUNC();
    }
  else {
#line 163
    if (channel == 7) {
        new_chans[0] = 7;
        shimmerAnalogSetupP__addNewChannels(new_chans, 1);

        shimmerAnalogSetupP__initADC12MEMCTLx();

        TOSH_MAKE_ADC_7_INPUT();
        TOSH_SEL_ADC_7_MODFUNC();
      }
    }
}

# 64 "../../../tos/platforms/shimmer/shimmerAnalogSetup.nc"
inline static void SimpleAccelC__shimmerAnalogSetup__addAnExInput(uint8_t channel){
#line 64
  shimmerAnalogSetupP__shimmerAnalogSetup__addAnExInput(channel);
#line 64
}
#line 64
# 96 "../../../tos/platforms/shimmer2r/hardware.h"
static inline  void TOSH_SEL_ADC_3_MODFUNC()
#line 96
{
#line 96
  static volatile uint8_t r __asm ("0x0037");

#line 96
  r |= 1 << 3;
}

#line 96
static inline  void TOSH_MAKE_ADC_3_INPUT()
#line 96
{
#line 96
  static volatile uint8_t r __asm ("0x0036");

#line 96
  r &= ~(1 << 3);
}

#line 97
static inline  void TOSH_SEL_ADC_4_MODFUNC()
#line 97
{
#line 97
  static volatile uint8_t r __asm ("0x0037");

#line 97
  r |= 1 << 4;
}

#line 97
static inline  void TOSH_MAKE_ADC_4_INPUT()
#line 97
{
#line 97
  static volatile uint8_t r __asm ("0x0036");

#line 97
  r &= ~(1 << 4);
}

#line 98
static inline  void TOSH_SEL_ADC_5_MODFUNC()
#line 98
{
#line 98
  static volatile uint8_t r __asm ("0x0037");

#line 98
  r |= 1 << 5;
}

#line 98
static inline  void TOSH_MAKE_ADC_5_INPUT()
#line 98
{
#line 98
  static volatile uint8_t r __asm ("0x0036");

#line 98
  r &= ~(1 << 5);
}

# 62 "../../../tos/platforms/shimmer/shimmerAnalogSetupP.nc"
static inline void shimmerAnalogSetupP__shimmerAnalogSetup__addAccelInputs(void )
#line 62
{
  uint8_t new_chans[3] = { 5, 4, 3 };

#line 64
  shimmerAnalogSetupP__addNewChannels(new_chans, 3);

  shimmerAnalogSetupP__initADC12MEMCTLx();

  TOSH_MAKE_ADC_5_INPUT();
  TOSH_SEL_ADC_5_MODFUNC();

  TOSH_MAKE_ADC_4_INPUT();
  TOSH_SEL_ADC_4_MODFUNC();

  TOSH_MAKE_ADC_3_INPUT();
  TOSH_SEL_ADC_3_MODFUNC();
}

# 46 "../../../tos/platforms/shimmer/shimmerAnalogSetup.nc"
inline static void SimpleAccelC__shimmerAnalogSetup__addAccelInputs(void ){
#line 46
  shimmerAnalogSetupP__shimmerAnalogSetup__addAccelInputs();
#line 46
}
#line 46
# 152 "../../../tos/platforms/shimmer2r/hardware.h"
static inline  void TOSH_SET_PWRMUX_SEL_PIN()
#line 152
{
#line 152
  static volatile uint8_t r __asm ("0x001D");

#line 152
  r |= 1 << 1;
}

#line 153
static inline  void TOSH_SET_ACCEL_SEL0_PIN()
#line 153
{
#line 153
  static volatile uint8_t r __asm ("0x001D");

#line 153
  r |= 1 << 4;
}

# 66 "../../../tos/platforms/shimmer2r/Mma7361P.nc"
static inline void Mma7361P__Accel__setSensitivity(uint8_t sensitivity)
#line 66
{
  switch (sensitivity) {
      case RANGE_1_5G: 
        TOSH_CLR_ACCEL_SEL0_PIN();
      break;
      case RANGE_6_0G: 
        TOSH_SET_ACCEL_SEL0_PIN();
      break;
      default: 
        TOSH_CLR_ACCEL_SEL0_PIN();
      break;
    }
}

# 54 "../../../tos/platforms/shimmer/chips/mma7260/Mma_Accel.nc"
inline static void SimpleAccelC__Accel__setSensitivity(uint8_t sensitivity){
#line 54
  Mma7361P__Accel__setSensitivity(sensitivity);
#line 54
}
#line 54
# 104 "../../../tos/platforms/shimmer2r/hardware.h"
static inline  void TOSH_SEL_ADC_ACCELX_MODFUNC()
#line 104
{
#line 104
  static volatile uint8_t r __asm ("0x0037");

#line 104
  r |= 1 << 5;
}

#line 103
static inline  void TOSH_SEL_ADC_ACCELY_MODFUNC()
#line 103
{
#line 103
  static volatile uint8_t r __asm ("0x0037");

#line 103
  r |= 1 << 4;
}

#line 102
static inline  void TOSH_SEL_ADC_ACCELZ_MODFUNC()
#line 102
{
#line 102
  static volatile uint8_t r __asm ("0x0037");

#line 102
  r |= 1 << 3;
}

# 47 "../../../tos/platforms/shimmer2r/Mma7361P.nc"
static inline error_t Mma7361P__Init__init(void )
#line 47
{


  TOSH_SEL_ADC_ACCELZ_MODFUNC();
  TOSH_SEL_ADC_ACCELY_MODFUNC();
  TOSH_SEL_ADC_ACCELX_MODFUNC();

  Mma7361P__Accel__wake(1);

  return SUCCESS;
}

# 62 "../../../tos/interfaces/Init.nc"
inline static error_t SimpleAccelC__AccelInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = Mma7361P__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 363 "../../../tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static inline void HplMsp430Usart1P__Usart__enableRxIntr(void )
#line 363
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 364
    {
      HplMsp430Usart1P__IFG2 &= ~0x10;
      HplMsp430Usart1P__IE2 |= 0x10;
    }
#line 367
    __nesc_atomic_end(__nesc_atomic); }
}

# 180 "../../../tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void RovingNetworksP__UARTControl__enableRxIntr(void ){
#line 180
  HplMsp430Usart1P__Usart__enableRxIntr();
#line 180
}
#line 180
# 370 "../../../tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static inline void HplMsp430Usart1P__Usart__enableTxIntr(void )
#line 370
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 371
    {
      HplMsp430Usart1P__IFG2 &= ~0x20;
      HplMsp430Usart1P__IE2 |= 0x20;
    }
#line 374
    __nesc_atomic_end(__nesc_atomic); }
}

# 181 "../../../tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void RovingNetworksP__UARTControl__enableTxIntr(void ){
#line 181
  HplMsp430Usart1P__Usart__enableTxIntr();
#line 181
}
#line 181
# 359 "../../../tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static inline void HplMsp430Usart1P__Usart__disableIntr(void )
#line 359
{
  HplMsp430Usart1P__IE2 &= ~(0x20 | 0x10);
}

#line 347
static inline void HplMsp430Usart1P__Usart__clrIntr(void )
#line 347
{
  HplMsp430Usart1P__IFG2 &= ~(0x20 | 0x10);
}

#line 159
static inline void HplMsp430Usart1P__Usart__resetUsart(bool reset)
#line 159
{
  if (reset) {
    U1CTL = 0x01;
    }
  else {
#line 163
    U1CTL &= ~0x01;
    }
}

# 67 "../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P37*/HplMsp430GeneralIOP__23__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )27U &= ~(0x01 << 7);
}

# 99 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart1P__URXD__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P37*/HplMsp430GeneralIOP__23__IO__selectIOFunc();
#line 99
}
#line 99
# 67 "../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P36*/HplMsp430GeneralIOP__22__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )27U &= ~(0x01 << 6);
}

# 99 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart1P__UTXD__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P36*/HplMsp430GeneralIOP__22__IO__selectIOFunc();
#line 99
}
#line 99
# 211 "../../../tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static inline void HplMsp430Usart1P__Usart__disableUart(void )
#line 211
{
  /* atomic removed: atomic calls only */
#line 212
  {
    HplMsp430Usart1P__ME2 &= ~(0x20 | 0x10);
    HplMsp430Usart1P__UTXD__selectIOFunc();
    HplMsp430Usart1P__URXD__selectIOFunc();
  }
}

# 65 "../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P36*/HplMsp430GeneralIOP__22__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )27U |= 0x01 << 6;
}

# 92 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart1P__UTXD__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P36*/HplMsp430GeneralIOP__22__IO__selectModuleFunc();
#line 92
}
#line 92
# 220 "../../../tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static inline void HplMsp430Usart1P__Usart__enableUartTx(void )
#line 220
{
  HplMsp430Usart1P__UTXD__selectModuleFunc();
  HplMsp430Usart1P__ME2 |= 0x20;
}

#line 236
static inline void HplMsp430Usart1P__Usart__disableUartRx(void )
#line 236
{
  HplMsp430Usart1P__ME2 &= ~0x10;
  HplMsp430Usart1P__URXD__selectIOFunc();
}

# 65 "../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P37*/HplMsp430GeneralIOP__23__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )27U |= 0x01 << 7;
}

# 92 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart1P__URXD__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P37*/HplMsp430GeneralIOP__23__IO__selectModuleFunc();
#line 92
}
#line 92
# 231 "../../../tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static inline void HplMsp430Usart1P__Usart__enableUartRx(void )
#line 231
{
  HplMsp430Usart1P__URXD__selectModuleFunc();
  HplMsp430Usart1P__ME2 |= 0x10;
}

#line 225
static inline void HplMsp430Usart1P__Usart__disableUartTx(void )
#line 225
{
  HplMsp430Usart1P__ME2 &= ~0x20;
  HplMsp430Usart1P__UTXD__selectIOFunc();
}

#line 203
static inline void HplMsp430Usart1P__Usart__enableUart(void )
#line 203
{
  /* atomic removed: atomic calls only */
#line 204
  {
    HplMsp430Usart1P__UTXD__selectModuleFunc();
    HplMsp430Usart1P__URXD__selectModuleFunc();
  }
  HplMsp430Usart1P__ME2 |= 0x20 | 0x10;
}

#line 151
static inline void HplMsp430Usart1P__Usart__setUmctl(uint8_t control)
#line 151
{
  U1MCTL = control;
}

#line 140
static inline void HplMsp430Usart1P__Usart__setUbr(uint16_t control)
#line 140
{
  /* atomic removed: atomic calls only */
#line 141
  {
    U1BR0 = control & 0x00FF;
    U1BR1 = (control >> 8) & 0x00FF;
  }
}

#line 283
static inline void HplMsp430Usart1P__configUart(msp430_uart_union_config_t *config)
#line 283
{

  U1CTL = (config->uartRegisters.uctl & ~0x04) | 0x01;
  HplMsp430Usart1P__U1TCTL = config->uartRegisters.utctl;
  HplMsp430Usart1P__U1RCTL = config->uartRegisters.urctl;

  HplMsp430Usart1P__Usart__setUbr(config->uartRegisters.ubr);
  HplMsp430Usart1P__Usart__setUmctl(config->uartRegisters.umctl);
}

# 67 "../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P53*/HplMsp430GeneralIOP__35__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )51U &= ~(0x01 << 3);
}

# 99 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart1P__UCLK__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P53*/HplMsp430GeneralIOP__35__IO__selectIOFunc();
#line 99
}
#line 99
# 67 "../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P52*/HplMsp430GeneralIOP__34__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )51U &= ~(0x01 << 2);
}

# 99 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart1P__SOMI__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P52*/HplMsp430GeneralIOP__34__IO__selectIOFunc();
#line 99
}
#line 99
# 67 "../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P51*/HplMsp430GeneralIOP__33__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )51U &= ~(0x01 << 1);
}

# 99 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart1P__SIMO__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P51*/HplMsp430GeneralIOP__33__IO__selectIOFunc();
#line 99
}
#line 99
# 251 "../../../tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static inline void HplMsp430Usart1P__Usart__disableSpi(void )
#line 251
{
  /* atomic removed: atomic calls only */
#line 252
  {
    HplMsp430Usart1P__ME2 &= ~0x10;
    HplMsp430Usart1P__SIMO__selectIOFunc();
    HplMsp430Usart1P__SOMI__selectIOFunc();
    HplMsp430Usart1P__UCLK__selectIOFunc();
  }
}

#line 293
static inline void HplMsp430Usart1P__Usart__setModeUart(msp430_uart_union_config_t *config)
#line 293
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 295
    {
      HplMsp430Usart1P__Usart__resetUsart(TRUE);
      HplMsp430Usart1P__Usart__disableSpi();
      HplMsp430Usart1P__configUart(config);
      if (config->uartConfig.utxe == 1 && config->uartConfig.urxe == 1) {
          HplMsp430Usart1P__Usart__enableUart();
        }
      else {
#line 301
        if (config->uartConfig.utxe == 0 && config->uartConfig.urxe == 1) {
            HplMsp430Usart1P__Usart__disableUartTx();
            HplMsp430Usart1P__Usart__enableUartRx();
          }
        else {
#line 304
          if (config->uartConfig.utxe == 1 && config->uartConfig.urxe == 0) {
              HplMsp430Usart1P__Usart__disableUartRx();
              HplMsp430Usart1P__Usart__enableUartTx();
            }
          else 
#line 307
            {
              HplMsp430Usart1P__Usart__disableUart();
            }
          }
        }
#line 310
      HplMsp430Usart1P__Usart__resetUsart(FALSE);
      HplMsp430Usart1P__Usart__clrIntr();
      HplMsp430Usart1P__Usart__disableIntr();
    }
#line 313
    __nesc_atomic_end(__nesc_atomic); }

  return;
}

# 174 "../../../tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void RovingNetworksP__UARTControl__setModeUart(msp430_uart_union_config_t *config){
#line 174
  HplMsp430Usart1P__Usart__setModeUart(config);
#line 174
}
#line 174
# 143 "../../../tos/platforms/shimmer/chips/bluetooth/RovingNetworksP.nc"
static inline void RovingNetworksP__setupUART(void )
#line 143
{
  msp430_uart_union_config_t RN_uart_config = { { .ubr = UBR_1MHZ_115200, .umctl = UMCTL_1MHZ_115200, 
  .ssel = 0x02, .pena = 0, .pev = 0, .spb = 0, .clen = 1, .listen = 0, .mm = 0, .ckpl = 0, .urxse = 0, .urxeie = 0, 
  .urxwie = 0, .utxe = 1, .urxe = 1 } };

  RovingNetworksP__UARTControl__setModeUart(&RN_uart_config);
#line 172
  RovingNetworksP__UARTControl__enableTxIntr();
  RovingNetworksP__UARTControl__enableRxIntr();
}

# 78 "../../../tos/platforms/shimmer2r/hardware.h"
static inline  void TOSH_CLR_BT_CTS_PIN()
#line 78
{
#line 78
  static volatile uint8_t r __asm ("0x0021");

#line 78
  r &= ~(1 << 7);
}

#line 78
static inline  void TOSH_SET_BT_CTS_PIN()
#line 78
{
#line 78
  static volatile uint8_t r __asm ("0x0021");

#line 78
  r |= 1 << 7;
}

# 196 "../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port26__enable(void )
#line 196
{
#line 196
  P2IE |= 1 << 6;
}

# 42 "../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void RovingNetworksP__ConnectionInterrupt__enable(void ){
#line 42
  HplMsp430InterruptP__Port26__enable();
#line 42
}
#line 42
# 212 "../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port26__clear(void )
#line 212
{
#line 212
  P2IFG &= ~(1 << 6);
}

# 52 "../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void RovingNetworksP__ConnectionInterrupt__clear(void ){
#line 52
  HplMsp430InterruptP__Port26__clear();
#line 52
}
#line 52
#line 67
inline static void RovingNetworksP__ConnectionInterrupt__edge(bool low_to_high){
#line 67
  HplMsp430InterruptP__Port26__edge(low_to_high);
#line 67
}
#line 67
# 108 "../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port16__clear(void )
#line 108
{
#line 108
  P1IFG &= ~(1 << 6);
}

# 52 "../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void RovingNetworksP__RTSInterrupt__clear(void ){
#line 52
  HplMsp430InterruptP__Port16__clear();
#line 52
}
#line 52
# 92 "../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port16__enable(void )
#line 92
{
#line 92
  P1IE |= 1 << 6;
}

# 42 "../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void RovingNetworksP__RTSInterrupt__enable(void ){
#line 42
  HplMsp430InterruptP__Port16__enable();
#line 42
}
#line 42
#line 67
inline static void RovingNetworksP__RTSInterrupt__edge(bool low_to_high){
#line 67
  HplMsp430InterruptP__Port16__edge(low_to_high);
#line 67
}
#line 67
# 81 "../../../tos/platforms/shimmer2r/hardware.h"
static inline  void TOSH_SET_BT_RESET_PIN()
#line 81
{
#line 81
  static volatile uint8_t r __asm ("0x0031");

#line 81
  r |= 1 << 5;
}

# 117 "../../../tos/platforms/shimmer/chips/bluetooth/RovingNetworksP.nc"
static inline void RovingNetworksP__initRN(void )
#line 117
{
  register uint16_t i;




  TOSH_SET_BT_RESET_PIN();
  for (i = 0; i < 400; i++) 
    brief_pause(((unsigned long long )5000 * 4096 * 1024 / 1000000 - 2) / 3);

  TOSH_MAKE_BT_PIO_INPUT();

  RovingNetworksP__RTSInterrupt__edge(TRUE);
  RovingNetworksP__RTSInterrupt__enable();
  RovingNetworksP__RTSInterrupt__clear();

  RovingNetworksP__ConnectionInterrupt__edge(TRUE);
  RovingNetworksP__ConnectionInterrupt__clear();
  RovingNetworksP__ConnectionInterrupt__enable();

  TOSH_CLR_BT_CTS_PIN();
  TOSH_SET_BT_CTS_PIN();
  brief_pause(((unsigned long long )5000 * 4096 * 1024 / 1000000 - 2) / 3);
  TOSH_CLR_BT_CTS_PIN();
}

# 114 "../../../tos/platforms/shimmer2r/hardware.h"
static inline  void TOSH_CLR_SW_BT_PWR_N_PIN()
#line 114
{
#line 114
  static volatile uint8_t r __asm ("0x001D");

#line 114
  r &= ~(1 << 6);
}

#line 80
static inline  void TOSH_SEL_BT_RXD_MODFUNC()
#line 80
{
#line 80
  static volatile uint8_t r __asm ("0x001B");

#line 80
  r |= 1 << 7;
}

# 518 "../../../tos/platforms/shimmer/chips/bluetooth/RovingNetworksP.nc"
static inline error_t RovingNetworksP__Init__init(void )
#line 518
{
  TOSH_MAKE_BT_RTS_INPUT();

  TOSH_MAKE_BT_RXD_INPUT();
  TOSH_SEL_BT_RXD_MODFUNC();





  TOSH_CLR_SW_BT_PWR_N_PIN();


  RovingNetworksP__newMode = FALSE;
  RovingNetworksP__radioMode = SLAVE_MODE;
  RovingNetworksP__discoverable = TRUE;
  RovingNetworksP__authenticate = FALSE;
  RovingNetworksP__encrypt = FALSE;
  RovingNetworksP__resetDefaultsRequest = FALSE;
  RovingNetworksP__setNameRequest = FALSE;
  RovingNetworksP__setPINRequest = FALSE;
  RovingNetworksP__setSvcClassRequest = FALSE;
  RovingNetworksP__setSvcNameRequest = FALSE;
  RovingNetworksP__setDevClassRequest = FALSE;
  RovingNetworksP__setRawBaudrate = FALSE;
  RovingNetworksP__disableRemoteConfig = FALSE;
  RovingNetworksP__setCustomInquiryTime = FALSE;
  RovingNetworksP__setCustomPagingTime = FALSE;
  RovingNetworksP__setBaudrate = FALSE;


  RovingNetworksP__deviceConn = RovingNetworksP__btConnected = RovingNetworksP__runningMasterCommands = FALSE;
  RovingNetworksP__masterStep = RovingNetworksP__setupStep = 0;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 552
    *RovingNetworksP__expectedCommandResponse = 0;
#line 552
    __nesc_atomic_end(__nesc_atomic); }
  RovingNetworksP__transmissionOverflow = FALSE, RovingNetworksP__messageInProgress = FALSE;

  RovingNetworksP__initRN();

  RovingNetworksP__setupUART();

  return SUCCESS;
}

# 62 "../../../tos/interfaces/Init.nc"
inline static error_t SimpleAccelC__BluetoothInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = RovingNetworksP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 67 "SimpleAccelC.nc"
static inline void SimpleAccelC__init(void )
#line 67
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 68
    {
      SimpleAccelC__enable_sending = FALSE;
      SimpleAccelC__command_mode_complete = FALSE;
      SimpleAccelC__current_buffer = 0;
      SimpleAccelC__dma_blocks = 0;
    }
#line 73
    __nesc_atomic_end(__nesc_atomic); }
  SimpleAccelC__BluetoothInit__init();

  SimpleAccelC__AccelInit__init();
  SimpleAccelC__Accel__setSensitivity(RANGE_6_0G);

  TOSH_SET_PWRMUX_SEL_PIN();

  SimpleAccelC__shimmerAnalogSetup__addAccelInputs();
  SimpleAccelC__shimmerAnalogSetup__addAnExInput(7);
  SimpleAccelC__shimmerAnalogSetup__finishADCSetup(SimpleAccelC__sbuf0);
  SimpleAccelC__NBR_ADC_CHANS = SimpleAccelC__shimmerAnalogSetup__getNumberOfChannels();
}

static inline void SimpleAccelC__Boot__booted(void )
#line 87
{
  SimpleAccelC__init();
  SimpleAccelC__BTStdControl__start();
}

# 67 "../../../tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__startDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__startDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 348 "../../../tos/lib/serial/SerialP.nc"
static inline error_t SerialP__SplitControl__start(void )
#line 348
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 349
    {
      if (SerialP__txState != SerialP__TXSTATE_INACTIVE && SerialP__rxState != SerialP__RXSTATE_INACTIVE) 
        {
          unsigned char __nesc_temp = 
#line 351
          EALREADY;

          {
#line 351
            __nesc_atomic_end(__nesc_atomic); 
#line 351
            return __nesc_temp;
          }
        }
    }
#line 354
    __nesc_atomic_end(__nesc_atomic); }
#line 353
  SerialP__startDoneTask__postTask();
  return SUCCESS;
}

# 104 "../../../tos/interfaces/SplitControl.nc"
inline static error_t SerialStartP__SerialControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = SerialP__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 44 "../../../tos/lib/serial/SerialStartP.nc"
static inline void SerialStartP__Boot__booted(void )
#line 44
{
  SerialStartP__SerialControl__start();
}

# 60 "../../../tos/interfaces/Boot.nc"
inline static void RealMainP__Boot__booted(void ){
#line 60
  SerialStartP__Boot__booted();
#line 60
  SimpleAccelC__Boot__booted();
#line 60
}
#line 60
# 419 "../../../tos/platforms/shimmer/chips/msp430/msp430hardware.h"
static inline  void __nesc_disable_interrupt(void )
{
  __dint();
  __nop();
}

# 63 "../../../tos/chips/msp430/timer/Msp430ClockP.nc"
static inline mcu_power_t Msp430ClockP__McuPowerOverride__lowestState(void )
#line 63
{
  return MSP430_POWER_LPM3;
}

# 62 "../../../tos/interfaces/McuPowerOverride.nc"
inline static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = Msp430ClockP__McuPowerOverride__lowestState();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 74 "../../../tos/chips/msp430/McuSleepC.nc"
static inline mcu_power_t McuSleepC__getPowerState(void )
#line 74
{
  mcu_power_t pState = MSP430_POWER_LPM4;









  if ((((((
#line 77
  TACCTL0 & 0x0010 || 
  TACCTL1 & 0x0010) || 
  TACCTL2 & 0x0010) && (
  TACTL & 0x0300) == 0x0200) || (
  ME1 & (0x80 | 0x40) && U0TCTL & 0x20)) || (
  ME2 & (0x20 | 0x10) && U1TCTL & 0x20))


   || (U0CTLnr & 0x01 && I2CTCTLnr & 0x20 && 
  I2CDCTLnr & 0x20 && U0CTLnr & 0x04 && U0CTLnr & 0x20)) {


    pState = MSP430_POWER_LPM1;
    }
#line 109
  return pState;
}

# 407 "../../../tos/platforms/shimmer/chips/msp430/msp430hardware.h"
static inline  mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)
#line 407
{
  return m1 < m2 ? m1 : m2;
}

# 112 "../../../tos/chips/msp430/McuSleepC.nc"
static inline void McuSleepC__computePowerState(void )
#line 112
{
  McuSleepC__powerState = mcombine(McuSleepC__getPowerState(), 
  McuSleepC__McuPowerOverride__lowestState());
}

static inline void McuSleepC__McuSleep__sleep(void )
#line 117
{
  uint16_t temp;

#line 119
  if (McuSleepC__dirty) {
      McuSleepC__computePowerState();
    }

  temp = McuSleepC__msp430PowerBits[McuSleepC__powerState] | 0x0008;
   __asm volatile ("bis  %0, r2" :  : "m"(temp));

   __asm volatile ("" :  :  : "memory");
  __nesc_disable_interrupt();
}

# 79 "../../../tos/interfaces/McuSleep.nc"
inline static void SchedulerBasicP__McuSleep__sleep(void ){
#line 79
  McuSleepC__McuSleep__sleep();
#line 79
}
#line 79
# 78 "../../../tos/system/SchedulerBasicP.nc"
static __inline uint8_t SchedulerBasicP__popTask(void )
{
  if (SchedulerBasicP__m_head != SchedulerBasicP__NO_TASK) 
    {
      uint8_t id = SchedulerBasicP__m_head;

#line 83
      SchedulerBasicP__m_head = SchedulerBasicP__m_next[SchedulerBasicP__m_head];
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
        }
      SchedulerBasicP__m_next[id] = SchedulerBasicP__NO_TASK;
      return id;
    }
  else 
    {
      return SchedulerBasicP__NO_TASK;
    }
}

#line 149
static inline void SchedulerBasicP__Scheduler__taskLoop(void )
{
  for (; ; ) 
    {
      uint8_t nextTask;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          while ((nextTask = SchedulerBasicP__popTask()) == SchedulerBasicP__NO_TASK) 
            {
              SchedulerBasicP__McuSleep__sleep();
            }
        }
#line 161
        __nesc_atomic_end(__nesc_atomic); }
      SchedulerBasicP__TaskBasic__runTask(nextTask);
    }
}

# 72 "../../../tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__taskLoop(void ){
#line 72
  SchedulerBasicP__Scheduler__taskLoop();
#line 72
}
#line 72
# 98 "../../../tos/interfaces/ArbiterInfo.nc"
inline static uint8_t /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__userId(void ){
#line 98
  unsigned char __nesc_result;
#line 98

#line 98
  __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__userId();
#line 98

#line 98
  return __nesc_result;
#line 98
}
#line 98
# 397 "../../../tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__dataReceived(uint8_t data)
#line 397
{
  SerialP__rx_state_machine(FALSE, data);
}

# 94 "../../../tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__dataReceived(uint8_t data){
#line 94
  SerialP__SerialFrameComm__dataReceived(data);
#line 94
}
#line 94
# 394 "../../../tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__delimiterReceived(void )
#line 394
{
  SerialP__rx_state_machine(TRUE, 0);
}

# 85 "../../../tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__delimiterReceived(void ){
#line 85
  SerialP__SerialFrameComm__delimiterReceived();
#line 85
}
#line 85
# 73 "../../../tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__UartStream__receivedByte(uint8_t data)
#line 73
{






  if (data == HDLC_FLAG_BYTE) {

      HdlcTranslateC__SerialFrameComm__delimiterReceived();
      return;
    }
  else {
#line 85
    if (data == HDLC_CTLESC_BYTE) {

        HdlcTranslateC__state.receiveEscape = 1;
        return;
      }
    else {
#line 90
      if (HdlcTranslateC__state.receiveEscape) {

          HdlcTranslateC__state.receiveEscape = 0;
          data = data ^ 0x20;
        }
      }
    }
#line 95
  HdlcTranslateC__SerialFrameComm__dataReceived(data);
}

# 241 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
static inline void /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__default__receivedByte(uint8_t id, uint8_t byte)
#line 241
{
}

# 79 "../../../tos/interfaces/UartStream.nc"
inline static void /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__receivedByte(uint8_t arg_0x7f18ef53de60, uint8_t byte){
#line 79
  switch (arg_0x7f18ef53de60) {
#line 79
    case /*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID:
#line 79
      HdlcTranslateC__UartStream__receivedByte(byte);
#line 79
      break;
#line 79
    default:
#line 79
      /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__default__receivedByte(arg_0x7f18ef53de60, byte);
#line 79
      break;
#line 79
    }
#line 79
}
#line 79
# 132 "../../../tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error)
#line 132
{
}

# 242 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
static inline void /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__default__receiveDone(uint8_t id, uint8_t *buf, uint16_t len, error_t error)
#line 242
{
}

# 99 "../../../tos/interfaces/UartStream.nc"
inline static void /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__receiveDone(uint8_t arg_0x7f18ef53de60, uint8_t * buf, uint16_t len, error_t error){
#line 99
  switch (arg_0x7f18ef53de60) {
#line 99
    case /*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID:
#line 99
      HdlcTranslateC__UartStream__receiveDone(buf, len, error);
#line 99
      break;
#line 99
    default:
#line 99
      /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__default__receiveDone(arg_0x7f18ef53de60, buf, len, error);
#line 99
      break;
#line 99
    }
#line 99
}
#line 99
# 134 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
static inline void /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartInterrupts__rxDone(uint8_t id, uint8_t data)
#line 134
{
  if (/*Msp430Uart0P.UartP*/Msp430UartP__0__m_rx_buf) {
      /*Msp430Uart0P.UartP*/Msp430UartP__0__m_rx_buf[/*Msp430Uart0P.UartP*/Msp430UartP__0__m_rx_pos++] = data;
      if (/*Msp430Uart0P.UartP*/Msp430UartP__0__m_rx_pos >= /*Msp430Uart0P.UartP*/Msp430UartP__0__m_rx_len) {
          uint8_t *buf = /*Msp430Uart0P.UartP*/Msp430UartP__0__m_rx_buf;

#line 139
          /*Msp430Uart0P.UartP*/Msp430UartP__0__m_rx_buf = (void *)0;
          /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__receiveDone(id, buf, /*Msp430Uart0P.UartP*/Msp430UartP__0__m_rx_len, SUCCESS);
        }
    }
  else 
#line 142
    {
      /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__receivedByte(id, data);
    }
}

# 65 "../../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__rxDone(uint8_t id, uint8_t data)
#line 65
{
}

# 54 "../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__rxDone(uint8_t arg_0x7f18ef122600, uint8_t data){
#line 54
  switch (arg_0x7f18ef122600) {
#line 54
    case /*PlatformSerialC.UartC.UsartC*/Msp430Usart0C__0__CLIENT_ID:
#line 54
      /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartInterrupts__rxDone(/*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID, data);
#line 54
      break;
#line 54
    default:
#line 54
      /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__rxDone(arg_0x7f18ef122600, data);
#line 54
      break;
#line 54
    }
#line 54
}
#line 54
# 90 "../../../tos/interfaces/ArbiterInfo.nc"
inline static bool /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__inUse(void ){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__inUse();
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 54 "../../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__rxDone(uint8_t data)
#line 54
{
  if (/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__inUse()) {
    /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__rxDone(/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__userId(), data);
    }
}

# 54 "../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static void HplMsp430Usart0P__Interrupts__rxDone(uint8_t data){
#line 54
  /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__rxDone(data);
#line 54
}
#line 54
# 401 "../../../tos/lib/serial/SerialP.nc"
static inline bool SerialP__valid_rx_proto(uint8_t proto)
#line 401
{
  switch (proto) {
      case SERIAL_PROTO_PACKET_ACK: 
        case SERIAL_PROTO_PACKET_NOACK: 
          return TRUE;
      case SERIAL_PROTO_ACK: 
        default: 
          return FALSE;
    }
}

# 203 "../../../tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer(void )
#line 203
{
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked = 1;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked = 1;
    }
}

#line 199
static inline bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked(void )
#line 199
{
  return /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which ? /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked : /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked;
}

#line 226
static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void )
#line 226
{
  error_t result = SUCCESS;

  /* atomic removed: atomic calls only */
#line 228
  {
    if (!/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked()) {


        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer();
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_BEGIN;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = 0;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = TOS_SERIAL_UNKNOWN_ID;
      }
    else {
        result = EBUSY;
      }
  }
  return result;
}

# 62 "../../../tos/lib/serial/ReceiveBytePacket.nc"
inline static error_t SerialP__ReceiveBytePacket__startPacket(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 311 "../../../tos/lib/serial/SerialP.nc"
static __inline uint16_t SerialP__rx_current_crc(void )
#line 311
{
  uint16_t crc;
  uint8_t tmp = SerialP__rxBuf.writePtr;

#line 314
  tmp = tmp == 0 ? SerialP__RX_DATA_BUFFER_SIZE : tmp - 1;
  crc = SerialP__rxBuf.buf[tmp] & 0x00ff;
  crc = (crc << 8) & 0xFF00;
  tmp = tmp == 0 ? SerialP__RX_DATA_BUFFER_SIZE : tmp - 1;
  crc |= SerialP__rxBuf.buf[tmp] & 0x00FF;
  return crc;
}

# 80 "../../../tos/lib/serial/ReceiveBytePacket.nc"
inline static void SerialP__ReceiveBytePacket__endPacket(error_t result){
#line 80
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(result);
#line 80
}
#line 80
# 221 "../../../tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap(void )
#line 221
{
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which ? 0 : 1;
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer = (uint8_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which];
}

# 67 "../../../tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 234 "../../../tos/lib/serial/SerialP.nc"
static __inline bool SerialP__ack_queue_is_full(void )
#line 234
{
  uint8_t tmp;
#line 235
  uint8_t tmp2;

  /* atomic removed: atomic calls only */
#line 236
  {
    tmp = SerialP__ackQ.writePtr;
    tmp2 = SerialP__ackQ.readPtr;
  }
  if (++tmp > SerialP__ACK_QUEUE_SIZE) {
#line 240
    tmp = 0;
    }
#line 241
  return tmp == tmp2;
}







static __inline void SerialP__ack_queue_push(uint8_t token)
#line 250
{
  if (!SerialP__ack_queue_is_full()) {
      /* atomic removed: atomic calls only */
#line 252
      {
        SerialP__ackQ.buf[SerialP__ackQ.writePtr] = token;
        if (++ SerialP__ackQ.writePtr > SerialP__ACK_QUEUE_SIZE) {
#line 254
          SerialP__ackQ.writePtr = 0;
          }
      }
#line 256
      SerialP__MaybeScheduleTx();
    }
}

# 67 "../../../tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__SerialFrameComm__resetReceive(void )
#line 67
{
  HdlcTranslateC__state.receiveEscape = 0;
}

# 79 "../../../tos/lib/serial/SerialFrameComm.nc"
inline static void SerialP__SerialFrameComm__resetReceive(void ){
#line 79
  HdlcTranslateC__SerialFrameComm__resetReceive();
#line 79
}
#line 79
# 244 "../../../tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t b)
#line 244
{
  /* atomic removed: atomic calls only */
#line 245
  {
    switch (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state) {
        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_BEGIN: 
          /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_DATA;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(b);
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = b;
        break;

        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_DATA: 
          if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex < sizeof(message_t )) {
              /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex] = b;
              /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex++;
            }
          else {
            }




        break;

        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE: 
          default: 
#line 266
            ;
      }
  }
}

# 69 "../../../tos/lib/serial/ReceiveBytePacket.nc"
inline static void SerialP__ReceiveBytePacket__byteReceived(uint8_t data){
#line 69
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(data);
#line 69
}
#line 69
# 301 "../../../tos/lib/serial/SerialP.nc"
static __inline uint8_t SerialP__rx_buffer_top(void )
#line 301
{
  uint8_t tmp = SerialP__rxBuf.buf[SerialP__rxBuf.readPtr];

#line 303
  return tmp;
}

#line 305
static __inline uint8_t SerialP__rx_buffer_pop(void )
#line 305
{
  uint8_t tmp = SerialP__rxBuf.buf[SerialP__rxBuf.readPtr];

#line 307
  if (++ SerialP__rxBuf.readPtr > SerialP__RX_DATA_BUFFER_SIZE) {
#line 307
    SerialP__rxBuf.readPtr = 0;
    }
#line 308
  return tmp;
}

#line 297
static __inline void SerialP__rx_buffer_push(uint8_t data)
#line 297
{
  SerialP__rxBuf.buf[SerialP__rxBuf.writePtr] = data;
  if (++ SerialP__rxBuf.writePtr > SerialP__RX_DATA_BUFFER_SIZE) {
#line 299
    SerialP__rxBuf.writePtr = 0;
    }
}

# 55 "../../../tos/platforms/shimmer/chips/msp430/HplMsp430I2C0P.nc"
static inline bool HplMsp430I2C0P__HplI2C__isI2C(void )
#line 55
{
  /* atomic removed: atomic calls only */
#line 56
  {
    unsigned char __nesc_temp = 
#line 56
    HplMsp430I2C0P__U0CTL & 0x20 && HplMsp430I2C0P__U0CTL & 0x04 && HplMsp430I2C0P__U0CTL & 0x01;

#line 56
    return __nesc_temp;
  }
}

# 6 "../../../tos/chips/msp430/usart/HplMsp430I2C.nc"
inline static bool HplMsp430Usart0P__HplI2C__isI2C(void ){
#line 6
  unsigned char __nesc_result;
#line 6

#line 6
  __nesc_result = HplMsp430I2C0P__HplI2C__isI2C();
#line 6

#line 6
  return __nesc_result;
#line 6
}
#line 6
# 66 "../../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__I2CInterrupts__default__fired(uint8_t id)
#line 66
{
}

# 39 "../../../tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc"
inline static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__I2CInterrupts__fired(uint8_t arg_0x7f18ef1214e0){
#line 39
    /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__I2CInterrupts__default__fired(arg_0x7f18ef1214e0);
#line 39
}
#line 39
# 59 "../../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawI2CInterrupts__fired(void )
#line 59
{
  if (/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__inUse()) {
    /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__I2CInterrupts__fired(/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__userId());
    }
}

# 39 "../../../tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc"
inline static void HplMsp430Usart0P__I2CInterrupts__fired(void ){
#line 39
  /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawI2CInterrupts__fired();
#line 39
}
#line 39
# 240 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
static inline void /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__default__sendDone(uint8_t id, uint8_t *buf, uint16_t len, error_t error)
#line 240
{
}

# 57 "../../../tos/interfaces/UartStream.nc"
inline static void /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__sendDone(uint8_t arg_0x7f18ef53de60, uint8_t * buf, uint16_t len, error_t error){
#line 57
  switch (arg_0x7f18ef53de60) {
#line 57
    case /*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID:
#line 57
      HdlcTranslateC__UartStream__sendDone(buf, len, error);
#line 57
      break;
#line 57
    default:
#line 57
      /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__default__sendDone(arg_0x7f18ef53de60, buf, len, error);
#line 57
      break;
#line 57
    }
#line 57
}
#line 57
# 389 "../../../tos/platforms/shimmer/chips/msp430/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P__Usart__tx(uint8_t data)
#line 389
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 390
    HplMsp430Usart0P__U0TXBUF = data;
#line 390
    __nesc_atomic_end(__nesc_atomic); }
}

# 224 "../../../tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430Uart0P.UartP*/Msp430UartP__0__Usart__tx(uint8_t data){
#line 224
  HplMsp430Usart0P__Usart__tx(data);
#line 224
}
#line 224
# 162 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
static inline void /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartInterrupts__txDone(uint8_t id)
#line 162
{
  if (/*Msp430Uart0P.UartP*/Msp430UartP__0__current_owner != id) {
      uint8_t *buf = /*Msp430Uart0P.UartP*/Msp430UartP__0__m_tx_buf;

#line 165
      /*Msp430Uart0P.UartP*/Msp430UartP__0__m_tx_buf = (void *)0;
      /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__sendDone(id, buf, /*Msp430Uart0P.UartP*/Msp430UartP__0__m_tx_len, FAIL);
    }
  else {
#line 168
    if (/*Msp430Uart0P.UartP*/Msp430UartP__0__m_tx_pos < /*Msp430Uart0P.UartP*/Msp430UartP__0__m_tx_len) {
        /*Msp430Uart0P.UartP*/Msp430UartP__0__Usart__tx(/*Msp430Uart0P.UartP*/Msp430UartP__0__m_tx_buf[/*Msp430Uart0P.UartP*/Msp430UartP__0__m_tx_pos++]);
      }
    else {
        uint8_t *buf = /*Msp430Uart0P.UartP*/Msp430UartP__0__m_tx_buf;

#line 173
        /*Msp430Uart0P.UartP*/Msp430UartP__0__m_tx_buf = (void *)0;
        /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__sendDone(id, buf, /*Msp430Uart0P.UartP*/Msp430UartP__0__m_tx_len, SUCCESS);
      }
    }
}

# 64 "../../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__txDone(uint8_t id)
#line 64
{
}

# 49 "../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__txDone(uint8_t arg_0x7f18ef122600){
#line 49
  switch (arg_0x7f18ef122600) {
#line 49
    case /*PlatformSerialC.UartC.UsartC*/Msp430Usart0C__0__CLIENT_ID:
#line 49
      /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartInterrupts__txDone(/*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID);
#line 49
      break;
#line 49
    default:
#line 49
      /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__txDone(arg_0x7f18ef122600);
#line 49
      break;
#line 49
    }
#line 49
}
#line 49
# 49 "../../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__txDone(void )
#line 49
{
  if (/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__inUse()) {
    /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__txDone(/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__userId());
    }
}

# 49 "../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static void HplMsp430Usart0P__Interrupts__txDone(void ){
#line 49
  /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__txDone();
#line 49
}
#line 49
# 65 "../../../tos/lib/serial/SerialFrameComm.nc"
inline static error_t SerialP__SerialFrameComm__putData(uint8_t data){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = HdlcTranslateC__SerialFrameComm__putData(data);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 530 "../../../tos/lib/serial/SerialP.nc"
static inline error_t SerialP__SendBytePacket__completeSend(void )
#line 530
{
  bool ret = FAIL;

  /* atomic removed: atomic calls only */
#line 532
  {
    SerialP__txBuf[SerialP__TX_DATA_INDEX].state = SerialP__BUFFER_COMPLETE;
    ret = SUCCESS;
  }
  return ret;
}

# 71 "../../../tos/lib/serial/SendBytePacket.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = SerialP__SendBytePacket__completeSend();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 178 "../../../tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void )
#line 178
{
  uint8_t b;
  uint8_t indx;

  /* atomic removed: atomic calls only */
#line 181
  {
    b = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex];
    /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex++;
    indx = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex;
  }
  if (indx > /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend();
      return 0;
    }
  else {
      return b;
    }
}

# 81 "../../../tos/lib/serial/SendBytePacket.nc"
inline static uint8_t SerialP__SendBytePacket__nextByte(void ){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 669 "../../../tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__putDone(void )
#line 669
{
  {
    error_t txResult = SUCCESS;

    /* atomic removed: atomic calls only */
#line 672
    {
      switch (SerialP__txState) {

          case SerialP__TXSTATE_PROTO: 

            txResult = SerialP__SerialFrameComm__putData(SerialP__txProto);

          SerialP__txState = SerialP__TXSTATE_INFO;



          SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txProto);
          break;

          case SerialP__TXSTATE_SEQNO: 
            txResult = SerialP__SerialFrameComm__putData(SerialP__txSeqno);
          SerialP__txState = SerialP__TXSTATE_INFO;
          SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txSeqno);
          break;

          case SerialP__TXSTATE_INFO: 
            {
              txResult = SerialP__SerialFrameComm__putData(SerialP__txBuf[SerialP__txIndex].buf);
              SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txBuf[SerialP__txIndex].buf);
              ++SerialP__txByteCnt;

              if (SerialP__txIndex == SerialP__TX_DATA_INDEX) {
                  uint8_t nextByte;

#line 700
                  nextByte = SerialP__SendBytePacket__nextByte();
                  if (SerialP__txBuf[SerialP__txIndex].state == SerialP__BUFFER_COMPLETE || SerialP__txByteCnt >= SerialP__SERIAL_MTU) {
                      SerialP__txState = SerialP__TXSTATE_FCS1;
                    }
                  else {
                      SerialP__txBuf[SerialP__txIndex].buf = nextByte;
                    }
                }
              else {
                  SerialP__txState = SerialP__TXSTATE_FCS1;
                }
            }
          break;

          case SerialP__TXSTATE_FCS1: 
            txResult = SerialP__SerialFrameComm__putData(SerialP__txCRC & 0xff);
          SerialP__txState = SerialP__TXSTATE_FCS2;
          break;

          case SerialP__TXSTATE_FCS2: 
            txResult = SerialP__SerialFrameComm__putData((SerialP__txCRC >> 8) & 0xff);
          SerialP__txState = SerialP__TXSTATE_ENDFLAG;
          break;

          case SerialP__TXSTATE_ENDFLAG: 
            txResult = SerialP__SerialFrameComm__putDelimiter();
          SerialP__txState = SerialP__TXSTATE_ENDWAIT;
          break;

          case SerialP__TXSTATE_ENDWAIT: 
            SerialP__txState = SerialP__TXSTATE_FINISH;
          case SerialP__TXSTATE_FINISH: 
            SerialP__MaybeScheduleTx();
          break;
          case SerialP__TXSTATE_ERROR: 
            default: 
              txResult = FAIL;
          break;
        }

      if (txResult != SUCCESS) {
          SerialP__txState = SerialP__TXSTATE_ERROR;
          SerialP__MaybeScheduleTx();
        }
    }
  }
}

# 100 "../../../tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__putDone(void ){
#line 100
  SerialP__SerialFrameComm__putDone();
#line 100
}
#line 100
# 50 "../../../tos/interfaces/Queue.nc"
inline static bool PrintfP__Queue__empty(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = /*PrintfC.QueueC*/QueueC__0__Queue__empty();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 65 "../../../tos/system/QueueC.nc"
static inline uint8_t /*PrintfC.QueueC*/QueueC__0__Queue__maxSize(void )
#line 65
{
  return 250;
}

#line 61
static inline uint8_t /*PrintfC.QueueC*/QueueC__0__Queue__size(void )
#line 61
{
  return /*PrintfC.QueueC*/QueueC__0__size;
}

#line 101
static inline error_t /*PrintfC.QueueC*/QueueC__0__Queue__enqueue(/*PrintfC.QueueC*/QueueC__0__queue_t newVal)
#line 101
{
  if (/*PrintfC.QueueC*/QueueC__0__Queue__size() < /*PrintfC.QueueC*/QueueC__0__Queue__maxSize()) {
      ;
      /*PrintfC.QueueC*/QueueC__0__queue[/*PrintfC.QueueC*/QueueC__0__tail] = newVal;
      /*PrintfC.QueueC*/QueueC__0__tail++;
      if (/*PrintfC.QueueC*/QueueC__0__tail == 250) {
#line 106
        /*PrintfC.QueueC*/QueueC__0__tail = 0;
        }
#line 107
      /*PrintfC.QueueC*/QueueC__0__size++;
      /*PrintfC.QueueC*/QueueC__0__printQueue();
      return SUCCESS;
    }
  else {
      return FAIL;
    }
}

# 97 "../../../tos/interfaces/Queue.nc"
inline static error_t PrintfP__Queue__enqueue(PrintfP__Queue__t  newVal){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = /*PrintfC.QueueC*/QueueC__0__Queue__enqueue(newVal);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
#line 65
inline static uint8_t PrintfP__Queue__size(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = /*PrintfC.QueueC*/QueueC__0__Queue__size();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 152 "../../../tos/lib/printf/PrintfP.nc"
static inline int PrintfP__Putchar__putchar(int c)
{
  if (PrintfP__state == PrintfP__S_STARTED && PrintfP__Queue__size() >= 250 / 2) {
      PrintfP__state = PrintfP__S_FLUSHING;
      PrintfP__sendNext();
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 158
    {
      if (PrintfP__Queue__enqueue(c) == SUCCESS) 
        {
          int __nesc_temp = 
#line 160
          0;

          {
#line 160
            __nesc_atomic_end(__nesc_atomic); 
#line 160
            return __nesc_temp;
          }
        }
      else 
#line 161
        {
          int __nesc_temp = 
#line 161
          -1;

          {
#line 161
            __nesc_atomic_end(__nesc_atomic); 
#line 161
            return __nesc_temp;
          }
        }
    }
#line 164
    __nesc_atomic_end(__nesc_atomic); }
}

# 49 "../../../tos/lib/printf/Putchar.nc"
inline static int PutcharP__Putchar__putchar(int c){
#line 49
  int __nesc_result;
#line 49

#line 49
  __nesc_result = PrintfP__Putchar__putchar(c);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 102 "../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port10__clear(void )
#line 102
{
#line 102
  P1IFG &= ~(1 << 0);
}

#line 78
static inline void HplMsp430InterruptP__Port10__default__fired(void )
#line 78
{
#line 78
  HplMsp430InterruptP__Port10__clear();
}

# 72 "../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port10__fired(void ){
#line 72
  HplMsp430InterruptP__Port10__default__fired();
#line 72
}
#line 72
# 103 "../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port11__clear(void )
#line 103
{
#line 103
  P1IFG &= ~(1 << 1);
}

#line 79
static inline void HplMsp430InterruptP__Port11__default__fired(void )
#line 79
{
#line 79
  HplMsp430InterruptP__Port11__clear();
}

# 72 "../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port11__fired(void ){
#line 72
  HplMsp430InterruptP__Port11__default__fired();
#line 72
}
#line 72
# 104 "../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port12__clear(void )
#line 104
{
#line 104
  P1IFG &= ~(1 << 2);
}

#line 80
static inline void HplMsp430InterruptP__Port12__default__fired(void )
#line 80
{
#line 80
  HplMsp430InterruptP__Port12__clear();
}

# 72 "../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port12__fired(void ){
#line 72
  HplMsp430InterruptP__Port12__default__fired();
#line 72
}
#line 72
# 105 "../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port13__clear(void )
#line 105
{
#line 105
  P1IFG &= ~(1 << 3);
}

#line 81
static inline void HplMsp430InterruptP__Port13__default__fired(void )
#line 81
{
#line 81
  HplMsp430InterruptP__Port13__clear();
}

# 72 "../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port13__fired(void ){
#line 72
  HplMsp430InterruptP__Port13__default__fired();
#line 72
}
#line 72
# 106 "../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port14__clear(void )
#line 106
{
#line 106
  P1IFG &= ~(1 << 4);
}

#line 82
static inline void HplMsp430InterruptP__Port14__default__fired(void )
#line 82
{
#line 82
  HplMsp430InterruptP__Port14__clear();
}

# 72 "../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port14__fired(void ){
#line 72
  HplMsp430InterruptP__Port14__default__fired();
#line 72
}
#line 72
# 107 "../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port15__clear(void )
#line 107
{
#line 107
  P1IFG &= ~(1 << 5);
}

#line 83
static inline void HplMsp430InterruptP__Port15__default__fired(void )
#line 83
{
#line 83
  HplMsp430InterruptP__Port15__clear();
}

# 72 "../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port15__fired(void ){
#line 72
  HplMsp430InterruptP__Port15__default__fired();
#line 72
}
#line 72
# 67 "../../../tos/interfaces/TaskBasic.nc"
inline static error_t RovingNetworksP__sendNextChar__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(RovingNetworksP__sendNextChar);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 116 "../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline bool HplMsp430InterruptP__Port16__getValue(void )
#line 116
{
#line 116
  bool b;

  /* atomic removed: atomic calls only */
#line 116
  b = (P1IN >> 6) & 1;
#line 116
  return b;
}

# 59 "../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static bool RovingNetworksP__RTSInterrupt__getValue(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = HplMsp430InterruptP__Port16__getValue();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 623 "../../../tos/platforms/shimmer/chips/bluetooth/RovingNetworksP.nc"
static inline void RovingNetworksP__RTSInterrupt__fired(void )
#line 623
{
  if (RovingNetworksP__RTSInterrupt__getValue() == TRUE) {
      RovingNetworksP__transmissionOverflow = 1;
      RovingNetworksP__RTSInterrupt__edge(FALSE);
    }
  else {
      /* atomic removed: atomic calls only */
#line 629
      RovingNetworksP__transmissionOverflow = 0;
      RovingNetworksP__sendNextChar__postTask();
      RovingNetworksP__RTSInterrupt__edge(TRUE);
    }
  /* atomic removed: atomic calls only */
#line 633
  RovingNetworksP__RTSInterrupt__clear();
}

# 72 "../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port16__fired(void ){
#line 72
  RovingNetworksP__RTSInterrupt__fired();
#line 72
}
#line 72
# 109 "../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port17__clear(void )
#line 109
{
#line 109
  P1IFG &= ~(1 << 7);
}

#line 85
static inline void HplMsp430InterruptP__Port17__default__fired(void )
#line 85
{
#line 85
  HplMsp430InterruptP__Port17__clear();
}

# 72 "../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port17__fired(void ){
#line 72
  HplMsp430InterruptP__Port17__default__fired();
#line 72
}
#line 72
# 206 "../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port20__clear(void )
#line 206
{
#line 206
  P2IFG &= ~(1 << 0);
}

#line 182
static inline void HplMsp430InterruptP__Port20__default__fired(void )
#line 182
{
#line 182
  HplMsp430InterruptP__Port20__clear();
}

# 72 "../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port20__fired(void ){
#line 72
  HplMsp430InterruptP__Port20__default__fired();
#line 72
}
#line 72
# 207 "../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port21__clear(void )
#line 207
{
#line 207
  P2IFG &= ~(1 << 1);
}

#line 183
static inline void HplMsp430InterruptP__Port21__default__fired(void )
#line 183
{
#line 183
  HplMsp430InterruptP__Port21__clear();
}

# 72 "../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port21__fired(void ){
#line 72
  HplMsp430InterruptP__Port21__default__fired();
#line 72
}
#line 72
# 208 "../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port22__clear(void )
#line 208
{
#line 208
  P2IFG &= ~(1 << 2);
}

#line 184
static inline void HplMsp430InterruptP__Port22__default__fired(void )
#line 184
{
#line 184
  HplMsp430InterruptP__Port22__clear();
}

# 72 "../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port22__fired(void ){
#line 72
  HplMsp430InterruptP__Port22__default__fired();
#line 72
}
#line 72
# 209 "../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port23__clear(void )
#line 209
{
#line 209
  P2IFG &= ~(1 << 3);
}

#line 185
static inline void HplMsp430InterruptP__Port23__default__fired(void )
#line 185
{
#line 185
  HplMsp430InterruptP__Port23__clear();
}

# 72 "../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port23__fired(void ){
#line 72
  HplMsp430InterruptP__Port23__default__fired();
#line 72
}
#line 72
# 210 "../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port24__clear(void )
#line 210
{
#line 210
  P2IFG &= ~(1 << 4);
}

#line 186
static inline void HplMsp430InterruptP__Port24__default__fired(void )
#line 186
{
#line 186
  HplMsp430InterruptP__Port24__clear();
}

# 72 "../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port24__fired(void ){
#line 72
  HplMsp430InterruptP__Port24__default__fired();
#line 72
}
#line 72
# 211 "../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port25__clear(void )
#line 211
{
#line 211
  P2IFG &= ~(1 << 5);
}

#line 187
static inline void HplMsp430InterruptP__Port25__default__fired(void )
#line 187
{
#line 187
  HplMsp430InterruptP__Port25__clear();
}

# 72 "../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port25__fired(void ){
#line 72
  HplMsp430InterruptP__Port25__default__fired();
#line 72
}
#line 72
# 67 "../../../tos/interfaces/TaskBasic.nc"
inline static error_t SimpleAccelC__stopSensing__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SimpleAccelC__stopSensing);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 110 "../../../tos/platforms/shimmer2r/LedsP.nc"
static inline void LedsP__Leds__led2Off(void )
#line 110
{
  LedsP__Led2__set();
  ;
#line 112
  ;
}

# 95 "../../../tos/platforms/shimmer2r/Leds.nc"
inline static void SimpleAccelC__Leds__led2Off(void ){
#line 95
  LedsP__Leds__led2Off();
#line 95
}
#line 95
# 127 "SimpleAccelC.nc"
static inline void SimpleAccelC__Bluetooth__connectionClosed(uint8_t reason)
#line 127
{
  /* atomic removed: atomic calls only */
#line 128
  SimpleAccelC__enable_sending = FALSE;
  SimpleAccelC__Leds__led2Off();
  SimpleAccelC__stopSensing__postTask();
}

# 94 "../../../tos/platforms/shimmer/chips/bluetooth/Bluetooth.nc"
inline static void RovingNetworksP__Bluetooth__connectionClosed(uint8_t reason){
#line 94
  SimpleAccelC__Bluetooth__connectionClosed(reason);
#line 94
}
#line 94
# 67 "../../../tos/interfaces/TaskBasic.nc"
inline static error_t SimpleAccelC__startSensing__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SimpleAccelC__startSensing);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 57 "../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P43*/HplMsp430GeneralIOP__27__IO__clr(void )
#line 57
{
  /* atomic removed: atomic calls only */
#line 57
  * (volatile uint8_t * )29U &= ~(0x01 << 3);
}

# 53 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__clr(void ){
#line 53
  /*HplMsp430GeneralIOC.P43*/HplMsp430GeneralIOP__27__IO__clr();
#line 53
}
#line 53
# 49 "../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__clr(void )
#line 49
{
#line 49
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__clr();
}

# 41 "../../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__clr(void ){
#line 41
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__clr();
#line 41
}
#line 41
# 105 "../../../tos/platforms/shimmer2r/LedsP.nc"
static inline void LedsP__Leds__led2On(void )
#line 105
{
  LedsP__Led2__clr();
  ;
#line 107
  ;
}

# 90 "../../../tos/platforms/shimmer2r/Leds.nc"
inline static void SimpleAccelC__Leds__led2On(void ){
#line 90
  LedsP__Leds__led2On();
#line 90
}
#line 90
# 117 "SimpleAccelC.nc"
static inline void SimpleAccelC__Bluetooth__connectionMade(uint8_t status)
#line 117
{
  /* atomic removed: atomic calls only */
#line 118
  SimpleAccelC__enable_sending = TRUE;
  SimpleAccelC__Leds__led2On();
  SimpleAccelC__startSensing__postTask();
}

# 93 "../../../tos/platforms/shimmer/chips/bluetooth/Bluetooth.nc"
inline static void RovingNetworksP__Bluetooth__connectionMade(uint8_t status){
#line 93
  SimpleAccelC__Bluetooth__connectionMade(status);
#line 93
}
#line 93
# 220 "../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline bool HplMsp430InterruptP__Port26__getValue(void )
#line 220
{
#line 220
  bool b;

  /* atomic removed: atomic calls only */
#line 220
  b = (P2IN >> 6) & 1;
#line 220
  return b;
}

# 59 "../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static bool RovingNetworksP__ConnectionInterrupt__getValue(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = HplMsp430InterruptP__Port26__getValue();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 636 "../../../tos/platforms/shimmer/chips/bluetooth/RovingNetworksP.nc"
static inline void RovingNetworksP__ConnectionInterrupt__fired(void )
#line 636
{
  if (RovingNetworksP__ConnectionInterrupt__getValue() == TRUE) {
      RovingNetworksP__btConnected = TRUE;
      RovingNetworksP__ConnectionInterrupt__edge(FALSE);
      RovingNetworksP__Bluetooth__connectionMade(SUCCESS);
    }
  else {
      RovingNetworksP__btConnected = FALSE;
      RovingNetworksP__ConnectionInterrupt__edge(TRUE);
      RovingNetworksP__Bluetooth__connectionClosed(0);
    }
  /* atomic removed: atomic calls only */
#line 647
  RovingNetworksP__ConnectionInterrupt__clear();
}

# 72 "../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port26__fired(void ){
#line 72
  RovingNetworksP__ConnectionInterrupt__fired();
#line 72
}
#line 72
# 213 "../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port27__clear(void )
#line 213
{
#line 213
  P2IFG &= ~(1 << 7);
}

#line 189
static inline void HplMsp430InterruptP__Port27__default__fired(void )
#line 189
{
#line 189
  HplMsp430InterruptP__Port27__clear();
}

# 72 "../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port27__fired(void ){
#line 72
  HplMsp430InterruptP__Port27__default__fired();
#line 72
}
#line 72
# 329 "../../../tos/platforms/shimmer/shimmerMessage.h"
static __inline void msg_clear(struct Message *msg)
{
  msg->length = 0;
  msg->start = 0;
}

# 67 "../../../tos/interfaces/TaskBasic.nc"
inline static error_t RovingNetworksP__runMasterCommands__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(RovingNetworksP__runMasterCommands);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 123 "SimpleAccelC.nc"
static inline void SimpleAccelC__Bluetooth__commandModeEnded(void )
#line 123
{
  /* atomic removed: atomic calls only */
#line 124
  SimpleAccelC__command_mode_complete = TRUE;
}

# 95 "../../../tos/platforms/shimmer/chips/bluetooth/Bluetooth.nc"
inline static void RovingNetworksP__Bluetooth__commandModeEnded(void ){
#line 95
  SimpleAccelC__Bluetooth__commandModeEnded();
#line 95
}
#line 95
# 194 "../../../tos/platforms/shimmer/shimmerMessage.h"
static __inline bool msg_cmp_buf(const struct Message *msg, uint8_t offset, const uint8_t *buf, uint8_t len)
{
  uint8_t i = msg->start + offset;

#line 197
  for (; len; len--, i++) {
      if (i >= 128) {
#line 198
        i -= 128;
        }
#line 199
      if (* buf++ != msg->data[i]) {
        return FALSE;
        }
    }
#line 202
  return TRUE;
}

#line 219
static __inline void msg_append_uint8(struct Message *msg, uint8_t data)
{
  uint8_t i = msg->start + msg->length;

#line 222
  if (i >= 128) {
#line 222
    i -= 128;
    }
  msg->data[i] = data;
  msg->length++;
}

# 57 "/usr/lib/gcc/msp430/4.6.3/../../../../msp430/include/ctype.h" 3
static __inline int isalpha(int c)
#line 57
{
#line 57
  return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

# 133 "SimpleAccelC.nc"
static inline void SimpleAccelC__Bluetooth__dataAvailable(uint8_t data)
#line 133
{
}

# 103 "../../../tos/platforms/shimmer/chips/bluetooth/Bluetooth.nc"
inline static void RovingNetworksP__Bluetooth__dataAvailable(uint8_t data){
#line 103
  SimpleAccelC__Bluetooth__dataAvailable(data);
#line 103
}
#line 103
# 590 "../../../tos/platforms/shimmer/chips/bluetooth/RovingNetworksP.nc"
static inline void RovingNetworksP__UARTData__rxDone(uint8_t data)
#line 590
{
  if (! *RovingNetworksP__expectedCommandResponse) {
      RovingNetworksP__Bluetooth__dataAvailable(data);
    }
  else {
      if (isalpha(data)) {
          msg_append_uint8(&RovingNetworksP__incomingMsg, data);
          if (msg_cmp_buf(&RovingNetworksP__incomingMsg, 
          0, 
          RovingNetworksP__expectedCommandResponse, 
          strlen(RovingNetworksP__expectedCommandResponse))) {
              msg_clear(&RovingNetworksP__incomingMsg);
              if (!strcmp(RovingNetworksP__expectedCommandResponse, "END")) {
                RovingNetworksP__Bluetooth__commandModeEnded();
                }
              else {
#line 604
                if (RovingNetworksP__runningMasterCommands) {
                  RovingNetworksP__runMasterCommands__postTask();
                  }
                else {
#line 607
                  RovingNetworksP__runSetCommands__postTask();
                  }
                }
              /* atomic removed: atomic calls only */
#line 608
              *RovingNetworksP__expectedCommandResponse = '\0';
            }
        }
      else {
        msg_clear(&RovingNetworksP__incomingMsg);
        }
    }
}

# 54 "../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static void HplMsp430Usart1P__Interrupts__rxDone(uint8_t data){
#line 54
  RovingNetworksP__UARTData__rxDone(data);
#line 54
}
#line 54
# 616 "../../../tos/platforms/shimmer/chips/bluetooth/RovingNetworksP.nc"
static inline void RovingNetworksP__UARTData__txDone(void )
#line 616
{
  if (!RovingNetworksP__transmissionOverflow) {
      RovingNetworksP__sendNextChar__postTask();
    }
}

# 49 "../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static void HplMsp430Usart1P__Interrupts__txDone(void ){
#line 49
  RovingNetworksP__UARTData__txDone();
#line 49
}
#line 49
# 267 "../../../tos/platforms/shimmer/shimmerAnalogSetupP.nc"
static inline void shimmerAnalogSetupP__HplAdc12__conversionDone(uint16_t iv)
#line 267
{
}

# 112 "../../../tos/chips/msp430/adc12/HplAdc12.nc"
inline static void HplAdc12P__HplAdc12__conversionDone(uint16_t iv){
#line 112
  shimmerAnalogSetupP__HplAdc12__conversionDone(iv);
#line 112
}
#line 112
# 78 "../../../tos/chips/msp430/dma/Msp430DmaControlP.nc"
static inline void Msp430DmaControlP__HplChannel2__transferDone(error_t error)
#line 78
{
}

# 127 "../../../tos/chips/msp430/dma/Msp430DmaChannelP.nc"
static inline void /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__Channel__default__transferDone(error_t error)
#line 127
{
}

# 107 "../../../tos/chips/msp430/dma/Msp430DmaChannel.nc"
inline static void /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__Channel__transferDone(error_t success){
#line 107
  /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__Channel__default__transferDone(success);
#line 107
}
#line 107
# 123 "../../../tos/chips/msp430/dma/Msp430DmaChannelP.nc"
static inline void /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__HplChannel__transferDone(error_t error)
#line 123
{
  /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__Channel__transferDone(error);
}

# 85 "../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
inline static void /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__DMA__transferDone(error_t success){
#line 85
  /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__HplChannel__transferDone(success);
#line 85
  Msp430DmaControlP__HplChannel2__transferDone(success);
#line 85
}
#line 85
# 63 "../../../tos/chips/msp430/dma/HplMsp430DmaXP.nc"
static inline void /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__Interrupt__fired(void )
#line 63
{
  error_t error = * (volatile uint16_t *)496U & 0x0002 ? FAIL : SUCCESS;

#line 65
  if (* (volatile uint16_t *)496U & 0x0008) {
      * (volatile uint16_t *)496U &= ~0x0008;
      * (volatile uint16_t *)496U &= ~0x0002;
      /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__DMA__transferDone(error);
    }
}

# 77 "../../../tos/chips/msp430/dma/Msp430DmaControlP.nc"
static inline void Msp430DmaControlP__HplChannel1__transferDone(error_t error)
#line 77
{
}

# 127 "../../../tos/chips/msp430/dma/Msp430DmaChannelP.nc"
static inline void /*Msp430DmaC.Channel1P*/Msp430DmaChannelP__1__Channel__default__transferDone(error_t error)
#line 127
{
}

# 107 "../../../tos/chips/msp430/dma/Msp430DmaChannel.nc"
inline static void /*Msp430DmaC.Channel1P*/Msp430DmaChannelP__1__Channel__transferDone(error_t success){
#line 107
  /*Msp430DmaC.Channel1P*/Msp430DmaChannelP__1__Channel__default__transferDone(success);
#line 107
}
#line 107
# 123 "../../../tos/chips/msp430/dma/Msp430DmaChannelP.nc"
static inline void /*Msp430DmaC.Channel1P*/Msp430DmaChannelP__1__HplChannel__transferDone(error_t error)
#line 123
{
  /*Msp430DmaC.Channel1P*/Msp430DmaChannelP__1__Channel__transferDone(error);
}

# 85 "../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
inline static void /*HplMsp430DmaC.Dma1*/HplMsp430DmaXP__1__DMA__transferDone(error_t success){
#line 85
  /*Msp430DmaC.Channel1P*/Msp430DmaChannelP__1__HplChannel__transferDone(success);
#line 85
  Msp430DmaControlP__HplChannel1__transferDone(success);
#line 85
}
#line 85
# 63 "../../../tos/chips/msp430/dma/HplMsp430DmaXP.nc"
static inline void /*HplMsp430DmaC.Dma1*/HplMsp430DmaXP__1__Interrupt__fired(void )
#line 63
{
  error_t error = * (volatile uint16_t *)488U & 0x0002 ? FAIL : SUCCESS;

#line 65
  if (* (volatile uint16_t *)488U & 0x0008) {
      * (volatile uint16_t *)488U &= ~0x0008;
      * (volatile uint16_t *)488U &= ~0x0002;
      /*HplMsp430DmaC.Dma1*/HplMsp430DmaXP__1__DMA__transferDone(error);
    }
}

# 76 "../../../tos/chips/msp430/dma/Msp430DmaControlP.nc"
static inline void Msp430DmaControlP__HplChannel0__transferDone(error_t error)
#line 76
{
}

# 67 "../../../tos/interfaces/TaskBasic.nc"
inline static error_t SimpleAccelC__sendSensorData__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SimpleAccelC__sendSensorData);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 91 "../../../tos/chips/msp430/dma/Msp430DmaChannel.nc"
inline static error_t SimpleAccelC__DMA0__repeatTransfer(void *src_addr, void *dst_addr, uint16_t size){
#line 91
  unsigned char __nesc_result;
#line 91

#line 91
  __nesc_result = /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__Channel__repeatTransfer(src_addr, dst_addr, size);
#line 91

#line 91
  return __nesc_result;
#line 91
}
#line 91
# 150 "SimpleAccelC.nc"
static inline void SimpleAccelC__DMA0__transferDone(error_t success)
#line 150
{
  /* atomic removed: atomic calls only */
#line 151
  DMA0DA += 8;
  if (++SimpleAccelC__dma_blocks == 15) 
    {
      SimpleAccelC__dma_blocks = 0;
      if (SimpleAccelC__current_buffer == 0) {
          SimpleAccelC__DMA0__repeatTransfer((void *)0x0140, (void *)SimpleAccelC__sbuf1, SimpleAccelC__NBR_ADC_CHANS);
          SimpleAccelC__current_buffer = 1;
        }
      else {
          SimpleAccelC__DMA0__repeatTransfer((void *)0x0140, (void *)SimpleAccelC__sbuf0, SimpleAccelC__NBR_ADC_CHANS);
          SimpleAccelC__current_buffer = 0;
        }
      SimpleAccelC__sendSensorData__postTask();
    }
}

# 265 "../../../tos/platforms/shimmer/shimmerAnalogSetupP.nc"
static inline void shimmerAnalogSetupP__Msp430DmaChannel__transferDone(error_t success)
#line 265
{
}

# 107 "../../../tos/chips/msp430/dma/Msp430DmaChannel.nc"
inline static void /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__Channel__transferDone(error_t success){
#line 107
  shimmerAnalogSetupP__Msp430DmaChannel__transferDone(success);
#line 107
  SimpleAccelC__DMA0__transferDone(success);
#line 107
}
#line 107
# 123 "../../../tos/chips/msp430/dma/Msp430DmaChannelP.nc"
static inline void /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__HplChannel__transferDone(error_t error)
#line 123
{
  /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__Channel__transferDone(error);
}

# 85 "../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
inline static void /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__transferDone(error_t success){
#line 85
  /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__HplChannel__transferDone(success);
#line 85
  Msp430DmaControlP__HplChannel0__transferDone(success);
#line 85
}
#line 85
# 63 "../../../tos/chips/msp430/dma/HplMsp430DmaXP.nc"
static inline void /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__Interrupt__fired(void )
#line 63
{
  error_t error = * (volatile uint16_t *)480U & 0x0002 ? FAIL : SUCCESS;

#line 65
  if (* (volatile uint16_t *)480U & 0x0008) {
      * (volatile uint16_t *)480U &= ~0x0008;
      * (volatile uint16_t *)480U &= ~0x0002;
      /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__transferDone(error);
    }
}

# 39 "../../../tos/chips/msp430/dma/HplMsp430DmaInterrupt.nc"
inline static void HplMsp430DmaP__Interrupt__fired(void ){
#line 39
  /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__Interrupt__fired();
#line 39
  /*HplMsp430DmaC.Dma1*/HplMsp430DmaXP__1__Interrupt__fired();
#line 39
  /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__Interrupt__fired();
#line 39
}
#line 39
# 204 "../../../tos/chips/msp430/dma/HplMsp430DmaXP.nc"
static inline void /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__setSrc(void *saddr)
#line 204
{
  * (volatile uint16_t *)482U = (uint16_t )saddr;
}

# 71 "../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
inline static void /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__HplChannel__setSrc(void *saddr){
#line 71
  /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__setSrc(saddr);
#line 71
}
#line 71
# 208 "../../../tos/chips/msp430/dma/HplMsp430DmaXP.nc"
static inline void /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__setDst(void *daddr)
#line 208
{
  * (volatile uint16_t *)484U = (uint16_t )daddr;
}

# 72 "../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
inline static void /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__HplChannel__setDst(void *daddr){
#line 72
  /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__setDst(daddr);
#line 72
}
#line 72
# 212 "../../../tos/chips/msp430/dma/HplMsp430DmaXP.nc"
static inline void /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__setSize(uint16_t sz)
#line 212
{
  * (volatile uint16_t *)486U = sz;
}

# 73 "../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
inline static void /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__HplChannel__setSize(uint16_t sz){
#line 73
  /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__setSize(sz);
#line 73
}
#line 73
# 439 "../../../tos/platforms/shimmer/chips/msp430/msp430hardware.h"
  __nesc_atomic_t __nesc_atomic_start(void )
{
  __nesc_atomic_t result = (__read_status_register() & 0x0008) != 0;

#line 442
  __nesc_disable_interrupt();
   __asm volatile ("" :  :  : "memory");
  return result;
}

  void __nesc_atomic_end(__nesc_atomic_t reenable_interrupts)
{
   __asm volatile ("" :  :  : "memory");
  if (reenable_interrupts) {
    __nesc_enable_interrupt();
    }
}

# 11 "../../../tos/chips/msp430/timer/Msp430TimerCommonP.nc"
__attribute((wakeup)) __attribute((interrupt(0x000C)))  void sig_TIMERA0_VECTOR(void )
#line 11
{
#line 11
  Msp430TimerCommonP__VectorTimerA0__fired();
}

# 180 "../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__captured(/*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__fired();
    }
}

#line 180
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__captured(/*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__fired();
    }
}

#line 180
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__captured(/*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__fired();
    }
}

# 12 "../../../tos/chips/msp430/timer/Msp430TimerCommonP.nc"
__attribute((wakeup)) __attribute((interrupt(0x000A)))  void sig_TIMERA1_VECTOR(void )
#line 12
{
#line 12
  Msp430TimerCommonP__VectorTimerA1__fired();
}

#line 13
__attribute((wakeup)) __attribute((interrupt(0x001A)))  void sig_TIMERB0_VECTOR(void )
#line 13
{
#line 13
  Msp430TimerCommonP__VectorTimerB0__fired();
}

# 146 "../../../tos/chips/msp430/timer/Msp430TimerP.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__default__fired(uint8_t n)
{
}

# 39 "../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__fired(uint8_t arg_0x7f18ef9578b0){
#line 39
  switch (arg_0x7f18ef9578b0) {
#line 39
    case 0:
#line 39
      /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Event__fired();
#line 39
      break;
#line 39
    case 1:
#line 39
      /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Event__fired();
#line 39
      break;
#line 39
    case 2:
#line 39
      /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Event__fired();
#line 39
      break;
#line 39
    case 3:
#line 39
      /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Event__fired();
#line 39
      break;
#line 39
    case 4:
#line 39
      /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Event__fired();
#line 39
      break;
#line 39
    case 5:
#line 39
      /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Event__fired();
#line 39
      break;
#line 39
    case 6:
#line 39
      /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Event__fired();
#line 39
      break;
#line 39
    case 7:
#line 39
      /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Overflow__fired();
#line 39
      break;
#line 39
    default:
#line 39
      /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__default__fired(arg_0x7f18ef9578b0);
#line 39
      break;
#line 39
    }
#line 39
}
#line 39
# 170 "../../../tos/system/SchedulerBasicP.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 172
    {
#line 172
      {
        unsigned char __nesc_temp = 
#line 172
        SchedulerBasicP__pushTask(id) ? SUCCESS : EBUSY;

        {
#line 172
          __nesc_atomic_end(__nesc_atomic); 
#line 172
          return __nesc_temp;
        }
      }
    }
#line 175
    __nesc_atomic_end(__nesc_atomic); }
}

# 107 "../../../tos/lib/timer/TransformAlarmC.nc"
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__set_alarm(void )
{
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type now = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__get();
#line 109
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type expires;
#line 109
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type remaining;




  expires = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_t0 + /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_dt;


  remaining = (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type )(expires - now);


  if (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_t0 <= now) 
    {
      if (expires >= /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_t0 && 
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_t0 || 
      expires <= now) {
        remaining = 0;
        }
    }
#line 132
  if (remaining > /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__MAX_DELAY) 
    {
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_t0 = now + /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__MAX_DELAY;
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_dt = remaining - /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__MAX_DELAY;
      remaining = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__MAX_DELAY;
    }
  else 
    {
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_t0 += /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_dt;
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_dt = 0;
    }
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__startAt((/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__from_size_type )now << 5, 
  (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__from_size_type )remaining << 5);
}

# 80 "../../../tos/lib/timer/TransformCounterC.nc"
static /*CounterMilli32C.Transform*/TransformCounterC__0__to_size_type /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__get(void )
{
  /*CounterMilli32C.Transform*/TransformCounterC__0__to_size_type rv = 0;

#line 83
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*CounterMilli32C.Transform*/TransformCounterC__0__upper_count_type high = /*CounterMilli32C.Transform*/TransformCounterC__0__m_upper;
      /*CounterMilli32C.Transform*/TransformCounterC__0__from_size_type low = /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__get();

#line 87
      if (/*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__isOverflowPending()) 
        {






          high++;
          low = /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__get();
        }
      {
        /*CounterMilli32C.Transform*/TransformCounterC__0__to_size_type high_to = high;
        /*CounterMilli32C.Transform*/TransformCounterC__0__to_size_type low_to = low >> /*CounterMilli32C.Transform*/TransformCounterC__0__LOW_SHIFT_RIGHT;

#line 101
        rv = (high_to << /*CounterMilli32C.Transform*/TransformCounterC__0__HIGH_SHIFT_LEFT) | low_to;
      }
    }
#line 103
    __nesc_atomic_end(__nesc_atomic); }
  return rv;
}

# 62 "../../../tos/chips/msp430/timer/Msp430TimerP.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get(void )
{




  if (1) {
      /* atomic removed: atomic calls only */
#line 69
      {
        uint16_t t0;
        uint16_t t1 = * (volatile uint16_t * )400U;

#line 72
        do {
#line 72
            t0 = t1;
#line 72
            t1 = * (volatile uint16_t * )400U;
          }
        while (
#line 72
        t0 != t1);
        {
          unsigned int __nesc_temp = 
#line 73
          t1;

#line 73
          return __nesc_temp;
        }
      }
    }
  else 
#line 76
    {
      return * (volatile uint16_t * )400U;
    }
}

# 14 "../../../tos/chips/msp430/timer/Msp430TimerCommonP.nc"
__attribute((wakeup)) __attribute((interrupt(0x0018)))  void sig_TIMERB1_VECTOR(void )
#line 14
{
#line 14
  Msp430TimerCommonP__VectorTimerB1__fired();
}

# 63 "../../../tos/system/RealMainP.nc"
  int main(void )
#line 63
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {





      {
      }
#line 71
      ;

      RealMainP__Scheduler__init();





      RealMainP__PlatformInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;





      RealMainP__SoftwareInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;
    }
#line 88
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  RealMainP__Boot__booted();


  RealMainP__Scheduler__taskLoop();




  return -1;
}

# 175 "../../../tos/chips/msp430/timer/Msp430ClockP.nc"
static void Msp430ClockP__set_dco_calib(int calib)
{
  BCSCTL1 = (BCSCTL1 & ~0x07) | ((calib >> 8) & 0x07);
  DCOCTL = calib & 0xff;
}

# 56 "../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__set(void )
#line 56
{
#line 56
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 56
    * (volatile uint8_t * )29U |= 0x01 << 2;
#line 56
    __nesc_atomic_end(__nesc_atomic); }
}

# 134 "../../../tos/system/SchedulerBasicP.nc"
static bool SchedulerBasicP__Scheduler__runNextTask(void )
{
  uint8_t nextTask;

  /* atomic removed: atomic calls only */
#line 138
  {
    nextTask = SchedulerBasicP__popTask();
    if (nextTask == SchedulerBasicP__NO_TASK) 
      {
        {
          unsigned char __nesc_temp = 
#line 142
          FALSE;

#line 142
          return __nesc_temp;
        }
      }
  }
#line 145
  SchedulerBasicP__TaskBasic__runTask(nextTask);
  return TRUE;
}

#line 175
static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id)
{
}

# 75 "../../../tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x7f18efabd9c0){
#line 75
  switch (arg_0x7f18efabd9c0) {
#line 75
    case /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask:
#line 75
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask();
#line 75
      break;
#line 75
    case /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask:
#line 75
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask();
#line 75
      break;
#line 75
    case SerialP__RunTx:
#line 75
      SerialP__RunTx__runTask();
#line 75
      break;
#line 75
    case SerialP__startDoneTask:
#line 75
      SerialP__startDoneTask__runTask();
#line 75
      break;
#line 75
    case SerialP__stopDoneTask:
#line 75
      SerialP__stopDoneTask__runTask();
#line 75
      break;
#line 75
    case SerialP__defaultSerialFlushTask:
#line 75
      SerialP__defaultSerialFlushTask__runTask();
#line 75
      break;
#line 75
    case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone:
#line 75
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask();
#line 75
      break;
#line 75
    case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask:
#line 75
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask();
#line 75
      break;
#line 75
    case /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask:
#line 75
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__runTask();
#line 75
      break;
#line 75
    case PrintfP__retrySend:
#line 75
      PrintfP__retrySend__runTask();
#line 75
      break;
#line 75
    case SimpleAccelC__sendSensorData:
#line 75
      SimpleAccelC__sendSensorData__runTask();
#line 75
      break;
#line 75
    case SimpleAccelC__startSensing:
#line 75
      SimpleAccelC__startSensing__runTask();
#line 75
      break;
#line 75
    case SimpleAccelC__stopSensing:
#line 75
      SimpleAccelC__stopSensing__runTask();
#line 75
      break;
#line 75
    case /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired:
#line 75
      /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask();
#line 75
      break;
#line 75
    case /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer:
#line 75
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask();
#line 75
      break;
#line 75
    case RovingNetworksP__sendNextChar:
#line 75
      RovingNetworksP__sendNextChar__runTask();
#line 75
      break;
#line 75
    case RovingNetworksP__runMasterCommands:
#line 75
      RovingNetworksP__runMasterCommands__runTask();
#line 75
      break;
#line 75
    case RovingNetworksP__runSetCommands:
#line 75
      RovingNetworksP__runSetCommands__runTask();
#line 75
      break;
#line 75
    default:
#line 75
      SchedulerBasicP__TaskBasic__default__runTask(arg_0x7f18efabd9c0);
#line 75
      break;
#line 75
    }
#line 75
}
#line 75
# 183 "../../../tos/platforms/shimmer/chips/bluetooth/RovingNetworksP.nc"
static error_t RovingNetworksP__writeCommand(char *cmd, char *response)
#line 183
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 184
    strcpy(RovingNetworksP__expectedCommandResponse, response);
#line 184
    __nesc_atomic_end(__nesc_atomic); }
  if (RovingNetworksP__Bluetooth__write(cmd, strlen(cmd)) == FAIL) {
    return FAIL;
    }
  return SUCCESS;
}

#line 101
static error_t RovingNetworksP__Bluetooth__write(const uint8_t *buf, uint8_t len)
#line 101
{
  if (RovingNetworksP__messageInProgress) {
    return FAIL;
    }
  RovingNetworksP__messageInProgress = TRUE;
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 106
    RovingNetworksP__charsSent = 0;
#line 106
    __nesc_atomic_end(__nesc_atomic); }
  RovingNetworksP__outgoingMsg = buf;
  RovingNetworksP__outgoingMsgLen = len;

  if (!RovingNetworksP__transmissionOverflow) {
      RovingNetworksP__sendNextChar__postTask();
    }

  return SUCCESS;
}

#line 195
static error_t RovingNetworksP__writeCommandNoRsp(char *cmd)
#line 195
{
  if (RovingNetworksP__Bluetooth__write(cmd, strlen(cmd)) == FAIL) {
    return FAIL;
    }
  return SUCCESS;
}

# 73 "../../../tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now)
{
  uint16_t num;

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;

          if (elapsed >= timer->dt) 
            {
              if (timer->isoneshot) {
                timer->isrunning = FALSE;
                }
              else {
#line 90
                timer->t0 += timer->dt;
                }
              /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(num);
              break;
            }
        }
    }
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 147 "../../../tos/lib/timer/TransformAlarmC.nc"
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type dt)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_t0 = t0;
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_dt = dt;
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__set_alarm();
    }
#line 154
    __nesc_atomic_end(__nesc_atomic); }
}

# 154 "../../../tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, FALSE);
}

# 53 "../../../tos/system/AMQueueEntryP.nc"
static error_t /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 55
{
  /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(msg, dest);
  /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(msg, 100);
  return /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__send(msg, len);
}

# 172 "../../../tos/lib/serial/SerialActiveMessageP.nc"
static am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(message_t *amsg)
#line 172
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 174
  return __nesc_ntoh_uint8(header->type.nxdata);
}

#line 148
static am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(message_t *amsg)
#line 148
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 150
  return __nesc_ntoh_uint16(header->dest.nxdata);
}

#line 68
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 70
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(msg);

  if (len > /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength()) {
      return ESIZE;
    }

  __nesc_hton_uint16(header->dest.nxdata, dest);





  __nesc_hton_uint8(header->type.nxdata, id);
  __nesc_hton_uint8(header->length.nxdata, len);

  return /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(msg, len);
}

# 519 "../../../tos/lib/serial/SerialP.nc"
static void SerialP__MaybeScheduleTx(void )
#line 519
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 520
    {
      if (SerialP__txPending == 0) {
          if (SerialP__RunTx__postTask() == SUCCESS) {
              SerialP__txPending = 1;
            }
        }
    }
#line 526
    __nesc_atomic_end(__nesc_atomic); }
}

# 85 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__ResourceConfigure__configure(uint8_t id)
#line 85
{
  msp430_uart_union_config_t *config = /*Msp430Uart0P.UartP*/Msp430UartP__0__Msp430UartConfigure__getConfig(id);

#line 87
  /*Msp430Uart0P.UartP*/Msp430UartP__0__m_byte_time = config->uartConfig.ubr / 2;
  /*Msp430Uart0P.UartP*/Msp430UartP__0__Usart__setModeUart(config);
  /*Msp430Uart0P.UartP*/Msp430UartP__0__Usart__enableIntr();
}

# 214 "../../../tos/platforms/shimmer/chips/msp430/HplMsp430Usart0P.nc"
static void HplMsp430Usart0P__Usart__disableUart(void )
#line 214
{
  /* atomic removed: atomic calls only */
#line 215
  {
    HplMsp430Usart0P__ME1 &= ~(0x80 | 0x40);
    HplMsp430Usart0P__UTXD__selectIOFunc();
    HplMsp430Usart0P__URXD__selectIOFunc();
  }
}

# 174 "../../../tos/system/AMQueueImplP.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void )
#line 174
{
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket();
  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current < 1) {
      error_t nextErr;
      message_t *nextMsg = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg;
      am_id_t nextId = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(nextMsg);
      am_addr_t nextDest = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(nextMsg);
      uint8_t len = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(nextMsg);

#line 182
      nextErr = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(nextId, nextDest, nextMsg, len);
      if (nextErr != SUCCESS) {
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask();
        }
    }
}

# 142 "../../../tos/lib/printf/PrintfP.nc"
static void PrintfP__AMSend__sendDone(message_t *msg, error_t error)
#line 142
{
  if (error == SUCCESS) {
      if (PrintfP__Queue__size() > 0) {
        PrintfP__sendNext();
        }
      else {
#line 146
        PrintfP__state = PrintfP__S_STARTED;
        }
    }
  else {
#line 148
    PrintfP__retrySend__postTask();
    }
}

#line 119
static void PrintfP__sendNext(void )
#line 119
{
  int i;
  printf_msg_t *m = (printf_msg_t *)PrintfP__Packet__getPayload(&PrintfP__printfMsg, sizeof(printf_msg_t ));
  uint16_t length_to_send = PrintfP__Queue__size() < sizeof(printf_msg_t ) ? PrintfP__Queue__size() : sizeof(printf_msg_t );

#line 123
  memset(m->buffer, 0, sizeof(printf_msg_t ));
  for (i = 0; i < length_to_send; i++) 
    __nesc_hton_uint8(m->buffer[i].nxdata, PrintfP__Queue__dequeue());
  if (PrintfP__AMSend__send(AM_BROADCAST_ADDR, &PrintfP__printfMsg, sizeof(printf_msg_t )) != SUCCESS) {
    PrintfP__retrySend__postTask();
    }
}

# 135 "../../../tos/lib/serial/SerialActiveMessageP.nc"
static void */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(message_t *msg, uint8_t len)
#line 135
{
  if (len > /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength()) {
      return (void *)0;
    }
  else {
      return (void * )msg->data;
    }
}

# 177 "../../../tos/system/ArbiterP.nc"
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__isOwner(uint8_t id)
#line 177
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 178
    {
      if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId == id && /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_BUSY) {
          unsigned char __nesc_temp = 
#line 179
          TRUE;

          {
#line 179
            __nesc_atomic_end(__nesc_atomic); 
#line 179
            return __nesc_temp;
          }
        }
      else 
#line 180
        {
          unsigned char __nesc_temp = 
#line 180
          FALSE;

          {
#line 180
            __nesc_atomic_end(__nesc_atomic); 
#line 180
            return __nesc_temp;
          }
        }
    }
#line 183
    __nesc_atomic_end(__nesc_atomic); }
}

# 357 "../../../tos/lib/serial/SerialP.nc"
static void SerialP__testOff(void )
#line 357
{
  bool turnOff = FALSE;

  /* atomic removed: atomic calls only */
#line 359
  {
    if (SerialP__txState == SerialP__TXSTATE_INACTIVE && 
    SerialP__rxState == SerialP__RXSTATE_INACTIVE) {
        turnOff = TRUE;
      }
  }
  if (turnOff) {
      SerialP__stopDoneTask__postTask();
      /* atomic removed: atomic calls only */
#line 367
      SerialP__offPending = FALSE;
    }
  else {
      /* atomic removed: atomic calls only */
#line 370
      SerialP__offPending = TRUE;
    }
}

# 98 "../../../tos/lib/serial/HdlcTranslateC.nc"
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void )
#line 98
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 99
    {
      HdlcTranslateC__state.sendEscape = 0;
      HdlcTranslateC__m_data = HDLC_FLAG_BYTE;
    }
#line 102
    __nesc_atomic_end(__nesc_atomic); }
  return HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
}

# 147 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
static error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__send(uint8_t id, uint8_t *buf, uint16_t len)
#line 147
{
  if (/*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__isOwner(id) == FALSE) {
    return FAIL;
    }
#line 150
  if (len == 0) {
    return FAIL;
    }
  else {
#line 152
    if (/*Msp430Uart0P.UartP*/Msp430UartP__0__m_tx_buf) {
      return EBUSY;
      }
    }
#line 154
  /*Msp430Uart0P.UartP*/Msp430UartP__0__m_tx_buf = buf;
  /*Msp430Uart0P.UartP*/Msp430UartP__0__m_tx_len = len;
  /*Msp430Uart0P.UartP*/Msp430UartP__0__m_tx_pos = 0;
  /*Msp430Uart0P.UartP*/Msp430UartP__0__current_owner = id;
  /*Msp430Uart0P.UartP*/Msp430UartP__0__Usart__tx(buf[/*Msp430Uart0P.UartP*/Msp430UartP__0__m_tx_pos++]);
  return SUCCESS;
}

# 154 "../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static void HplMsp430InterruptP__Port16__edge(bool l2h)
#line 154
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 155
    {
      if (l2h) {
#line 156
        P1IES &= ~(1 << 6);
        }
      else {
#line 157
        P1IES |= 1 << 6;
        }
    }
#line 159
    __nesc_atomic_end(__nesc_atomic); }
}

#line 258
static void HplMsp430InterruptP__Port26__edge(bool l2h)
#line 258
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 259
    {
      if (l2h) {
#line 260
        P2IES &= ~(1 << 6);
        }
      else {
#line 261
        P2IES |= 1 << 6;
        }
    }
#line 263
    __nesc_atomic_end(__nesc_atomic); }
}

# 206 "../../../tos/platforms/shimmer/shimmerAnalogSetupP.nc"
static void shimmerAnalogSetupP__addNewChannels(uint8_t *chans, uint8_t howmany_new)
#line 206
{
  register uint8_t i;
#line 207
  register uint8_t j;

  for (j = 0, i = shimmerAnalogSetupP__NUM_ADC_CHANS; j < howmany_new && i < 8; i++, j++) 
    shimmerAnalogSetupP__ADC_CHANS[i] = chans[j];

  shimmerAnalogSetupP__NUM_ADC_CHANS += howmany_new;
}

#line 235
static void shimmerAnalogSetupP__initADC12MEMCTLx(void )
{
  uint8_t i;

  for (i = 0; i < shimmerAnalogSetupP__NUM_ADC_CHANS; ++i) {
      ((volatile char *)0x0080)[i] = 0;
      ((volatile char *)0x0080)[i] |= shimmerAnalogSetupP__ADC_CHANS[i];
    }
  (
  (volatile char *)0x0080)[i - 1] |= 0x0080;
}

# 98 "../../../tos/platforms/shimmer/chips/msp430/HplMsp430Usart0P.nc"
__attribute((wakeup)) __attribute((interrupt(0x0012)))  void sig_UART0RX_VECTOR(void )
#line 98
{
  uint8_t temp = U0RXBUF;

  HplMsp430Usart0P__Interrupts__rxDone(temp);
}

# 153 "../../../tos/system/ArbiterP.nc"
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__inUse(void )
#line 153
{
  /* atomic removed: atomic calls only */
#line 154
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_CONTROLLED) 
      {
        unsigned char __nesc_temp = 
#line 156
        FALSE;

#line 156
        return __nesc_temp;
      }
  }
#line 158
  return TRUE;
}

# 412 "../../../tos/lib/serial/SerialP.nc"
static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data)
#line 412
{

  switch (SerialP__rxState) {

      case SerialP__RXSTATE_NOSYNC: 
        if (isDelimeter) {
            SerialP__rxInit();
            SerialP__rxState = SerialP__RXSTATE_PROTO;
          }
      break;

      case SerialP__RXSTATE_PROTO: 
        if (!isDelimeter) {
            SerialP__rxProto = data;
            if (!SerialP__valid_rx_proto(SerialP__rxProto)) {
              goto nosync;
              }
            SerialP__rxCRC = crcByte(SerialP__rxCRC, data);
            if (SerialP__rxProto == SERIAL_PROTO_PACKET_ACK) {
              SerialP__rxState = SerialP__RXSTATE_TOKEN;
              }
            else {
#line 433
              SerialP__rxState = SerialP__RXSTATE_INFO;
              }
#line 434
            if (SerialP__ReceiveBytePacket__startPacket() != SUCCESS) {
                goto nosync;
              }
          }
      break;

      case SerialP__RXSTATE_TOKEN: 
        if (isDelimeter) {
            goto nosync;
          }
        else {
            SerialP__rxSeqno = data;
            SerialP__rxCRC = crcByte(SerialP__rxCRC, SerialP__rxSeqno);
            SerialP__rxState = SerialP__RXSTATE_INFO;
          }
      break;

      case SerialP__RXSTATE_INFO: 
        if (SerialP__rxByteCnt < SerialP__SERIAL_MTU) {
            if (isDelimeter) {
                if (SerialP__rxByteCnt >= 2) {
                    if (SerialP__rx_current_crc() == SerialP__rxCRC) {
                        SerialP__ReceiveBytePacket__endPacket(SUCCESS);
                        if (SerialP__rxProto == SERIAL_PROTO_PACKET_ACK) {
                          SerialP__ack_queue_push(SerialP__rxSeqno);
                          }
#line 459
                        SerialP__rxInit();
                        SerialP__SerialFrameComm__resetReceive();
                        if (SerialP__offPending) {
                            SerialP__rxState = SerialP__RXSTATE_INACTIVE;
                            SerialP__testOff();
                          }
                        goto done;
                      }
                    else {
                        goto nosync;
                      }
                  }
                else {
                    goto nosync;
                  }
              }
            else {
                if (SerialP__rxByteCnt >= 2) {
                    SerialP__ReceiveBytePacket__byteReceived(SerialP__rx_buffer_top());
                    SerialP__rxCRC = crcByte(SerialP__rxCRC, SerialP__rx_buffer_pop());
                  }
                SerialP__rx_buffer_push(data);
                SerialP__rxByteCnt++;
              }
          }
        else 

          {
            goto nosync;
          }
      break;

      default: 
        goto nosync;
    }
  goto done;

  nosync: 

    SerialP__rxInit();
  SerialP__SerialFrameComm__resetReceive();
  SerialP__ReceiveBytePacket__endPacket(FAIL);
  if (SerialP__offPending) {
      SerialP__rxState = SerialP__RXSTATE_INACTIVE;
      SerialP__testOff();
    }
  else {
    if (isDelimeter) {
        SerialP__rxState = SerialP__RXSTATE_PROTO;
      }
    }
  done: ;
}

# 91 "../../../tos/system/crc.h"
static uint16_t crcByte(uint16_t crc, uint8_t b)
#line 91
{
  crc = (uint8_t )(crc >> 8) | (crc << 8);
  crc ^= b;
  crc ^= (uint8_t )(crc & 0xff) >> 4;
  crc ^= crc << 12;
  crc ^= (crc & 0xff) << 5;
  return crc;
}

# 296 "../../../tos/lib/serial/SerialDispatcherP.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result)
#line 296
{
  uint8_t postsignalreceive = FALSE;

  /* atomic removed: atomic calls only */
#line 298
  {
    if (!/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending && result == SUCCESS) {
        postsignalreceive = TRUE;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = TRUE;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf = (message_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap();
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE;
      }
    else 
#line 308
      {

        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which);
      }
  }
  if (postsignalreceive) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask();
    }
}

# 166 "../../../tos/system/ArbiterP.nc"
static uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__userId(void )
#line 166
{
  /* atomic removed: atomic calls only */
#line 167
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state != /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_BUSY) 
      {
        unsigned char __nesc_temp = 
#line 169
        /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__NO_RES;

#line 169
        return __nesc_temp;
      }
#line 170
    {
      unsigned char __nesc_temp = 
#line 170
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId;

#line 170
      return __nesc_temp;
    }
  }
}

# 104 "../../../tos/platforms/shimmer/chips/msp430/HplMsp430Usart0P.nc"
__attribute((wakeup)) __attribute((interrupt(0x0010)))  void sig_UART0TX_VECTOR(void )
#line 104
{
  if (HplMsp430Usart0P__HplI2C__isI2C()) {

      HplMsp430Usart0P__I2CInterrupts__fired();
    }
  else {

      HplMsp430Usart0P__Interrupts__txDone();
    }
}

# 118 "../../../tos/lib/serial/HdlcTranslateC.nc"
static void HdlcTranslateC__UartStream__sendDone(uint8_t *buf, uint16_t len, 
error_t error)
#line 119
{
  /* atomic removed: atomic calls only */
#line 120
  {
    if (HdlcTranslateC__state.sendEscape) {
        HdlcTranslateC__state.sendEscape = 0;
        HdlcTranslateC__m_data = HdlcTranslateC__txTemp;
        HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
      }
    else {
        HdlcTranslateC__SerialFrameComm__putDone();
      }
  }
}

#line 106
static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data)
#line 106
{
  if (data == HDLC_CTLESC_BYTE || data == HDLC_FLAG_BYTE) {
      HdlcTranslateC__state.sendEscape = 1;
      HdlcTranslateC__txTemp = data ^ 0x20;
      HdlcTranslateC__m_data = HDLC_CTLESC_BYTE;
    }
  else {
      HdlcTranslateC__m_data = data;
    }
  return HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
}

# 130 "../../../tos/lib/printf/PrintfP.nc"
  int printfflush(void )
#line 130
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 131
    {
      if (PrintfP__state == PrintfP__S_FLUSHING) 
        {
          int __nesc_temp = 
#line 133
          SUCCESS;

          {
#line 133
            __nesc_atomic_end(__nesc_atomic); 
#line 133
            return __nesc_temp;
          }
        }
#line 134
      if (PrintfP__Queue__empty()) 
        {
          int __nesc_temp = 
#line 135
          FAIL;

          {
#line 135
            __nesc_atomic_end(__nesc_atomic); 
#line 135
            return __nesc_temp;
          }
        }
#line 136
      PrintfP__state = PrintfP__S_FLUSHING;
    }
#line 137
    __nesc_atomic_end(__nesc_atomic); }
  PrintfP__sendNext();
  return SUCCESS;
}

# 107 "../../../tos/lib/printf/PutcharP.nc"
__attribute((noinline))   int putchar(int c)
#line 107
{
#line 119
  return PutcharP__Putchar__putchar(c);
}

# 64 "../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
__attribute((wakeup)) __attribute((interrupt(0x0008)))  void sig_PORT1_VECTOR(void )
{
  volatile int n = P1IFG & P1IE;

  if (n & (1 << 0)) {
#line 68
      HplMsp430InterruptP__Port10__fired();
#line 68
      return;
    }
#line 69
  if (n & (1 << 1)) {
#line 69
      HplMsp430InterruptP__Port11__fired();
#line 69
      return;
    }
#line 70
  if (n & (1 << 2)) {
#line 70
      HplMsp430InterruptP__Port12__fired();
#line 70
      return;
    }
#line 71
  if (n & (1 << 3)) {
#line 71
      HplMsp430InterruptP__Port13__fired();
#line 71
      return;
    }
#line 72
  if (n & (1 << 4)) {
#line 72
      HplMsp430InterruptP__Port14__fired();
#line 72
      return;
    }
#line 73
  if (n & (1 << 5)) {
#line 73
      HplMsp430InterruptP__Port15__fired();
#line 73
      return;
    }
#line 74
  if (n & (1 << 6)) {
#line 74
      HplMsp430InterruptP__Port16__fired();
#line 74
      return;
    }
#line 75
  if (n & (1 << 7)) {
#line 75
      HplMsp430InterruptP__Port17__fired();
#line 75
      return;
    }
}

#line 169
__attribute((wakeup)) __attribute((interrupt(0x0002)))  void sig_PORT2_VECTOR(void )
{
  volatile int n = P2IFG & P2IE;

  if (n & (1 << 0)) {
#line 173
      HplMsp430InterruptP__Port20__fired();
#line 173
      return;
    }
#line 174
  if (n & (1 << 1)) {
#line 174
      HplMsp430InterruptP__Port21__fired();
#line 174
      return;
    }
#line 175
  if (n & (1 << 2)) {
#line 175
      HplMsp430InterruptP__Port22__fired();
#line 175
      return;
    }
#line 176
  if (n & (1 << 3)) {
#line 176
      HplMsp430InterruptP__Port23__fired();
#line 176
      return;
    }
#line 177
  if (n & (1 << 4)) {
#line 177
      HplMsp430InterruptP__Port24__fired();
#line 177
      return;
    }
#line 178
  if (n & (1 << 5)) {
#line 178
      HplMsp430InterruptP__Port25__fired();
#line 178
      return;
    }
#line 179
  if (n & (1 << 6)) {
#line 179
      HplMsp430InterruptP__Port26__fired();
#line 179
      return;
    }
#line 180
  if (n & (1 << 7)) {
#line 180
      HplMsp430InterruptP__Port27__fired();
#line 180
      return;
    }
}

# 96 "../../../tos/chips/msp430/usart/HplMsp430Usart1P.nc"
__attribute((wakeup)) __attribute((interrupt(0x0006)))  void sig_UART1RX_VECTOR(void )
#line 96
{
  uint8_t temp = U1RXBUF;

#line 98
  HplMsp430Usart1P__Interrupts__rxDone(temp);
}

__attribute((wakeup)) __attribute((interrupt(0x0004)))  void sig_UART1TX_VECTOR(void )
#line 101
{
  HplMsp430Usart1P__Interrupts__txDone();
}

# 120 "../../../tos/chips/msp430/adc12/HplAdc12P.nc"
__attribute((wakeup)) __attribute((interrupt(0x000E)))  void sig_ADC12_VECTOR(void )
#line 120
{
  HplAdc12P__HplAdc12__conversionDone(HplAdc12P__ADC12IV);
}

# 63 "../../../tos/chips/msp430/dma/HplMsp430DmaP.nc"
__attribute((wakeup)) __attribute((interrupt(0x0000)))  void sig_XX_DMA_VECTOR_XX(void )
#line 63
{
  HplMsp430DmaP__Interrupt__fired();
}

# 97 "../../../tos/chips/msp430/dma/Msp430DmaChannelP.nc"
static error_t /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__Channel__repeatTransfer(void *src_addr, 
void *dst_addr, 
uint16_t size)
#line 99
{
  /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__HplChannel__setSrc(src_addr);
  /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__HplChannel__setDst(dst_addr);
  /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__HplChannel__setSize(size);
  /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__HplChannel__enableDMA();
  return SUCCESS;
}

