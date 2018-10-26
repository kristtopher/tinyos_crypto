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
# 42 "/usr/lib/gcc/msp430/4.6.3/../../../../msp430/include/string.h" 3
extern void *memcpy(void *arg_0x7fa72f34c110, const void *arg_0x7fa72f34c410, size_t arg_0x7fa72f34c6d0);

extern void *memset(void *arg_0x7fa72f349020, int arg_0x7fa72f3492a0, size_t arg_0x7fa72f349560);


extern int strcmp(const char *arg_0x7fa72f346680, const char *arg_0x7fa72f346980);
extern char *strcpy(char *arg_0x7fa72f3452b0, const char *arg_0x7fa72f3455b0);

extern size_t strlen(const char *arg_0x7fa72f343c40);
#line 65
extern void *memset(void *arg_0x7fa72f331060, int arg_0x7fa72f3312e0, size_t arg_0x7fa72f3315a0);
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

  void (*__cleanup)(struct _reent *arg_0x7fa72f2f2170);


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


  void (**_sig_func)(int arg_0x7fa72f2ed480);




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
#line 43
extern double ceil(double arg_0x7fa72f2e0190);
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
# 25 "../../../../tos/system/tos.h"
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
# 51 "../../../../tos/types/TinyError.h"
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
#line 108
void __delay_cycles(unsigned long int delay);
# 145 "/usr/lib/gcc/msp430/4.6.3/../../../../msp430/include/msp430f1611.h" 3
extern volatile unsigned char IE1 __asm ("__""IE1");









extern volatile unsigned char IFG1 __asm ("__""IFG1");








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
#line 507
extern volatile unsigned char I2CIFG __asm ("__""I2CIFG");










extern volatile unsigned char I2CNDAT __asm ("__""I2CNDAT");










extern volatile unsigned char I2CTCTL __asm ("__""I2CTCTL");
#line 551
extern volatile unsigned char I2CDCTL __asm ("__""I2CDCTL");








extern volatile unsigned char I2CPSC __asm ("__""I2CPSC");

extern volatile unsigned char I2CSCLH __asm ("__""I2CSCLH");

extern volatile unsigned char I2CSCLL __asm ("__""I2CSCLL");

extern volatile unsigned char I2CDRB __asm ("__""I2CDRB");






extern volatile unsigned int I2CSA __asm ("__""I2CSA");


extern const volatile unsigned int I2CIV __asm ("__""I2CIV");
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
#line 928
extern volatile unsigned int FCTL1 __asm ("__""FCTL1");

extern volatile unsigned int FCTL2 __asm ("__""FCTL2");

extern volatile unsigned int FCTL3 __asm ("__""FCTL3");
#line 1021
extern volatile unsigned int ADC12CTL0 __asm ("__""ADC12CTL0");

extern volatile unsigned int ADC12CTL1 __asm ("__""ADC12CTL1");
# 345 "../../../../tos/platforms/shimmer/chips/msp430/msp430hardware.h"
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
# 50 "../../../../tos/platforms/shimmer2r/hardware.h"
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
static inline void TOSH_CLR_PROG_OUT_PIN()  ;
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
static inline void TOSH_MAKE_ADC_1_INPUT()  ;
#line 94
static inline void TOSH_SEL_ADC_1_MODFUNC()  ;
#line 94
static inline void TOSH_SEL_ADC_1_IOFUNC()  ;
static inline void TOSH_MAKE_ADC_2_OUTPUT()  ;
#line 95
static inline void TOSH_MAKE_ADC_2_INPUT()  ;
#line 95
static inline void TOSH_SEL_ADC_2_MODFUNC()  ;
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
static inline void TOSH_MAKE_ADC_6_INPUT()  ;
#line 99
static inline void TOSH_SEL_ADC_6_MODFUNC()  ;
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


static inline void TOSH_SET_SER0_RTS_PIN()  ;
#line 117
static inline void TOSH_CLR_SER0_RTS_PIN()  ;
#line 117
static inline void TOSH_MAKE_SER0_RTS_OUTPUT()  ;
#line 117
static inline void TOSH_SEL_SER0_RTS_IOFUNC()  ;
static inline void TOSH_SET_SER0_CTS_PIN()  ;
#line 118
static inline void TOSH_CLR_SER0_CTS_PIN()  ;
#line 118
static inline void TOSH_MAKE_SER0_CTS_OUTPUT()  ;
#line 118
static inline void TOSH_SEL_SER0_CTS_IOFUNC()  ;




static inline void TOSH_CLR_UTXD0_PIN()  ;
#line 123
static inline void TOSH_MAKE_UTXD0_OUTPUT()  ;
#line 123
static inline void TOSH_SEL_UTXD0_IOFUNC()  ;
static inline void TOSH_SET_URXD0_PIN()  ;
#line 124
static inline void TOSH_CLR_URXD0_PIN()  ;
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
# 39 "../../../../tos/chips/cc2420/CC2420.h"
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
# 6 "../../../../tos/types/AM.h"
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
# 83 "../../../../tos/lib/serial/Serial.h"
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
# 59 "../../../../tos/platforms/shimmer2r/platform_message.h"
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
# 19 "../../../../tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[28];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 72 "../../../../tos/lib/printf/printf.h"
int printfflush();






#line 77
typedef nx_struct printf_msg {
  nx_uint8_t buffer[28];
} __attribute__((packed)) printf_msg_t;

enum __nesc_unnamed4258 {
  AM_PRINTF_MSG = 100
};
# 39 "../../../../tos/chips/msp430/timer/Msp430Timer.h"
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
# 43 "../../../../tos/types/Leds.h"
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
# 91 "../../../../tos/system/crc.h"
static uint16_t crcByte(uint16_t crc, uint8_t b);
# 56 "../../../../tos/chips/msp430/usart/msp430usart.h"
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
# 41 "../../../../tos/lib/timer/Timer.h"
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
# 33 "../../../../tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
# 37 "../../../../tos/platforms/shimmer/chips/mma7260/Mma_Accel.h"
enum MMA7260_RANGE {
  RANGE_1_5G = 0, 
  RANGE_2_0G = 1, 
  RANGE_4_0G = 2, 
  RANGE_6_0G = 3
};
# 6 "../../../../tos/platforms/shimmer/chips/bluetooth/RovingNetworks.h"
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
# 38 "../../../../tos/platforms/shimmer/chips/gsr/Gsr.h"
enum __nesc_unnamed4288 {
  HW_RES_40K = 0, 
  HW_RES_287K = 1, 
  HW_RES_1M = 2, 
  HW_RES_3M3 = 3
};
# 38 "Shimmer.h"
enum __nesc_unnamed4289 {
  SAMPLING_1000HZ = 1, 
  SAMPLING_500HZ = 2, 
  SAMPLING_250HZ = 4, 
  SAMPLING_200HZ = 5, 
  SAMPLING_166HZ = 6, 
  SAMPLING_125HZ = 8, 
  SAMPLING_100HZ = 10, 
  SAMPLING_50HZ = 20, 
  SAMPLING_10HZ = 100, 
  SAMPLING_0HZ_OFF = 255
};


enum __nesc_unnamed4290 {
  DATA_PACKET = 0x00, 
  INQUIRY_COMMAND = 0x01, 
  INQUIRY_RESPONSE = 0x02, 
  GET_SAMPLING_RATE_COMMAND = 0x03, 
  SAMPLING_RATE_RESPONSE = 0x04, 
  SET_SAMPLING_RATE_COMMAND = 0x05, 
  TOGGLE_LED_COMMAND = 0x06, 
  START_STREAMING_COMMAND = 0x07, 
  SET_SENSORS_COMMAND = 0x08, 
  SET_ACCEL_RANGE_COMMAND = 0x09, 
  ACCEL_RANGE_RESPONSE = 0x0A, 
  GET_ACCEL_RANGE_COMMAND = 0x0B, 
  SET_5V_REGULATOR_COMMAND = 0x0C, 
  SET_PMUX_COMMAND = 0x0D, 
  SET_CONFIG_SETUP_BYTE0_COMMAND = 0x0E, 
  CONFIG_SETUP_BYTE0_RESPONSE = 0x0F, 
  GET_CONFIG_SETUP_BYTE0_COMMAND = 0x10, 
  SET_ACCEL_CALIBRATION_COMMAND = 0x11, 
  ACCEL_CALIBRATION_RESPONSE = 0x12, 
  GET_ACCEL_CALIBRATION_COMMAND = 0x13, 
  SET_GYRO_CALIBRATION_COMMAND = 0x14, 
  GYRO_CALIBRATION_RESPONSE = 0x15, 
  GET_GYRO_CALIBRATION_COMMAND = 0x16, 
  SET_MAG_CALIBRATION_COMMAND = 0x17, 
  MAG_CALIBRATION_RESPONSE = 0x18, 
  GET_MAG_CALIBRATION_COMMAND = 0x19, 
  STOP_STREAMING_COMMAND = 0x20, 
  SET_GSR_RANGE_COMMAND = 0x21, 
  GSR_RANGE_RESPONSE = 0x22, 
  GET_GSR_RANGE_COMMAND = 0x23, 
  GET_SHIMMER_VERSION_COMMAND = 0x24, 
  SHIMMER_VERSION_RESPONSE = 0x25, 
  SET_EMG_CALIBRATION_COMMAND = 0x26, 
  EMG_CALIBRATION_RESPONSE = 0x27, 
  GET_EMG_CALIBRATION_COMMAND = 0x28, 
  SET_ECG_CALIBRATION_COMMAND = 0x29, 
  ECG_CALIBRATION_RESPONSE = 0x2A, 
  GET_ECG_CALIBRATION_COMMAND = 0x2B, 
  GET_ALL_CALIBRATION_COMMAND = 0x2C, 
  ALL_CALIBRATION_RESPONSE = 0x2D, 
  GET_FW_VERSION_COMMAND = 0x2E, 
  FW_VERSION_RESPONSE = 0x2F, 
  SET_BLINK_LED_COMMAND = 0x30, 
  BLINK_LED_RESPONSE = 0x31, 
  GET_BLINK_LED_COMMAND = 0x32, 
  SET_GYRO_TEMP_VREF_COMMAND = 0x33, 
  SET_BUFFER_SIZE_COMMAND = 0x34, 
  BUFFER_SIZE_RESPONSE = 0x35, 
  GET_BUFFER_SIZE_COMMAND = 0x36, 
  SET_MAG_GAIN_COMMAND = 0x37, 
  MAG_GAIN_RESPONSE = 0x38, 
  GET_MAG_GAIN_COMMAND = 0x39, 
  SET_MAG_SAMPLING_RATE_COMMAND = 0x3A, 
  MAG_SAMPLING_RATE_RESPONSE = 0x3B, 
  GET_MAG_SAMPLING_RATE_COMMAND = 0x3C, 
  ACK_COMMAND_PROCESSED = 0xFF
};


enum __nesc_unnamed4291 {
  MAX_NUM_2_BYTE_CHANNELS = 12, 
  MAX_NUM_1_BYTE_CHANNELS = 0, 
  MAX_NUM_CHANNELS = MAX_NUM_2_BYTE_CHANNELS + MAX_NUM_1_BYTE_CHANNELS
};



enum __nesc_unnamed4292 {
  DATA_PACKET_SIZE = 3 + MAX_NUM_2_BYTE_CHANNELS * 2 + MAX_NUM_1_BYTE_CHANNELS, 
  RESPONSE_PACKET_SIZE = 76, 
  MAX_COMMAND_ARG_SIZE = 21
};


enum __nesc_unnamed4293 {
  X_ACCEL = 0x00, 
  Y_ACCEL = 0x01, 
  Z_ACCEL = 0x02, 
  X_GYRO = 0x03, 
  Y_GYRO = 0x04, 
  Z_GYRO = 0x05, 
  X_MAG = 0x06, 
  Y_MAG = 0x07, 
  Z_MAG = 0x08, 
  ECG_RA_LL = 0x09, 
  ECG_LA_LL = 0x0A, 
  GSR_RAW = 0x0B, 
  GSR_RES = 0x0C, 
  EMG = 0x0D, 
  ANEX_A0 = 0x0E, 
  ANEX_A7 = 0x0F, 
  STRAIN_HIGH = 0x10, 
  STRAIN_LOW = 0x11, 
  HEART_RATE = 0x12
};


enum __nesc_unnamed4294 {
  NV_NUM_CONFIG_BYTES = 94
};

enum __nesc_unnamed4295 {
  NV_SAMPLING_RATE = 0, 
  NV_BUFFER_SIZE = 1, 
  NV_SENSORS0 = 2, 
  NV_SENSORS1 = 3, 
  NV_ACCEL_RANGE = 12, 
  NV_MAG_CONFIG = 13, 
  NV_CONFIG_SETUP_BYTE0 = 14, 
  NV_ACCEL_CALIBRATION = 18, 
  NV_GYRO_CALIBRATION = 39, 
  NV_MAG_CALIBRATION = 60, 
  NV_EMG_CALIBRATION = 81, 
  NV_ECG_CALIBRATION = 85, 
  NV_GSR_RANGE = 93
};



enum __nesc_unnamed4296 {
  SENSOR_ACCEL = 0x80, 
  SENSOR_GYRO = 0x40, 
  SENSOR_MAG = 0x20, 
  SENSOR_ECG = 0x10, 
  SENSOR_EMG = 0x08, 
  SENSOR_GSR = 0x04, 
  SENSOR_ANEX_A7 = 0x02, 
  SENSOR_ANEX_A0 = 0x01
};

enum __nesc_unnamed4297 {
  SENSOR_STRAIN = 0x80, 
  SENSOR_HEART = 0x40
};


enum __nesc_unnamed4298 {
  CONFIG_5V_REG = 0x80, 
  CONFIG_PMUX = 0x40, 
  CONFIG_GYRO_TEMP_VREF = 0x20
};


enum __nesc_unnamed4299 {
  GSR_AUTORANGE = 0x04, 
  GSR_X4 = 0x05
};
# 42 "../../../../tos/platforms/shimmer/UserButton.h"
typedef enum __nesc_unnamed4300 {
#line 42
  BUTTON_RELEASED = 0, BUTTON_PRESSED = 1
} 
#line 42
button_state_t;
# 38 "../../../../tos/platforms/shimmer2/chips/gyromag/Magnetometer.h"
enum __nesc_unnamed4301 {
  ZERO_7_GAUSS, 
  ONE_GAUSS, 
  ONE_5_GAUSS, 
  TWO_GAUSS, 
  THREE_2_GAUSS, 
  THREE_8_GAUSS, 
  FOUR_5_GAUSS
};

enum __nesc_unnamed4302 {
  ZERO_5_HZ, 
  ONE_HZ, 
  TWO_HZ, 
  FIVE_HZ, 
  TEN_HZ, 
  TWENTY_HZ, 
  FIFTY_HZ
};
# 46 "../../../../tos/chips/msp430/dma/Msp430Dma.h"
enum __nesc_unnamed4303 {
  DMA_CHANNELS = 3
};

enum __nesc_unnamed4304 {
  DMA_CHANNEL0 = 0, 
  DMA_CHANNEL1 = 1, 
  DMA_CHANNEL2 = 2, 
  DMA_CHANNEL_UNKNOWN = 3
};

enum __nesc_unnamed4305 {
  DMA_CHANNEL_AVAILABLE = 0, 
  DMA_CHANNEL_IN_USE = 1
};



enum __nesc_unnamed4306 {
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
typedef enum __nesc_unnamed4307 {
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



enum __nesc_unnamed4308 {
  DISABLE_NMI = 0, 
  ENABLE_NMI = 1
};

enum __nesc_unnamed4309 {
  NOT_ROUND_ROBIN = 0, 
  ROUND_ROBIN = 1
};

enum __nesc_unnamed4310 {
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





enum __nesc_unnamed4311 {
  DMADT_SHIFT = 12, 
  DMADT_MASK = 0x7
};








#line 143
typedef enum __nesc_unnamed4312 {
  DMA_SINGLE_TRANSFER = 0x0, 
  DMA_BLOCK_TRANSFER = 0x1, 
  DMA_BURST_BLOCK_TRANSFER = 0x2, 
  DMA_REPEATED_SINGLE_TRANSFER = 0x4, 
  DMA_REPEATED_BLOCK_TRANSFER = 0x5, 
  DMA_REPEATED_BURST_BLOCK_TRANSFER = 0x7
} dma_transfer_mode_t;


enum __nesc_unnamed4313 {
  DMASRCINCR_SHIFT = 8, 
  DMADSTINCR_SHIFT = 10, 
  DMAINCR_MASK = 0x3
};





#line 159
typedef enum __nesc_unnamed4314 {
  DMA_ADDRESS_UNCHANGED = 0x0, 
  DMA_ADDRESS_DECREMENTED = 0x2, 
  DMA_ADDRESS_INCREMENTED = 0x3
} dma_incr_t;




#line 165
typedef enum __nesc_unnamed4315 {
  DMA_WORD = 0x0, 
  DMA_BYTE = 0x1
} dma_byte_t;





#line 171
typedef enum __nesc_unnamed4316 {
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
# 4 "../../../../tos/platforms/shimmer2r/CRYPTO.h"
typedef unsigned long long ulong64;
typedef unsigned ulong32;
typedef unsigned u16;
typedef unsigned char safer_key_t[36];
typedef unsigned char safer_block_t[8];



#line 10
typedef struct symmetric_key_rc2 {
  unsigned xkey[64];
} rc2_key;




#line 14
typedef struct symmetric_key_blowfish {
  ulong32 s[4][256];
  ulong32 k[18];
} blowfish_key;



#line 19
typedef struct symmetric_key_xtea {
  unsigned AT[4];
} xtea_key;



#line 23
typedef struct symmetric_key_des {
  ulong32 ek[32], dk[32];
} des_key;




#line 27
typedef struct symmetric_key_rc5 {
  uint8_t rounds;
  uint32_t *s;
} rc5_key;



#line 32
typedef struct symmetric_key_skipjack {
  unsigned char key[10];
} skipjack_key;



#line 36
typedef struct symmetric_key_safer {
  safer_key_t key;
} safer_key;





#line 40
typedef struct symmetric_key_kasumi {
  ulong32 KLi1[8], KLi2[8], 
  KOi1[8], KOi2[8], KOi3[8], 
  KIi1[8], KIi2[8], KIi3[8];
} kasumi_key;
# 56 "../../../../tos/platforms/shimmer/shimmerMessage.h"
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
# 59 "../../../../tos/chips/msp430/adc12/Msp430Adc12.h"
#line 48
typedef struct __nesc_unnamed4317 {

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
typedef struct __nesc_unnamed4318 {


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
typedef struct __nesc_unnamed4319 {
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
typedef struct __nesc_unnamed4320 {
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
# 55 "../../../../tos/types/I2C.h"
typedef struct __nesc_unnamed4321 {
} 
#line 55
TI2CExtdAddr;







typedef struct __nesc_unnamed4322 {
} 
#line 63
TI2CBasicAddr;

typedef struct __nesc_unnamed4323 {
} 
#line 65
TI2C7Bit;
typedef struct __nesc_unnamed4324 {
} 
#line 66
TI2C10Bit;

typedef uint8_t i2c_flags_t;

enum __nesc_unnamed4325 {
  I2C_START = 0x01, 
  I2C_STOP = 0x02, 
  I2C_ACK_END = 0x04, 
  I2C_RESTART = 0x08
};
enum SerialAMQueueP____nesc_unnamed4326 {
  SerialAMQueueP__NUM_CLIENTS = 1U
};
enum /*PlatformSerialC.UartC*/Msp430Uart0C__0____nesc_unnamed4327 {
  Msp430Uart0C__0__CLIENT_ID = 0U
};
typedef T32khz /*Msp430Uart0P.UartP*/Msp430UartP__0__Counter__precision_tag;
typedef uint16_t /*Msp430Uart0P.UartP*/Msp430UartP__0__Counter__size_type;
typedef T32khz /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__frequency_tag;
typedef /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__frequency_tag /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__precision_tag;
typedef uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__size_type;
enum /*PlatformSerialC.UartC.UsartC*/Msp430Usart0C__0____nesc_unnamed4328 {
  Msp430Usart0C__0__CLIENT_ID = 0U
};
typedef uint8_t /*PrintfC.QueueC*/QueueC__0__queue_t;
typedef /*PrintfC.QueueC*/QueueC__0__queue_t /*PrintfC.QueueC*/QueueC__0__Queue__t;
typedef uint8_t PrintfP__Queue__t;
typedef TMilli BtStreamC__BlinkTimer__precision_tag;
typedef uint16_t BtStreamC__BlinkTimer__size_type;
typedef button_state_t BtStreamC__UserButton__val_t;
typedef T32khz BtStreamC__LocalTime__precision_tag;
typedef TMilli BtStreamC__SampleTimer__precision_tag;
typedef uint16_t BtStreamC__SampleTimer__size_type;
typedef TMilli BtStreamC__SetupTimer__precision_tag;
enum /*BtStreamAppC.SampleTimer.AlarmFrom.Msp430Timer*/Msp430Timer32khzC__0____nesc_unnamed4329 {
  Msp430Timer32khzC__0__ALARM_ID = 0U
};
typedef T32khz /*BtStreamAppC.SampleTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__frequency_tag;
typedef /*BtStreamAppC.SampleTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__frequency_tag /*BtStreamAppC.SampleTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__precision_tag;
typedef uint16_t /*BtStreamAppC.SampleTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__size_type;
typedef TMilli /*CounterMilli16C.Transform*/TransformCounterC__0__to_precision_tag;
typedef uint16_t /*CounterMilli16C.Transform*/TransformCounterC__0__to_size_type;
typedef T32khz /*CounterMilli16C.Transform*/TransformCounterC__0__from_precision_tag;
typedef uint16_t /*CounterMilli16C.Transform*/TransformCounterC__0__from_size_type;
typedef uint8_t /*CounterMilli16C.Transform*/TransformCounterC__0__upper_count_type;
typedef /*CounterMilli16C.Transform*/TransformCounterC__0__from_precision_tag /*CounterMilli16C.Transform*/TransformCounterC__0__CounterFrom__precision_tag;
typedef /*CounterMilli16C.Transform*/TransformCounterC__0__from_size_type /*CounterMilli16C.Transform*/TransformCounterC__0__CounterFrom__size_type;
typedef /*CounterMilli16C.Transform*/TransformCounterC__0__to_precision_tag /*CounterMilli16C.Transform*/TransformCounterC__0__Counter__precision_tag;
typedef /*CounterMilli16C.Transform*/TransformCounterC__0__to_size_type /*CounterMilli16C.Transform*/TransformCounterC__0__Counter__size_type;
typedef TMilli /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__to_precision_tag;
typedef uint16_t /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__to_size_type;
typedef T32khz /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__from_precision_tag;
typedef uint16_t /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__from_size_type;
typedef /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__to_precision_tag /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__Alarm__precision_tag;
typedef /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__to_size_type /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__Alarm__size_type;
typedef /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__from_precision_tag /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__AlarmFrom__precision_tag;
typedef /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__from_size_type /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__AlarmFrom__size_type;
typedef /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__to_precision_tag /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__Counter__precision_tag;
typedef /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__to_size_type /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__Counter__size_type;
enum /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Timer*/Msp430Timer32khzC__1____nesc_unnamed4330 {
  Msp430Timer32khzC__1__ALARM_ID = 1U
};
typedef T32khz /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__frequency_tag;
typedef /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__frequency_tag /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__precision_tag;
typedef uint16_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__size_type;
typedef TMilli /*CounterMilli32C.Transform*/TransformCounterC__1__to_precision_tag;
typedef uint32_t /*CounterMilli32C.Transform*/TransformCounterC__1__to_size_type;
typedef T32khz /*CounterMilli32C.Transform*/TransformCounterC__1__from_precision_tag;
typedef uint16_t /*CounterMilli32C.Transform*/TransformCounterC__1__from_size_type;
typedef uint32_t /*CounterMilli32C.Transform*/TransformCounterC__1__upper_count_type;
typedef /*CounterMilli32C.Transform*/TransformCounterC__1__from_precision_tag /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__precision_tag;
typedef /*CounterMilli32C.Transform*/TransformCounterC__1__from_size_type /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__size_type;
typedef /*CounterMilli32C.Transform*/TransformCounterC__1__to_precision_tag /*CounterMilli32C.Transform*/TransformCounterC__1__Counter__precision_tag;
typedef /*CounterMilli32C.Transform*/TransformCounterC__1__to_size_type /*CounterMilli32C.Transform*/TransformCounterC__1__Counter__size_type;
typedef TMilli /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type;
typedef T32khz /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__from_precision_tag;
typedef uint16_t /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__from_size_type;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_precision_tag /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__precision_tag;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__size_type;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__from_precision_tag /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__precision_tag;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__from_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__size_type;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_precision_tag /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Counter__precision_tag;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Counter__size_type;
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
enum /*BtStreamAppC.BlinkTimer.AlarmFrom.Msp430Timer*/Msp430Timer32khzC__2____nesc_unnamed4331 {
  Msp430Timer32khzC__2__ALARM_ID = 2U
};
typedef T32khz /*BtStreamAppC.BlinkTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__frequency_tag;
typedef /*BtStreamAppC.BlinkTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__frequency_tag /*BtStreamAppC.BlinkTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Alarm__precision_tag;
typedef uint16_t /*BtStreamAppC.BlinkTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Alarm__size_type;
typedef TMilli /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__to_precision_tag;
typedef uint16_t /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__to_size_type;
typedef T32khz /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__from_precision_tag;
typedef uint16_t /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__from_size_type;
typedef /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__to_precision_tag /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__Alarm__precision_tag;
typedef /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__to_size_type /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__Alarm__size_type;
typedef /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__from_precision_tag /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__AlarmFrom__precision_tag;
typedef /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__from_size_type /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__AlarmFrom__size_type;
typedef /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__to_precision_tag /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__Counter__precision_tag;
typedef /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__to_size_type /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__Counter__size_type;
typedef T32khz /*Counter32khz32C.Transform*/TransformCounterC__2__to_precision_tag;
typedef uint32_t /*Counter32khz32C.Transform*/TransformCounterC__2__to_size_type;
typedef T32khz /*Counter32khz32C.Transform*/TransformCounterC__2__from_precision_tag;
typedef uint16_t /*Counter32khz32C.Transform*/TransformCounterC__2__from_size_type;
typedef uint16_t /*Counter32khz32C.Transform*/TransformCounterC__2__upper_count_type;
typedef /*Counter32khz32C.Transform*/TransformCounterC__2__from_precision_tag /*Counter32khz32C.Transform*/TransformCounterC__2__CounterFrom__precision_tag;
typedef /*Counter32khz32C.Transform*/TransformCounterC__2__from_size_type /*Counter32khz32C.Transform*/TransformCounterC__2__CounterFrom__size_type;
typedef /*Counter32khz32C.Transform*/TransformCounterC__2__to_precision_tag /*Counter32khz32C.Transform*/TransformCounterC__2__Counter__precision_tag;
typedef /*Counter32khz32C.Transform*/TransformCounterC__2__to_size_type /*Counter32khz32C.Transform*/TransformCounterC__2__Counter__size_type;
typedef T32khz /*BtStreamAppC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag;
typedef /*BtStreamAppC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag /*BtStreamAppC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__precision_tag;
typedef /*BtStreamAppC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag /*BtStreamAppC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__precision_tag;
typedef uint32_t /*BtStreamAppC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__size_type;
typedef button_state_t GyroBoardP__buttonNotify__val_t;
typedef bool /*GyroButtonC.SwitchToggleC*/SwitchToggleC__0__Notify__val_t;
typedef button_state_t GyroButtonP__Notify__val_t;
typedef bool GyroButtonP__NotifyLower__val_t;
typedef TMilli GyroButtonP__debounceTimer__precision_tag;
typedef TMilli Hmc5843P__testTimer__precision_tag;
typedef TI2CBasicAddr Hmc5843P__I2CPacket__addr_size;
enum MagnetometerC____nesc_unnamed4332 {
  MagnetometerC__CLIENT_ID = 0U
};
typedef TI2CBasicAddr Msp430I2CP__I2CBasicAddr__addr_size;
typedef T32khz Rmcm01P__LocalTime__precision_tag;
typedef T32khz /*DigitalHeartRateC.CounterToLocalTimeC*/CounterToLocalTimeC__2__precision_tag;
typedef /*DigitalHeartRateC.CounterToLocalTimeC*/CounterToLocalTimeC__2__precision_tag /*DigitalHeartRateC.CounterToLocalTimeC*/CounterToLocalTimeC__2__LocalTime__precision_tag;
typedef /*DigitalHeartRateC.CounterToLocalTimeC*/CounterToLocalTimeC__2__precision_tag /*DigitalHeartRateC.CounterToLocalTimeC*/CounterToLocalTimeC__2__Counter__precision_tag;
typedef uint32_t /*DigitalHeartRateC.CounterToLocalTimeC*/CounterToLocalTimeC__2__Counter__size_type;
typedef bool /*UserButtonC.SwitchToggleC*/SwitchToggleC__1__Notify__val_t;
typedef button_state_t UserButtonP__Notify__val_t;
typedef bool UserButtonP__NotifyLower__val_t;
typedef TMilli UserButtonP__debounceTimer__precision_tag;
# 62 "../../../../tos/interfaces/Init.nc"
static error_t PlatformP__Init__init(void );
#line 62
static error_t MotePlatformC__Init__init(void );
# 46 "../../../../tos/chips/msp430/timer/Msp430ClockInit.nc"
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
# 62 "../../../../tos/interfaces/McuPowerOverride.nc"
static mcu_power_t Msp430ClockP__McuPowerOverride__lowestState(void );
# 62 "../../../../tos/interfaces/Init.nc"
static error_t Msp430ClockP__Init__init(void );
# 39 "../../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX0__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Overflow__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX1__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__default__fired(
# 51 "../../../../tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x7fa72eacc8b0);
# 39 "../../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX0__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Overflow__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX1__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__default__fired(
# 51 "../../../../tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x7fa72eacc8b0);
# 45 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get(void );
static bool /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__isOverflowPending(void );
# 44 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__getEvent(void );
#line 91
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__default__captured(uint16_t time);
# 42 "../../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Control__getControl(void );
# 39 "../../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Event__fired(void );
# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__default__fired(void );
# 48 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Timer__overflow(void );
# 44 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__getEvent(void );
#line 91
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__default__captured(uint16_t time);
# 42 "../../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__getControl(void );
# 39 "../../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Event__fired(void );
# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__default__fired(void );
# 48 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Timer__overflow(void );
# 44 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__getEvent(void );
#line 91
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__default__captured(uint16_t time);
# 42 "../../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Control__getControl(void );
# 39 "../../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Event__fired(void );
# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__default__fired(void );
# 48 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Timer__overflow(void );
# 44 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__getEvent(void );
#line 91
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__default__captured(uint16_t time);
# 42 "../../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__getControl(void );
#line 57
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__enableEvents(void );
#line 47
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__setControlAsCompare(void );










static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__disableEvents(void );
#line 44
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__clearPendingInterrupt(void );
# 39 "../../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Event__fired(void );
# 41 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEvent(uint16_t time);

static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEventFromNow(uint16_t delta);
# 48 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__overflow(void );
# 44 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__getEvent(void );
#line 91
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__default__captured(uint16_t time);
# 42 "../../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__getControl(void );
#line 57
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__enableEvents(void );
#line 47
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__setControlAsCompare(void );










static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__disableEvents(void );
#line 44
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__clearPendingInterrupt(void );
# 39 "../../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Event__fired(void );
# 41 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__setEvent(uint16_t time);

static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__setEventFromNow(uint16_t delta);
# 48 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Timer__overflow(void );
# 44 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__getEvent(void );
#line 91
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__default__captured(uint16_t time);
# 42 "../../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__getControl(void );
#line 57
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__enableEvents(void );
#line 47
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__setControlAsCompare(void );










static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__disableEvents(void );
#line 44
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__clearPendingInterrupt(void );
# 39 "../../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Event__fired(void );
# 41 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEvent(uint16_t time);

static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEventFromNow(uint16_t delta);
# 48 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__overflow(void );
# 44 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__getEvent(void );
#line 91
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__default__captured(uint16_t time);
# 42 "../../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__getControl(void );
# 39 "../../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Event__fired(void );
# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__default__fired(void );
# 48 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Timer__overflow(void );
# 44 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__getEvent(void );
#line 91
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__default__captured(uint16_t time);
# 42 "../../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Control__getControl(void );
# 39 "../../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Event__fired(void );
# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__default__fired(void );
# 48 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Timer__overflow(void );
# 44 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__getEvent(void );
#line 91
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__default__captured(uint16_t time);
# 42 "../../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Control__getControl(void );
# 39 "../../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Event__fired(void );
# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__default__fired(void );
# 48 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Timer__overflow(void );
# 44 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__getEvent(void );
#line 91
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__default__captured(uint16_t time);
# 42 "../../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Control__getControl(void );
# 39 "../../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Event__fired(void );
# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__default__fired(void );
# 48 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Timer__overflow(void );
# 79 "../../../../tos/interfaces/McuSleep.nc"
static void McuSleepC__McuSleep__sleep(void );
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(
# 56 "../../../../tos/system/SchedulerBasicP.nc"
uint8_t arg_0x7fa72ec329c0);
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__default__runTask(
# 56 "../../../../tos/system/SchedulerBasicP.nc"
uint8_t arg_0x7fa72ec329c0);
# 57 "../../../../tos/interfaces/Scheduler.nc"
static void SchedulerBasicP__Scheduler__init(void );
#line 72
static void SchedulerBasicP__Scheduler__taskLoop(void );
#line 65
static bool SchedulerBasicP__Scheduler__runNextTask(void );
# 80 "../../../../tos/interfaces/AMSend.nc"
static error_t /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 100 "../../../../tos/interfaces/Send.nc"
static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(
#line 96
message_t * msg, 



error_t error);
# 110 "../../../../tos/interfaces/AMSend.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(
# 48 "../../../../tos/system/AMQueueImplP.nc"
am_id_t arg_0x7fa72e9670d0, 
# 103 "../../../../tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 75 "../../../../tos/interfaces/Send.nc"
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(
# 46 "../../../../tos/system/AMQueueImplP.nc"
uint8_t arg_0x7fa72e969cf0, 
# 67 "../../../../tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 100
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(
# 46 "../../../../tos/system/AMQueueImplP.nc"
uint8_t arg_0x7fa72e969cf0, 
# 96 "../../../../tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void );
#line 75
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void );
# 100 "../../../../tos/interfaces/Send.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(
#line 96
message_t * msg, 



error_t error);
# 78 "../../../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 80 "../../../../tos/interfaces/AMSend.nc"
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(
# 47 "../../../../tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x7fa72e8ff940, 
# 80 "../../../../tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 78 "../../../../tos/interfaces/Packet.nc"
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
# 78 "../../../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(
# 48 "../../../../tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x7fa72e8feb10, 
# 71 "../../../../tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 78 "../../../../tos/interfaces/AMPacket.nc"
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
# 104 "../../../../tos/interfaces/SplitControl.nc"
static error_t SerialP__SplitControl__start(void );
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void SerialP__stopDoneTask__runTask(void );
#line 75
static void SerialP__RunTx__runTask(void );
# 62 "../../../../tos/interfaces/Init.nc"
static error_t SerialP__Init__init(void );
# 54 "../../../../tos/lib/serial/SerialFlush.nc"
static void SerialP__SerialFlush__flushDone(void );
#line 49
static void SerialP__SerialFlush__default__flush(void );
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void SerialP__startDoneTask__runTask(void );
# 94 "../../../../tos/lib/serial/SerialFrameComm.nc"
static void SerialP__SerialFrameComm__dataReceived(uint8_t data);





static void SerialP__SerialFrameComm__putDone(void );
#line 85
static void SerialP__SerialFrameComm__delimiterReceived(void );
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void SerialP__defaultSerialFlushTask__runTask(void );
# 71 "../../../../tos/lib/serial/SendBytePacket.nc"
static error_t SerialP__SendBytePacket__completeSend(void );
#line 62
static error_t SerialP__SendBytePacket__startSend(uint8_t first_byte);
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void );
# 75 "../../../../tos/interfaces/Send.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(
# 51 "../../../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7fa72e7c1110, 
# 67 "../../../../tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 100
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(
# 51 "../../../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7fa72e7c1110, 
# 96 "../../../../tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void );
# 78 "../../../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(
# 50 "../../../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7fa72e7c2570, 
# 71 "../../../../tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "../../../../tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(
# 54 "../../../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7fa72e7c04d0, 
# 31 "../../../../tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(
# 54 "../../../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7fa72e7c04d0);
# 23 "../../../../tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(
# 54 "../../../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7fa72e7c04d0, 
# 23 "../../../../tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen);
# 81 "../../../../tos/lib/serial/SendBytePacket.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void );









static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error);
# 62 "../../../../tos/lib/serial/ReceiveBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void );






static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t data);










static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result);
# 79 "../../../../tos/interfaces/UartStream.nc"
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
# 56 "../../../../tos/lib/serial/SerialFrameComm.nc"
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void );
#line 79
static void HdlcTranslateC__SerialFrameComm__resetReceive(void );
#line 65
static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data);
# 65 "../../../../tos/interfaces/ResourceConfigure.nc"
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__ResourceConfigure__unconfigure(
# 44 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fa72e6b2110);
# 59 "../../../../tos/interfaces/ResourceConfigure.nc"
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__ResourceConfigure__configure(
# 44 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fa72e6b2110);
# 39 "../../../../tos/chips/msp430/usart/Msp430UartConfigure.nc"
static msp430_uart_union_config_t */*Msp430Uart0P.UartP*/Msp430UartP__0__Msp430UartConfigure__default__getConfig(
# 49 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fa72e6ae890);
# 48 "../../../../tos/interfaces/UartStream.nc"
static error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__send(
# 45 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fa72e6b2e60, 
# 44 "../../../../tos/interfaces/UartStream.nc"
uint8_t * buf, 



uint16_t len);
#line 79
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__default__receivedByte(
# 45 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fa72e6b2e60, 
# 79 "../../../../tos/interfaces/UartStream.nc"
uint8_t byte);
#line 99
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__default__receiveDone(
# 45 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fa72e6b2e60, 
# 95 "../../../../tos/interfaces/UartStream.nc"
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__default__sendDone(
# 45 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fa72e6b2e60, 
# 53 "../../../../tos/interfaces/UartStream.nc"
uint8_t * buf, 



uint16_t len, error_t error);
# 82 "../../../../tos/lib/timer/Counter.nc"
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__Counter__overflow(void );
# 120 "../../../../tos/interfaces/Resource.nc"
static error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__default__release(
# 48 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fa72e6af580);
# 97 "../../../../tos/interfaces/Resource.nc"
static error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__default__immediateRequest(
# 48 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fa72e6af580);
# 102 "../../../../tos/interfaces/Resource.nc"
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__granted(
# 48 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fa72e6af580);
# 128 "../../../../tos/interfaces/Resource.nc"
static bool /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__default__isOwner(
# 48 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fa72e6af580);
# 120 "../../../../tos/interfaces/Resource.nc"
static error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__Resource__release(
# 43 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fa72e6b5e10);
# 97 "../../../../tos/interfaces/Resource.nc"
static error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__Resource__immediateRequest(
# 43 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fa72e6b5e10);
# 102 "../../../../tos/interfaces/Resource.nc"
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__Resource__default__granted(
# 43 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fa72e6b5e10);
# 54 "../../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartInterrupts__rxDone(
# 51 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fa72e68c9b0, 
# 54 "../../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
uint8_t data);
#line 49
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartInterrupts__txDone(
# 51 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fa72e68c9b0);
# 143 "../../../../tos/chips/msp430/usart/HplMsp430Usart.nc"
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
# 78 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP__3__IO__makeInput(void );
#line 78
static void /*HplMsp430GeneralIOC.P20*/HplMsp430GeneralIOP__8__IO__makeInput(void );






static void /*HplMsp430GeneralIOC.P20*/HplMsp430GeneralIOP__8__IO__makeOutput(void );
#line 99
static void /*HplMsp430GeneralIOC.P20*/HplMsp430GeneralIOP__8__IO__selectIOFunc(void );
#line 78
static void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__makeInput(void );
#line 99
static void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectIOFunc(void );
#line 92
static void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectModuleFunc(void );






static void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectIOFunc(void );
#line 78
static void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__makeInput(void );
#line 99
static void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectIOFunc(void );
#line 92
static void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectModuleFunc(void );






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
#line 58
static void /*HplMsp430GeneralIOC.P40*/HplMsp430GeneralIOP__24__IO__toggle(void );
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




static void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__clr(void );




static void /*HplMsp430GeneralIOC.P43*/HplMsp430GeneralIOP__27__IO__toggle(void );
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
# 48 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__overflow(void );
# 64 "../../../../tos/lib/timer/Counter.nc"
static /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__size_type /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__get(void );






static bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__isOverflowPending(void );
# 62 "../../../../tos/interfaces/Init.nc"
static error_t LedsP__Init__init(void );
# 62 "../../../../tos/platforms/shimmer2r/Leds.nc"
static void LedsP__Leds__led0Off(void );





static void LedsP__Leds__led0Toggle(void );




static void LedsP__Leds__led1On(void );










static void LedsP__Leds__led1Toggle(void );
#line 101
static void LedsP__Leds__led2Toggle(void );
#line 78
static void LedsP__Leds__led1Off(void );
#line 95
static void LedsP__Leds__led2Off(void );
#line 57
static void LedsP__Leds__led0On(void );
#line 90
static void LedsP__Leds__led2On(void );
# 42 "../../../../tos/interfaces/GeneralIO.nc"
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__toggle(void );



static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__makeOutput(void );
#line 40
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__set(void );
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__clr(void );
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__toggle(void );



static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__makeOutput(void );
#line 40
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__set(void );
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__clr(void );
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__toggle(void );



static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__makeOutput(void );
#line 40
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__set(void );
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__clr(void );
# 54 "../../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__rxDone(
# 39 "../../../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x7fa72e297600, 
# 54 "../../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
uint8_t data);
#line 49
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__txDone(
# 39 "../../../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x7fa72e297600);
# 39 "../../../../tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc"
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawI2CInterrupts__fired(void );
#line 39
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__I2CInterrupts__default__fired(
# 40 "../../../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x7fa72e2964e0);
# 54 "../../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__rxDone(uint8_t data);
#line 49
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__txDone(void );
# 62 "../../../../tos/interfaces/Init.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__Init__init(void );
# 53 "../../../../tos/interfaces/ResourceQueue.nc"
static bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );
#line 70
static resource_client_id_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
# 61 "../../../../tos/interfaces/ResourceRequested.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__immediateRequested(
# 55 "../../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fa72e256cf0);
# 65 "../../../../tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(
# 60 "../../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fa72e252240);
# 59 "../../../../tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(
# 60 "../../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fa72e252240);
# 56 "../../../../tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void );
#line 46
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__granted(void );
#line 81
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__immediateRequested(void );
# 120 "../../../../tos/interfaces/Resource.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__release(
# 54 "../../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fa72e257a50);
# 97 "../../../../tos/interfaces/Resource.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__immediateRequest(
# 54 "../../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fa72e257a50);
# 102 "../../../../tos/interfaces/Resource.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__default__granted(
# 54 "../../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fa72e257a50);
# 128 "../../../../tos/interfaces/Resource.nc"
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__isOwner(
# 54 "../../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fa72e257a50);
# 90 "../../../../tos/interfaces/ArbiterInfo.nc"
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__inUse(void );







static uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__userId(void );
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__runTask(void );
# 91 "../../../../tos/chips/msp430/usart/HplMsp430I2C.nc"
static bool HplMsp430I2C0P__HplI2C__isGeneralCallPending(void );
#line 7
static void HplMsp430I2C0P__HplI2C__clearModeI2C(void );
#line 6
static bool HplMsp430I2C0P__HplI2C__isI2C(void );
#line 94
static bool HplMsp430I2C0P__HplI2C__isAccessReadyPending(void );


static bool HplMsp430I2C0P__HplI2C__isArbitrationLostPending(void );
#line 95
static bool HplMsp430I2C0P__HplI2C__isOwnAddressPending(void );
#line 8
static void HplMsp430I2C0P__HplI2C__setModeI2C(msp430_i2c_union_config_t *config);
#line 90
static bool HplMsp430I2C0P__HplI2C__isStartDetectPending(void );





static bool HplMsp430I2C0P__HplI2C__isNoAckPending(void );
# 39 "../../../../tos/chips/msp430/usart/Msp430UartConfigure.nc"
static msp430_uart_union_config_t *ShimmerSerialP__Msp430UartConfigure__getConfig(void );
# 102 "../../../../tos/interfaces/Resource.nc"
static void ShimmerSerialP__Resource__granted(void );
# 95 "../../../../tos/interfaces/StdControl.nc"
static error_t ShimmerSerialP__StdControl__start(void );









static error_t ShimmerSerialP__StdControl__stop(void );
# 31 "../../../../tos/lib/serial/SerialPacketInfo.nc"
static uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t SerialPacketInfoActiveMessageP__Info__offset(void );







static uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen);
# 80 "../../../../tos/interfaces/Queue.nc"
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
# 110 "../../../../tos/interfaces/AMSend.nc"
static void PrintfP__AMSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void PrintfP__retrySend__runTask(void );
# 62 "../../../../tos/interfaces/Init.nc"
static error_t PrintfP__Init__init(void );
# 49 "../../../../tos/lib/printf/Putchar.nc"
static int PrintfP__Putchar__putchar(int c);
# 62 "../../../../tos/interfaces/Init.nc"
static error_t PutcharP__Init__init(void );
# 60 "../../../../tos/interfaces/Boot.nc"
static void SerialStartP__Boot__booted(void );
# 113 "../../../../tos/interfaces/SplitControl.nc"
static void SerialStartP__SerialControl__startDone(error_t error);
#line 138
static void SerialStartP__SerialControl__stopDone(error_t error);
# 78 "../../../../tos/lib/timer/Alarm.nc"
static void BtStreamC__BlinkTimer__fired(void );
# 50 "../../../../tos/platforms/shimmer2/chips/gyro/GyroBoard.nc"
static void BtStreamC__GyroBoard__buttonPressed(void );
# 38 "BtCommandParser.nc"
static void BtStreamC__BtCommandParser__activate(const uint8_t action, uint8_t arg_size, uint8_t *arg);
# 74 "../../../../tos/interfaces/Notify.nc"
static void BtStreamC__UserButton__notify(BtStreamC__UserButton__val_t val);
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void BtStreamC__sendResponse__runTask(void );
# 71 "../../../../tos/platforms/shimmer2/chips/hmc5843/Magnetometer.nc"
static void BtStreamC__Magnetometer__writeDone(error_t success);
#line 69
static void BtStreamC__Magnetometer__readDone(uint8_t *data, error_t success);
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void BtStreamC__startConfigTimer__runTask(void );
# 60 "../../../../tos/interfaces/Boot.nc"
static void BtStreamC__Boot__booted(void );
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void BtStreamC__ProcessCommand__runTask(void );
# 43 "../../../../tos/platforms/shimmer/chips/rmcm01/DigitalHeartRate.nc"
static void BtStreamC__DigitalHeartRate__beat(uint32_t time_32k);
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void BtStreamC__gsr_range__runTask(void );
#line 75
static void BtStreamC__ToggleLed__runTask(void );
# 72 "../../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void BtStreamC__DockInterrupt__fired(void );
# 78 "../../../../tos/lib/timer/Alarm.nc"
static void BtStreamC__SampleTimer__fired(void );
# 107 "../../../../tos/chips/msp430/dma/Msp430DmaChannel.nc"
static void BtStreamC__DMA0__transferDone(error_t success);
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void BtStreamC__clockin_result__runTask(void );
#line 75
static void BtStreamC__stopSensing__runTask(void );
# 83 "../../../../tos/lib/timer/Timer.nc"
static void BtStreamC__SetupTimer__fired(void );
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void BtStreamC__ConfigureChannelsTask__runTask(void );
#line 75
static void BtStreamC__sendSensorData__runTask(void );
#line 75
static void BtStreamC__startSensors__runTask(void );
#line 75
static void BtStreamC__collect_results__runTask(void );
# 103 "../../../../tos/platforms/shimmer/chips/bluetooth/Bluetooth.nc"
static void BtStreamC__Bluetooth__dataAvailable(uint8_t data);
#line 94
static void BtStreamC__Bluetooth__connectionClosed(uint8_t reason);









static void BtStreamC__Bluetooth__writeDone(void );
#line 93
static void BtStreamC__Bluetooth__connectionMade(uint8_t status);

static void BtStreamC__Bluetooth__commandModeEnded(void );
# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*BtStreamAppC.SampleTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__fired(void );
# 48 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*BtStreamAppC.SampleTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__overflow(void );
# 103 "../../../../tos/lib/timer/Alarm.nc"
static void /*BtStreamAppC.SampleTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__startAt(/*BtStreamAppC.SampleTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__size_type t0, /*BtStreamAppC.SampleTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__size_type dt);
#line 73
static void /*BtStreamAppC.SampleTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__stop(void );
# 62 "../../../../tos/interfaces/Init.nc"
static error_t /*BtStreamAppC.SampleTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Init__init(void );
# 82 "../../../../tos/lib/timer/Counter.nc"
static void /*CounterMilli16C.Transform*/TransformCounterC__0__CounterFrom__overflow(void );
#line 64
static /*CounterMilli16C.Transform*/TransformCounterC__0__Counter__size_type /*CounterMilli16C.Transform*/TransformCounterC__0__Counter__get(void );
# 109 "../../../../tos/lib/timer/Alarm.nc"
static /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__Alarm__size_type /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__Alarm__getNow(void );
#line 103
static void /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__Alarm__startAt(/*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__Alarm__size_type t0, /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__Alarm__size_type dt);
#line 66
static void /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__Alarm__start(/*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__Alarm__size_type dt);






static void /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__Alarm__stop(void );




static void /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__AlarmFrom__fired(void );
# 82 "../../../../tos/lib/timer/Counter.nc"
static void /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__Counter__overflow(void );
# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__fired(void );
# 48 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__overflow(void );
# 103 "../../../../tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__startAt(/*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__size_type t0, /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__size_type dt);
#line 73
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__stop(void );
# 62 "../../../../tos/interfaces/Init.nc"
static error_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Init__init(void );
# 82 "../../../../tos/lib/timer/Counter.nc"
static void /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__overflow(void );
#line 64
static /*CounterMilli32C.Transform*/TransformCounterC__1__Counter__size_type /*CounterMilli32C.Transform*/TransformCounterC__1__Counter__get(void );
# 109 "../../../../tos/lib/timer/Alarm.nc"
static /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__getNow(void );
#line 103
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__size_type dt);
#line 116
static /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__getAlarm(void );
#line 73
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__stop(void );




static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__fired(void );
# 82 "../../../../tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Counter__overflow(void );
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );
# 78 "../../../../tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
# 136 "../../../../tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
#line 129
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
# 83 "../../../../tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );
#line 83
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(
# 48 "../../../../tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7fa72dcb7020);
# 64 "../../../../tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(
# 48 "../../../../tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7fa72dcb7020, 
# 64 "../../../../tos/lib/timer/Timer.nc"
uint32_t dt);








static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(
# 48 "../../../../tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7fa72dcb7020, 
# 73 "../../../../tos/lib/timer/Timer.nc"
uint32_t dt);




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(
# 48 "../../../../tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7fa72dcb7020);
# 82 "../../../../tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*BtStreamAppC.BlinkTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__fired(void );
# 48 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*BtStreamAppC.BlinkTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Timer__overflow(void );
# 103 "../../../../tos/lib/timer/Alarm.nc"
static void /*BtStreamAppC.BlinkTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Alarm__startAt(/*BtStreamAppC.BlinkTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Alarm__size_type t0, /*BtStreamAppC.BlinkTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Alarm__size_type dt);
#line 73
static void /*BtStreamAppC.BlinkTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Alarm__stop(void );
# 62 "../../../../tos/interfaces/Init.nc"
static error_t /*BtStreamAppC.BlinkTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Init__init(void );
# 109 "../../../../tos/lib/timer/Alarm.nc"
static /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__Alarm__size_type /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__Alarm__getNow(void );
#line 103
static void /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__Alarm__startAt(/*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__Alarm__size_type t0, /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__Alarm__size_type dt);
#line 66
static void /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__Alarm__start(/*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__Alarm__size_type dt);






static void /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__Alarm__stop(void );




static void /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__AlarmFrom__fired(void );
# 82 "../../../../tos/lib/timer/Counter.nc"
static void /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__Counter__overflow(void );
#line 82
static void /*Counter32khz32C.Transform*/TransformCounterC__2__CounterFrom__overflow(void );
#line 64
static /*Counter32khz32C.Transform*/TransformCounterC__2__Counter__size_type /*Counter32khz32C.Transform*/TransformCounterC__2__Counter__get(void );
# 61 "../../../../tos/lib/timer/LocalTime.nc"
static uint32_t /*BtStreamAppC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__get(void );
# 82 "../../../../tos/lib/timer/Counter.nc"
static void /*BtStreamAppC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void );
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void RovingNetworksP__runSetCommands__runTask(void );
#line 75
static void RovingNetworksP__runMasterCommands__runTask(void );
# 72 "../../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void RovingNetworksP__ConnectionInterrupt__fired(void );
# 62 "../../../../tos/interfaces/Init.nc"
static error_t RovingNetworksP__Init__init(void );
# 54 "../../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void RovingNetworksP__UARTData__rxDone(uint8_t data);
#line 49
static void RovingNetworksP__UARTData__txDone(void );
# 72 "../../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void RovingNetworksP__RTSInterrupt__fired(void );
# 51 "../../../../tos/platforms/shimmer/chips/bluetooth/Bluetooth.nc"
static error_t RovingNetworksP__Bluetooth__write(const uint8_t *buf, uint8_t len);
#line 74
static void RovingNetworksP__Bluetooth__disableRemoteConfig(bool disableConfig);
# 95 "../../../../tos/interfaces/StdControl.nc"
static error_t RovingNetworksP__StdControl__start(void );
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void RovingNetworksP__sendNextChar__runTask(void );
# 52 "../../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
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
#line 47
static void HplMsp430InterruptP__Port13__disable(void );
#line 67
static void HplMsp430InterruptP__Port13__edge(bool low_to_high);
#line 42
static void HplMsp430InterruptP__Port13__enable(void );









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
#line 47
static void HplMsp430InterruptP__Port20__disable(void );
#line 67
static void HplMsp430InterruptP__Port20__edge(bool low_to_high);
#line 42
static void HplMsp430InterruptP__Port20__enable(void );









static void HplMsp430InterruptP__Port11__clear(void );
#line 72
static void HplMsp430InterruptP__Port11__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port23__clear(void );
#line 67
static void HplMsp430InterruptP__Port23__edge(bool low_to_high);
#line 42
static void HplMsp430InterruptP__Port23__enable(void );
#line 59
static bool HplMsp430InterruptP__Port23__getValue(void );
# 143 "../../../../tos/chips/msp430/usart/HplMsp430Usart.nc"
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
# 62 "../../../../tos/interfaces/Init.nc"
static error_t Mma7361P__Init__init(void );
# 54 "../../../../tos/platforms/shimmer/chips/mma7260/Mma_Accel.nc"
static void Mma7361P__Accel__setSensitivity(uint8_t sensitivity);
#line 47
static void Mma7361P__Accel__wake(bool wakeup);
# 107 "../../../../tos/chips/msp430/dma/Msp430DmaChannel.nc"
static void shimmerAnalogSetupP__Msp430DmaChannel__transferDone(error_t success);
# 112 "../../../../tos/chips/msp430/adc12/HplAdc12.nc"
static void shimmerAnalogSetupP__HplAdc12__conversionDone(uint16_t iv);
# 62 "../../../../tos/interfaces/Init.nc"
static error_t shimmerAnalogSetupP__Init__init(void );
# 46 "../../../../tos/platforms/shimmer/shimmerAnalogSetup.nc"
static void shimmerAnalogSetupP__shimmerAnalogSetup__addAccelInputs(void );
#line 79
static void shimmerAnalogSetupP__shimmerAnalogSetup__triggerConversion(void );



static uint8_t shimmerAnalogSetupP__shimmerAnalogSetup__getNumberOfChannels(void );
#line 52
static void shimmerAnalogSetupP__shimmerAnalogSetup__addECGInputs(void );
#line 64
static void shimmerAnalogSetupP__shimmerAnalogSetup__addAnExInput(uint8_t channel);





static void shimmerAnalogSetupP__shimmerAnalogSetup__reset(void );
#line 61
static void shimmerAnalogSetupP__shimmerAnalogSetup__addEMGInput(void );





static void shimmerAnalogSetupP__shimmerAnalogSetup__addStrainGaugeInputs(void );
#line 58
static void shimmerAnalogSetupP__shimmerAnalogSetup__addGSRInput(void );
#line 77
static void shimmerAnalogSetupP__shimmerAnalogSetup__finishADCSetup(uint16_t *buffer);
#line 49
static void shimmerAnalogSetupP__shimmerAnalogSetup__addGyroInputs(void );
#line 81
static void shimmerAnalogSetupP__shimmerAnalogSetup__stopConversion(void );
# 106 "../../../../tos/chips/msp430/adc12/HplAdc12.nc"
static void HplAdc12P__HplAdc12__resetIFGs(void );
#line 128
static void HplAdc12P__HplAdc12__startConversion(void );
#line 95
static void HplAdc12P__HplAdc12__setIEFlags(uint16_t mask);
#line 123
static void HplAdc12P__HplAdc12__stopConversion(void );
# 45 "../../../../tos/chips/msp430/dma/HplMsp430DmaControl.nc"
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
# 61 "../../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
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
# 39 "../../../../tos/chips/msp430/dma/HplMsp430DmaInterrupt.nc"
static void /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__Interrupt__fired(void );
# 83 "../../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
static void /*HplMsp430DmaC.Dma1*/HplMsp430DmaXP__1__DMA__reset(void );
# 39 "../../../../tos/chips/msp430/dma/HplMsp430DmaInterrupt.nc"
static void /*HplMsp430DmaC.Dma1*/HplMsp430DmaXP__1__Interrupt__fired(void );
# 83 "../../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
static void /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__DMA__reset(void );
# 39 "../../../../tos/chips/msp430/dma/HplMsp430DmaInterrupt.nc"
static void /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__Interrupt__fired(void );
# 85 "../../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
static void /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__HplChannel__transferDone(error_t success);
# 102 "../../../../tos/chips/msp430/dma/Msp430DmaChannel.nc"
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
# 85 "../../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
static void /*Msp430DmaC.Channel1P*/Msp430DmaChannelP__1__HplChannel__transferDone(error_t success);
# 107 "../../../../tos/chips/msp430/dma/Msp430DmaChannel.nc"
static void /*Msp430DmaC.Channel1P*/Msp430DmaChannelP__1__Channel__default__transferDone(error_t success);
# 85 "../../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
static void /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__HplChannel__transferDone(error_t success);
# 107 "../../../../tos/chips/msp430/dma/Msp430DmaChannel.nc"
static void /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__Channel__default__transferDone(error_t success);
# 85 "../../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
static void Msp430DmaControlP__HplChannel1__transferDone(error_t success);
#line 85
static void Msp430DmaControlP__HplChannel2__transferDone(error_t success);
# 42 "../../../../tos/chips/msp430/dma/Msp430DmaControl.nc"
static void Msp430DmaControlP__Control__setFlags(bool enable_nmi, bool round_robin, 
bool on_fetch);
#line 41
static void Msp430DmaControlP__Control__init(void );
# 85 "../../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
static void Msp430DmaControlP__HplChannel0__transferDone(error_t success);
# 44 "../../../../tos/platforms/shimmer2/chips/gyro/GyroBoard.nc"
static void GyroBoardP__GyroBoard__ledOff(void );
# 62 "../../../../tos/interfaces/Init.nc"
static error_t GyroBoardP__Init__init(void );
# 74 "../../../../tos/interfaces/Notify.nc"
static void GyroBoardP__buttonNotify__notify(GyroBoardP__buttonNotify__val_t val);
# 95 "../../../../tos/interfaces/StdControl.nc"
static error_t GyroBoardP__StdControl__start(void );









static error_t GyroBoardP__StdControl__stop(void );
# 44 "../../../../tos/interfaces/GeneralIO.nc"
static void /*HplGyroButtonC.UserButtonC*/Msp430GpioC__3__GeneralIO__makeInput(void );
# 72 "../../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void /*HplGyroButtonC.InterruptUserButtonC*/Msp430InterruptC__0__HplInterrupt__fired(void );
# 61 "../../../../tos/interfaces/GpioInterrupt.nc"
static error_t /*HplGyroButtonC.InterruptUserButtonC*/Msp430InterruptC__0__Interrupt__disable(void );
#line 53
static error_t /*HplGyroButtonC.InterruptUserButtonC*/Msp430InterruptC__0__Interrupt__enableRisingEdge(void );
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void /*GyroButtonC.SwitchToggleC*/SwitchToggleC__0__sendEvent__runTask(void );
# 68 "../../../../tos/interfaces/GpioInterrupt.nc"
static void /*GyroButtonC.SwitchToggleC*/SwitchToggleC__0__GpioInterrupt__fired(void );
# 59 "../../../../tos/interfaces/Notify.nc"
static error_t /*GyroButtonC.SwitchToggleC*/SwitchToggleC__0__Notify__enable(void );
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void GyroButtonP__debounce__runTask(void );
# 59 "../../../../tos/interfaces/Notify.nc"
static error_t GyroButtonP__Notify__enable(void );
#line 74
static void GyroButtonP__NotifyLower__notify(GyroButtonP__NotifyLower__val_t val);
# 83 "../../../../tos/lib/timer/Timer.nc"
static void GyroButtonP__debounceTimer__fired(void );
# 41 "../../../../tos/platforms/shimmer2/chips/hmc5843/Magnetometer.nc"
static void Hmc5843P__Magnetometer__disableBus(void );
#line 39
static void Hmc5843P__Magnetometer__enableBus(void );
#line 66
static void Hmc5843P__Magnetometer__convertRegistersToData(uint8_t *readBuf, int16_t *data);
#line 63
static void Hmc5843P__Magnetometer__selfTest(void );
#line 57
static error_t Hmc5843P__Magnetometer__readData(void );
#line 54
static error_t Hmc5843P__Magnetometer__runContinuousConversion(void );
#line 44
static error_t Hmc5843P__Magnetometer__setOutputRate(uint8_t rate);


static error_t Hmc5843P__Magnetometer__setGain(uint8_t gain);
# 83 "../../../../tos/lib/timer/Timer.nc"
static void Hmc5843P__testTimer__fired(void );
# 62 "../../../../tos/interfaces/Init.nc"
static error_t Hmc5843P__Init__init(void );
# 157 "../../../../tos/platforms/shimmer2r/I2CPacket.nc"
static void Hmc5843P__I2CPacket__writeDone(error_t error, uint16_t addr, uint8_t length, 
#line 154
uint8_t * data);
#line 147
static void Hmc5843P__I2CPacket__readDone(error_t error, uint16_t addr, uint8_t length, 
#line 144
uint8_t * data);
# 62 "../../../../tos/interfaces/Init.nc"
static error_t Msp430I2CP__I2CInit__init(void );
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void Msp430I2CP__writeDone__runTask(void );
# 120 "../../../../tos/platforms/shimmer2r/I2CPacket.nc"
static error_t Msp430I2CP__I2CBasicAddr__read(i2c_flags_t flags, uint16_t addr, uint8_t length, 
#line 116
uint8_t * data);
#line 137
static error_t Msp430I2CP__I2CBasicAddr__write(i2c_flags_t flags, uint16_t addr, uint8_t length, 
#line 133
uint8_t * data);
# 39 "../../../../tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc"
static void Msp430I2CP__I2CInterrupts__fired(void );
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void Msp430I2CP__readDone__runTask(void );
# 62 "../../../../tos/interfaces/Init.nc"
static error_t StrainGaugeP__Init__init(void );
# 36 "../../../../tos/platforms/shimmer2/chips/straingauge/StrainGauge.nc"
static void StrainGaugeP__StrainGauge__powerOn(void );

static void StrainGaugeP__StrainGauge__powerOff(void );


static void StrainGaugeP__StrainGauge__ledOn(void );
static void StrainGaugeP__StrainGauge__ledOff(void );
# 62 "../../../../tos/interfaces/Init.nc"
static error_t Rmcm01P__Init__init(void );
# 72 "../../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void Rmcm01P__BeatInterrupt__fired(void );
# 61 "../../../../tos/lib/timer/LocalTime.nc"
static uint32_t /*DigitalHeartRateC.CounterToLocalTimeC*/CounterToLocalTimeC__2__LocalTime__get(void );
# 82 "../../../../tos/lib/timer/Counter.nc"
static void /*DigitalHeartRateC.CounterToLocalTimeC*/CounterToLocalTimeC__2__Counter__overflow(void );
# 62 "../../../../tos/interfaces/Init.nc"
static error_t GsrP__Init__init(void );
# 66 "../../../../tos/platforms/shimmer/chips/gsr/Gsr.nc"
static uint8_t GsrP__Gsr__controlRange(uint16_t ADC_val, uint8_t active_resistor);






static void GsrP__Gsr__initSmoothing(uint8_t active_resistor);
#line 46
static void GsrP__Gsr__setRange(uint8_t range);
#line 81
static bool GsrP__Gsr__smoothTransition(uint8_t *dummy_active_resistor, uint32_t sampling_period);
# 36 "BtCommandParser.nc"
static void BtCommandParserP__BtCommandParser__handleByte(uint8_t data);
# 56 "../../../../tos/interfaces/InternalFlash.nc"
static error_t InternalFlashC__InternalFlash__read(void *addr, 
#line 50
void * buf, 





uint16_t size);
#line 68
static error_t InternalFlashC__InternalFlash__write(void *addr, 
#line 63
void * buf, 




uint16_t size);
# 44 "../../../../tos/interfaces/GeneralIO.nc"
static void /*HplUserButtonC.UserButtonC*/Msp430GpioC__4__GeneralIO__makeInput(void );

static void /*HplUserButtonC.UserButtonC*/Msp430GpioC__4__GeneralIO__makeOutput(void );
# 72 "../../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void /*HplUserButtonC.InterruptUserButtonC*/Msp430InterruptC__1__HplInterrupt__fired(void );
# 61 "../../../../tos/interfaces/GpioInterrupt.nc"
static error_t /*HplUserButtonC.InterruptUserButtonC*/Msp430InterruptC__1__Interrupt__disable(void );
#line 53
static error_t /*HplUserButtonC.InterruptUserButtonC*/Msp430InterruptC__1__Interrupt__enableRisingEdge(void );
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void /*UserButtonC.SwitchToggleC*/SwitchToggleC__1__sendEvent__runTask(void );
# 68 "../../../../tos/interfaces/GpioInterrupt.nc"
static void /*UserButtonC.SwitchToggleC*/SwitchToggleC__1__GpioInterrupt__fired(void );
# 67 "../../../../tos/interfaces/Notify.nc"
static error_t /*UserButtonC.SwitchToggleC*/SwitchToggleC__1__Notify__disable(void );
#line 59
static error_t /*UserButtonC.SwitchToggleC*/SwitchToggleC__1__Notify__enable(void );
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void UserButtonP__debounce__runTask(void );
# 67 "../../../../tos/interfaces/Notify.nc"
static error_t UserButtonP__Notify__disable(void );
#line 59
static error_t UserButtonP__Notify__enable(void );
#line 74
static void UserButtonP__NotifyLower__notify(UserButtonP__NotifyLower__val_t val);
# 83 "../../../../tos/lib/timer/Timer.nc"
static void UserButtonP__debounceTimer__fired(void );
# 16 "../../../../tos/platforms/shimmer2r/CRYPTO.nc"
static CRYPTOP__CRYPTO__skipjack_encrypt(const unsigned char *pt, unsigned char *ct, skipjack_key *skey);
#line 15
static CRYPTOP__CRYPTO__skipjack_setup(const unsigned char *key, int keylen, int num_rounds, skipjack_key *skey);
# 62 "../../../../tos/interfaces/Init.nc"
static error_t FastClockP__Init__init(void );
# 41 "../../../../tos/platforms/shimmer/chips/msp430/FastClock.nc"
static void FastClockP__FastClock__setSMCLK(uint8_t mhz);
# 62 "../../../../tos/interfaces/Init.nc"
static error_t PlatformP__MoteInit__init(void );
#line 62
static error_t PlatformP__MoteClockInit__init(void );
#line 62
static error_t PlatformP__LedsInit__init(void );
# 10 "../../../../tos/platforms/shimmer2r/PlatformP.nc"
static inline error_t PlatformP__Init__init(void );
# 44 "../../../../tos/platforms/shimmer2r/MotePlatformC.nc"
static inline error_t MotePlatformC__Init__init(void );
# 43 "../../../../tos/chips/msp430/timer/Msp430ClockInit.nc"
static void Msp430ClockP__Msp430ClockInit__initTimerB(void );
#line 42
static void Msp430ClockP__Msp430ClockInit__initTimerA(void );
#line 40
static void Msp430ClockP__Msp430ClockInit__setupDcoCalibrate(void );
static void Msp430ClockP__Msp430ClockInit__initClocks(void );
# 51 "../../../../tos/chips/msp430/timer/Msp430ClockP.nc"
static volatile uint8_t Msp430ClockP__IE1 __asm ("0x0000");
static volatile uint16_t Msp430ClockP__TACTL __asm ("0x0160");
static volatile uint16_t Msp430ClockP__TAIV __asm ("0x012E");
static volatile uint16_t Msp430ClockP__TBCTL __asm ("0x0180");
static volatile uint16_t Msp430ClockP__TBIV __asm ("0x011E");

enum Msp430ClockP____nesc_unnamed4333 {

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
# 39 "../../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__fired(
# 51 "../../../../tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x7fa72eacc8b0);
# 48 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__overflow(void );
# 126 "../../../../tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX0__fired(void );




static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX1__fired(void );





static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Overflow__fired(void );








static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__default__fired(uint8_t n);
# 39 "../../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__fired(
# 51 "../../../../tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x7fa72eacc8b0);
# 48 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__overflow(void );
# 62 "../../../../tos/chips/msp430/timer/Msp430TimerP.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get(void );
#line 81
static inline bool /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__isOverflowPending(void );
#line 126
static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX0__fired(void );




static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX1__fired(void );





static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Overflow__fired(void );








static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__default__fired(uint8_t n);
# 91 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__captured(uint16_t time);
# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__fired(void );
# 55 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
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
# 91 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__captured(uint16_t time);
# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__fired(void );
# 55 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
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
# 91 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__captured(uint16_t time);
# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__fired(void );
# 55 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
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
# 91 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__captured(uint16_t time);
# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__fired(void );
# 45 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__get(void );
# 55 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
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
# 91 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__captured(uint16_t time);
# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__fired(void );
# 45 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Timer__get(void );
# 55 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t;

static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__CC2int(/*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t x)  ;
static inline /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__int2CC(uint16_t x)  ;

static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__compareControl(void );
#line 85
static inline /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__getControl(void );









static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__clearPendingInterrupt(void );









static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__setControlAsCompare(void );
#line 130
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__enableEvents(void );




static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__disableEvents(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__getEvent(void );




static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__setEvent(uint16_t x);









static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__setEventFromNow(uint16_t x);
#line 180
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__default__captured(uint16_t n);







static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Timer__overflow(void );
# 91 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__captured(uint16_t time);
# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__fired(void );
# 45 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__get(void );
# 55 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t;

static inline uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__CC2int(/*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t x)  ;
static inline /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__int2CC(uint16_t x)  ;

static inline uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__compareControl(void );
#line 85
static inline /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__getControl(void );









static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__clearPendingInterrupt(void );









static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__setControlAsCompare(void );
#line 130
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__enableEvents(void );




static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__disableEvents(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__getEvent(void );




static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEvent(uint16_t x);









static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEventFromNow(uint16_t x);
#line 180
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__default__captured(uint16_t n);







static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__overflow(void );
# 91 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__captured(uint16_t time);
# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__fired(void );
# 55 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
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
# 91 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__captured(uint16_t time);
# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__fired(void );
# 55 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
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
# 91 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__captured(uint16_t time);
# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__fired(void );
# 55 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
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
# 91 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__captured(uint16_t time);
# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__fired(void );
# 55 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
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
# 39 "../../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void Msp430TimerCommonP__VectorTimerB1__fired(void );
#line 39
static void Msp430TimerCommonP__VectorTimerA0__fired(void );
#line 39
static void Msp430TimerCommonP__VectorTimerA1__fired(void );
#line 39
static void Msp430TimerCommonP__VectorTimerB0__fired(void );
# 11 "../../../../tos/chips/msp430/timer/Msp430TimerCommonP.nc"
void sig_TIMERA0_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x000C)))  ;
void sig_TIMERA1_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x000A)))  ;
void sig_TIMERB0_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x001A)))  ;
void sig_TIMERB1_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x0018)))  ;
# 62 "../../../../tos/interfaces/McuPowerOverride.nc"
static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void );
# 59 "../../../../tos/chips/msp430/McuSleepC.nc"
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
# 62 "../../../../tos/interfaces/Init.nc"
static error_t RealMainP__SoftwareInit__init(void );
# 60 "../../../../tos/interfaces/Boot.nc"
static void RealMainP__Boot__booted(void );
# 62 "../../../../tos/interfaces/Init.nc"
static error_t RealMainP__PlatformInit__init(void );
# 57 "../../../../tos/interfaces/Scheduler.nc"
static void RealMainP__Scheduler__init(void );
#line 72
static void RealMainP__Scheduler__taskLoop(void );
#line 65
static bool RealMainP__Scheduler__runNextTask(void );
# 63 "../../../../tos/system/RealMainP.nc"
int main(void )   ;
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(
# 56 "../../../../tos/system/SchedulerBasicP.nc"
uint8_t arg_0x7fa72ec329c0);
# 79 "../../../../tos/interfaces/McuSleep.nc"
static void SchedulerBasicP__McuSleep__sleep(void );
# 61 "../../../../tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP____nesc_unnamed4334 {

  SchedulerBasicP__NUM_TASKS = 32U, 
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
# 110 "../../../../tos/interfaces/AMSend.nc"
static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 75 "../../../../tos/interfaces/Send.nc"
static error_t /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__send(
#line 67
message_t * msg, 







uint8_t len);
# 103 "../../../../tos/interfaces/AMPacket.nc"
static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 162
static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(
#line 158
message_t * amsg, 



am_id_t t);
# 53 "../../../../tos/system/AMQueueEntryP.nc"
static error_t /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(message_t *m, error_t err);
# 80 "../../../../tos/interfaces/AMSend.nc"
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(
# 48 "../../../../tos/system/AMQueueImplP.nc"
am_id_t arg_0x7fa72e9670d0, 
# 80 "../../../../tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 100 "../../../../tos/interfaces/Send.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(
# 46 "../../../../tos/system/AMQueueImplP.nc"
uint8_t arg_0x7fa72e969cf0, 
# 96 "../../../../tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 78 "../../../../tos/interfaces/Packet.nc"
static uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(
#line 74
message_t * msg);
#line 94
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask(void );
# 78 "../../../../tos/interfaces/AMPacket.nc"
static am_addr_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(
#line 74
message_t * amsg);
#line 147
static am_id_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(
#line 143
message_t * amsg);
# 126 "../../../../tos/system/AMQueueImplP.nc"
enum /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4335 {
#line 126
  AMQueueImplP__0__CancelTask = 0U
};
#line 126
typedef int /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_sillytask_CancelTask[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask];
#line 169
enum /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4336 {
#line 169
  AMQueueImplP__0__errorTask = 1U
};
#line 169
typedef int /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_sillytask_errorTask[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask];
#line 57
#line 55
typedef struct /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4337 {
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
# 75 "../../../../tos/interfaces/Send.nc"
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(
#line 67
message_t * msg, 







uint8_t len);
# 110 "../../../../tos/interfaces/AMSend.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(
# 47 "../../../../tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x7fa72e8ff940, 
# 103 "../../../../tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "../../../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(
# 48 "../../../../tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x7fa72e8feb10, 
# 71 "../../../../tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 60 "../../../../tos/lib/serial/SerialActiveMessageP.nc"
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
# 113 "../../../../tos/interfaces/SplitControl.nc"
static void SerialP__SplitControl__startDone(error_t error);
#line 138
static void SerialP__SplitControl__stopDone(error_t error);
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t SerialP__stopDoneTask__postTask(void );
# 95 "../../../../tos/interfaces/StdControl.nc"
static error_t SerialP__SerialControl__start(void );









static error_t SerialP__SerialControl__stop(void );
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t SerialP__RunTx__postTask(void );
# 49 "../../../../tos/lib/serial/SerialFlush.nc"
static void SerialP__SerialFlush__flush(void );
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t SerialP__startDoneTask__postTask(void );
# 56 "../../../../tos/lib/serial/SerialFrameComm.nc"
static error_t SerialP__SerialFrameComm__putDelimiter(void );
#line 79
static void SerialP__SerialFrameComm__resetReceive(void );
#line 65
static error_t SerialP__SerialFrameComm__putData(uint8_t data);
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t SerialP__defaultSerialFlushTask__postTask(void );
# 81 "../../../../tos/lib/serial/SendBytePacket.nc"
static uint8_t SerialP__SendBytePacket__nextByte(void );









static void SerialP__SendBytePacket__sendCompleted(error_t error);
# 62 "../../../../tos/lib/serial/ReceiveBytePacket.nc"
static error_t SerialP__ReceiveBytePacket__startPacket(void );






static void SerialP__ReceiveBytePacket__byteReceived(uint8_t data);










static void SerialP__ReceiveBytePacket__endPacket(error_t result);
# 191 "../../../../tos/lib/serial/SerialP.nc"
enum SerialP____nesc_unnamed4338 {
#line 191
  SerialP__RunTx = 2U
};
#line 191
typedef int SerialP____nesc_sillytask_RunTx[SerialP__RunTx];
#line 322
enum SerialP____nesc_unnamed4339 {
#line 322
  SerialP__startDoneTask = 3U
};
#line 322
typedef int SerialP____nesc_sillytask_startDoneTask[SerialP__startDoneTask];









enum SerialP____nesc_unnamed4340 {
#line 332
  SerialP__stopDoneTask = 4U
};
#line 332
typedef int SerialP____nesc_sillytask_stopDoneTask[SerialP__stopDoneTask];








enum SerialP____nesc_unnamed4341 {
#line 341
  SerialP__defaultSerialFlushTask = 5U
};
#line 341
typedef int SerialP____nesc_sillytask_defaultSerialFlushTask[SerialP__defaultSerialFlushTask];
#line 81
enum SerialP____nesc_unnamed4342 {
  SerialP__RX_DATA_BUFFER_SIZE = 2, 
  SerialP__TX_DATA_BUFFER_SIZE = 4, 
  SerialP__SERIAL_MTU = 255, 
  SerialP__SERIAL_VERSION = 1, 
  SerialP__ACK_QUEUE_SIZE = 5
};

enum SerialP____nesc_unnamed4343 {
  SerialP__RXSTATE_NOSYNC, 
  SerialP__RXSTATE_PROTO, 
  SerialP__RXSTATE_TOKEN, 
  SerialP__RXSTATE_INFO, 
  SerialP__RXSTATE_INACTIVE
};

enum SerialP____nesc_unnamed4344 {
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
typedef enum SerialP____nesc_unnamed4345 {
  SerialP__BUFFER_AVAILABLE, 
  SerialP__BUFFER_FILLING, 
  SerialP__BUFFER_COMPLETE
} SerialP__tx_data_buffer_states_t;

enum SerialP____nesc_unnamed4346 {
  SerialP__TX_ACK_INDEX = 0, 
  SerialP__TX_DATA_INDEX = 1, 
  SerialP__TX_BUFFER_COUNT = 2
};






#line 124
typedef struct SerialP____nesc_unnamed4347 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP__RX_DATA_BUFFER_SIZE + 1];
} SerialP__rx_buf_t;




#line 130
typedef struct SerialP____nesc_unnamed4348 {
  uint8_t state;
  uint8_t buf;
} SerialP__tx_buf_t;





#line 135
typedef struct SerialP____nesc_unnamed4349 {
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
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask(void );
# 100 "../../../../tos/interfaces/Send.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(
# 51 "../../../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7fa72e7c1110, 
# 96 "../../../../tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask(void );
# 78 "../../../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(
# 50 "../../../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7fa72e7c2570, 
# 71 "../../../../tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "../../../../tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(
# 54 "../../../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7fa72e7c04d0, 
# 31 "../../../../tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(
# 54 "../../../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7fa72e7c04d0);
# 23 "../../../../tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(
# 54 "../../../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7fa72e7c04d0, 
# 23 "../../../../tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen);
# 71 "../../../../tos/lib/serial/SendBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend(void );
#line 62
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(uint8_t first_byte);
# 158 "../../../../tos/lib/serial/SerialDispatcherP.nc"
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4350 {
#line 158
  SerialDispatcherP__0__signalSendDone = 6U
};
#line 158
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_sillytask_signalSendDone[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone];
#line 275
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4351 {
#line 275
  SerialDispatcherP__0__receiveTask = 7U
};
#line 275
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_sillytask_receiveTask[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask];
#line 66
#line 62
typedef enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4352 {
  SerialDispatcherP__0__SEND_STATE_IDLE = 0, 
  SerialDispatcherP__0__SEND_STATE_BEGIN = 1, 
  SerialDispatcherP__0__SEND_STATE_DATA = 2
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__send_state_t;

enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4353 {
  SerialDispatcherP__0__RECV_STATE_IDLE = 0, 
  SerialDispatcherP__0__RECV_STATE_BEGIN = 1, 
  SerialDispatcherP__0__RECV_STATE_DATA = 2
};






#line 74
typedef struct /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4354 {
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
# 48 "../../../../tos/interfaces/UartStream.nc"
static error_t HdlcTranslateC__UartStream__send(
#line 44
uint8_t * buf, 



uint16_t len);
# 94 "../../../../tos/lib/serial/SerialFrameComm.nc"
static void HdlcTranslateC__SerialFrameComm__dataReceived(uint8_t data);





static void HdlcTranslateC__SerialFrameComm__putDone(void );
#line 85
static void HdlcTranslateC__SerialFrameComm__delimiterReceived(void );
# 59 "../../../../tos/lib/serial/HdlcTranslateC.nc"
#line 56
typedef struct HdlcTranslateC____nesc_unnamed4355 {
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
# 39 "../../../../tos/chips/msp430/usart/Msp430UartConfigure.nc"
static msp430_uart_union_config_t */*Msp430Uart0P.UartP*/Msp430UartP__0__Msp430UartConfigure__getConfig(
# 49 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fa72e6ae890);
# 97 "../../../../tos/chips/msp430/usart/HplMsp430Usart.nc"
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
# 79 "../../../../tos/interfaces/UartStream.nc"
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__receivedByte(
# 45 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fa72e6b2e60, 
# 79 "../../../../tos/interfaces/UartStream.nc"
uint8_t byte);
#line 99
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__receiveDone(
# 45 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fa72e6b2e60, 
# 95 "../../../../tos/interfaces/UartStream.nc"
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__sendDone(
# 45 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fa72e6b2e60, 
# 53 "../../../../tos/interfaces/UartStream.nc"
uint8_t * buf, 



uint16_t len, error_t error);
# 120 "../../../../tos/interfaces/Resource.nc"
static error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__release(
# 48 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fa72e6af580);
# 97 "../../../../tos/interfaces/Resource.nc"
static error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__immediateRequest(
# 48 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fa72e6af580);
# 128 "../../../../tos/interfaces/Resource.nc"
static bool /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__isOwner(
# 48 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fa72e6af580);
# 102 "../../../../tos/interfaces/Resource.nc"
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__Resource__granted(
# 43 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fa72e6b5e10);
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
# 99 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430Usart0P__UCLK__selectIOFunc(void );
# 54 "../../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void HplMsp430Usart0P__Interrupts__rxDone(uint8_t data);
#line 49
static void HplMsp430Usart0P__Interrupts__txDone(void );
# 99 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430Usart0P__URXD__selectIOFunc(void );
#line 92
static void HplMsp430Usart0P__URXD__selectModuleFunc(void );






static void HplMsp430Usart0P__UTXD__selectIOFunc(void );
#line 92
static void HplMsp430Usart0P__UTXD__selectModuleFunc(void );
# 7 "../../../../tos/chips/msp430/usart/HplMsp430I2C.nc"
static void HplMsp430Usart0P__HplI2C__clearModeI2C(void );
#line 6
static bool HplMsp430Usart0P__HplI2C__isI2C(void );
# 99 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430Usart0P__SOMI__selectIOFunc(void );
# 39 "../../../../tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc"
static void HplMsp430Usart0P__I2CInterrupts__fired(void );
# 99 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430Usart0P__SIMO__selectIOFunc(void );
# 91 "../../../../tos/platforms/shimmer/chips/msp430/HplMsp430Usart0P.nc"
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
static void HplMsp430Usart0P__Usart__disableSpi(void );
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
# 61 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static void /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP__3__IO__makeInput(void );
#line 61
static void /*HplMsp430GeneralIOC.P20*/HplMsp430GeneralIOP__8__IO__makeInput(void );

static void /*HplMsp430GeneralIOC.P20*/HplMsp430GeneralIOP__8__IO__makeOutput(void );



static inline void /*HplMsp430GeneralIOC.P20*/HplMsp430GeneralIOP__8__IO__selectIOFunc(void );
#line 61
static inline void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__makeInput(void );



static inline void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectIOFunc(void );
#line 67
static inline void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectIOFunc(void );
#line 61
static inline void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__makeInput(void );



static inline void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectModuleFunc(void );

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
static void /*HplMsp430GeneralIOC.P40*/HplMsp430GeneralIOP__24__IO__set(void );
static void /*HplMsp430GeneralIOC.P40*/HplMsp430GeneralIOP__24__IO__clr(void );
static void /*HplMsp430GeneralIOC.P40*/HplMsp430GeneralIOP__24__IO__toggle(void );




static inline void /*HplMsp430GeneralIOC.P40*/HplMsp430GeneralIOP__24__IO__makeOutput(void );
#line 56
static void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__set(void );
static inline void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__clr(void );
static inline void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__toggle(void );




static inline void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__makeOutput(void );
#line 56
static void /*HplMsp430GeneralIOC.P43*/HplMsp430GeneralIOP__27__IO__set(void );
static inline void /*HplMsp430GeneralIOC.P43*/HplMsp430GeneralIOP__27__IO__clr(void );
static inline void /*HplMsp430GeneralIOC.P43*/HplMsp430GeneralIOP__27__IO__toggle(void );




static inline void /*HplMsp430GeneralIOC.P43*/HplMsp430GeneralIOP__27__IO__makeOutput(void );



static inline void /*HplMsp430GeneralIOC.P51*/HplMsp430GeneralIOP__33__IO__selectIOFunc(void );
#line 67
static inline void /*HplMsp430GeneralIOC.P52*/HplMsp430GeneralIOP__34__IO__selectIOFunc(void );
#line 67
static inline void /*HplMsp430GeneralIOC.P53*/HplMsp430GeneralIOP__35__IO__selectIOFunc(void );
# 45 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__get(void );
static bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__isOverflowPending(void );
# 82 "../../../../tos/lib/timer/Counter.nc"
static void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__overflow(void );
# 49 "../../../../tos/chips/msp430/timer/Msp430CounterC.nc"
static inline uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__get(void );




static inline bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__isOverflowPending(void );









static inline void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__overflow(void );
# 42 "../../../../tos/interfaces/GeneralIO.nc"
static void LedsP__Led0__toggle(void );



static void LedsP__Led0__makeOutput(void );
#line 40
static void LedsP__Led0__set(void );
static void LedsP__Led0__clr(void );
static void LedsP__Led1__toggle(void );



static void LedsP__Led1__makeOutput(void );
#line 40
static void LedsP__Led1__set(void );
static void LedsP__Led1__clr(void );
static void LedsP__Led2__toggle(void );



static void LedsP__Led2__makeOutput(void );
#line 40
static void LedsP__Led2__set(void );
static void LedsP__Led2__clr(void );
# 57 "../../../../tos/platforms/shimmer2r/LedsP.nc"
static inline error_t LedsP__Init__init(void );
#line 75
static inline void LedsP__Leds__led0On(void );




static inline void LedsP__Leds__led0Off(void );




static inline void LedsP__Leds__led0Toggle(void );




static inline void LedsP__Leds__led1On(void );




static inline void LedsP__Leds__led1Off(void );




static inline void LedsP__Leds__led1Toggle(void );




static inline void LedsP__Leds__led2On(void );




static inline void LedsP__Leds__led2Off(void );




static inline void LedsP__Leds__led2Toggle(void );
# 58 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__toggle(void );
#line 85
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__makeOutput(void );
#line 48
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__set(void );




static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__clr(void );
# 48 "../../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__set(void );
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__clr(void );
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__toggle(void );



static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__makeOutput(void );
# 58 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__toggle(void );
#line 85
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__makeOutput(void );
#line 48
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__set(void );




static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__clr(void );
# 48 "../../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__set(void );
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__clr(void );
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__toggle(void );



static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__makeOutput(void );
# 58 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__toggle(void );
#line 85
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__makeOutput(void );
#line 48
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__set(void );




static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__clr(void );
# 48 "../../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__set(void );
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__clr(void );
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__toggle(void );



static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__makeOutput(void );
# 90 "../../../../tos/interfaces/ArbiterInfo.nc"
static bool /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__inUse(void );







static uint8_t /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__userId(void );
# 54 "../../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__rxDone(
# 39 "../../../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x7fa72e297600, 
# 54 "../../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
uint8_t data);
#line 49
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__txDone(
# 39 "../../../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x7fa72e297600);
# 39 "../../../../tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc"
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__I2CInterrupts__fired(
# 40 "../../../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x7fa72e2964e0);








static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__txDone(void );




static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__rxDone(uint8_t data);




static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawI2CInterrupts__fired(void );




static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__txDone(uint8_t id);
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__rxDone(uint8_t id, uint8_t data);
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__I2CInterrupts__default__fired(uint8_t id);
# 49 "../../../../tos/system/FcfsResourceQueueC.nc"
enum /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0____nesc_unnamed4356 {
#line 49
  FcfsResourceQueueC__0__NO_ENTRY = 0xFF
};
uint8_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__resQ[1U];
uint8_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__qHead = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
uint8_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__qTail = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

static inline error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__Init__init(void );




static inline bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );







static inline resource_client_id_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
# 61 "../../../../tos/interfaces/ResourceRequested.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__immediateRequested(
# 55 "../../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fa72e256cf0);
# 65 "../../../../tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(
# 60 "../../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fa72e252240);
# 59 "../../../../tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__configure(
# 60 "../../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fa72e252240);
# 53 "../../../../tos/interfaces/ResourceQueue.nc"
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__dequeue(void );
# 46 "../../../../tos/interfaces/ResourceDefaultOwner.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted(void );
#line 81
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__immediateRequested(void );
# 102 "../../../../tos/interfaces/Resource.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__granted(
# 54 "../../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fa72e257a50);
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__postTask(void );
# 75 "../../../../tos/system/ArbiterP.nc"
enum /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0____nesc_unnamed4357 {
#line 75
  ArbiterP__0__grantedTask = 8U
};
#line 75
typedef int /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0____nesc_sillytask_grantedTask[/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask];
#line 67
enum /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0____nesc_unnamed4358 {
#line 67
  ArbiterP__0__RES_CONTROLLED, ArbiterP__0__RES_GRANTING, ArbiterP__0__RES_IMM_GRANTING, ArbiterP__0__RES_BUSY
};
#line 68
enum /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0____nesc_unnamed4359 {
#line 68
  ArbiterP__0__default_owner_id = 1U
};
#line 69
enum /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0____nesc_unnamed4360 {
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
# 97 "../../../../tos/chips/msp430/usart/HplMsp430Usart.nc"
static void HplMsp430I2C0P__HplUsart__resetUsart(bool reset);
#line 128
static void HplMsp430I2C0P__HplUsart__disableUart(void );
#line 158
static void HplMsp430I2C0P__HplUsart__disableSpi(void );
# 78 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430I2C0P__UCLK__makeInput(void );
#line 92
static void HplMsp430I2C0P__UCLK__selectModuleFunc(void );
#line 78
static void HplMsp430I2C0P__SIMO__makeInput(void );
#line 92
static void HplMsp430I2C0P__SIMO__selectModuleFunc(void );
# 49 "../../../../tos/platforms/shimmer/chips/msp430/HplMsp430I2C0P.nc"
static volatile uint8_t HplMsp430I2C0P__U0CTL __asm ("0x0070");
static volatile uint8_t HplMsp430I2C0P__I2CTCTL __asm ("0x0071");


static volatile uint8_t HplMsp430I2C0P__I2CIE __asm ("0x0050");

static inline bool HplMsp430I2C0P__HplI2C__isI2C(void );



static void HplMsp430I2C0P__HplI2C__clearModeI2C(void );






static inline void HplMsp430I2C0P__HplI2C__setModeI2C(msp430_i2c_union_config_t *config);
#line 223
static inline bool HplMsp430I2C0P__HplI2C__isStartDetectPending(void );







static inline bool HplMsp430I2C0P__HplI2C__isGeneralCallPending(void );
#line 247
static inline bool HplMsp430I2C0P__HplI2C__isAccessReadyPending(void );







static inline bool HplMsp430I2C0P__HplI2C__isOwnAddressPending(void );







static inline bool HplMsp430I2C0P__HplI2C__isNoAckPending(void );







static inline bool HplMsp430I2C0P__HplI2C__isArbitrationLostPending(void );
# 120 "../../../../tos/interfaces/Resource.nc"
static error_t ShimmerSerialP__Resource__release(void );
#line 97
static error_t ShimmerSerialP__Resource__immediateRequest(void );
# 42 "../../../../tos/platforms/shimmer2r/ShimmerSerialP.nc"
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
# 51 "../../../../tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__offset(void );


static inline uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen);


static inline uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen);
# 48 "../../../../tos/system/QueueC.nc"
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
# 97 "../../../../tos/interfaces/Queue.nc"
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
# 80 "../../../../tos/interfaces/AMSend.nc"
static error_t PrintfP__AMSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 126 "../../../../tos/interfaces/Packet.nc"
static 
#line 123
void * 


PrintfP__Packet__getPayload(
#line 121
message_t * msg, 




uint8_t len);
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t PrintfP__retrySend__postTask(void );
# 114 "../../../../tos/lib/printf/PrintfP.nc"
enum PrintfP____nesc_unnamed4361 {
#line 114
  PrintfP__retrySend = 9U
};
#line 114
typedef int PrintfP____nesc_sillytask_retrySend[PrintfP__retrySend];
#line 101
enum PrintfP____nesc_unnamed4362 {
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
# 49 "../../../../tos/lib/printf/Putchar.nc"
static int PutcharP__Putchar__putchar(int c);
# 98 "../../../../tos/lib/printf/PutcharP.nc"
static inline error_t PutcharP__Init__init(void );








int putchar(int c) __attribute((noinline))   ;
# 104 "../../../../tos/interfaces/SplitControl.nc"
static error_t SerialStartP__SerialControl__start(void );
# 44 "../../../../tos/lib/serial/SerialStartP.nc"
static inline void SerialStartP__Boot__booted(void );



static inline void SerialStartP__SerialControl__startDone(error_t error);
static inline void SerialStartP__SerialControl__stopDone(error_t error);
# 46 "../../../../tos/platforms/shimmer/shimmerAnalogSetup.nc"
static void BtStreamC__shimmerAnalogSetup__addAccelInputs(void );
#line 79
static void BtStreamC__shimmerAnalogSetup__triggerConversion(void );



static uint8_t BtStreamC__shimmerAnalogSetup__getNumberOfChannels(void );
#line 52
static void BtStreamC__shimmerAnalogSetup__addECGInputs(void );
#line 64
static void BtStreamC__shimmerAnalogSetup__addAnExInput(uint8_t channel);





static void BtStreamC__shimmerAnalogSetup__reset(void );
#line 61
static void BtStreamC__shimmerAnalogSetup__addEMGInput(void );





static void BtStreamC__shimmerAnalogSetup__addStrainGaugeInputs(void );
#line 58
static void BtStreamC__shimmerAnalogSetup__addGSRInput(void );
#line 77
static void BtStreamC__shimmerAnalogSetup__finishADCSetup(uint16_t *buffer);
#line 49
static void BtStreamC__shimmerAnalogSetup__addGyroInputs(void );
#line 81
static void BtStreamC__shimmerAnalogSetup__stopConversion(void );
# 62 "../../../../tos/interfaces/Init.nc"
static error_t BtStreamC__SampleTimerInit__init(void );
# 66 "../../../../tos/lib/timer/Alarm.nc"
static void BtStreamC__BlinkTimer__start(BtStreamC__BlinkTimer__size_type dt);






static void BtStreamC__BlinkTimer__stop(void );
# 36 "BtCommandParser.nc"
static void BtStreamC__BtCommandParser__handleByte(uint8_t data);
# 67 "../../../../tos/interfaces/Notify.nc"
static error_t BtStreamC__UserButton__disable(void );
#line 59
static error_t BtStreamC__UserButton__enable(void );
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t BtStreamC__sendResponse__postTask(void );
# 41 "../../../../tos/platforms/shimmer2/chips/hmc5843/Magnetometer.nc"
static void BtStreamC__Magnetometer__disableBus(void );
#line 66
static void BtStreamC__Magnetometer__convertRegistersToData(uint8_t *readBuf, int16_t *data);
#line 57
static error_t BtStreamC__Magnetometer__readData(void );
#line 54
static error_t BtStreamC__Magnetometer__runContinuousConversion(void );
#line 44
static error_t BtStreamC__Magnetometer__setOutputRate(uint8_t rate);


static error_t BtStreamC__Magnetometer__setGain(uint8_t gain);
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t BtStreamC__startConfigTimer__postTask(void );
# 56 "../../../../tos/interfaces/InternalFlash.nc"
static error_t BtStreamC__InternalFlash__read(void *addr, 
#line 50
void * buf, 





uint16_t size);
#line 68
static error_t BtStreamC__InternalFlash__write(void *addr, 
#line 63
void * buf, 




uint16_t size);
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t BtStreamC__ProcessCommand__postTask(void );
# 61 "../../../../tos/lib/timer/LocalTime.nc"
static uint32_t BtStreamC__LocalTime__get(void );
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t BtStreamC__gsr_range__postTask(void );
#line 67
static error_t BtStreamC__ToggleLed__postTask(void );
# 62 "../../../../tos/interfaces/Init.nc"
static error_t BtStreamC__DigitalHeartInit__init(void );
# 52 "../../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void BtStreamC__DockInterrupt__clear(void );
#line 67
static void BtStreamC__DockInterrupt__edge(bool low_to_high);
#line 42
static void BtStreamC__DockInterrupt__enable(void );
#line 59
static bool BtStreamC__DockInterrupt__getValue(void );
# 66 "../../../../tos/lib/timer/Alarm.nc"
static void BtStreamC__SampleTimer__start(BtStreamC__SampleTimer__size_type dt);






static void BtStreamC__SampleTimer__stop(void );
# 62 "../../../../tos/interfaces/Init.nc"
static error_t BtStreamC__GsrInit__init(void );
#line 62
static error_t BtStreamC__StrainInit__init(void );
#line 62
static error_t BtStreamC__BlinkTimerInit__init(void );
# 102 "../../../../tos/chips/msp430/dma/Msp430DmaChannel.nc"
static error_t BtStreamC__DMA0__stopTransfer(void );
#line 91
static error_t BtStreamC__DMA0__repeatTransfer(void *src_addr, void *dst_addr, 
uint16_t size);
# 41 "../../../../tos/platforms/shimmer/chips/msp430/FastClock.nc"
static void BtStreamC__FastClock__setSMCLK(uint8_t mhz);
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t BtStreamC__clockin_result__postTask(void );
# 62 "../../../../tos/interfaces/Init.nc"
static error_t BtStreamC__BluetoothInit__init(void );
# 66 "../../../../tos/platforms/shimmer/chips/gsr/Gsr.nc"
static uint8_t BtStreamC__Gsr__controlRange(uint16_t ADC_val, uint8_t active_resistor);
#line 46
static void BtStreamC__Gsr__setRange(uint8_t range);
#line 81
static bool BtStreamC__Gsr__smoothTransition(uint8_t *dummy_active_resistor, uint32_t sampling_period);
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t BtStreamC__stopSensing__postTask(void );
# 95 "../../../../tos/interfaces/StdControl.nc"
static error_t BtStreamC__GyroStdControl__start(void );









static error_t BtStreamC__GyroStdControl__stop(void );
# 36 "../../../../tos/platforms/shimmer2/chips/straingauge/StrainGauge.nc"
static void BtStreamC__StrainGauge__powerOn(void );

static void BtStreamC__StrainGauge__powerOff(void );
# 62 "../../../../tos/platforms/shimmer2r/Leds.nc"
static void BtStreamC__Leds__led0Off(void );





static void BtStreamC__Leds__led0Toggle(void );




static void BtStreamC__Leds__led1On(void );










static void BtStreamC__Leds__led1Toggle(void );
#line 101
static void BtStreamC__Leds__led2Toggle(void );
#line 78
static void BtStreamC__Leds__led1Off(void );
#line 95
static void BtStreamC__Leds__led2Off(void );
#line 57
static void BtStreamC__Leds__led0On(void );
#line 90
static void BtStreamC__Leds__led2On(void );
# 64 "../../../../tos/lib/timer/Timer.nc"
static void BtStreamC__SetupTimer__startPeriodic(uint32_t dt);
#line 78
static void BtStreamC__SetupTimer__stop(void );
# 62 "../../../../tos/interfaces/Init.nc"
static error_t BtStreamC__FastClockInit__init(void );
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t BtStreamC__ConfigureChannelsTask__postTask(void );
#line 67
static error_t BtStreamC__sendSensorData__postTask(void );
#line 67
static error_t BtStreamC__startSensors__postTask(void );
# 62 "../../../../tos/interfaces/Init.nc"
static error_t BtStreamC__GyroInit__init(void );
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t BtStreamC__collect_results__postTask(void );
# 62 "../../../../tos/interfaces/Init.nc"
static error_t BtStreamC__AccelInit__init(void );
# 51 "../../../../tos/platforms/shimmer/chips/bluetooth/Bluetooth.nc"
static error_t BtStreamC__Bluetooth__write(const uint8_t *buf, uint8_t len);
#line 74
static void BtStreamC__Bluetooth__disableRemoteConfig(bool disableConfig);
# 95 "../../../../tos/interfaces/StdControl.nc"
static error_t BtStreamC__BTStdControl__start(void );
# 16 "../../../../tos/platforms/shimmer2r/CRYPTO.nc"
static BtStreamC__CRYPTO__skipjack_encrypt(const unsigned char *pt, unsigned char *ct, skipjack_key *skey);
#line 15
static BtStreamC__CRYPTO__skipjack_setup(const unsigned char *key, int keylen, int num_rounds, skipjack_key *skey);
# 54 "../../../../tos/platforms/shimmer/chips/mma7260/Mma_Accel.nc"
static void BtStreamC__Accel__setSensitivity(uint8_t sensitivity);
#line 47
static void BtStreamC__Accel__wake(bool wakeup);
# 62 "../../../../tos/interfaces/Init.nc"
static error_t BtStreamC__MagInit__init(void );
# 182 "BtStreamC.nc"
enum BtStreamC____nesc_unnamed4363 {
#line 182
  BtStreamC__ToggleLed = 10U
};
#line 182
typedef int BtStreamC____nesc_sillytask_ToggleLed[BtStreamC__ToggleLed];
#line 199
enum BtStreamC____nesc_unnamed4364 {
#line 199
  BtStreamC__startSensors = 11U
};
#line 199
typedef int BtStreamC____nesc_sillytask_startSensors[BtStreamC__startSensors];
#line 264
enum BtStreamC____nesc_unnamed4365 {
#line 264
  BtStreamC__ConfigureChannelsTask = 12U
};
#line 264
typedef int BtStreamC____nesc_sillytask_ConfigureChannelsTask[BtStreamC__ConfigureChannelsTask];




enum BtStreamC____nesc_unnamed4366 {
#line 269
  BtStreamC__stopSensing = 13U
};
#line 269
typedef int BtStreamC____nesc_sillytask_stopSensing[BtStreamC__stopSensing];
#line 332
enum BtStreamC____nesc_unnamed4367 {
#line 332
  BtStreamC__sendSensorData = 14U
};
#line 332
typedef int BtStreamC____nesc_sillytask_sendSensorData[BtStreamC__sendSensorData];
#line 352
enum BtStreamC____nesc_unnamed4368 {
#line 352
  BtStreamC__sendResponse = 15U
};
#line 352
typedef int BtStreamC____nesc_sillytask_sendResponse[BtStreamC__sendResponse];
#line 479
enum BtStreamC____nesc_unnamed4369 {
#line 479
  BtStreamC__startConfigTimer = 16U
};
#line 479
typedef int BtStreamC____nesc_sillytask_startConfigTimer[BtStreamC__startConfigTimer];




enum BtStreamC____nesc_unnamed4370 {
#line 484
  BtStreamC__ProcessCommand = 17U
};
#line 484
typedef int BtStreamC____nesc_sillytask_ProcessCommand[BtStreamC__ProcessCommand];
#line 709
enum BtStreamC____nesc_unnamed4371 {
#line 709
  BtStreamC__collect_results = 18U
};
#line 709
typedef int BtStreamC____nesc_sillytask_collect_results[BtStreamC__collect_results];
#line 746
enum BtStreamC____nesc_unnamed4372 {
#line 746
  BtStreamC__clockin_result = 19U
};
#line 746
typedef int BtStreamC____nesc_sillytask_clockin_result[BtStreamC__clockin_result];









enum BtStreamC____nesc_unnamed4373 {
#line 756
  BtStreamC__gsr_range = 20U
};
#line 756
typedef int BtStreamC____nesc_sillytask_gsr_range[BtStreamC__gsr_range];
#line 103
static inline void BtStreamC__init(void );
static void BtStreamC__configure_channels(void );
static inline void BtStreamC__prepareDataPacket(void );

uint8_t BtStreamC__res_packet[RESPONSE_PACKET_SIZE];
#line 107
uint8_t BtStreamC__readBuf[7];
uint8_t BtStreamC__tx_packet0[255];
#line 108
uint8_t BtStreamC__tx_packet1[255];
uint8_t *BtStreamC__current_tx_packet;
#line 109
uint8_t BtStreamC__buffer_iteration;

uint8_t BtStreamC__nbr_adc_chans;
#line 111
uint8_t BtStreamC__nbr_1byte_digi_chans;
#line 111
uint8_t BtStreamC__nbr_2byte_digi_chans;
#line 111
uint8_t BtStreamC__current_buffer;
int8_t BtStreamC__sbuf0[MAX_NUM_2_BYTE_CHANNELS * 2 + MAX_NUM_1_BYTE_CHANNELS];
#line 112
int8_t BtStreamC__sbuf1[MAX_NUM_2_BYTE_CHANNELS * 2 + MAX_NUM_1_BYTE_CHANNELS];
uint16_t BtStreamC__timestamp0;
#line 113
uint16_t BtStreamC__timestamp1;

bool BtStreamC__sensing;
#line 115
bool BtStreamC__enable_sending;
#line 115
bool BtStreamC__bt_connected;
#line 115
bool BtStreamC__command_pending;
#line 115
bool BtStreamC__command_mode_complete;
#line 115
bool BtStreamC__mag_read_pending;
#line 115
bool BtStreamC__stop_sensing_pending;
bool BtStreamC__wasSensing;
#line 116
bool BtStreamC__configureChannels;
#line 116
bool BtStreamC__changeMagSamplingRate;
#line 116
bool BtStreamC__magStartContinuousConversion;
#line 116
bool BtStreamC__sendAck;
#line 116
bool BtStreamC__inquiryResponse;
#line 116
bool BtStreamC__samplingRateResponse;
#line 116
bool BtStreamC__accelRangeResponse;
#line 116
bool 
BtStreamC__configSetupByte0Response;
#line 117
#line 116
bool 
BtStreamC__gsrRangeResponse;
#line 117
#line 116
bool 
BtStreamC__shimmerVersionResponse;
#line 117
#line 116
bool 
BtStreamC__fwVersionResponse;
#line 117
#line 116
bool 
BtStreamC__blinkLedResponse;
#line 117
#line 116
bool 
BtStreamC__bufferSizeResponse;
#line 117
#line 116
bool 
BtStreamC__stop_sensing;
#line 116
bool 

BtStreamC__magGainResponse;
#line 118
#line 116
bool 

BtStreamC__magSamplingRateResponse;

uint8_t BtStreamC__g_arg_size;
#line 120
uint8_t BtStreamC__g_arg[MAX_COMMAND_ARG_SIZE];
uint8_t BtStreamC__g_action;


uint8_t BtStreamC__stored_config[NV_NUM_CONFIG_BYTES];
uint8_t BtStreamC__channel_contents[MAX_NUM_CHANNELS];
#line 125
uint8_t BtStreamC__buffered_buffer_size;

bool BtStreamC__accelCalibrationResponse;
#line 127
bool BtStreamC__gyroCalibrationResponse;
#line 127
bool BtStreamC__magCalibrationResponse;
#line 127
bool BtStreamC__emgCalibrationResponse;
#line 127
bool BtStreamC__ecgCalibrationResponse;
#line 127
bool BtStreamC__allCalibrationResponse;


uint8_t BtStreamC__gsr_active_resistor;
uint16_t BtStreamC__last_GSR_val;


uint8_t BtStreamC__selectedLed;
#line 134
uint8_t BtStreamC__warningLedCount;
bool BtStreamC__ledOn;
#line 135
bool BtStreamC__activityLed;
#line 135
bool BtStreamC__warningLed;


bool BtStreamC__beat_flag;
uint32_t BtStreamC__beat_time;


static __inline void BtStreamC__SetLedFunc(void );
#line 155
static __inline void BtStreamC__ClearLedFunc(void );
#line 168
static __inline void BtStreamC__ToggleLedFunc(void );
#line 182
static inline void BtStreamC__ToggleLed__runTask(void );




static void BtStreamC__startStreaming(void );
#line 199
static inline void BtStreamC__startSensors__runTask(void );
#line 264
static inline void BtStreamC__ConfigureChannelsTask__runTask(void );




static inline void BtStreamC__stopSensing__runTask(void );
#line 332
static inline void BtStreamC__sendSensorData__runTask(void );
#line 352
static inline void BtStreamC__sendResponse__runTask(void );
#line 479
static inline void BtStreamC__startConfigTimer__runTask(void );




static inline void BtStreamC__ProcessCommand__runTask(void );
#line 709
static inline void BtStreamC__collect_results__runTask(void );
#line 746
static inline void BtStreamC__clockin_result__runTask(void );









static inline void BtStreamC__gsr_range__runTask(void );
#line 791
static inline void BtStreamC__init(void );
#line 894
static void BtStreamC__configure_channels(void );
#line 998
static inline void BtStreamC__prepareDataPacket(void );
#line 1095
static inline void BtStreamC__Boot__booted(void );





static inline void BtStreamC__Bluetooth__connectionMade(uint8_t status);







static inline void BtStreamC__Bluetooth__commandModeEnded(void );







static inline void BtStreamC__Bluetooth__connectionClosed(uint8_t reason);









static inline void BtStreamC__Bluetooth__dataAvailable(uint8_t data);





static inline void BtStreamC__Bluetooth__writeDone(void );




static inline void BtStreamC__SetupTimer__fired(void );






static inline void BtStreamC__BlinkTimer__fired(void );
#line 1181
static inline void BtStreamC__SampleTimer__fired(void );
#line 1198
static inline void BtStreamC__DMA0__transferDone(error_t success);
#line 1215
static void BtStreamC__BtCommandParser__activate(uint8_t action, uint8_t arg_size, uint8_t *arg);
#line 1229
static inline void BtStreamC__GyroBoard__buttonPressed(void );



static inline void BtStreamC__Magnetometer__readDone(uint8_t *data, error_t success);







static inline void BtStreamC__Magnetometer__writeDone(error_t success);
#line 1253
static inline void BtStreamC__DigitalHeartRate__beat(uint32_t time);




static inline void BtStreamC__DockInterrupt__fired(void );
#line 1275
static inline void BtStreamC__UserButton__notify(button_state_t val);
# 41 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*BtStreamAppC.SampleTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEvent(uint16_t time);

static void /*BtStreamAppC.SampleTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEventFromNow(uint16_t delta);
# 45 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*BtStreamAppC.SampleTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__get(void );
# 78 "../../../../tos/lib/timer/Alarm.nc"
static void /*BtStreamAppC.SampleTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__fired(void );
# 57 "../../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static void /*BtStreamAppC.SampleTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__enableEvents(void );
#line 47
static void /*BtStreamAppC.SampleTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__setControlAsCompare(void );










static void /*BtStreamAppC.SampleTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents(void );
#line 44
static void /*BtStreamAppC.SampleTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__clearPendingInterrupt(void );
# 53 "../../../../tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline error_t /*BtStreamAppC.SampleTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Init__init(void );
#line 65
static inline void /*BtStreamAppC.SampleTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__stop(void );




static inline void /*BtStreamAppC.SampleTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__fired(void );










static inline void /*BtStreamAppC.SampleTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__startAt(uint16_t t0, uint16_t dt);
#line 114
static inline void /*BtStreamAppC.SampleTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__overflow(void );
# 64 "../../../../tos/lib/timer/Counter.nc"
static /*CounterMilli16C.Transform*/TransformCounterC__0__CounterFrom__size_type /*CounterMilli16C.Transform*/TransformCounterC__0__CounterFrom__get(void );






static bool /*CounterMilli16C.Transform*/TransformCounterC__0__CounterFrom__isOverflowPending(void );










static void /*CounterMilli16C.Transform*/TransformCounterC__0__Counter__overflow(void );
# 67 "../../../../tos/lib/timer/TransformCounterC.nc"
/*CounterMilli16C.Transform*/TransformCounterC__0__upper_count_type /*CounterMilli16C.Transform*/TransformCounterC__0__m_upper;

enum /*CounterMilli16C.Transform*/TransformCounterC__0____nesc_unnamed4374 {

  TransformCounterC__0__LOW_SHIFT_RIGHT = 5, 
  TransformCounterC__0__HIGH_SHIFT_LEFT = 8 * sizeof(/*CounterMilli16C.Transform*/TransformCounterC__0__from_size_type ) - /*CounterMilli16C.Transform*/TransformCounterC__0__LOW_SHIFT_RIGHT, 
  TransformCounterC__0__NUM_UPPER_BITS = 8 * sizeof(/*CounterMilli16C.Transform*/TransformCounterC__0__to_size_type ) - 8 * sizeof(/*CounterMilli16C.Transform*/TransformCounterC__0__from_size_type ) + 5, 



  TransformCounterC__0__OVERFLOW_MASK = /*CounterMilli16C.Transform*/TransformCounterC__0__NUM_UPPER_BITS ? ((/*CounterMilli16C.Transform*/TransformCounterC__0__upper_count_type )2 << (/*CounterMilli16C.Transform*/TransformCounterC__0__NUM_UPPER_BITS - 1)) - 1 : 0
};

static /*CounterMilli16C.Transform*/TransformCounterC__0__to_size_type /*CounterMilli16C.Transform*/TransformCounterC__0__Counter__get(void );
#line 133
static inline void /*CounterMilli16C.Transform*/TransformCounterC__0__CounterFrom__overflow(void );
# 78 "../../../../tos/lib/timer/Alarm.nc"
static void /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__Alarm__fired(void );
#line 103
static void /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__AlarmFrom__startAt(/*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__AlarmFrom__size_type t0, /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__AlarmFrom__size_type dt);
#line 73
static void /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__AlarmFrom__stop(void );
# 64 "../../../../tos/lib/timer/Counter.nc"
static /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__Counter__size_type /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__Counter__get(void );
# 77 "../../../../tos/lib/timer/TransformAlarmC.nc"
/*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__to_size_type /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__m_t0;
/*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__to_size_type /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__m_dt;

enum /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0____nesc_unnamed4375 {

  TransformAlarmC__0__MAX_DELAY_LOG2 = 8 * sizeof(/*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__from_size_type ) - 1 - 5, 
  TransformAlarmC__0__MAX_DELAY = (/*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__to_size_type )1 << /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__MAX_DELAY_LOG2
};

static inline /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__to_size_type /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__Alarm__getNow(void );
#line 102
static inline void /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__Alarm__stop(void );




static void /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__set_alarm(void );
#line 147
static void /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__Alarm__startAt(/*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__to_size_type t0, /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__to_size_type dt);









static inline void /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__Alarm__start(/*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__to_size_type dt);




static inline void /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__AlarmFrom__fired(void );
#line 177
static inline void /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__Counter__overflow(void );
# 41 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEvent(uint16_t time);

static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEventFromNow(uint16_t delta);
# 45 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__get(void );
# 78 "../../../../tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__fired(void );
# 57 "../../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__enableEvents(void );
#line 47
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__setControlAsCompare(void );










static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__disableEvents(void );
#line 44
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__clearPendingInterrupt(void );
# 53 "../../../../tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline error_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Init__init(void );
#line 65
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__stop(void );




static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__fired(void );










static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__startAt(uint16_t t0, uint16_t dt);
#line 114
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__overflow(void );
# 64 "../../../../tos/lib/timer/Counter.nc"
static /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__size_type /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__get(void );






static bool /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__isOverflowPending(void );










static void /*CounterMilli32C.Transform*/TransformCounterC__1__Counter__overflow(void );
# 67 "../../../../tos/lib/timer/TransformCounterC.nc"
/*CounterMilli32C.Transform*/TransformCounterC__1__upper_count_type /*CounterMilli32C.Transform*/TransformCounterC__1__m_upper;

enum /*CounterMilli32C.Transform*/TransformCounterC__1____nesc_unnamed4376 {

  TransformCounterC__1__LOW_SHIFT_RIGHT = 5, 
  TransformCounterC__1__HIGH_SHIFT_LEFT = 8 * sizeof(/*CounterMilli32C.Transform*/TransformCounterC__1__from_size_type ) - /*CounterMilli32C.Transform*/TransformCounterC__1__LOW_SHIFT_RIGHT, 
  TransformCounterC__1__NUM_UPPER_BITS = 8 * sizeof(/*CounterMilli32C.Transform*/TransformCounterC__1__to_size_type ) - 8 * sizeof(/*CounterMilli32C.Transform*/TransformCounterC__1__from_size_type ) + 5, 



  TransformCounterC__1__OVERFLOW_MASK = /*CounterMilli32C.Transform*/TransformCounterC__1__NUM_UPPER_BITS ? ((/*CounterMilli32C.Transform*/TransformCounterC__1__upper_count_type )2 << (/*CounterMilli32C.Transform*/TransformCounterC__1__NUM_UPPER_BITS - 1)) - 1 : 0
};

static /*CounterMilli32C.Transform*/TransformCounterC__1__to_size_type /*CounterMilli32C.Transform*/TransformCounterC__1__Counter__get(void );
#line 133
static inline void /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__overflow(void );
# 78 "../../../../tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__fired(void );
#line 103
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__size_type dt);
#line 73
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__stop(void );
# 64 "../../../../tos/lib/timer/Counter.nc"
static /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Counter__size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Counter__get(void );
# 77 "../../../../tos/lib/timer/TransformAlarmC.nc"
/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_t0;
/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_dt;

enum /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1____nesc_unnamed4377 {

  TransformAlarmC__1__MAX_DELAY_LOG2 = 8 * sizeof(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__from_size_type ) - 1 - 5, 
  TransformAlarmC__1__MAX_DELAY = (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type )1 << /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__MAX_DELAY_LOG2
};

static inline /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__getNow(void );




static inline /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__getAlarm(void );










static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__stop(void );




static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__set_alarm(void );
#line 147
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type dt);
#line 162
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__fired(void );
#line 177
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Counter__overflow(void );
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void );
# 109 "../../../../tos/lib/timer/Alarm.nc"
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void );
#line 103
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt);
#line 116
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void );
#line 73
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void );
# 83 "../../../../tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void );
# 74 "../../../../tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_unnamed4378 {
#line 74
  AlarmToTimerC__0__fired = 21U
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
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void );
# 136 "../../../../tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void );
#line 129
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(
# 48 "../../../../tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7fa72dcb7020);
#line 71
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4379 {
#line 71
  VirtualizeTimerC__0__updateFromTimer = 22U
};
#line 71
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer];
#line 53
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4380 {

  VirtualizeTimerC__0__NUM_TIMERS = 4U, 
  VirtualizeTimerC__0__END_OF_LIST = 255
};








#line 59
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4381 {

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




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);









static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt);




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt);




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num);
#line 204
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num);
# 58 "../../../../tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 41 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*BtStreamAppC.BlinkTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__setEvent(uint16_t time);

static void /*BtStreamAppC.BlinkTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__setEventFromNow(uint16_t delta);
# 45 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*BtStreamAppC.BlinkTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Timer__get(void );
# 78 "../../../../tos/lib/timer/Alarm.nc"
static void /*BtStreamAppC.BlinkTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Alarm__fired(void );
# 57 "../../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static void /*BtStreamAppC.BlinkTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__enableEvents(void );
#line 47
static void /*BtStreamAppC.BlinkTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__setControlAsCompare(void );










static void /*BtStreamAppC.BlinkTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__disableEvents(void );
#line 44
static void /*BtStreamAppC.BlinkTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__clearPendingInterrupt(void );
# 53 "../../../../tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline error_t /*BtStreamAppC.BlinkTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Init__init(void );
#line 65
static inline void /*BtStreamAppC.BlinkTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Alarm__stop(void );




static inline void /*BtStreamAppC.BlinkTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__fired(void );










static inline void /*BtStreamAppC.BlinkTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Alarm__startAt(uint16_t t0, uint16_t dt);
#line 114
static inline void /*BtStreamAppC.BlinkTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Timer__overflow(void );
# 78 "../../../../tos/lib/timer/Alarm.nc"
static void /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__Alarm__fired(void );
#line 103
static void /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__AlarmFrom__startAt(/*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__AlarmFrom__size_type t0, /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__AlarmFrom__size_type dt);
#line 73
static void /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__AlarmFrom__stop(void );
# 64 "../../../../tos/lib/timer/Counter.nc"
static /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__Counter__size_type /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__Counter__get(void );
# 77 "../../../../tos/lib/timer/TransformAlarmC.nc"
/*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__to_size_type /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__m_t0;
/*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__to_size_type /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__m_dt;

enum /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2____nesc_unnamed4382 {

  TransformAlarmC__2__MAX_DELAY_LOG2 = 8 * sizeof(/*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__from_size_type ) - 1 - 5, 
  TransformAlarmC__2__MAX_DELAY = (/*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__to_size_type )1 << /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__MAX_DELAY_LOG2
};

static inline /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__to_size_type /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__Alarm__getNow(void );
#line 102
static inline void /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__Alarm__stop(void );




static void /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__set_alarm(void );
#line 147
static void /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__Alarm__startAt(/*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__to_size_type t0, /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__to_size_type dt);









static inline void /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__Alarm__start(/*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__to_size_type dt);




static inline void /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__AlarmFrom__fired(void );
#line 177
static inline void /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__Counter__overflow(void );
# 64 "../../../../tos/lib/timer/Counter.nc"
static /*Counter32khz32C.Transform*/TransformCounterC__2__CounterFrom__size_type /*Counter32khz32C.Transform*/TransformCounterC__2__CounterFrom__get(void );






static bool /*Counter32khz32C.Transform*/TransformCounterC__2__CounterFrom__isOverflowPending(void );










static void /*Counter32khz32C.Transform*/TransformCounterC__2__Counter__overflow(void );
# 67 "../../../../tos/lib/timer/TransformCounterC.nc"
/*Counter32khz32C.Transform*/TransformCounterC__2__upper_count_type /*Counter32khz32C.Transform*/TransformCounterC__2__m_upper;

enum /*Counter32khz32C.Transform*/TransformCounterC__2____nesc_unnamed4383 {

  TransformCounterC__2__LOW_SHIFT_RIGHT = 0, 
  TransformCounterC__2__HIGH_SHIFT_LEFT = 8 * sizeof(/*Counter32khz32C.Transform*/TransformCounterC__2__from_size_type ) - /*Counter32khz32C.Transform*/TransformCounterC__2__LOW_SHIFT_RIGHT, 
  TransformCounterC__2__NUM_UPPER_BITS = 8 * sizeof(/*Counter32khz32C.Transform*/TransformCounterC__2__to_size_type ) - 8 * sizeof(/*Counter32khz32C.Transform*/TransformCounterC__2__from_size_type ) + 0, 



  TransformCounterC__2__OVERFLOW_MASK = /*Counter32khz32C.Transform*/TransformCounterC__2__NUM_UPPER_BITS ? ((/*Counter32khz32C.Transform*/TransformCounterC__2__upper_count_type )2 << (/*Counter32khz32C.Transform*/TransformCounterC__2__NUM_UPPER_BITS - 1)) - 1 : 0
};

static /*Counter32khz32C.Transform*/TransformCounterC__2__to_size_type /*Counter32khz32C.Transform*/TransformCounterC__2__Counter__get(void );
#line 133
static inline void /*Counter32khz32C.Transform*/TransformCounterC__2__CounterFrom__overflow(void );
# 64 "../../../../tos/lib/timer/Counter.nc"
static /*BtStreamAppC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__size_type /*BtStreamAppC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__get(void );
# 53 "../../../../tos/lib/timer/CounterToLocalTimeC.nc"
static inline uint32_t /*BtStreamAppC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__get(void );




static inline void /*BtStreamAppC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void );
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t RovingNetworksP__runSetCommands__postTask(void );
#line 67
static error_t RovingNetworksP__runMasterCommands__postTask(void );
# 52 "../../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void RovingNetworksP__ConnectionInterrupt__clear(void );
#line 67
static void RovingNetworksP__ConnectionInterrupt__edge(bool low_to_high);
#line 42
static void RovingNetworksP__ConnectionInterrupt__enable(void );
#line 59
static bool RovingNetworksP__ConnectionInterrupt__getValue(void );
# 180 "../../../../tos/chips/msp430/usart/HplMsp430Usart.nc"
static void RovingNetworksP__UARTControl__enableRxIntr(void );
static void RovingNetworksP__UARTControl__enableTxIntr(void );
#line 90
static void RovingNetworksP__UARTControl__setUmctl(uint8_t umctl);
#line 80
static void RovingNetworksP__UARTControl__setUbr(uint16_t ubr);
#line 224
static void RovingNetworksP__UARTControl__tx(uint8_t data);
#line 174
static void RovingNetworksP__UARTControl__setModeUart(msp430_uart_union_config_t *config);
# 52 "../../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void RovingNetworksP__RTSInterrupt__clear(void );
#line 67
static void RovingNetworksP__RTSInterrupt__edge(bool low_to_high);
#line 42
static void RovingNetworksP__RTSInterrupt__enable(void );
#line 59
static bool RovingNetworksP__RTSInterrupt__getValue(void );
# 103 "../../../../tos/platforms/shimmer/chips/bluetooth/Bluetooth.nc"
static void RovingNetworksP__Bluetooth__dataAvailable(uint8_t data);
#line 94
static void RovingNetworksP__Bluetooth__connectionClosed(uint8_t reason);









static void RovingNetworksP__Bluetooth__writeDone(void );
#line 93
static void RovingNetworksP__Bluetooth__connectionMade(uint8_t status);

static void RovingNetworksP__Bluetooth__commandModeEnded(void );
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t RovingNetworksP__sendNextChar__postTask(void );
# 88 "../../../../tos/platforms/shimmer/chips/bluetooth/RovingNetworksP.nc"
enum RovingNetworksP____nesc_unnamed4384 {
#line 88
  RovingNetworksP__sendNextChar = 23U
};
#line 88
typedef int RovingNetworksP____nesc_sillytask_sendNextChar[RovingNetworksP__sendNextChar];
#line 302
enum RovingNetworksP____nesc_unnamed4385 {
#line 302
  RovingNetworksP__runMasterCommands = 24U
};
#line 302
typedef int RovingNetworksP____nesc_sillytask_runMasterCommands[RovingNetworksP__runMasterCommands];
#line 376
enum RovingNetworksP____nesc_unnamed4386 {
#line 376
  RovingNetworksP__runSetCommands = 25U
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
#line 219
static inline void RovingNetworksP__Bluetooth__disableRemoteConfig(bool disableConfig);
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
# 72 "../../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
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
# 64 "../../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
void sig_PORT1_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x0008)))  ;
#line 78
static inline void HplMsp430InterruptP__Port10__default__fired(void );
static inline void HplMsp430InterruptP__Port11__default__fired(void );
static inline void HplMsp430InterruptP__Port12__default__fired(void );

static inline void HplMsp430InterruptP__Port14__default__fired(void );
static inline void HplMsp430InterruptP__Port15__default__fired(void );

static inline void HplMsp430InterruptP__Port17__default__fired(void );



static inline void HplMsp430InterruptP__Port13__enable(void );


static inline void HplMsp430InterruptP__Port16__enable(void );




static inline void HplMsp430InterruptP__Port13__disable(void );




static inline void HplMsp430InterruptP__Port10__clear(void );
static inline void HplMsp430InterruptP__Port11__clear(void );
static inline void HplMsp430InterruptP__Port12__clear(void );
static inline void HplMsp430InterruptP__Port13__clear(void );
static inline void HplMsp430InterruptP__Port14__clear(void );
static inline void HplMsp430InterruptP__Port15__clear(void );
static inline void HplMsp430InterruptP__Port16__clear(void );
static inline void HplMsp430InterruptP__Port17__clear(void );






static inline bool HplMsp430InterruptP__Port16__getValue(void );
#line 136
static inline void HplMsp430InterruptP__Port13__edge(bool l2h);
#line 154
static void HplMsp430InterruptP__Port16__edge(bool l2h);
#line 169
void sig_PORT2_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x0002)))  ;
#line 183
static inline void HplMsp430InterruptP__Port21__default__fired(void );
static inline void HplMsp430InterruptP__Port22__default__fired(void );

static inline void HplMsp430InterruptP__Port24__default__fired(void );
static inline void HplMsp430InterruptP__Port25__default__fired(void );

static inline void HplMsp430InterruptP__Port27__default__fired(void );
static inline void HplMsp430InterruptP__Port20__enable(void );


static inline void HplMsp430InterruptP__Port23__enable(void );


static inline void HplMsp430InterruptP__Port26__enable(void );

static inline void HplMsp430InterruptP__Port20__disable(void );







static inline void HplMsp430InterruptP__Port20__clear(void );
static inline void HplMsp430InterruptP__Port21__clear(void );
static inline void HplMsp430InterruptP__Port22__clear(void );
static inline void HplMsp430InterruptP__Port23__clear(void );
static inline void HplMsp430InterruptP__Port24__clear(void );
static inline void HplMsp430InterruptP__Port25__clear(void );
static inline void HplMsp430InterruptP__Port26__clear(void );
static inline void HplMsp430InterruptP__Port27__clear(void );



static bool HplMsp430InterruptP__Port23__getValue(void );


static inline bool HplMsp430InterruptP__Port26__getValue(void );

static inline void HplMsp430InterruptP__Port20__edge(bool l2h);
#line 240
static void HplMsp430InterruptP__Port23__edge(bool l2h);
#line 258
static void HplMsp430InterruptP__Port26__edge(bool l2h);
# 99 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430Usart1P__UCLK__selectIOFunc(void );
# 54 "../../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void HplMsp430Usart1P__Interrupts__rxDone(uint8_t data);
#line 49
static void HplMsp430Usart1P__Interrupts__txDone(void );
# 99 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430Usart1P__URXD__selectIOFunc(void );
#line 92
static void HplMsp430Usart1P__URXD__selectModuleFunc(void );






static void HplMsp430Usart1P__UTXD__selectIOFunc(void );
#line 92
static void HplMsp430Usart1P__UTXD__selectModuleFunc(void );






static void HplMsp430Usart1P__SOMI__selectIOFunc(void );
#line 99
static void HplMsp430Usart1P__SIMO__selectIOFunc(void );
# 87 "../../../../tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static volatile uint8_t HplMsp430Usart1P__IE2 __asm ("0x0001");
static volatile uint8_t HplMsp430Usart1P__ME2 __asm ("0x0005");
static volatile uint8_t HplMsp430Usart1P__IFG2 __asm ("0x0003");
static volatile uint8_t HplMsp430Usart1P__U1TCTL __asm ("0x0079");
static volatile uint8_t HplMsp430Usart1P__U1RCTL __asm ("0x007A");
static volatile uint8_t HplMsp430Usart1P__U1TXBUF __asm ("0x007F");



void sig_UART1RX_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x0006)))  ;




void sig_UART1TX_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x0004)))  ;
#line 140
static void HplMsp430Usart1P__Usart__setUbr(uint16_t control);










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
# 47 "../../../../tos/platforms/shimmer2r/Mma7361P.nc"
static inline error_t Mma7361P__Init__init(void );
#line 59
static inline void Mma7361P__Accel__wake(bool wakeup);






static inline void Mma7361P__Accel__setSensitivity(uint8_t sensitivity);
# 42 "../../../../tos/chips/msp430/dma/Msp430DmaControl.nc"
static void shimmerAnalogSetupP__Msp430DmaControl__setFlags(bool enable_nmi, bool round_robin, 
bool on_fetch);
#line 41
static void shimmerAnalogSetupP__Msp430DmaControl__init(void );
# 49 "../../../../tos/chips/msp430/dma/Msp430DmaChannel.nc"
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
# 106 "../../../../tos/chips/msp430/adc12/HplAdc12.nc"
static void shimmerAnalogSetupP__HplAdc12__resetIFGs(void );
#line 128
static void shimmerAnalogSetupP__HplAdc12__startConversion(void );
#line 95
static void shimmerAnalogSetupP__HplAdc12__setIEFlags(uint16_t mask);
#line 123
static void shimmerAnalogSetupP__HplAdc12__stopConversion(void );
# 53 "../../../../tos/platforms/shimmer/shimmerAnalogSetupP.nc"
static inline void shimmerAnalogSetupP__initADC12CTL0(void );
static inline void shimmerAnalogSetupP__initADC12CTL1(void );
static void shimmerAnalogSetupP__initADC12MEMCTLx(void );
static inline void shimmerAnalogSetupP__setupDMA(uint16_t *destAddr);
static void shimmerAnalogSetupP__addNewChannels(uint8_t *chans, uint8_t howmany_new);

uint8_t shimmerAnalogSetupP__NUM_ADC_CHANS = 0;
uint8_t shimmerAnalogSetupP__ADC_CHANS[8];

static inline void shimmerAnalogSetupP__shimmerAnalogSetup__addAccelInputs(void );
#line 78
static inline void shimmerAnalogSetupP__shimmerAnalogSetup__addGyroInputs(void );
#line 95
static inline void shimmerAnalogSetupP__shimmerAnalogSetup__addStrainGaugeInputs(void );



static void shimmerAnalogSetupP__shimmerAnalogSetup__addECGInputs(void );
#line 128
static inline void shimmerAnalogSetupP__shimmerAnalogSetup__addGSRInput(void );









static inline void shimmerAnalogSetupP__shimmerAnalogSetup__addEMGInput(void );
#line 151
static void shimmerAnalogSetupP__shimmerAnalogSetup__addAnExInput(uint8_t channel);
#line 174
static inline void shimmerAnalogSetupP__shimmerAnalogSetup__finishADCSetup(uint16_t *buffer);



static inline void shimmerAnalogSetupP__shimmerAnalogSetup__triggerConversion(void );




static inline void shimmerAnalogSetupP__shimmerAnalogSetup__stopConversion(void );





static inline uint8_t shimmerAnalogSetupP__shimmerAnalogSetup__getNumberOfChannels(void );



static inline void shimmerAnalogSetupP__shimmerAnalogSetup__reset(void );



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
# 112 "../../../../tos/chips/msp430/adc12/HplAdc12.nc"
static void HplAdc12P__HplAdc12__conversionDone(uint16_t iv);
# 51 "../../../../tos/chips/msp430/adc12/HplAdc12P.nc"
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
# 39 "../../../../tos/chips/msp430/dma/HplMsp430DmaInterrupt.nc"
static void HplMsp430DmaP__Interrupt__fired(void );
# 50 "../../../../tos/chips/msp430/dma/HplMsp430DmaP.nc"
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
# 85 "../../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
static void /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__transferDone(error_t success);
# 56 "../../../../tos/chips/msp430/dma/HplMsp430DmaXP.nc"
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
# 85 "../../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
static void /*HplMsp430DmaC.Dma1*/HplMsp430DmaXP__1__DMA__transferDone(error_t success);
# 63 "../../../../tos/chips/msp430/dma/HplMsp430DmaXP.nc"
static inline void /*HplMsp430DmaC.Dma1*/HplMsp430DmaXP__1__Interrupt__fired(void );
#line 257
static inline void /*HplMsp430DmaC.Dma1*/HplMsp430DmaXP__1__DMA__reset(void );
# 85 "../../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
static void /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__DMA__transferDone(error_t success);
# 63 "../../../../tos/chips/msp430/dma/HplMsp430DmaXP.nc"
static inline void /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__Interrupt__fired(void );
#line 257
static inline void /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__DMA__reset(void );
# 61 "../../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
static void /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__HplChannel__disableDMA(void );









static void /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__HplChannel__setSrc(void *saddr);
#line 60
static void /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__HplChannel__enableDMA(void );
#line 73
static void /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__HplChannel__setSize(uint16_t sz);

static void /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__HplChannel__setState(dma_channel_state_t s, dma_channel_trigger_t t, void *src, void *dest, uint16_t size);
#line 72
static void /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__HplChannel__setDst(void *daddr);
# 107 "../../../../tos/chips/msp430/dma/Msp430DmaChannel.nc"
static void /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__Channel__transferDone(error_t success);
# 51 "../../../../tos/chips/msp430/dma/Msp430DmaChannelP.nc"
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
# 107 "../../../../tos/chips/msp430/dma/Msp430DmaChannel.nc"
static void /*Msp430DmaC.Channel1P*/Msp430DmaChannelP__1__Channel__transferDone(error_t success);
# 123 "../../../../tos/chips/msp430/dma/Msp430DmaChannelP.nc"
static inline void /*Msp430DmaC.Channel1P*/Msp430DmaChannelP__1__HplChannel__transferDone(error_t error);



static inline void /*Msp430DmaC.Channel1P*/Msp430DmaChannelP__1__Channel__default__transferDone(error_t error);
# 107 "../../../../tos/chips/msp430/dma/Msp430DmaChannel.nc"
static void /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__Channel__transferDone(error_t success);
# 123 "../../../../tos/chips/msp430/dma/Msp430DmaChannelP.nc"
static inline void /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__HplChannel__transferDone(error_t error);



static inline void /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__Channel__default__transferDone(error_t error);
# 83 "../../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
static void Msp430DmaControlP__HplChannel1__reset(void );
# 45 "../../../../tos/chips/msp430/dma/HplMsp430DmaControl.nc"
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
# 83 "../../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
static void Msp430DmaControlP__HplChannel2__reset(void );
#line 83
static void Msp430DmaControlP__HplChannel0__reset(void );
# 55 "../../../../tos/chips/msp430/dma/Msp430DmaControlP.nc"
static inline void Msp430DmaControlP__Control__init(void );






static inline void Msp430DmaControlP__Control__setFlags(bool enable_nmi, bool round_robin, 
bool on_fetch);
#line 76
static inline void Msp430DmaControlP__HplChannel0__transferDone(error_t error);
static inline void Msp430DmaControlP__HplChannel1__transferDone(error_t error);
static inline void Msp430DmaControlP__HplChannel2__transferDone(error_t error);
# 50 "../../../../tos/platforms/shimmer2/chips/gyro/GyroBoard.nc"
static void GyroBoardP__GyroBoard__buttonPressed(void );
# 59 "../../../../tos/interfaces/Notify.nc"
static error_t GyroBoardP__buttonNotify__enable(void );
# 53 "../../../../tos/platforms/shimmer2/chips/gyro/GyroBoardP.nc"
static inline error_t GyroBoardP__Init__init(void );
#line 106
static inline error_t GyroBoardP__StdControl__start(void );










static inline error_t GyroBoardP__StdControl__stop(void );
#line 142
static inline void GyroBoardP__GyroBoard__ledOff(void );







static inline void GyroBoardP__buttonNotify__notify(button_state_t val);
# 78 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplGyroButtonC.UserButtonC*/Msp430GpioC__3__HplGeneralIO__makeInput(void );
# 52 "../../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplGyroButtonC.UserButtonC*/Msp430GpioC__3__GeneralIO__makeInput(void );
# 52 "../../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void /*HplGyroButtonC.InterruptUserButtonC*/Msp430InterruptC__0__HplInterrupt__clear(void );
#line 47
static void /*HplGyroButtonC.InterruptUserButtonC*/Msp430InterruptC__0__HplInterrupt__disable(void );
#line 67
static void /*HplGyroButtonC.InterruptUserButtonC*/Msp430InterruptC__0__HplInterrupt__edge(bool low_to_high);
#line 42
static void /*HplGyroButtonC.InterruptUserButtonC*/Msp430InterruptC__0__HplInterrupt__enable(void );
# 68 "../../../../tos/interfaces/GpioInterrupt.nc"
static void /*HplGyroButtonC.InterruptUserButtonC*/Msp430InterruptC__0__Interrupt__fired(void );
# 52 "../../../../tos/chips/msp430/pins/Msp430InterruptC.nc"
static error_t /*HplGyroButtonC.InterruptUserButtonC*/Msp430InterruptC__0__enable(bool rising);








static inline error_t /*HplGyroButtonC.InterruptUserButtonC*/Msp430InterruptC__0__Interrupt__enableRisingEdge(void );







static inline error_t /*HplGyroButtonC.InterruptUserButtonC*/Msp430InterruptC__0__Interrupt__disable(void );







static inline void /*HplGyroButtonC.InterruptUserButtonC*/Msp430InterruptC__0__HplInterrupt__fired(void );
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t /*GyroButtonC.SwitchToggleC*/SwitchToggleC__0__sendEvent__postTask(void );
# 61 "../../../../tos/interfaces/GpioInterrupt.nc"
static error_t /*GyroButtonC.SwitchToggleC*/SwitchToggleC__0__GpioInterrupt__disable(void );
#line 53
static error_t /*GyroButtonC.SwitchToggleC*/SwitchToggleC__0__GpioInterrupt__enableRisingEdge(void );
# 74 "../../../../tos/interfaces/Notify.nc"
static void /*GyroButtonC.SwitchToggleC*/SwitchToggleC__0__Notify__notify(/*GyroButtonC.SwitchToggleC*/SwitchToggleC__0__Notify__val_t val);
# 44 "../../../../tos/interfaces/GeneralIO.nc"
static void /*GyroButtonC.SwitchToggleC*/SwitchToggleC__0__GeneralIO__makeInput(void );
# 51 "../../../../tos/platforms/shimmer/SwitchToggleC.nc"
enum /*GyroButtonC.SwitchToggleC*/SwitchToggleC__0____nesc_unnamed4387 {
#line 51
  SwitchToggleC__0__sendEvent = 26U
};
#line 51
typedef int /*GyroButtonC.SwitchToggleC*/SwitchToggleC__0____nesc_sillytask_sendEvent[/*GyroButtonC.SwitchToggleC*/SwitchToggleC__0__sendEvent];

static inline error_t /*GyroButtonC.SwitchToggleC*/SwitchToggleC__0__Notify__enable(void );










static inline void /*GyroButtonC.SwitchToggleC*/SwitchToggleC__0__GpioInterrupt__fired(void );





static inline void /*GyroButtonC.SwitchToggleC*/SwitchToggleC__0__sendEvent__runTask(void );
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t GyroButtonP__debounce__postTask(void );
# 74 "../../../../tos/interfaces/Notify.nc"
static void GyroButtonP__Notify__notify(GyroButtonP__Notify__val_t val);
#line 59
static error_t GyroButtonP__NotifyLower__enable(void );
# 73 "../../../../tos/lib/timer/Timer.nc"
static void GyroButtonP__debounceTimer__startOneShot(uint32_t dt);
# 64 "../../../../tos/platforms/shimmer2/chips/gyro/GyroButtonP.nc"
enum GyroButtonP____nesc_unnamed4388 {
#line 64
  GyroButtonP__debounce = 27U
};
#line 64
typedef int GyroButtonP____nesc_sillytask_debounce[GyroButtonP__debounce];
#line 51
static inline error_t GyroButtonP__Notify__enable(void );







static inline void GyroButtonP__debounceTimer__fired(void );




static inline void GyroButtonP__debounce__runTask(void );



static inline void GyroButtonP__NotifyLower__notify(bool val);
# 71 "../../../../tos/platforms/shimmer2/chips/hmc5843/Magnetometer.nc"
static void Hmc5843P__Magnetometer__writeDone(error_t success);
#line 69
static void Hmc5843P__Magnetometer__readDone(uint8_t *data, error_t success);
# 62 "../../../../tos/interfaces/Init.nc"
static error_t Hmc5843P__I2CInit__init(void );
# 64 "../../../../tos/lib/timer/Timer.nc"
static void Hmc5843P__testTimer__startPeriodic(uint32_t dt);
#line 78
static void Hmc5843P__testTimer__stop(void );
# 7 "../../../../tos/chips/msp430/usart/HplMsp430I2C.nc"
static void Hmc5843P__HplI2C__clearModeI2C(void );
static void Hmc5843P__HplI2C__setModeI2C(msp430_i2c_union_config_t *config);
# 120 "../../../../tos/platforms/shimmer2r/I2CPacket.nc"
static error_t Hmc5843P__I2CPacket__read(i2c_flags_t flags, uint16_t addr, uint8_t length, 
#line 116
uint8_t * data);
#line 137
static error_t Hmc5843P__I2CPacket__write(i2c_flags_t flags, uint16_t addr, uint8_t length, 
#line 133
uint8_t * data);
# 62 "../../../../tos/platforms/shimmer2/chips/hmc5843/Hmc5843P.nc"
extern int sprintf(char *str, const char *format, ...)  ;


uint8_t Hmc5843P__readbuff[8];
#line 65
uint8_t Hmc5843P__testPhase;
uint8_t Hmc5843P__packet[2];
#line 66
uint8_t Hmc5843P__readSize;
#line 66
uint8_t *Hmc5843P__readDataBuffer;
bool Hmc5843P__enabled;

msp430_i2c_union_config_t Hmc5843P__msp430_i2c_my_config = { 
{ 
.rxdmaen = 0, 
.txdmaen = 0, 
.xa = 0, 
.listen = 0, 
.mst = 1, 
.i2cword = 0, 
.i2crm = 1, 
.i2cssel = 0x2, 
.i2cpsc = 0, 
.i2csclh = 0x3, 
.i2cscll = 0x3, 
.i2coa = 0 } };



static inline error_t Hmc5843P__Init__init(void );
#line 107
static inline void Hmc5843P__Magnetometer__enableBus(void );






static inline void Hmc5843P__Magnetometer__disableBus(void );





static error_t Hmc5843P__writeRegValue(uint8_t reg_addr, uint8_t val);









static error_t Hmc5843P__readValues(uint8_t size, uint8_t *data);
#line 148
static error_t Hmc5843P__Magnetometer__setOutputRate(uint8_t rate);
#line 188
static inline void Hmc5843P__Magnetometer__selfTest(void );
#line 210
static inline void Hmc5843P__testTimer__fired(void );




static inline error_t Hmc5843P__Magnetometer__setGain(uint8_t gain);
#line 266
static inline error_t Hmc5843P__Magnetometer__runContinuousConversion(void );








static inline error_t Hmc5843P__Magnetometer__readData(void );
#line 299
static inline int16_t Hmc5843P__twos_comp_pack(uint8_t up, uint8_t low);
#line 314
static inline void Hmc5843P__Magnetometer__convertRegistersToData(uint8_t *readBuf, int16_t *data);
#line 339
static inline void Hmc5843P__I2CPacket__readDone(error_t success, uint16_t addr, uint8_t length, uint8_t *data);




static inline void Hmc5843P__I2CPacket__writeDone(error_t success, uint16_t addr, uint8_t length, uint8_t *data);
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t Msp430I2CP__writeDone__postTask(void );
# 157 "../../../../tos/platforms/shimmer2r/I2CPacket.nc"
static void Msp430I2CP__I2CBasicAddr__writeDone(error_t error, uint16_t addr, uint8_t length, 
#line 154
uint8_t * data);
#line 147
static void Msp430I2CP__I2CBasicAddr__readDone(error_t error, uint16_t addr, uint8_t length, 
#line 144
uint8_t * data);
# 91 "../../../../tos/chips/msp430/usart/HplMsp430I2C.nc"
static bool Msp430I2CP__HplI2C__isGeneralCallPending(void );


static bool Msp430I2CP__HplI2C__isAccessReadyPending(void );


static bool Msp430I2CP__HplI2C__isArbitrationLostPending(void );
#line 95
static bool Msp430I2CP__HplI2C__isOwnAddressPending(void );
#line 90
static bool Msp430I2CP__HplI2C__isStartDetectPending(void );





static bool Msp430I2CP__HplI2C__isNoAckPending(void );
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t Msp430I2CP__readDone__postTask(void );
# 72 "../../../../tos/platforms/shimmer/chips/msp430/Msp430I2CP.nc"
enum Msp430I2CP____nesc_unnamed4389 {
#line 72
  Msp430I2CP__readDone = 28U
};
#line 72
typedef int Msp430I2CP____nesc_sillytask_readDone[Msp430I2CP__readDone];
#line 88
enum Msp430I2CP____nesc_unnamed4390 {
#line 88
  Msp430I2CP__writeDone = 29U
};
#line 88
typedef int Msp430I2CP____nesc_sillytask_writeDone[Msp430I2CP__writeDone];
#line 51
static volatile uint8_t Msp430I2CP__I2CIE __asm ("0x0050");

enum Msp430I2CP____nesc_unnamed4391 {
  Msp430I2CP__OFF = 1, 
  Msp430I2CP__IDLE, 
  Msp430I2CP__PACKET_WRITE, 
  Msp430I2CP__PACKET_READ
};

uint8_t Msp430I2CP__stateI2C = Msp430I2CP__IDLE;
uint8_t Msp430I2CP__length;
uint8_t Msp430I2CP__ptr;
error_t Msp430I2CP__result;
uint8_t *Msp430I2CP__data;


static error_t Msp430I2CP__I2CInit__init(void );




static inline void Msp430I2CP__readDone__runTask(void );
#line 88
static inline void Msp430I2CP__writeDone__runTask(void );
#line 108
static inline error_t Msp430I2CP__I2CBasicAddr__read(i2c_flags_t flags, 
uint16_t _addr, uint8_t _length, 
uint8_t *_data);
#line 160
static inline void Msp430I2CP__localRxData(void );
#line 187
static inline error_t Msp430I2CP__I2CBasicAddr__write(i2c_flags_t flags, 
uint16_t _addr, uint8_t _length, 
uint8_t *_data);
#line 237
static inline void Msp430I2CP__localTxData(void );
#line 264
static void Msp430I2CP__localNoAck(void );
#line 285
static inline void Msp430I2CP__I2CInterrupts__fired(void );
# 46 "../../../../tos/platforms/shimmer2/chips/straingauge/StrainGaugeP.nc"
static inline error_t StrainGaugeP__Init__init(void );
#line 63
static inline void StrainGaugeP__StrainGauge__powerOn(void );




static inline void StrainGaugeP__StrainGauge__powerOff(void );




static inline void StrainGaugeP__StrainGauge__ledOn(void );



static inline void StrainGaugeP__StrainGauge__ledOff(void );
# 43 "../../../../tos/platforms/shimmer/chips/rmcm01/DigitalHeartRate.nc"
static void Rmcm01P__DigitalHeartRate__beat(uint32_t time_32k);
# 78 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void Rmcm01P__Msp430GeneralIO__makeInput(void );
#line 99
static void Rmcm01P__Msp430GeneralIO__selectIOFunc(void );
# 61 "../../../../tos/lib/timer/LocalTime.nc"
static uint32_t Rmcm01P__LocalTime__get(void );
# 52 "../../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void Rmcm01P__BeatInterrupt__clear(void );
#line 47
static void Rmcm01P__BeatInterrupt__disable(void );
#line 67
static void Rmcm01P__BeatInterrupt__edge(bool low_to_high);
#line 42
static void Rmcm01P__BeatInterrupt__enable(void );
# 61 "../../../../tos/platforms/shimmer/chips/rmcm01/Rmcm01P.nc"
uint32_t Rmcm01P__last;
#line 61
uint32_t Rmcm01P__incoming;

static inline error_t Rmcm01P__Init__init(void );
#line 83
static inline void Rmcm01P__BeatInterrupt__fired(void );
# 64 "../../../../tos/lib/timer/Counter.nc"
static /*DigitalHeartRateC.CounterToLocalTimeC*/CounterToLocalTimeC__2__Counter__size_type /*DigitalHeartRateC.CounterToLocalTimeC*/CounterToLocalTimeC__2__Counter__get(void );
# 53 "../../../../tos/lib/timer/CounterToLocalTimeC.nc"
static inline uint32_t /*DigitalHeartRateC.CounterToLocalTimeC*/CounterToLocalTimeC__2__LocalTime__get(void );




static inline void /*DigitalHeartRateC.CounterToLocalTimeC*/CounterToLocalTimeC__2__Counter__overflow(void );
# 84 "../../../../tos/platforms/shimmer/chips/gsr/GsrP.nc"
uint8_t GsrP__last_active_resistor;
#line 84
uint8_t GsrP__transient_active_resistor;
#line 84
uint8_t GsrP__got_first_sample;
uint16_t GsrP__transient_sample;
#line 85
uint16_t GsrP__transient_smoothing_samples;
#line 85
uint16_t GsrP__max_resistance_step;
uint32_t GsrP__last_resistance;

static inline error_t GsrP__Init__init(void );
#line 107
static void GsrP__Gsr__setRange(uint8_t range);
#line 159
static uint8_t GsrP__Gsr__controlRange(uint16_t ADC_val, uint8_t active_resistor);
#line 206
static inline void GsrP__Gsr__initSmoothing(uint8_t active_resistor);
#line 221
static bool GsrP__Gsr__smoothTransition(uint8_t *dummy_active_resistor, uint32_t sampling_period);
# 38 "BtCommandParser.nc"
static void BtCommandParserP__BtCommandParser__activate(const uint8_t action, uint8_t arg_size, uint8_t *arg);
# 42 "BtCommandParserP.nc"
uint8_t BtCommandParserP__waiting_for_args = 0;
#line 42
uint8_t BtCommandParserP__args[MAX_COMMAND_ARG_SIZE];
#line 42
uint8_t BtCommandParserP__arg_size = 0;
#line 42
uint8_t BtCommandParserP__pending_command;

static inline void BtCommandParserP__BtCommandParser__handleByte(uint8_t data);
# 49 "../../../../tos/platforms/shimmer/chips/msp430/InternalFlashC.nc"
enum InternalFlashC____nesc_unnamed4392 {
  InternalFlashC__IFLASH_BOUND_HIGH = 0x7e, 
  InternalFlashC__IFLASH_OFFSET = 0x1000, 
  InternalFlashC__IFLASH_SIZE = 128, 
  InternalFlashC__IFLASH_SEG0_VNUM_ADDR = 0x107f, 
  InternalFlashC__IFLASH_SEG1_VNUM_ADDR = 0x10ff, 
  InternalFlashC__IFLASH_INVALID_VNUM = -1
};

static uint8_t InternalFlashC__chooseSegment(void );









static error_t InternalFlashC__InternalFlash__write(void *addr, void *buf, uint16_t size);
#line 115
static inline error_t InternalFlashC__InternalFlash__read(void *addr, void *buf, uint16_t size);
# 78 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplUserButtonC.UserButtonC*/Msp430GpioC__4__HplGeneralIO__makeInput(void );






static void /*HplUserButtonC.UserButtonC*/Msp430GpioC__4__HplGeneralIO__makeOutput(void );
# 52 "../../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplUserButtonC.UserButtonC*/Msp430GpioC__4__GeneralIO__makeInput(void );

static inline void /*HplUserButtonC.UserButtonC*/Msp430GpioC__4__GeneralIO__makeOutput(void );
# 52 "../../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void /*HplUserButtonC.InterruptUserButtonC*/Msp430InterruptC__1__HplInterrupt__clear(void );
#line 47
static void /*HplUserButtonC.InterruptUserButtonC*/Msp430InterruptC__1__HplInterrupt__disable(void );
#line 67
static void /*HplUserButtonC.InterruptUserButtonC*/Msp430InterruptC__1__HplInterrupt__edge(bool low_to_high);
#line 42
static void /*HplUserButtonC.InterruptUserButtonC*/Msp430InterruptC__1__HplInterrupt__enable(void );
# 68 "../../../../tos/interfaces/GpioInterrupt.nc"
static void /*HplUserButtonC.InterruptUserButtonC*/Msp430InterruptC__1__Interrupt__fired(void );
# 52 "../../../../tos/chips/msp430/pins/Msp430InterruptC.nc"
static error_t /*HplUserButtonC.InterruptUserButtonC*/Msp430InterruptC__1__enable(bool rising);








static inline error_t /*HplUserButtonC.InterruptUserButtonC*/Msp430InterruptC__1__Interrupt__enableRisingEdge(void );







static error_t /*HplUserButtonC.InterruptUserButtonC*/Msp430InterruptC__1__Interrupt__disable(void );







static inline void /*HplUserButtonC.InterruptUserButtonC*/Msp430InterruptC__1__HplInterrupt__fired(void );
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t /*UserButtonC.SwitchToggleC*/SwitchToggleC__1__sendEvent__postTask(void );
# 61 "../../../../tos/interfaces/GpioInterrupt.nc"
static error_t /*UserButtonC.SwitchToggleC*/SwitchToggleC__1__GpioInterrupt__disable(void );
#line 53
static error_t /*UserButtonC.SwitchToggleC*/SwitchToggleC__1__GpioInterrupt__enableRisingEdge(void );
# 74 "../../../../tos/interfaces/Notify.nc"
static void /*UserButtonC.SwitchToggleC*/SwitchToggleC__1__Notify__notify(/*UserButtonC.SwitchToggleC*/SwitchToggleC__1__Notify__val_t val);
# 44 "../../../../tos/interfaces/GeneralIO.nc"
static void /*UserButtonC.SwitchToggleC*/SwitchToggleC__1__GeneralIO__makeInput(void );

static void /*UserButtonC.SwitchToggleC*/SwitchToggleC__1__GeneralIO__makeOutput(void );
# 51 "../../../../tos/platforms/shimmer/SwitchToggleC.nc"
enum /*UserButtonC.SwitchToggleC*/SwitchToggleC__1____nesc_unnamed4393 {
#line 51
  SwitchToggleC__1__sendEvent = 30U
};
#line 51
typedef int /*UserButtonC.SwitchToggleC*/SwitchToggleC__1____nesc_sillytask_sendEvent[/*UserButtonC.SwitchToggleC*/SwitchToggleC__1__sendEvent];

static inline error_t /*UserButtonC.SwitchToggleC*/SwitchToggleC__1__Notify__enable(void );





static inline error_t /*UserButtonC.SwitchToggleC*/SwitchToggleC__1__Notify__disable(void );




static inline void /*UserButtonC.SwitchToggleC*/SwitchToggleC__1__GpioInterrupt__fired(void );





static inline void /*UserButtonC.SwitchToggleC*/SwitchToggleC__1__sendEvent__runTask(void );
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t UserButtonP__debounce__postTask(void );
# 74 "../../../../tos/interfaces/Notify.nc"
static void UserButtonP__Notify__notify(UserButtonP__Notify__val_t val);
#line 67
static error_t UserButtonP__NotifyLower__disable(void );
#line 59
static error_t UserButtonP__NotifyLower__enable(void );
# 73 "../../../../tos/lib/timer/Timer.nc"
static void UserButtonP__debounceTimer__startOneShot(uint32_t dt);
# 64 "../../../../tos/platforms/shimmer/UserButtonP.nc"
enum UserButtonP____nesc_unnamed4394 {
#line 64
  UserButtonP__debounce = 31U
};
#line 64
typedef int UserButtonP____nesc_sillytask_debounce[UserButtonP__debounce];
#line 51
static inline error_t UserButtonP__Notify__enable(void );



static inline error_t UserButtonP__Notify__disable(void );



static inline void UserButtonP__debounceTimer__fired(void );




static inline void UserButtonP__debounce__runTask(void );




static inline void UserButtonP__NotifyLower__notify(bool val);
# 9 "../../../../tos/platforms/shimmer2r/CRYPTOP.nc"
static const unsigned char CRYPTOP__sbox[256] = { 
0xa3, 0xd7, 0x09, 0x83, 0xf8, 0x48, 0xf6, 0xf4, 0xb3, 0x21, 0x15, 0x78, 0x99, 0xb1, 0xaf, 0xf9, 
0xe7, 0x2d, 0x4d, 0x8a, 0xce, 0x4c, 0xca, 0x2e, 0x52, 0x95, 0xd9, 0x1e, 0x4e, 0x38, 0x44, 0x28, 
0x0a, 0xdf, 0x02, 0xa0, 0x17, 0xf1, 0x60, 0x68, 0x12, 0xb7, 0x7a, 0xc3, 0xe9, 0xfa, 0x3d, 0x53, 
0x96, 0x84, 0x6b, 0xba, 0xf2, 0x63, 0x9a, 0x19, 0x7c, 0xae, 0xe5, 0xf5, 0xf7, 0x16, 0x6a, 0xa2, 
0x39, 0xb6, 0x7b, 0x0f, 0xc1, 0x93, 0x81, 0x1b, 0xee, 0xb4, 0x1a, 0xea, 0xd0, 0x91, 0x2f, 0xb8, 
0x55, 0xb9, 0xda, 0x85, 0x3f, 0x41, 0xbf, 0xe0, 0x5a, 0x58, 0x80, 0x5f, 0x66, 0x0b, 0xd8, 0x90, 
0x35, 0xd5, 0xc0, 0xa7, 0x33, 0x06, 0x65, 0x69, 0x45, 0x00, 0x94, 0x56, 0x6d, 0x98, 0x9b, 0x76, 
0x97, 0xfc, 0xb2, 0xc2, 0xb0, 0xfe, 0xdb, 0x20, 0xe1, 0xeb, 0xd6, 0xe4, 0xdd, 0x47, 0x4a, 0x1d, 
0x42, 0xed, 0x9e, 0x6e, 0x49, 0x3c, 0xcd, 0x43, 0x27, 0xd2, 0x07, 0xd4, 0xde, 0xc7, 0x67, 0x18, 
0x89, 0xcb, 0x30, 0x1f, 0x8d, 0xc6, 0x8f, 0xaa, 0xc8, 0x74, 0xdc, 0xc9, 0x5d, 0x5c, 0x31, 0xa4, 
0x70, 0x88, 0x61, 0x2c, 0x9f, 0x0d, 0x2b, 0x87, 0x50, 0x82, 0x54, 0x64, 0x26, 0x7d, 0x03, 0x40, 
0x34, 0x4b, 0x1c, 0x73, 0xd1, 0xc4, 0xfd, 0x3b, 0xcc, 0xfb, 0x7f, 0xab, 0xe6, 0x3e, 0x5b, 0xa5, 
0xad, 0x04, 0x23, 0x9c, 0x14, 0x51, 0x22, 0xf0, 0x29, 0x79, 0x71, 0x7e, 0xff, 0x8c, 0x0e, 0xe2, 
0x0c, 0xef, 0xbc, 0x72, 0x75, 0x6f, 0x37, 0xa1, 0xec, 0xd3, 0x8e, 0x62, 0x8b, 0x86, 0x10, 0xe8, 
0x08, 0x77, 0x11, 0xbe, 0x92, 0x4f, 0x24, 0xc5, 0x32, 0x36, 0x9d, 0xcf, 0xf3, 0xa6, 0xbb, 0xac, 
0x5e, 0x6c, 0xa9, 0x13, 0x57, 0x25, 0xb5, 0xe3, 0xbd, 0xa8, 0x3a, 0x01, 0x05, 0x59, 0x2a, 0x46 };



static const int CRYPTOP__keystep[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
#line 599
static unsigned CRYPTOP__g_func(unsigned w, int *kp, unsigned char *key);
#line 630
static inline CRYPTOP__CRYPTO__skipjack_setup(const unsigned char *key, int keylen, int num_rounds, skipjack_key *skey);
#line 655
static CRYPTOP__CRYPTO__skipjack_encrypt(const unsigned char *pt, unsigned char *ct, skipjack_key *skey);
# 62 "../../../../tos/platforms/shimmer2r/Leds.nc"
static void FastClockP__Leds__led0Off(void );
#line 57
static void FastClockP__Leds__led0On(void );
# 60 "../../../../tos/platforms/shimmer/chips/msp430/FastClockP.nc"
static void FastClockP__setTimerAInputDivider(uint8_t val);
#line 91
static inline error_t FastClockP__Init__init(void );
#line 143
static inline void FastClockP__FastClock__setSMCLK(uint8_t mhz);
# 425 "../../../../tos/platforms/shimmer/chips/msp430/msp430hardware.h"
static inline  void __nesc_enable_interrupt(void )
{
  __eint();
}

# 196 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
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

# 48 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
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
# 137 "../../../../tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Overflow__fired(void )
{
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__overflow();
}





static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__default__fired(uint8_t n)
{
}

# 39 "../../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__fired(uint8_t arg_0x7fa72eacc8b0){
#line 39
  switch (arg_0x7fa72eacc8b0) {
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
      /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__default__fired(arg_0x7fa72eacc8b0);
#line 39
      break;
#line 39
    }
#line 39
}
#line 39
# 126 "../../../../tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX0__fired(void )
{
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__fired(0);
}

# 39 "../../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void Msp430TimerCommonP__VectorTimerA0__fired(void ){
#line 39
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX0__fired();
#line 39
}
#line 39
# 58 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0____nesc_unnamed4395 {
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

# 91 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__captured(uint16_t time){
#line 91
  /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__default__captured(time);
#line 91
}
#line 91
# 150 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__getEvent(void )
{
  return * (volatile uint16_t * )370U;
}

#line 192
static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__default__fired(void )
{
}

# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__default__fired();
#line 45
}
#line 45
# 58 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1____nesc_unnamed4396 {
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

# 91 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__captured(uint16_t time){
#line 91
  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__default__captured(time);
#line 91
}
#line 91
# 150 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__getEvent(void )
{
  return * (volatile uint16_t * )372U;
}

#line 192
static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__default__fired(void )
{
}

# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__default__fired();
#line 45
}
#line 45
# 58 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2____nesc_unnamed4397 {
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

# 91 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__captured(uint16_t time){
#line 91
  /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__default__captured(time);
#line 91
}
#line 91
# 150 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__getEvent(void )
{
  return * (volatile uint16_t * )374U;
}

#line 192
static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__default__fired(void )
{
}

# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__default__fired();
#line 45
}
#line 45
# 131 "../../../../tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX1__fired(void )
{
  uint8_t n = * (volatile uint16_t * )302U;

#line 134
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__fired(n >> 1);
}

# 39 "../../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void Msp430TimerCommonP__VectorTimerA1__fired(void ){
#line 39
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX1__fired();
#line 39
}
#line 39
# 126 "../../../../tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX0__fired(void )
{
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__fired(0);
}

# 39 "../../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void Msp430TimerCommonP__VectorTimerB0__fired(void ){
#line 39
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX0__fired();
#line 39
}
#line 39
# 196 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
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

# 228 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
static inline void /*Msp430Uart0P.UartP*/Msp430UartP__0__Counter__overflow(void )
#line 228
{
}

# 177 "../../../../tos/lib/timer/TransformAlarmC.nc"
static inline void /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__Counter__overflow(void )
{
}

#line 177
static inline void /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__Counter__overflow(void )
{
}

# 82 "../../../../tos/lib/timer/Counter.nc"
inline static void /*CounterMilli16C.Transform*/TransformCounterC__0__Counter__overflow(void ){
#line 82
  /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__Counter__overflow();
#line 82
  /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__Counter__overflow();
#line 82
}
#line 82
# 133 "../../../../tos/lib/timer/TransformCounterC.nc"
static inline void /*CounterMilli16C.Transform*/TransformCounterC__0__CounterFrom__overflow(void )
{
  /* atomic removed: atomic calls only */
  {
    /*CounterMilli16C.Transform*/TransformCounterC__0__m_upper++;
    if ((/*CounterMilli16C.Transform*/TransformCounterC__0__m_upper & /*CounterMilli16C.Transform*/TransformCounterC__0__OVERFLOW_MASK) == 0) {
      /*CounterMilli16C.Transform*/TransformCounterC__0__Counter__overflow();
      }
  }
}

# 58 "../../../../tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void )
{
}

# 177 "../../../../tos/lib/timer/TransformAlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Counter__overflow(void )
{
}

# 82 "../../../../tos/lib/timer/Counter.nc"
inline static void /*CounterMilli32C.Transform*/TransformCounterC__1__Counter__overflow(void ){
#line 82
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Counter__overflow();
#line 82
  /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow();
#line 82
}
#line 82
# 133 "../../../../tos/lib/timer/TransformCounterC.nc"
static inline void /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__overflow(void )
{
  /* atomic removed: atomic calls only */
  {
    /*CounterMilli32C.Transform*/TransformCounterC__1__m_upper++;
    if ((/*CounterMilli32C.Transform*/TransformCounterC__1__m_upper & /*CounterMilli32C.Transform*/TransformCounterC__1__OVERFLOW_MASK) == 0) {
      /*CounterMilli32C.Transform*/TransformCounterC__1__Counter__overflow();
      }
  }
}

# 58 "../../../../tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*BtStreamAppC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void )
{
}

#line 58
static inline void /*DigitalHeartRateC.CounterToLocalTimeC*/CounterToLocalTimeC__2__Counter__overflow(void )
{
}

# 82 "../../../../tos/lib/timer/Counter.nc"
inline static void /*Counter32khz32C.Transform*/TransformCounterC__2__Counter__overflow(void ){
#line 82
  /*DigitalHeartRateC.CounterToLocalTimeC*/CounterToLocalTimeC__2__Counter__overflow();
#line 82
  /*BtStreamAppC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow();
#line 82
}
#line 82
# 133 "../../../../tos/lib/timer/TransformCounterC.nc"
static inline void /*Counter32khz32C.Transform*/TransformCounterC__2__CounterFrom__overflow(void )
{
  /* atomic removed: atomic calls only */
  {
    /*Counter32khz32C.Transform*/TransformCounterC__2__m_upper++;
    if ((/*Counter32khz32C.Transform*/TransformCounterC__2__m_upper & /*Counter32khz32C.Transform*/TransformCounterC__2__OVERFLOW_MASK) == 0) {
      /*Counter32khz32C.Transform*/TransformCounterC__2__Counter__overflow();
      }
  }
}

# 82 "../../../../tos/lib/timer/Counter.nc"
inline static void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__overflow(void ){
#line 82
  /*Counter32khz32C.Transform*/TransformCounterC__2__CounterFrom__overflow();
#line 82
  /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__overflow();
#line 82
  /*CounterMilli16C.Transform*/TransformCounterC__0__CounterFrom__overflow();
#line 82
  /*Msp430Uart0P.UartP*/Msp430UartP__0__Counter__overflow();
#line 82
}
#line 82
# 64 "../../../../tos/chips/msp430/timer/Msp430CounterC.nc"
static inline void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__overflow(void )
{
  /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__overflow();
}

# 114 "../../../../tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*BtStreamAppC.BlinkTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Timer__overflow(void )
{
}

#line 114
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__overflow(void )
{
}

#line 114
static inline void /*BtStreamAppC.SampleTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__overflow(void )
{
}

# 48 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
inline static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__overflow(void ){
#line 48
  /*BtStreamAppC.SampleTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__overflow();
#line 48
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__overflow();
#line 48
  /*BtStreamAppC.BlinkTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Timer__overflow();
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
# 137 "../../../../tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Overflow__fired(void )
{
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__overflow();
}

# 67 "../../../../tos/interfaces/TaskBasic.nc"
inline static error_t BtStreamC__sendSensorData__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(BtStreamC__sendSensorData);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
inline static error_t BtStreamC__clockin_result__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(BtStreamC__clockin_result);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 100 "../../../../tos/chips/msp430/adc12/HplAdc12P.nc"
static inline void HplAdc12P__HplAdc12__startConversion(void )
#line 100
{
  HplAdc12P__ADC12CTL0 |= 0x010;
  HplAdc12P__ADC12CTL0 |= 0x001 + 0x002;
}

# 128 "../../../../tos/chips/msp430/adc12/HplAdc12.nc"
inline static void shimmerAnalogSetupP__HplAdc12__startConversion(void ){
#line 128
  HplAdc12P__HplAdc12__startConversion();
#line 128
}
#line 128
# 176 "../../../../tos/chips/msp430/dma/HplMsp430DmaXP.nc"
static inline void /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__enableDMA(void )
#line 176
{
  * (volatile uint16_t *)480U |= 0x0010;
}

# 60 "../../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
inline static void /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__HplChannel__enableDMA(void ){
#line 60
  /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__enableDMA();
#line 60
}
#line 60
# 92 "../../../../tos/chips/msp430/dma/Msp430DmaChannelP.nc"
static inline error_t /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__Channel__startTransfer(void )
#line 92
{
  /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__HplChannel__enableDMA();
  return SUCCESS;
}

# 84 "../../../../tos/chips/msp430/dma/Msp430DmaChannel.nc"
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
# 178 "../../../../tos/platforms/shimmer/shimmerAnalogSetupP.nc"
static inline void shimmerAnalogSetupP__shimmerAnalogSetup__triggerConversion(void )
#line 178
{
  shimmerAnalogSetupP__Msp430DmaChannel__startTransfer();
  shimmerAnalogSetupP__HplAdc12__startConversion();
}

# 79 "../../../../tos/platforms/shimmer/shimmerAnalogSetup.nc"
inline static void BtStreamC__shimmerAnalogSetup__triggerConversion(void ){
#line 79
  shimmerAnalogSetupP__shimmerAnalogSetup__triggerConversion();
#line 79
}
#line 79
# 64 "../../../../tos/lib/timer/Counter.nc"
inline static /*BtStreamAppC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__size_type /*BtStreamAppC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__get(void ){
#line 64
  unsigned long __nesc_result;
#line 64

#line 64
  __nesc_result = /*Counter32khz32C.Transform*/TransformCounterC__2__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 53 "../../../../tos/lib/timer/CounterToLocalTimeC.nc"
static inline uint32_t /*BtStreamAppC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__get(void )
{
  return /*BtStreamAppC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__get();
}

# 61 "../../../../tos/lib/timer/LocalTime.nc"
inline static uint32_t BtStreamC__LocalTime__get(void ){
#line 61
  unsigned long __nesc_result;
#line 61

#line 61
  __nesc_result = /*BtStreamAppC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 64 "../../../../tos/lib/timer/Counter.nc"
inline static /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__Counter__size_type /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__Counter__get(void ){
#line 64
  unsigned int __nesc_result;
#line 64

#line 64
  __nesc_result = /*CounterMilli16C.Transform*/TransformCounterC__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 86 "../../../../tos/lib/timer/TransformAlarmC.nc"
static inline /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__to_size_type /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__Alarm__getNow(void )
{
  return /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__Counter__get();
}

#line 157
static inline void /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__Alarm__start(/*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__to_size_type dt)
{
  /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__Alarm__startAt(/*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__Alarm__getNow(), dt);
}

# 66 "../../../../tos/lib/timer/Alarm.nc"
inline static void BtStreamC__SampleTimer__start(BtStreamC__SampleTimer__size_type dt){
#line 66
  /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__Alarm__start(dt);
#line 66
}
#line 66
# 1181 "BtStreamC.nc"
static inline void BtStreamC__SampleTimer__fired(void )
#line 1181
{
  BtStreamC__SampleTimer__start(BtStreamC__stored_config[NV_SAMPLING_RATE]);
  if (BtStreamC__current_buffer == 0) {
      BtStreamC__timestamp0 = BtStreamC__LocalTime__get();
    }
  else {
      BtStreamC__timestamp1 = BtStreamC__LocalTime__get();
    }
  if (BtStreamC__nbr_adc_chans > 0) {
    BtStreamC__shimmerAnalogSetup__triggerConversion();
    }
  else {
#line 1191
    if (BtStreamC__nbr_1byte_digi_chans > 0 || BtStreamC__nbr_2byte_digi_chans > 0) {
      BtStreamC__clockin_result__postTask();
      }
    else {
#line 1194
      BtStreamC__sendSensorData__postTask();
      }
    }
}

# 78 "../../../../tos/lib/timer/Alarm.nc"
inline static void /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__Alarm__fired(void ){
#line 78
  BtStreamC__SampleTimer__fired();
#line 78
}
#line 78
# 162 "../../../../tos/lib/timer/TransformAlarmC.nc"
static inline void /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__AlarmFrom__fired(void )
{
  /* atomic removed: atomic calls only */
  {
    if (/*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__m_dt == 0) 
      {
        /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__Alarm__fired();
      }
    else 
      {
        /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__set_alarm();
      }
  }
}

# 78 "../../../../tos/lib/timer/Alarm.nc"
inline static void /*BtStreamAppC.SampleTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__fired(void ){
#line 78
  /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__AlarmFrom__fired();
#line 78
}
#line 78
# 135 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__disableEvents(void )
{
  * (volatile uint16_t * )386U &= ~0x0010;
}

# 58 "../../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*BtStreamAppC.SampleTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents(void ){
#line 58
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__disableEvents();
#line 58
}
#line 58
# 70 "../../../../tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*BtStreamAppC.SampleTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__fired(void )
{
  /*BtStreamAppC.SampleTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents();
  /*BtStreamAppC.SampleTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__fired();
}

# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__fired(void ){
#line 45
  /*BtStreamAppC.SampleTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__fired();
#line 45
}
#line 45
# 150 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__getEvent(void )
{
  return * (volatile uint16_t * )402U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__default__captured(uint16_t n)
{
}

# 91 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__captured(uint16_t time){
#line 91
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__default__captured(time);
#line 91
}
#line 91
# 58 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3____nesc_unnamed4398 {
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

# 45 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
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
# 49 "../../../../tos/chips/msp430/timer/Msp430CounterC.nc"
static inline uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__get(void )
{
  return /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__get();
}

# 64 "../../../../tos/lib/timer/Counter.nc"
inline static /*CounterMilli16C.Transform*/TransformCounterC__0__CounterFrom__size_type /*CounterMilli16C.Transform*/TransformCounterC__0__CounterFrom__get(void ){
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
# 81 "../../../../tos/chips/msp430/timer/Msp430TimerP.nc"
static inline bool /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__isOverflowPending(void )
{
  return * (volatile uint16_t * )384U & 1U;
}

# 46 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
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
# 54 "../../../../tos/chips/msp430/timer/Msp430CounterC.nc"
static inline bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__isOverflowPending(void )
{
  return /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__isOverflowPending();
}

# 71 "../../../../tos/lib/timer/Counter.nc"
inline static bool /*CounterMilli16C.Transform*/TransformCounterC__0__CounterFrom__isOverflowPending(void ){
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
# 130 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__enableEvents(void )
{
  * (volatile uint16_t * )386U |= 0x0010;
}

# 57 "../../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*BtStreamAppC.SampleTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__enableEvents(void ){
#line 57
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__enableEvents();
#line 57
}
#line 57
# 95 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__clearPendingInterrupt(void )
{
  * (volatile uint16_t * )386U &= ~0x0001;
}

# 44 "../../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*BtStreamAppC.SampleTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__clearPendingInterrupt(void ){
#line 44
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__clearPendingInterrupt();
#line 44
}
#line 44
# 155 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEvent(uint16_t x)
{
  * (volatile uint16_t * )402U = x;
}

# 41 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*BtStreamAppC.SampleTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEvent(uint16_t time){
#line 41
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEvent(time);
#line 41
}
#line 41
# 45 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
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
# 165 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEventFromNow(uint16_t x)
{
  * (volatile uint16_t * )402U = /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__get() + x;
}

# 43 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*BtStreamAppC.SampleTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEventFromNow(uint16_t delta){
#line 43
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEventFromNow(delta);
#line 43
}
#line 43
# 45 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*BtStreamAppC.SampleTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__get(void ){
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
# 81 "../../../../tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*BtStreamAppC.SampleTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__startAt(uint16_t t0, uint16_t dt)
{
  /* atomic removed: atomic calls only */
  {
    uint16_t now = /*BtStreamAppC.SampleTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__get();
    uint16_t elapsed = now - t0;

#line 87
    if (elapsed >= dt) 
      {
        /*BtStreamAppC.SampleTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEventFromNow(2);
      }
    else 
      {
        uint16_t remaining = dt - elapsed;

#line 94
        if (remaining <= 2) {
          /*BtStreamAppC.SampleTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEventFromNow(2);
          }
        else {
#line 97
          /*BtStreamAppC.SampleTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEvent(now + remaining);
          }
      }
#line 99
    /*BtStreamAppC.SampleTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__clearPendingInterrupt();
    /*BtStreamAppC.SampleTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__enableEvents();
  }
}

# 103 "../../../../tos/lib/timer/Alarm.nc"
inline static void /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__AlarmFrom__startAt(/*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__AlarmFrom__size_type t0, /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__AlarmFrom__size_type dt){
#line 103
  /*BtStreamAppC.SampleTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 64 "../../../../tos/lib/timer/Counter.nc"
inline static /*Counter32khz32C.Transform*/TransformCounterC__2__CounterFrom__size_type /*Counter32khz32C.Transform*/TransformCounterC__2__CounterFrom__get(void ){
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







inline static bool /*Counter32khz32C.Transform*/TransformCounterC__2__CounterFrom__isOverflowPending(void ){
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
# 97 "../../../../tos/system/SchedulerBasicP.nc"
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

# 67 "../../../../tos/interfaces/TaskBasic.nc"
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
# 81 "../../../../tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void )
{
#line 82
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask();
}

# 78 "../../../../tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__fired(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired();
#line 78
}
#line 78
# 162 "../../../../tos/lib/timer/TransformAlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__fired(void )
{
  /* atomic removed: atomic calls only */
  {
    if (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_dt == 0) 
      {
        /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__fired();
      }
    else 
      {
        /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__set_alarm();
      }
  }
}

# 78 "../../../../tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__fired(void ){
#line 78
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__fired();
#line 78
}
#line 78
# 135 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__disableEvents(void )
{
  * (volatile uint16_t * )388U &= ~0x0010;
}

# 58 "../../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__disableEvents(void ){
#line 58
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__disableEvents();
#line 58
}
#line 58
# 70 "../../../../tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__fired(void )
{
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__disableEvents();
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__fired();
}

# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__fired(void ){
#line 45
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__fired();
#line 45
}
#line 45
# 150 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__getEvent(void )
{
  return * (volatile uint16_t * )404U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__default__captured(uint16_t n)
{
}

# 91 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__captured(uint16_t time){
#line 91
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__default__captured(time);
#line 91
}
#line 91
# 58 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4____nesc_unnamed4399 {
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

# 64 "../../../../tos/lib/timer/Counter.nc"
inline static /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__size_type /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__get(void ){
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







inline static bool /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__isOverflowPending(void ){
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
# 130 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__enableEvents(void )
{
  * (volatile uint16_t * )388U |= 0x0010;
}

# 57 "../../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__enableEvents(void ){
#line 57
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__enableEvents();
#line 57
}
#line 57
# 95 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__clearPendingInterrupt(void )
{
  * (volatile uint16_t * )388U &= ~0x0001;
}

# 44 "../../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__clearPendingInterrupt(void ){
#line 44
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__clearPendingInterrupt();
#line 44
}
#line 44
# 155 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__setEvent(uint16_t x)
{
  * (volatile uint16_t * )404U = x;
}

# 41 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEvent(uint16_t time){
#line 41
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__setEvent(time);
#line 41
}
#line 41
# 45 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Timer__get(void ){
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
# 165 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__setEventFromNow(uint16_t x)
{
  * (volatile uint16_t * )404U = /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Timer__get() + x;
}

# 43 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEventFromNow(uint16_t delta){
#line 43
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__setEventFromNow(delta);
#line 43
}
#line 43
# 45 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__get(void ){
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
# 81 "../../../../tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__startAt(uint16_t t0, uint16_t dt)
{
  /* atomic removed: atomic calls only */
  {
    uint16_t now = /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__get();
    uint16_t elapsed = now - t0;

#line 87
    if (elapsed >= dt) 
      {
        /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEventFromNow(2);
      }
    else 
      {
        uint16_t remaining = dt - elapsed;

#line 94
        if (remaining <= 2) {
          /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEventFromNow(2);
          }
        else {
#line 97
          /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEvent(now + remaining);
          }
      }
#line 99
    /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__clearPendingInterrupt();
    /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__enableEvents();
  }
}

# 103 "../../../../tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__size_type dt){
#line 103
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 53 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__clr(void ){
#line 53
  /*HplMsp430GeneralIOC.P40*/HplMsp430GeneralIOP__24__IO__clr();
#line 53
}
#line 53
# 49 "../../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__clr(void )
#line 49
{
#line 49
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__clr();
}

# 41 "../../../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__clr(void ){
#line 41
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__clr();
#line 41
}
#line 41
# 75 "../../../../tos/platforms/shimmer2r/LedsP.nc"
static inline void LedsP__Leds__led0On(void )
#line 75
{
  LedsP__Led0__clr();
  ;
#line 77
  ;
}

# 57 "../../../../tos/platforms/shimmer2r/Leds.nc"
inline static void BtStreamC__Leds__led0On(void ){
#line 57
  LedsP__Leds__led0On();
#line 57
}
#line 57
# 57 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__clr(void )
#line 57
{
#line 57
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 57
    * (volatile uint8_t * )29U &= ~(0x01 << 2);
#line 57
    __nesc_atomic_end(__nesc_atomic); }
}

# 53 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__clr(void ){
#line 53
  /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__clr();
#line 53
}
#line 53
# 49 "../../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__clr(void )
#line 49
{
#line 49
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__clr();
}

# 41 "../../../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__clr(void ){
#line 41
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__clr();
#line 41
}
#line 41
# 90 "../../../../tos/platforms/shimmer2r/LedsP.nc"
static inline void LedsP__Leds__led1On(void )
#line 90
{
  LedsP__Led1__clr();
  ;
#line 92
  ;
}

# 73 "../../../../tos/platforms/shimmer2r/Leds.nc"
inline static void BtStreamC__Leds__led1On(void ){
#line 73
  LedsP__Leds__led1On();
#line 73
}
#line 73
# 57 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P43*/HplMsp430GeneralIOP__27__IO__clr(void )
#line 57
{
#line 57
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 57
    * (volatile uint8_t * )29U &= ~(0x01 << 3);
#line 57
    __nesc_atomic_end(__nesc_atomic); }
}

# 53 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__clr(void ){
#line 53
  /*HplMsp430GeneralIOC.P43*/HplMsp430GeneralIOP__27__IO__clr();
#line 53
}
#line 53
# 49 "../../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__clr(void )
#line 49
{
#line 49
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__clr();
}

# 41 "../../../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__clr(void ){
#line 41
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__clr();
#line 41
}
#line 41
# 105 "../../../../tos/platforms/shimmer2r/LedsP.nc"
static inline void LedsP__Leds__led2On(void )
#line 105
{
  LedsP__Led2__clr();
  ;
#line 107
  ;
}

# 90 "../../../../tos/platforms/shimmer2r/Leds.nc"
inline static void BtStreamC__Leds__led2On(void ){
#line 90
  LedsP__Leds__led2On();
#line 90
}
#line 90
# 142 "BtStreamC.nc"
static __inline void BtStreamC__SetLedFunc(void )
#line 142
{
  switch (BtStreamC__selectedLed) {
      case 0: 
        BtStreamC__Leds__led2On();
      break;
      case 1: 
        BtStreamC__Leds__led1On();
      break;
      default: 
        BtStreamC__Leds__led0On();
    }
}

# 64 "../../../../tos/lib/timer/Counter.nc"
inline static /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__Counter__size_type /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__Counter__get(void ){
#line 64
  unsigned int __nesc_result;
#line 64

#line 64
  __nesc_result = /*CounterMilli16C.Transform*/TransformCounterC__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 86 "../../../../tos/lib/timer/TransformAlarmC.nc"
static inline /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__to_size_type /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__Alarm__getNow(void )
{
  return /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__Counter__get();
}

#line 157
static inline void /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__Alarm__start(/*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__to_size_type dt)
{
  /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__Alarm__startAt(/*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__Alarm__getNow(), dt);
}

# 66 "../../../../tos/lib/timer/Alarm.nc"
inline static void BtStreamC__BlinkTimer__start(BtStreamC__BlinkTimer__size_type dt){
#line 66
  /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__Alarm__start(dt);
#line 66
}
#line 66
# 48 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__set(void ){
#line 48
  /*HplMsp430GeneralIOC.P40*/HplMsp430GeneralIOP__24__IO__set();
#line 48
}
#line 48
# 48 "../../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__set(void )
#line 48
{
#line 48
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__set();
}

# 40 "../../../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__set(void ){
#line 40
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__set();
#line 40
}
#line 40
# 80 "../../../../tos/platforms/shimmer2r/LedsP.nc"
static inline void LedsP__Leds__led0Off(void )
#line 80
{
  LedsP__Led0__set();
  ;
#line 82
  ;
}

# 62 "../../../../tos/platforms/shimmer2r/Leds.nc"
inline static void BtStreamC__Leds__led0Off(void ){
#line 62
  LedsP__Leds__led0Off();
#line 62
}
#line 62
# 48 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__set(void ){
#line 48
  /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__set();
#line 48
}
#line 48
# 48 "../../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__set(void )
#line 48
{
#line 48
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__set();
}

# 40 "../../../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__set(void ){
#line 40
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__set();
#line 40
}
#line 40
# 95 "../../../../tos/platforms/shimmer2r/LedsP.nc"
static inline void LedsP__Leds__led1Off(void )
#line 95
{
  LedsP__Led1__set();
  ;
#line 97
  ;
}

# 78 "../../../../tos/platforms/shimmer2r/Leds.nc"
inline static void BtStreamC__Leds__led1Off(void ){
#line 78
  LedsP__Leds__led1Off();
#line 78
}
#line 78
# 48 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__set(void ){
#line 48
  /*HplMsp430GeneralIOC.P43*/HplMsp430GeneralIOP__27__IO__set();
#line 48
}
#line 48
# 48 "../../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__set(void )
#line 48
{
#line 48
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__set();
}

# 40 "../../../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__set(void ){
#line 40
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__set();
#line 40
}
#line 40
# 110 "../../../../tos/platforms/shimmer2r/LedsP.nc"
static inline void LedsP__Leds__led2Off(void )
#line 110
{
  LedsP__Led2__set();
  ;
#line 112
  ;
}

# 95 "../../../../tos/platforms/shimmer2r/Leds.nc"
inline static void BtStreamC__Leds__led2Off(void ){
#line 95
  LedsP__Leds__led2Off();
#line 95
}
#line 95
# 155 "BtStreamC.nc"
static __inline void BtStreamC__ClearLedFunc(void )
#line 155
{
  switch (BtStreamC__selectedLed) {
      case 0: 
        BtStreamC__Leds__led2Off();
      break;
      case 1: 
        BtStreamC__Leds__led1Off();
      break;
      default: 
        BtStreamC__Leds__led0Off();
    }
}

# 58 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__toggle(void ){
#line 58
  /*HplMsp430GeneralIOC.P40*/HplMsp430GeneralIOP__24__IO__toggle();
#line 58
}
#line 58
# 50 "../../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__toggle(void )
#line 50
{
#line 50
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__toggle();
}

# 42 "../../../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__toggle(void ){
#line 42
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__toggle();
#line 42
}
#line 42
# 85 "../../../../tos/platforms/shimmer2r/LedsP.nc"
static inline void LedsP__Leds__led0Toggle(void )
#line 85
{
  LedsP__Led0__toggle();
  ;
#line 87
  ;
}

# 68 "../../../../tos/platforms/shimmer2r/Leds.nc"
inline static void BtStreamC__Leds__led0Toggle(void ){
#line 68
  LedsP__Leds__led0Toggle();
#line 68
}
#line 68
# 58 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
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

# 58 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__toggle(void ){
#line 58
  /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__toggle();
#line 58
}
#line 58
# 50 "../../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__toggle(void )
#line 50
{
#line 50
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__toggle();
}

# 42 "../../../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__toggle(void ){
#line 42
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__toggle();
#line 42
}
#line 42
# 100 "../../../../tos/platforms/shimmer2r/LedsP.nc"
static inline void LedsP__Leds__led1Toggle(void )
#line 100
{
  LedsP__Led1__toggle();
  ;
#line 102
  ;
}

# 84 "../../../../tos/platforms/shimmer2r/Leds.nc"
inline static void BtStreamC__Leds__led1Toggle(void ){
#line 84
  LedsP__Leds__led1Toggle();
#line 84
}
#line 84
# 58 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P43*/HplMsp430GeneralIOP__27__IO__toggle(void )
#line 58
{
#line 58
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 58
    * (volatile uint8_t * )29U ^= 0x01 << 3;
#line 58
    __nesc_atomic_end(__nesc_atomic); }
}

# 58 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__toggle(void ){
#line 58
  /*HplMsp430GeneralIOC.P43*/HplMsp430GeneralIOP__27__IO__toggle();
#line 58
}
#line 58
# 50 "../../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__toggle(void )
#line 50
{
#line 50
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__toggle();
}

# 42 "../../../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__toggle(void ){
#line 42
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__toggle();
#line 42
}
#line 42
# 115 "../../../../tos/platforms/shimmer2r/LedsP.nc"
static inline void LedsP__Leds__led2Toggle(void )
#line 115
{
  LedsP__Led2__toggle();
  ;
#line 117
  ;
}

# 101 "../../../../tos/platforms/shimmer2r/Leds.nc"
inline static void BtStreamC__Leds__led2Toggle(void ){
#line 101
  LedsP__Leds__led2Toggle();
#line 101
}
#line 101
# 168 "BtStreamC.nc"
static __inline void BtStreamC__ToggleLedFunc(void )
#line 168
{
  switch (BtStreamC__selectedLed) {
      case 0: 
        BtStreamC__Leds__led2Toggle();
      break;
      case 1: 
        BtStreamC__Leds__led1Toggle();
      break;
      default: 
        BtStreamC__Leds__led0Toggle();
    }
}

# 67 "../../../../tos/interfaces/TaskBasic.nc"
inline static error_t BtStreamC__ToggleLed__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(BtStreamC__ToggleLed);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 1145 "BtStreamC.nc"
static inline void BtStreamC__BlinkTimer__fired(void )
#line 1145
{
  if (BtStreamC__activityLed) {

      BtStreamC__BlinkTimer__start(1024);
      BtStreamC__ToggleLed__postTask();
    }
  else {
#line 1150
    if (BtStreamC__warningLed) {

        if (BtStreamC__warningLedCount) {
            if (! --BtStreamC__warningLedCount) {
                BtStreamC__warningLed = FALSE;
                BtStreamC__SetLedFunc();
                if (!BtStreamC__bt_connected) {
                    BtStreamC__BlinkTimer__start(51);
                    BtStreamC__ledOn = TRUE;
                  }
                return;
              }
          }
        BtStreamC__BlinkTimer__start(102);
        BtStreamC__ToggleLedFunc();
      }
    else 
#line 1165
      {

        if (BtStreamC__ledOn) {
            BtStreamC__BlinkTimer__start(2048);
            BtStreamC__ClearLedFunc();
            BtStreamC__ledOn = FALSE;
          }
        else 
#line 1171
          {
            BtStreamC__BlinkTimer__start(51);
            BtStreamC__SetLedFunc();
            BtStreamC__ledOn = TRUE;
          }
      }
    }
}

# 78 "../../../../tos/lib/timer/Alarm.nc"
inline static void /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__Alarm__fired(void ){
#line 78
  BtStreamC__BlinkTimer__fired();
#line 78
}
#line 78
# 162 "../../../../tos/lib/timer/TransformAlarmC.nc"
static inline void /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__AlarmFrom__fired(void )
{
  /* atomic removed: atomic calls only */
  {
    if (/*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__m_dt == 0) 
      {
        /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__Alarm__fired();
      }
    else 
      {
        /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__set_alarm();
      }
  }
}

# 78 "../../../../tos/lib/timer/Alarm.nc"
inline static void /*BtStreamAppC.BlinkTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Alarm__fired(void ){
#line 78
  /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__AlarmFrom__fired();
#line 78
}
#line 78
# 135 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__disableEvents(void )
{
  * (volatile uint16_t * )390U &= ~0x0010;
}

# 58 "../../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*BtStreamAppC.BlinkTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__disableEvents(void ){
#line 58
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__disableEvents();
#line 58
}
#line 58
# 70 "../../../../tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*BtStreamAppC.BlinkTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__fired(void )
{
  /*BtStreamAppC.BlinkTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__disableEvents();
  /*BtStreamAppC.BlinkTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Alarm__fired();
}

# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__fired(void ){
#line 45
  /*BtStreamAppC.BlinkTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__fired();
#line 45
}
#line 45
# 150 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__getEvent(void )
{
  return * (volatile uint16_t * )406U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__default__captured(uint16_t n)
{
}

# 91 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__captured(uint16_t time){
#line 91
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__default__captured(time);
#line 91
}
#line 91
# 58 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5____nesc_unnamed4400 {
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

#line 130
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__enableEvents(void )
{
  * (volatile uint16_t * )390U |= 0x0010;
}

# 57 "../../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*BtStreamAppC.BlinkTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__enableEvents(void ){
#line 57
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__enableEvents();
#line 57
}
#line 57
# 95 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__clearPendingInterrupt(void )
{
  * (volatile uint16_t * )390U &= ~0x0001;
}

# 44 "../../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*BtStreamAppC.BlinkTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__clearPendingInterrupt(void ){
#line 44
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__clearPendingInterrupt();
#line 44
}
#line 44
# 155 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEvent(uint16_t x)
{
  * (volatile uint16_t * )406U = x;
}

# 41 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*BtStreamAppC.BlinkTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__setEvent(uint16_t time){
#line 41
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEvent(time);
#line 41
}
#line 41
# 45 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__get(void ){
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
# 165 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEventFromNow(uint16_t x)
{
  * (volatile uint16_t * )406U = /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__get() + x;
}

# 43 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*BtStreamAppC.BlinkTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__setEventFromNow(uint16_t delta){
#line 43
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEventFromNow(delta);
#line 43
}
#line 43
# 45 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*BtStreamAppC.BlinkTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Timer__get(void ){
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
# 81 "../../../../tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*BtStreamAppC.BlinkTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Alarm__startAt(uint16_t t0, uint16_t dt)
{
  /* atomic removed: atomic calls only */
  {
    uint16_t now = /*BtStreamAppC.BlinkTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Timer__get();
    uint16_t elapsed = now - t0;

#line 87
    if (elapsed >= dt) 
      {
        /*BtStreamAppC.BlinkTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__setEventFromNow(2);
      }
    else 
      {
        uint16_t remaining = dt - elapsed;

#line 94
        if (remaining <= 2) {
          /*BtStreamAppC.BlinkTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__setEventFromNow(2);
          }
        else {
#line 97
          /*BtStreamAppC.BlinkTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__setEvent(now + remaining);
          }
      }
#line 99
    /*BtStreamAppC.BlinkTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__clearPendingInterrupt();
    /*BtStreamAppC.BlinkTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__enableEvents();
  }
}

# 103 "../../../../tos/lib/timer/Alarm.nc"
inline static void /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__AlarmFrom__startAt(/*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__AlarmFrom__size_type t0, /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__AlarmFrom__size_type dt){
#line 103
  /*BtStreamAppC.BlinkTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 192 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__default__fired(void )
{
}

# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__default__fired();
#line 45
}
#line 45
# 150 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__getEvent(void )
{
  return * (volatile uint16_t * )408U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__default__captured(uint16_t n)
{
}

# 91 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__captured(uint16_t time){
#line 91
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__default__captured(time);
#line 91
}
#line 91
# 58 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6____nesc_unnamed4401 {
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

# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__default__fired();
#line 45
}
#line 45
# 150 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__getEvent(void )
{
  return * (volatile uint16_t * )410U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__default__captured(uint16_t n)
{
}

# 91 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__captured(uint16_t time){
#line 91
  /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__default__captured(time);
#line 91
}
#line 91
# 58 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__cc_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7____nesc_unnamed4402 {
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

# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__default__fired();
#line 45
}
#line 45
# 150 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__getEvent(void )
{
  return * (volatile uint16_t * )412U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__default__captured(uint16_t n)
{
}

# 91 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__captured(uint16_t time){
#line 91
  /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__default__captured(time);
#line 91
}
#line 91
# 58 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__cc_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8____nesc_unnamed4403 {
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

# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__default__fired();
#line 45
}
#line 45
# 150 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__getEvent(void )
{
  return * (volatile uint16_t * )414U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__default__captured(uint16_t n)
{
}

# 91 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__captured(uint16_t time){
#line 91
  /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__default__captured(time);
#line 91
}
#line 91
# 58 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__cc_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9____nesc_unnamed4404 {
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

# 131 "../../../../tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX1__fired(void )
{
  uint8_t n = * (volatile uint16_t * )286U;

#line 134
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__fired(n >> 1);
}

# 39 "../../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void Msp430TimerCommonP__VectorTimerB1__fired(void ){
#line 39
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX1__fired();
#line 39
}
#line 39
# 124 "../../../../tos/system/SchedulerBasicP.nc"
static inline void SchedulerBasicP__Scheduler__init(void )
{
  /* atomic removed: atomic calls only */
  {
    memset((void *)SchedulerBasicP__m_next, SchedulerBasicP__NO_TASK, sizeof SchedulerBasicP__m_next);
    SchedulerBasicP__m_head = SchedulerBasicP__NO_TASK;
    SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
  }
}

# 57 "../../../../tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__init(void ){
#line 57
  SchedulerBasicP__Scheduler__init();
#line 57
}
#line 57
# 63 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P43*/HplMsp430GeneralIOP__27__IO__makeOutput(void )
#line 63
{
  /* atomic removed: atomic calls only */
#line 63
  * (volatile uint8_t * )30U |= 0x01 << 3;
}

# 85 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__makeOutput(void ){
#line 85
  /*HplMsp430GeneralIOC.P43*/HplMsp430GeneralIOP__27__IO__makeOutput();
#line 85
}
#line 85
# 54 "../../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__makeOutput();
}

# 46 "../../../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__makeOutput(void ){
#line 46
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__makeOutput();
#line 46
}
#line 46
# 63 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__makeOutput(void )
#line 63
{
  /* atomic removed: atomic calls only */
#line 63
  * (volatile uint8_t * )30U |= 0x01 << 2;
}

# 85 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__makeOutput(void ){
#line 85
  /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__makeOutput();
#line 85
}
#line 85
# 54 "../../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__makeOutput();
}

# 46 "../../../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__makeOutput(void ){
#line 46
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__makeOutput();
#line 46
}
#line 46
# 63 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P40*/HplMsp430GeneralIOP__24__IO__makeOutput(void )
#line 63
{
  /* atomic removed: atomic calls only */
#line 63
  * (volatile uint8_t * )30U |= 0x01 << 0;
}

# 85 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__makeOutput(void ){
#line 85
  /*HplMsp430GeneralIOC.P40*/HplMsp430GeneralIOP__24__IO__makeOutput();
#line 85
}
#line 85
# 54 "../../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__makeOutput();
}

# 46 "../../../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__makeOutput(void ){
#line 46
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__makeOutput();
#line 46
}
#line 46
# 57 "../../../../tos/platforms/shimmer2r/LedsP.nc"
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

# 62 "../../../../tos/interfaces/Init.nc"
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
# 149 "../../../../tos/platforms/shimmer2r/hardware.h"
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

# 44 "../../../../tos/platforms/shimmer2r/MotePlatformC.nc"
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

# 62 "../../../../tos/interfaces/Init.nc"
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
# 163 "../../../../tos/chips/msp430/timer/Msp430ClockP.nc"
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

# 43 "../../../../tos/chips/msp430/timer/Msp430ClockInit.nc"
inline static void Msp430ClockP__Msp430ClockInit__initTimerB(void ){
#line 43
  Msp430ClockP__Msp430ClockInit__default__initTimerB();
#line 43
}
#line 43
# 100 "../../../../tos/chips/msp430/timer/Msp430ClockP.nc"
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

# 42 "../../../../tos/chips/msp430/timer/Msp430ClockInit.nc"
inline static void Msp430ClockP__Msp430ClockInit__initTimerA(void ){
#line 42
  Msp430ClockP__Msp430ClockInit__default__initTimerA();
#line 42
}
#line 42
# 79 "../../../../tos/chips/msp430/timer/Msp430ClockP.nc"
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

# 41 "../../../../tos/chips/msp430/timer/Msp430ClockInit.nc"
inline static void Msp430ClockP__Msp430ClockInit__initClocks(void ){
#line 41
  Msp430ClockP__Msp430ClockInit__default__initClocks();
#line 41
}
#line 41
# 181 "../../../../tos/chips/msp430/timer/Msp430ClockP.nc"
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

# 40 "../../../../tos/chips/msp430/timer/Msp430ClockInit.nc"
inline static void Msp430ClockP__Msp430ClockInit__setupDcoCalibrate(void ){
#line 40
  Msp430ClockP__Msp430ClockInit__default__setupDcoCalibrate();
#line 40
}
#line 40
# 229 "../../../../tos/chips/msp430/timer/Msp430ClockP.nc"
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

# 62 "../../../../tos/interfaces/Init.nc"
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
# 10 "../../../../tos/platforms/shimmer2r/PlatformP.nc"
static inline error_t PlatformP__Init__init(void )
#line 10
{
  WDTCTL = 0x5A00 + 0x0080;
  PlatformP__MoteClockInit__init();
  PlatformP__MoteInit__init();
  PlatformP__LedsInit__init();
  return SUCCESS;
}

# 62 "../../../../tos/interfaces/Init.nc"
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
# 65 "../../../../tos/interfaces/Scheduler.nc"
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
# 64 "../../../../tos/lib/timer/Counter.nc"
inline static /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Counter__size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Counter__get(void ){
#line 64
  unsigned long __nesc_result;
#line 64

#line 64
  __nesc_result = /*CounterMilli32C.Transform*/TransformCounterC__1__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 86 "../../../../tos/lib/timer/TransformAlarmC.nc"
static inline /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__getNow(void )
{
  return /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Counter__get();
}

# 109 "../../../../tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void ){
#line 109
  unsigned long __nesc_result;
#line 109

#line 109
  __nesc_result = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 96 "../../../../tos/lib/timer/AlarmToTimerC.nc"
static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void )
{
#line 97
  return /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow();
}

# 136 "../../../../tos/lib/timer/Timer.nc"
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
# 159 "../../../../tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, TRUE);
}

# 73 "../../../../tos/lib/timer/Timer.nc"
inline static void UserButtonP__debounceTimer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(3U, dt);
#line 73
}
#line 73
# 61 "../../../../tos/interfaces/GpioInterrupt.nc"
inline static error_t /*UserButtonC.SwitchToggleC*/SwitchToggleC__1__GpioInterrupt__disable(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = /*HplUserButtonC.InterruptUserButtonC*/Msp430InterruptC__1__Interrupt__disable();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 85 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplUserButtonC.UserButtonC*/Msp430GpioC__4__HplGeneralIO__makeOutput(void ){
#line 85
  /*HplMsp430GeneralIOC.P20*/HplMsp430GeneralIOP__8__IO__makeOutput();
#line 85
}
#line 85
# 54 "../../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplUserButtonC.UserButtonC*/Msp430GpioC__4__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*HplUserButtonC.UserButtonC*/Msp430GpioC__4__HplGeneralIO__makeOutput();
}

# 46 "../../../../tos/interfaces/GeneralIO.nc"
inline static void /*UserButtonC.SwitchToggleC*/SwitchToggleC__1__GeneralIO__makeOutput(void ){
#line 46
  /*HplUserButtonC.UserButtonC*/Msp430GpioC__4__GeneralIO__makeOutput();
#line 46
}
#line 46
# 59 "../../../../tos/platforms/shimmer/SwitchToggleC.nc"
static inline error_t /*UserButtonC.SwitchToggleC*/SwitchToggleC__1__Notify__disable(void )
#line 59
{
  /*UserButtonC.SwitchToggleC*/SwitchToggleC__1__GeneralIO__makeOutput();
  return /*UserButtonC.SwitchToggleC*/SwitchToggleC__1__GpioInterrupt__disable();
}

# 67 "../../../../tos/interfaces/Notify.nc"
inline static error_t UserButtonP__NotifyLower__disable(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = /*UserButtonC.SwitchToggleC*/SwitchToggleC__1__Notify__disable();
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 55 "../../../../tos/platforms/shimmer/UserButtonP.nc"
static inline error_t UserButtonP__Notify__disable(void )
#line 55
{
  return UserButtonP__NotifyLower__disable();
}






static inline void UserButtonP__debounce__runTask(void )
#line 64
{
  UserButtonP__Notify__disable();
  UserButtonP__debounceTimer__startOneShot(250);
}

# 198 "../../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port20__disable(void )
#line 198
{
#line 198
  P2IE &= ~(1 << 0);
}

# 47 "../../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplUserButtonC.InterruptUserButtonC*/Msp430InterruptC__1__HplInterrupt__disable(void ){
#line 47
  HplMsp430InterruptP__Port20__disable();
#line 47
}
#line 47
# 67 "../../../../tos/interfaces/TaskBasic.nc"
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
inline static error_t UserButtonP__debounce__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(UserButtonP__debounce);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 69 "../../../../tos/platforms/shimmer/UserButtonP.nc"
static inline void UserButtonP__NotifyLower__notify(bool val)
#line 69
{

  UserButtonP__debounce__postTask();
}

# 74 "../../../../tos/interfaces/Notify.nc"
inline static void /*UserButtonC.SwitchToggleC*/SwitchToggleC__1__Notify__notify(/*UserButtonC.SwitchToggleC*/SwitchToggleC__1__Notify__val_t val){
#line 74
  UserButtonP__NotifyLower__notify(val);
#line 74
}
#line 74
# 70 "../../../../tos/platforms/shimmer/SwitchToggleC.nc"
static inline void /*UserButtonC.SwitchToggleC*/SwitchToggleC__1__sendEvent__runTask(void )
#line 70
{
  /*UserButtonC.SwitchToggleC*/SwitchToggleC__1__Notify__notify(BUTTON_PRESSED);
}

# 266 "../../../../tos/platforms/shimmer2/chips/hmc5843/Hmc5843P.nc"
static inline error_t Hmc5843P__Magnetometer__runContinuousConversion(void )
#line 266
{
  Hmc5843P__writeRegValue(2, 0x00);
  return SUCCESS;
}

# 54 "../../../../tos/platforms/shimmer2/chips/hmc5843/Magnetometer.nc"
inline static error_t BtStreamC__Magnetometer__runContinuousConversion(void ){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = Hmc5843P__Magnetometer__runContinuousConversion();
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
#line 44
inline static error_t BtStreamC__Magnetometer__setOutputRate(uint8_t rate){
#line 44
  unsigned char __nesc_result;
#line 44

#line 44
  __nesc_result = Hmc5843P__Magnetometer__setOutputRate(rate);
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 1241 "BtStreamC.nc"
static inline void BtStreamC__Magnetometer__writeDone(error_t success)
#line 1241
{
  if (BtStreamC__changeMagSamplingRate) {
      BtStreamC__changeMagSamplingRate = FALSE;
      BtStreamC__Magnetometer__setOutputRate(BtStreamC__stored_config[NV_MAG_CONFIG] & 0x0F);
    }
  else {
#line 1245
    if (BtStreamC__magStartContinuousConversion) {
        BtStreamC__magStartContinuousConversion = FALSE;
        BtStreamC__Magnetometer__runContinuousConversion();
      }
    else 
#line 1248
      {
        BtStreamC__startStreaming();
      }
    }
}

# 71 "../../../../tos/platforms/shimmer2/chips/hmc5843/Magnetometer.nc"
inline static void Hmc5843P__Magnetometer__writeDone(error_t success){
#line 71
  BtStreamC__Magnetometer__writeDone(success);
#line 71
}
#line 71
# 344 "../../../../tos/platforms/shimmer2/chips/hmc5843/Hmc5843P.nc"
static inline void Hmc5843P__I2CPacket__writeDone(error_t success, uint16_t addr, uint8_t length, uint8_t *data)
#line 344
{
  if (Hmc5843P__enabled) {
    Hmc5843P__Magnetometer__writeDone(success);
    }
}

# 157 "../../../../tos/platforms/shimmer2r/I2CPacket.nc"
inline static void Msp430I2CP__I2CBasicAddr__writeDone(error_t error, uint16_t addr, uint8_t length, uint8_t * data){
#line 157
  Hmc5843P__I2CPacket__writeDone(error, addr, length, data);
#line 157
}
#line 157
# 88 "../../../../tos/platforms/shimmer/chips/msp430/Msp430I2CP.nc"
static inline void Msp430I2CP__writeDone__runTask(void )
#line 88
{

  error_t _result;
  uint8_t _length;
  uint8_t *_data;
  uint16_t _addr;

  _result = Msp430I2CP__result;
  _length = Msp430I2CP__length;
  _data = Msp430I2CP__data;
  _addr = I2CSA;



  while (I2CDCTL & 0x20) __nop();

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 104
    Msp430I2CP__stateI2C = Msp430I2CP__IDLE;
#line 104
    __nesc_atomic_end(__nesc_atomic); }
  Msp430I2CP__I2CBasicAddr__writeDone(_result, _addr, _length, _data);
}

#line 187
static inline error_t Msp430I2CP__I2CBasicAddr__write(i2c_flags_t flags, 
uint16_t _addr, uint8_t _length, 
uint8_t *_data)
#line 189
{

  uint8_t _state;

  _state = Msp430I2CP__stateI2C;
  if (_state == Msp430I2CP__IDLE) {
      Msp430I2CP__stateI2C = Msp430I2CP__PACKET_WRITE;
    }

  if (_state == Msp430I2CP__IDLE) {

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 200
        {

          Msp430I2CP__result = FAIL;

          U0CTL &= ~0x01;

          I2CSA = _addr;

          Msp430I2CP__length = _length;
          Msp430I2CP__data = _data;
          Msp430I2CP__ptr = 0;

          U0CTL |= 0x02;

          I2CNDAT = _length;


          U0CTL |= 0x01;


          I2CTCTL |= 0x08;


          Msp430I2CP__I2CIE = 0x20 | 0x02;
          I2CIFG = 0;


          I2CTCTL |= 0x02 | 0x01;
        }
#line 228
        __nesc_atomic_end(__nesc_atomic); }

      return SUCCESS;
    }

  return FAIL;
}

# 137 "../../../../tos/platforms/shimmer2r/I2CPacket.nc"
inline static error_t Hmc5843P__I2CPacket__write(i2c_flags_t flags, uint16_t addr, uint8_t length, uint8_t * data){
#line 137
  unsigned char __nesc_result;
#line 137

#line 137
  __nesc_result = Msp430I2CP__I2CBasicAddr__write(flags, addr, length, data);
#line 137

#line 137
  return __nesc_result;
#line 137
}
#line 137
# 67 "../../../../tos/interfaces/TaskBasic.nc"
inline static error_t BtStreamC__collect_results__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(BtStreamC__collect_results);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 1233 "BtStreamC.nc"
static inline void BtStreamC__Magnetometer__readDone(uint8_t *data, error_t success)
#line 1233
{
  memcpy(BtStreamC__readBuf, data, 7);
  BtStreamC__mag_read_pending = FALSE;
  if (!BtStreamC__stop_sensing_pending) {
    BtStreamC__collect_results__postTask();
    }
}

# 69 "../../../../tos/platforms/shimmer2/chips/hmc5843/Magnetometer.nc"
inline static void Hmc5843P__Magnetometer__readDone(uint8_t *data, error_t success){
#line 69
  BtStreamC__Magnetometer__readDone(data, success);
#line 69
}
#line 69
# 339 "../../../../tos/platforms/shimmer2/chips/hmc5843/Hmc5843P.nc"
static inline void Hmc5843P__I2CPacket__readDone(error_t success, uint16_t addr, uint8_t length, uint8_t *data)
#line 339
{
  if (Hmc5843P__enabled) {
    Hmc5843P__Magnetometer__readDone(data, success);
    }
}

# 147 "../../../../tos/platforms/shimmer2r/I2CPacket.nc"
inline static void Msp430I2CP__I2CBasicAddr__readDone(error_t error, uint16_t addr, uint8_t length, uint8_t * data){
#line 147
  Hmc5843P__I2CPacket__readDone(error, addr, length, data);
#line 147
}
#line 147
# 72 "../../../../tos/platforms/shimmer/chips/msp430/Msp430I2CP.nc"
static inline void Msp430I2CP__readDone__runTask(void )
#line 72
{

  error_t _result;
  uint8_t _length;
  uint8_t *_data;
  uint16_t _addr;

  _result = Msp430I2CP__result;
  _length = Msp430I2CP__length;
  _data = Msp430I2CP__data;
  _addr = I2CSA;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 84
    Msp430I2CP__stateI2C = Msp430I2CP__IDLE;
#line 84
    __nesc_atomic_end(__nesc_atomic); }
  Msp430I2CP__I2CBasicAddr__readDone(_result, _addr, _length, _data);
}

# 73 "../../../../tos/lib/timer/Timer.nc"
inline static void GyroButtonP__debounceTimer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(1U, dt);
#line 73
}
#line 73
# 64 "../../../../tos/platforms/shimmer2/chips/gyro/GyroButtonP.nc"
static inline void GyroButtonP__debounce__runTask(void )
#line 64
{
  GyroButtonP__debounceTimer__startOneShot(250);
}

# 67 "../../../../tos/interfaces/TaskBasic.nc"
inline static error_t GyroButtonP__debounce__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(GyroButtonP__debounce);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 68 "../../../../tos/platforms/shimmer2/chips/gyro/GyroButtonP.nc"
static inline void GyroButtonP__NotifyLower__notify(bool val)
#line 68
{

  GyroButtonP__debounce__postTask();
}

# 74 "../../../../tos/interfaces/Notify.nc"
inline static void /*GyroButtonC.SwitchToggleC*/SwitchToggleC__0__Notify__notify(/*GyroButtonC.SwitchToggleC*/SwitchToggleC__0__Notify__val_t val){
#line 74
  GyroButtonP__NotifyLower__notify(val);
#line 74
}
#line 74
# 70 "../../../../tos/platforms/shimmer/SwitchToggleC.nc"
static inline void /*GyroButtonC.SwitchToggleC*/SwitchToggleC__0__sendEvent__runTask(void )
#line 70
{
  /*GyroButtonC.SwitchToggleC*/SwitchToggleC__0__Notify__notify(BUTTON_PRESSED);
}

# 376 "../../../../tos/platforms/shimmer/chips/bluetooth/RovingNetworksP.nc"
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

# 1133 "BtStreamC.nc"
static inline void BtStreamC__Bluetooth__writeDone(void )
#line 1133
{
  BtStreamC__enable_sending = TRUE;
}

# 104 "../../../../tos/platforms/shimmer/chips/bluetooth/Bluetooth.nc"
inline static void RovingNetworksP__Bluetooth__writeDone(void ){
#line 104
  BtStreamC__Bluetooth__writeDone();
#line 104
}
#line 104
# 384 "../../../../tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static inline void HplMsp430Usart1P__Usart__tx(uint8_t data)
#line 384
{
  HplMsp430Usart1P__U1TXBUF = data;
}

# 224 "../../../../tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void RovingNetworksP__UARTControl__tx(uint8_t data){
#line 224
  HplMsp430Usart1P__Usart__tx(data);
#line 224
}
#line 224
# 88 "../../../../tos/platforms/shimmer/chips/bluetooth/RovingNetworksP.nc"
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

# 103 "../../../../tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt){
#line 103
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 58 "../../../../tos/lib/timer/AlarmToTimerC.nc"
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

# 129 "../../../../tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt){
#line 129
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(t0, dt);
#line 129
}
#line 129
# 65 "../../../../tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__stop(void )
{
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__disableEvents();
}

# 73 "../../../../tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__stop(void ){
#line 73
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__stop();
#line 73
}
#line 73
# 102 "../../../../tos/lib/timer/TransformAlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__stop(void )
{
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__stop();
}

# 73 "../../../../tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void ){
#line 73
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__stop();
#line 73
}
#line 73
# 71 "../../../../tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void )
{
#line 72
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop();
}

# 78 "../../../../tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop();
#line 78
}
#line 78
# 100 "../../../../tos/lib/timer/VirtualizeTimerC.nc"
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

# 67 "../../../../tos/interfaces/TaskBasic.nc"
inline static error_t BtStreamC__startSensors__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(BtStreamC__startSensors);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 1138 "BtStreamC.nc"
static inline void BtStreamC__SetupTimer__fired(void )
#line 1138
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 1139
    if (BtStreamC__command_mode_complete) {
        BtStreamC__startSensors__postTask();
      }
#line 1141
    __nesc_atomic_end(__nesc_atomic); }
}

#line 1229
static inline void BtStreamC__GyroBoard__buttonPressed(void )
#line 1229
{
}

# 50 "../../../../tos/platforms/shimmer2/chips/gyro/GyroBoard.nc"
inline static void GyroBoardP__GyroBoard__buttonPressed(void ){
#line 50
  BtStreamC__GyroBoard__buttonPressed();
#line 50
}
#line 50
# 150 "../../../../tos/platforms/shimmer2/chips/gyro/GyroBoardP.nc"
static inline void GyroBoardP__buttonNotify__notify(button_state_t val)
#line 150
{
  GyroBoardP__GyroBoard__buttonPressed();
}

# 74 "../../../../tos/interfaces/Notify.nc"
inline static void GyroButtonP__Notify__notify(GyroButtonP__Notify__val_t val){
#line 74
  GyroBoardP__buttonNotify__notify(val);
#line 74
}
#line 74
# 61 "../../../../tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline error_t /*HplGyroButtonC.InterruptUserButtonC*/Msp430InterruptC__0__Interrupt__enableRisingEdge(void )
#line 61
{
  return /*HplGyroButtonC.InterruptUserButtonC*/Msp430InterruptC__0__enable(TRUE);
}

# 53 "../../../../tos/interfaces/GpioInterrupt.nc"
inline static error_t /*GyroButtonC.SwitchToggleC*/SwitchToggleC__0__GpioInterrupt__enableRisingEdge(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*HplGyroButtonC.InterruptUserButtonC*/Msp430InterruptC__0__Interrupt__enableRisingEdge();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 78 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplGyroButtonC.UserButtonC*/Msp430GpioC__3__HplGeneralIO__makeInput(void ){
#line 78
  /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP__3__IO__makeInput();
#line 78
}
#line 78
# 52 "../../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplGyroButtonC.UserButtonC*/Msp430GpioC__3__GeneralIO__makeInput(void )
#line 52
{
#line 52
  /*HplGyroButtonC.UserButtonC*/Msp430GpioC__3__HplGeneralIO__makeInput();
}

# 44 "../../../../tos/interfaces/GeneralIO.nc"
inline static void /*GyroButtonC.SwitchToggleC*/SwitchToggleC__0__GeneralIO__makeInput(void ){
#line 44
  /*HplGyroButtonC.UserButtonC*/Msp430GpioC__3__GeneralIO__makeInput();
#line 44
}
#line 44
# 53 "../../../../tos/platforms/shimmer/SwitchToggleC.nc"
static inline error_t /*GyroButtonC.SwitchToggleC*/SwitchToggleC__0__Notify__enable(void )
#line 53
{
  /*GyroButtonC.SwitchToggleC*/SwitchToggleC__0__GeneralIO__makeInput();

  return /*GyroButtonC.SwitchToggleC*/SwitchToggleC__0__GpioInterrupt__enableRisingEdge();
}

# 59 "../../../../tos/interfaces/Notify.nc"
inline static error_t GyroButtonP__NotifyLower__enable(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*GyroButtonC.SwitchToggleC*/SwitchToggleC__0__Notify__enable();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 51 "../../../../tos/platforms/shimmer2/chips/gyro/GyroButtonP.nc"
static inline error_t GyroButtonP__Notify__enable(void )
#line 51
{
  return GyroButtonP__NotifyLower__enable();
}





static inline void GyroButtonP__debounceTimer__fired(void )
#line 59
{
  GyroButtonP__Notify__enable();
  GyroButtonP__Notify__notify(BUTTON_PRESSED);
}

# 164 "../../../../tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].isrunning = FALSE;
}

# 78 "../../../../tos/lib/timer/Timer.nc"
inline static void Hmc5843P__testTimer__stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(2U);
#line 78
}
#line 78
# 275 "../../../../tos/platforms/shimmer2/chips/hmc5843/Hmc5843P.nc"
static inline error_t Hmc5843P__Magnetometer__readData(void )
#line 275
{
  Hmc5843P__readValues(7, Hmc5843P__readbuff);
  return SUCCESS;
}

# 64 "../../../../tos/lib/timer/Timer.nc"
inline static void Hmc5843P__testTimer__startPeriodic(uint32_t dt){
#line 64
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(2U, dt);
#line 64
}
#line 64
# 188 "../../../../tos/platforms/shimmer2/chips/hmc5843/Hmc5843P.nc"
static inline void Hmc5843P__Magnetometer__selfTest(void )
#line 188
{
  switch (Hmc5843P__testPhase++) {
      case 0: 
        Hmc5843P__testTimer__startPeriodic(8);
      Hmc5843P__writeRegValue(0, 0x11);
      break;
      case 1: 
        Hmc5843P__writeRegValue(2, 0x01);
      break;
      case 2: 
        Hmc5843P__Magnetometer__readData();
      break;
      case 3: 
        Hmc5843P__writeRegValue(0, 0x10);
      break;
      default: 
        Hmc5843P__testTimer__stop();
      Hmc5843P__testPhase = 0;
      break;
    }
}

static inline void Hmc5843P__testTimer__fired(void )
#line 210
{
  Hmc5843P__Magnetometer__selfTest();
}

# 65 "../../../../tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*BtStreamAppC.BlinkTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Alarm__stop(void )
{
  /*BtStreamAppC.BlinkTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__disableEvents();
}

# 73 "../../../../tos/lib/timer/Alarm.nc"
inline static void /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__AlarmFrom__stop(void ){
#line 73
  /*BtStreamAppC.BlinkTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Alarm__stop();
#line 73
}
#line 73
# 102 "../../../../tos/lib/timer/TransformAlarmC.nc"
static inline void /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__Alarm__stop(void )
{
  /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__AlarmFrom__stop();
}

# 73 "../../../../tos/lib/timer/Alarm.nc"
inline static void BtStreamC__BlinkTimer__stop(void ){
#line 73
  /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__Alarm__stop();
#line 73
}
#line 73
# 1275 "BtStreamC.nc"
static inline void BtStreamC__UserButton__notify(button_state_t val)
#line 1275
{
  if (!(BtStreamC__stored_config[NV_SENSORS1] & SENSOR_HEART)) {
      TBR = 0;
      BtStreamC__warningLedCount = 10;
      BtStreamC__warningLed = TRUE;
      BtStreamC__BlinkTimer__stop();
      BtStreamC__BlinkTimer__start(102);
    }
}

# 74 "../../../../tos/interfaces/Notify.nc"
inline static void UserButtonP__Notify__notify(UserButtonP__Notify__val_t val){
#line 74
  BtStreamC__UserButton__notify(val);
#line 74
}
#line 74
# 61 "../../../../tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline error_t /*HplUserButtonC.InterruptUserButtonC*/Msp430InterruptC__1__Interrupt__enableRisingEdge(void )
#line 61
{
  return /*HplUserButtonC.InterruptUserButtonC*/Msp430InterruptC__1__enable(TRUE);
}

# 53 "../../../../tos/interfaces/GpioInterrupt.nc"
inline static error_t /*UserButtonC.SwitchToggleC*/SwitchToggleC__1__GpioInterrupt__enableRisingEdge(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*HplUserButtonC.InterruptUserButtonC*/Msp430InterruptC__1__Interrupt__enableRisingEdge();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 78 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplUserButtonC.UserButtonC*/Msp430GpioC__4__HplGeneralIO__makeInput(void ){
#line 78
  /*HplMsp430GeneralIOC.P20*/HplMsp430GeneralIOP__8__IO__makeInput();
#line 78
}
#line 78
# 52 "../../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplUserButtonC.UserButtonC*/Msp430GpioC__4__GeneralIO__makeInput(void )
#line 52
{
#line 52
  /*HplUserButtonC.UserButtonC*/Msp430GpioC__4__HplGeneralIO__makeInput();
}

# 44 "../../../../tos/interfaces/GeneralIO.nc"
inline static void /*UserButtonC.SwitchToggleC*/SwitchToggleC__1__GeneralIO__makeInput(void ){
#line 44
  /*HplUserButtonC.UserButtonC*/Msp430GpioC__4__GeneralIO__makeInput();
#line 44
}
#line 44
# 53 "../../../../tos/platforms/shimmer/SwitchToggleC.nc"
static inline error_t /*UserButtonC.SwitchToggleC*/SwitchToggleC__1__Notify__enable(void )
#line 53
{
  /*UserButtonC.SwitchToggleC*/SwitchToggleC__1__GeneralIO__makeInput();

  return /*UserButtonC.SwitchToggleC*/SwitchToggleC__1__GpioInterrupt__enableRisingEdge();
}

# 59 "../../../../tos/interfaces/Notify.nc"
inline static error_t UserButtonP__NotifyLower__enable(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*UserButtonC.SwitchToggleC*/SwitchToggleC__1__Notify__enable();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 51 "../../../../tos/platforms/shimmer/UserButtonP.nc"
static inline error_t UserButtonP__Notify__enable(void )
#line 51
{
  return UserButtonP__NotifyLower__enable();
}





static inline void UserButtonP__debounceTimer__fired(void )
#line 59
{
  UserButtonP__Notify__enable();
  UserButtonP__Notify__notify(BUTTON_PRESSED);
}

# 204 "../../../../tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num)
{
}

# 83 "../../../../tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(uint8_t arg_0x7fa72dcb7020){
#line 83
  switch (arg_0x7fa72dcb7020) {
#line 83
    case 0U:
#line 83
      BtStreamC__SetupTimer__fired();
#line 83
      break;
#line 83
    case 1U:
#line 83
      GyroButtonP__debounceTimer__fired();
#line 83
      break;
#line 83
    case 2U:
#line 83
      Hmc5843P__testTimer__fired();
#line 83
      break;
#line 83
    case 3U:
#line 83
      UserButtonP__debounceTimer__fired();
#line 83
      break;
#line 83
    default:
#line 83
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(arg_0x7fa72dcb7020);
#line 83
      break;
#line 83
    }
#line 83
}
#line 83
# 222 "../../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port20__edge(bool l2h)
#line 222
{
  /* atomic removed: atomic calls only */
#line 223
  {
    if (l2h) {
#line 224
      P2IES &= ~(1 << 0);
      }
    else {
#line 225
      P2IES |= 1 << 0;
      }
  }
}

# 67 "../../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplUserButtonC.InterruptUserButtonC*/Msp430InterruptC__1__HplInterrupt__edge(bool low_to_high){
#line 67
  HplMsp430InterruptP__Port20__edge(low_to_high);
#line 67
}
#line 67
# 190 "../../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port20__enable(void )
#line 190
{
#line 190
  P2IE |= 1 << 0;
}

# 42 "../../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplUserButtonC.InterruptUserButtonC*/Msp430InterruptC__1__HplInterrupt__enable(void ){
#line 42
  HplMsp430InterruptP__Port20__enable();
#line 42
}
#line 42
# 108 "../../../../tos/platforms/shimmer/chips/msp430/Msp430I2CP.nc"
static inline error_t Msp430I2CP__I2CBasicAddr__read(i2c_flags_t flags, 
uint16_t _addr, uint8_t _length, 
uint8_t *_data)
#line 110
{
  uint8_t _state;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 113
    {
      _state = Msp430I2CP__stateI2C;
      if (_state == Msp430I2CP__IDLE) {
          Msp430I2CP__stateI2C = Msp430I2CP__PACKET_READ;
        }
    }
#line 118
    __nesc_atomic_end(__nesc_atomic); }

  if (_state == Msp430I2CP__IDLE) {


      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 123
        {
          Msp430I2CP__result = FAIL;


          U0CTL &= ~0x01;

          I2CSA = _addr;

          Msp430I2CP__length = _length;
          Msp430I2CP__data = _data;
          Msp430I2CP__ptr = 0;

          U0CTL |= 0x02;

          I2CNDAT = _length;


          U0CTL |= 0x01;


          I2CTCTL &= ~0x08;


          Msp430I2CP__I2CIE = 0x10 | 0x02;
          I2CIFG = 0;


          I2CTCTL |= 0x02 | 0x01;
        }
#line 151
        __nesc_atomic_end(__nesc_atomic); }

      return SUCCESS;
    }

  return FAIL;
}

# 120 "../../../../tos/platforms/shimmer2r/I2CPacket.nc"
inline static error_t Hmc5843P__I2CPacket__read(i2c_flags_t flags, uint16_t addr, uint8_t length, uint8_t * data){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = Msp430I2CP__I2CBasicAddr__read(flags, addr, length, data);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 136 "../../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port13__edge(bool l2h)
#line 136
{
  /* atomic removed: atomic calls only */
#line 137
  {
    if (l2h) {
#line 138
      P1IES &= ~(1 << 3);
      }
    else {
#line 139
      P1IES |= 1 << 3;
      }
  }
}

# 67 "../../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplGyroButtonC.InterruptUserButtonC*/Msp430InterruptC__0__HplInterrupt__edge(bool low_to_high){
#line 67
  HplMsp430InterruptP__Port13__edge(low_to_high);
#line 67
}
#line 67
# 89 "../../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port13__enable(void )
#line 89
{
#line 89
  P1IE |= 1 << 3;
}

# 42 "../../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplGyroButtonC.InterruptUserButtonC*/Msp430InterruptC__0__HplInterrupt__enable(void ){
#line 42
  HplMsp430InterruptP__Port13__enable();
#line 42
}
#line 42
# 139 "../../../../tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void )
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow());
}

# 83 "../../../../tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void ){
#line 83
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired();
#line 83
}
#line 83
# 91 "../../../../tos/lib/timer/TransformAlarmC.nc"
static inline /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__getAlarm(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 93
    {
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type __nesc_temp = 
#line 93
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_t0 + /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_dt;

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

# 116 "../../../../tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void ){
#line 116
  unsigned long __nesc_result;
#line 116

#line 116
  __nesc_result = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__getAlarm();
#line 116

#line 116
  return __nesc_result;
#line 116
}
#line 116
# 74 "../../../../tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void )
{
  if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot == FALSE) {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt, FALSE);
    }
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired();
}

# 81 "../../../../tos/platforms/shimmer/chips/gsr/Gsr.nc"
inline static bool BtStreamC__Gsr__smoothTransition(uint8_t *dummy_active_resistor, uint32_t sampling_period){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = GsrP__Gsr__smoothTransition(dummy_active_resistor, sampling_period);
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
#line 66
inline static uint8_t BtStreamC__Gsr__controlRange(uint16_t ADC_val, uint8_t active_resistor){
#line 66
  unsigned char __nesc_result;
#line 66

#line 66
  __nesc_result = GsrP__Gsr__controlRange(ADC_val, active_resistor);
#line 66

#line 66
  return __nesc_result;
#line 66
}
#line 66
# 756 "BtStreamC.nc"
static inline void BtStreamC__gsr_range__runTask(void )
#line 756
{





  uint8_t current_active_resistor = BtStreamC__gsr_active_resistor;
  uint16_t ADC_val;


  if (BtStreamC__current_buffer == 0) {
      ADC_val = *((uint16_t *)BtStreamC__sbuf0 + (BtStreamC__nbr_adc_chans - 1));
      if (BtStreamC__stored_config[NV_GSR_RANGE] == GSR_AUTORANGE) {
          BtStreamC__gsr_active_resistor = BtStreamC__Gsr__controlRange(ADC_val, BtStreamC__gsr_active_resistor);
          if (BtStreamC__Gsr__smoothTransition(&current_active_resistor, BtStreamC__stored_config[NV_SAMPLING_RATE])) {
              ADC_val = BtStreamC__last_GSR_val;
            }
        }
      *((uint16_t *)BtStreamC__sbuf0 + (BtStreamC__nbr_adc_chans - 1)) = ADC_val | (current_active_resistor << 14);
    }
  else {
      ADC_val = *((uint16_t *)BtStreamC__sbuf1 + (BtStreamC__nbr_adc_chans - 1));
      if (BtStreamC__stored_config[NV_GSR_RANGE] == GSR_AUTORANGE) {
          BtStreamC__gsr_active_resistor = BtStreamC__Gsr__controlRange(ADC_val, BtStreamC__gsr_active_resistor);
          if (BtStreamC__Gsr__smoothTransition(&current_active_resistor, BtStreamC__stored_config[NV_SAMPLING_RATE])) {
              ADC_val = BtStreamC__last_GSR_val;
            }
        }
      *((uint16_t *)BtStreamC__sbuf1 + (BtStreamC__nbr_adc_chans - 1)) = ADC_val | (current_active_resistor << 14);
    }

  BtStreamC__last_GSR_val = ADC_val;
}

# 57 "../../../../tos/platforms/shimmer2/chips/hmc5843/Magnetometer.nc"
inline static error_t BtStreamC__Magnetometer__readData(void ){
#line 57
  unsigned char __nesc_result;
#line 57

#line 57
  __nesc_result = Hmc5843P__Magnetometer__readData();
#line 57

#line 57
  return __nesc_result;
#line 57
}
#line 57
# 746 "BtStreamC.nc"
static inline void BtStreamC__clockin_result__runTask(void )
#line 746
{
  if (BtStreamC__stored_config[NV_SENSORS0] & SENSOR_MAG) {
      BtStreamC__mag_read_pending = TRUE;
      BtStreamC__Magnetometer__readData();
    }
  else {
    BtStreamC__collect_results__postTask();
    }
}

# 299 "../../../../tos/platforms/shimmer2/chips/hmc5843/Hmc5843P.nc"
static inline int16_t Hmc5843P__twos_comp_pack(uint8_t up, uint8_t low)
{
  int16_t out;
  uint16_t uout;

  uout = up;
  uout = uout << 8;
  uout |= low;

  out = (int16_t )uout;

  return out;
}


static inline void Hmc5843P__Magnetometer__convertRegistersToData(uint8_t *readBuf, int16_t *data)
#line 314
{
  uint8_t *src;
  register uint8_t i;

  src = readBuf;


  for (i = 0; i < 3; i++) {
      data[i] = Hmc5843P__twos_comp_pack(*src, *(src + 1));
      src += 2;
    }
}

# 66 "../../../../tos/platforms/shimmer2/chips/hmc5843/Magnetometer.nc"
inline static void BtStreamC__Magnetometer__convertRegistersToData(uint8_t *readBuf, int16_t *data){
#line 66
  Hmc5843P__Magnetometer__convertRegistersToData(readBuf, data);
#line 66
}
#line 66
# 709 "BtStreamC.nc"
static inline void BtStreamC__collect_results__runTask(void )
#line 709
{
  int16_t realVals[3];
  register uint8_t i;
#line 711
  register uint8_t j = 0;

  if (BtStreamC__stored_config[NV_SENSORS0] & SENSOR_MAG) {
      BtStreamC__Magnetometer__convertRegistersToData(BtStreamC__readBuf, realVals);

      if (BtStreamC__current_buffer == 0) {
          for (i = 0; i < 3; i++) 
            *((uint16_t *)BtStreamC__sbuf0 + j++ + BtStreamC__nbr_adc_chans) = realVals[i];
        }
      else {
          for (i = 0; i < 3; i++) 
            *((uint16_t *)BtStreamC__sbuf1 + j++ + BtStreamC__nbr_adc_chans) = realVals[i];
        }
    }

  if (BtStreamC__stored_config[NV_SENSORS1] & SENSOR_HEART) {
      uint16_t b_t;

      if (BtStreamC__beat_flag) {
        b_t = BtStreamC__beat_time >> 5;
        }
      else {
#line 732
        b_t = 0;
        }
      if (BtStreamC__current_buffer == 0) {
        *((uint16_t *)BtStreamC__sbuf0 + j + BtStreamC__nbr_adc_chans) = b_t;
        }
      else {
#line 737
        *((uint16_t *)BtStreamC__sbuf1 + j + BtStreamC__nbr_adc_chans) = b_t;
        }
      BtStreamC__beat_flag = FALSE;
    }

  BtStreamC__sendSensorData__postTask();
}

# 67 "../../../../tos/interfaces/TaskBasic.nc"
inline static error_t BtStreamC__sendResponse__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(BtStreamC__sendResponse);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 68 "../../../../tos/interfaces/InternalFlash.nc"
inline static error_t BtStreamC__InternalFlash__write(void *addr, void * buf, uint16_t size){
#line 68
  unsigned char __nesc_result;
#line 68

#line 68
  __nesc_result = InternalFlashC__InternalFlash__write(addr, buf, size);
#line 68

#line 68
  return __nesc_result;
#line 68
}
#line 68
# 118 "../../../../tos/platforms/shimmer2r/hardware.h"
static inline  void TOSH_CLR_SER0_CTS_PIN()
#line 118
{
#line 118
  static volatile uint8_t r __asm ("0x0021");

#line 118
  r &= ~(1 << 4);
}

#line 118
static inline  void TOSH_SET_SER0_CTS_PIN()
#line 118
{
#line 118
  static volatile uint8_t r __asm ("0x0021");

#line 118
  r |= 1 << 4;
}

#line 152
static inline  void TOSH_SET_PWRMUX_SEL_PIN()
#line 152
{
#line 152
  static volatile uint8_t r __asm ("0x001D");

#line 152
  r |= 1 << 1;
}

#line 117
static inline  void TOSH_SET_SER0_RTS_PIN()
#line 117
{
#line 117
  static volatile uint8_t r __asm ("0x0021");

#line 117
  r |= 1 << 3;
}

# 67 "../../../../tos/interfaces/TaskBasic.nc"
inline static error_t BtStreamC__ConfigureChannelsTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(BtStreamC__ConfigureChannelsTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
inline static error_t BtStreamC__startConfigTimer__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(BtStreamC__startConfigTimer);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 484 "BtStreamC.nc"
static inline void BtStreamC__ProcessCommand__runTask(void )
#line 484
{
  switch (BtStreamC__g_action) {
      case INQUIRY_COMMAND: 
        BtStreamC__inquiryResponse = TRUE;
      break;
      case GET_SAMPLING_RATE_COMMAND: 
        BtStreamC__samplingRateResponse = TRUE;
      break;
      case SET_SAMPLING_RATE_COMMAND: 
        BtStreamC__stored_config[NV_SAMPLING_RATE] = BtStreamC__g_arg[0];
      BtStreamC__InternalFlash__write((void *)NV_SAMPLING_RATE, (void *)&BtStreamC__stored_config[NV_SAMPLING_RATE], 1);
      if (BtStreamC__sensing) {
          BtStreamC__wasSensing = TRUE;
          BtStreamC__stop_sensing = TRUE;
        }
      break;
      case TOGGLE_LED_COMMAND: 
        BtStreamC__Leds__led0Toggle();
      break;
      case START_STREAMING_COMMAND: 

        if (BtStreamC__command_mode_complete && !BtStreamC__sensing) {
          BtStreamC__startSensors__postTask();
          }
        else {
          BtStreamC__startConfigTimer__postTask();
          }
#line 510
      break;
      case SET_SENSORS_COMMAND: 
        BtStreamC__stored_config[NV_SENSORS0] = BtStreamC__g_arg[0];
      BtStreamC__stored_config[NV_SENSORS1] = BtStreamC__g_arg[1];
      BtStreamC__InternalFlash__write((void *)NV_SENSORS0, (void *)&BtStreamC__stored_config[NV_SENSORS0], 2);

      if (BtStreamC__sensing) {
          BtStreamC__configureChannels = TRUE;
          BtStreamC__wasSensing = TRUE;
          BtStreamC__stop_sensing = TRUE;
        }
      else {
        BtStreamC__ConfigureChannelsTask__postTask();
        }
#line 523
      break;
      case SET_ACCEL_RANGE_COMMAND: 
        if (((BtStreamC__g_arg[0] == RANGE_1_5G || BtStreamC__g_arg[0] == RANGE_2_0G) || BtStreamC__g_arg[0] == RANGE_4_0G) || BtStreamC__g_arg[0] == RANGE_6_0G) {
            BtStreamC__stored_config[NV_ACCEL_RANGE] = BtStreamC__g_arg[0];
            BtStreamC__InternalFlash__write((void *)NV_ACCEL_RANGE, (void *)&BtStreamC__stored_config[NV_ACCEL_RANGE], 1);
            if (BtStreamC__sensing) {
                BtStreamC__wasSensing = TRUE;
                BtStreamC__stop_sensing = TRUE;
              }
          }
      break;
      case GET_ACCEL_RANGE_COMMAND: 
        BtStreamC__accelRangeResponse = TRUE;
      break;
      case SET_5V_REGULATOR_COMMAND: 
        if (BtStreamC__g_arg[0]) {
            TOSH_SET_SER0_RTS_PIN();
            BtStreamC__stored_config[NV_CONFIG_SETUP_BYTE0] |= CONFIG_5V_REG;
          }
        else {
            TOSH_CLR_SER0_RTS_PIN();
            BtStreamC__stored_config[NV_CONFIG_SETUP_BYTE0] &= ~CONFIG_5V_REG;
          }
      BtStreamC__InternalFlash__write((void *)NV_CONFIG_SETUP_BYTE0, (void *)&BtStreamC__stored_config[NV_CONFIG_SETUP_BYTE0], 1);
      break;
      case SET_PMUX_COMMAND: 

        if (BtStreamC__g_arg[0]) {
            TOSH_SET_PWRMUX_SEL_PIN();
            BtStreamC__stored_config[NV_CONFIG_SETUP_BYTE0] |= CONFIG_PMUX;
          }
        else {
            TOSH_CLR_PWRMUX_SEL_PIN();
            BtStreamC__stored_config[NV_CONFIG_SETUP_BYTE0] &= ~CONFIG_PMUX;
          }
      BtStreamC__InternalFlash__write((void *)NV_CONFIG_SETUP_BYTE0, (void *)&BtStreamC__stored_config[NV_CONFIG_SETUP_BYTE0], 1);

      break;
      case SET_GYRO_TEMP_VREF_COMMAND: 
        if (BtStreamC__g_arg[0]) {
            TOSH_SET_SER0_CTS_PIN();
            BtStreamC__stored_config[NV_CONFIG_SETUP_BYTE0] |= CONFIG_GYRO_TEMP_VREF;
          }
        else {
            TOSH_CLR_SER0_CTS_PIN();
            BtStreamC__stored_config[NV_CONFIG_SETUP_BYTE0] &= ~CONFIG_GYRO_TEMP_VREF;
          }
      BtStreamC__InternalFlash__write((void *)NV_CONFIG_SETUP_BYTE0, (void *)&BtStreamC__stored_config[NV_CONFIG_SETUP_BYTE0], 1);
      break;
      case SET_CONFIG_SETUP_BYTE0_COMMAND: 
        BtStreamC__stored_config[NV_CONFIG_SETUP_BYTE0] = BtStreamC__g_arg[0];
      if (BtStreamC__stored_config[NV_CONFIG_SETUP_BYTE0] & CONFIG_5V_REG) {
        TOSH_SET_SER0_RTS_PIN();
        }
      else {
#line 577
        TOSH_CLR_SER0_RTS_PIN();
        }
      if (BtStreamC__stored_config[NV_CONFIG_SETUP_BYTE0] & CONFIG_PMUX) {
        TOSH_SET_PWRMUX_SEL_PIN();
        }
      else {
#line 582
        TOSH_CLR_PWRMUX_SEL_PIN();
        }




      if (BtStreamC__stored_config[NV_CONFIG_SETUP_BYTE0] & CONFIG_GYRO_TEMP_VREF) {
        TOSH_SET_SER0_CTS_PIN();
        }
      else {
#line 591
        TOSH_CLR_SER0_CTS_PIN();
        }
#line 592
      BtStreamC__InternalFlash__write((void *)NV_CONFIG_SETUP_BYTE0, (void *)&BtStreamC__stored_config[NV_CONFIG_SETUP_BYTE0], 1);
      break;
      case GET_CONFIG_SETUP_BYTE0_COMMAND: 
        BtStreamC__configSetupByte0Response = TRUE;
      break;
      case SET_ACCEL_CALIBRATION_COMMAND: 
        memcpy(&BtStreamC__stored_config[NV_ACCEL_CALIBRATION], BtStreamC__g_arg, 21);
      BtStreamC__InternalFlash__write((void *)NV_ACCEL_CALIBRATION, (void *)&BtStreamC__stored_config[NV_ACCEL_CALIBRATION], 21);
      break;
      case GET_ACCEL_CALIBRATION_COMMAND: 
        BtStreamC__accelCalibrationResponse = TRUE;
      break;
      case SET_GYRO_CALIBRATION_COMMAND: 
        memcpy(&BtStreamC__stored_config[NV_GYRO_CALIBRATION], BtStreamC__g_arg, 21);
      BtStreamC__InternalFlash__write((void *)NV_GYRO_CALIBRATION, (void *)&BtStreamC__stored_config[NV_GYRO_CALIBRATION], 21);
      break;
      case GET_GYRO_CALIBRATION_COMMAND: 
        BtStreamC__gyroCalibrationResponse = TRUE;
      break;
      case SET_MAG_CALIBRATION_COMMAND: 
        memcpy(&BtStreamC__stored_config[NV_MAG_CALIBRATION], BtStreamC__g_arg, 21);
      BtStreamC__InternalFlash__write((void *)NV_MAG_CALIBRATION, (void *)&BtStreamC__stored_config[NV_MAG_CALIBRATION], 21);
      break;
      case GET_MAG_CALIBRATION_COMMAND: 
        BtStreamC__magCalibrationResponse = TRUE;
      break;
      case STOP_STREAMING_COMMAND: 
        if (BtStreamC__sensing) {
#line 619
          BtStreamC__stop_sensing = TRUE;
          }
#line 620
      break;
      case SET_GSR_RANGE_COMMAND: 


        if (((((
#line 622
        BtStreamC__g_arg[0] == HW_RES_40K || BtStreamC__g_arg[0] == HW_RES_287K) || 
        BtStreamC__g_arg[0] == HW_RES_1M) || BtStreamC__g_arg[0] == HW_RES_3M3) || 
        BtStreamC__g_arg[0] == GSR_AUTORANGE) || BtStreamC__g_arg[0] == GSR_X4) {
            BtStreamC__stored_config[NV_GSR_RANGE] = BtStreamC__g_arg[0];
            BtStreamC__InternalFlash__write((void *)NV_GSR_RANGE, (void *)&BtStreamC__stored_config[NV_GSR_RANGE], 1);
            if (BtStreamC__sensing) {
                BtStreamC__wasSensing = TRUE;
                BtStreamC__stop_sensing = TRUE;
              }
          }
      break;
      case GET_GSR_RANGE_COMMAND: 
        BtStreamC__gsrRangeResponse = TRUE;
      break;
      case GET_SHIMMER_VERSION_COMMAND: 
        BtStreamC__shimmerVersionResponse = TRUE;
      break;
      case SET_EMG_CALIBRATION_COMMAND: 
        memcpy(&BtStreamC__stored_config[NV_EMG_CALIBRATION], BtStreamC__g_arg, 4);
      BtStreamC__InternalFlash__write((void *)NV_EMG_CALIBRATION, (void *)&BtStreamC__stored_config[NV_EMG_CALIBRATION], 4);
      break;
      case GET_EMG_CALIBRATION_COMMAND: 
        BtStreamC__emgCalibrationResponse = TRUE;
      break;
      case SET_ECG_CALIBRATION_COMMAND: 
        memcpy(&BtStreamC__stored_config[NV_ECG_CALIBRATION], BtStreamC__g_arg, 8);
      BtStreamC__InternalFlash__write((void *)NV_ECG_CALIBRATION, (void *)&BtStreamC__stored_config[NV_ECG_CALIBRATION], 8);
      break;
      case GET_ECG_CALIBRATION_COMMAND: 
        BtStreamC__ecgCalibrationResponse = TRUE;
      break;
      case GET_ALL_CALIBRATION_COMMAND: 
        BtStreamC__allCalibrationResponse = TRUE;
      break;
      case GET_FW_VERSION_COMMAND: 
        BtStreamC__fwVersionResponse = TRUE;
      break;
      case SET_BLINK_LED_COMMAND: 
        { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 660
          {
            BtStreamC__ClearLedFunc();
            BtStreamC__selectedLed = BtStreamC__g_arg[0];
          }
#line 663
          __nesc_atomic_end(__nesc_atomic); }
      if (BtStreamC__bt_connected) {
#line 664
        BtStreamC__SetLedFunc();
        }
#line 665
      break;
      case GET_BLINK_LED_COMMAND: 
        BtStreamC__blinkLedResponse = TRUE;
      break;
      case SET_BUFFER_SIZE_COMMAND: 
        BtStreamC__stored_config[NV_BUFFER_SIZE] = BtStreamC__g_arg[0];
      BtStreamC__InternalFlash__write((void *)NV_BUFFER_SIZE, (void *)&BtStreamC__stored_config[NV_BUFFER_SIZE], 1);
      if (BtStreamC__sensing) {
          BtStreamC__wasSensing = TRUE;
          BtStreamC__stop_sensing = TRUE;
        }
      break;
      case GET_BUFFER_SIZE_COMMAND: 
        BtStreamC__bufferSizeResponse = TRUE;
      break;
      case SET_MAG_GAIN_COMMAND: 
        BtStreamC__stored_config[NV_MAG_CONFIG] = (BtStreamC__g_arg[0] << 4) + (BtStreamC__stored_config[NV_MAG_CONFIG] & 0x0F);
      BtStreamC__InternalFlash__write((void *)NV_BUFFER_SIZE, (void *)&BtStreamC__stored_config[NV_MAG_CONFIG], 1);
      if (BtStreamC__sensing) {
          BtStreamC__wasSensing = TRUE;
          BtStreamC__stop_sensing = TRUE;
        }
      break;
      case GET_MAG_GAIN_COMMAND: 
        BtStreamC__magGainResponse = TRUE;
      break;
      case SET_MAG_SAMPLING_RATE_COMMAND: 
        BtStreamC__stored_config[NV_MAG_CONFIG] = BtStreamC__g_arg[0] + (BtStreamC__stored_config[NV_MAG_CONFIG] & 0xF0);
      BtStreamC__InternalFlash__write((void *)NV_BUFFER_SIZE, (void *)&BtStreamC__stored_config[NV_MAG_CONFIG], 1);
      if (BtStreamC__sensing) {
          BtStreamC__wasSensing = TRUE;
          BtStreamC__stop_sensing = TRUE;
        }
      break;
      case GET_MAG_SAMPLING_RATE_COMMAND: 
        BtStreamC__magSamplingRateResponse = TRUE;
      break;
      default: ;
    }
  BtStreamC__sendAck = TRUE;
  BtStreamC__sendResponse__postTask();
}

# 64 "../../../../tos/lib/timer/Timer.nc"
inline static void BtStreamC__SetupTimer__startPeriodic(uint32_t dt){
#line 64
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(0U, dt);
#line 64
}
#line 64
# 479 "BtStreamC.nc"
static inline void BtStreamC__startConfigTimer__runTask(void )
#line 479
{
  BtStreamC__SetupTimer__startPeriodic(5000);
}

# 51 "../../../../tos/platforms/shimmer/chips/bluetooth/Bluetooth.nc"
inline static error_t BtStreamC__Bluetooth__write(const uint8_t *buf, uint8_t len){
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
# 352 "BtStreamC.nc"
static inline void BtStreamC__sendResponse__runTask(void )
#line 352
{
  uint16_t packet_length = 0;
  uint8_t i;

  BtStreamC__command_pending = FALSE;

  if (BtStreamC__enable_sending) {
      if (BtStreamC__sendAck) {


          BtStreamC__res_packet[packet_length++] = ACK_COMMAND_PROCESSED;
          BtStreamC__sendAck = FALSE;
        }
      if (BtStreamC__inquiryResponse) {
          BtStreamC__res_packet[packet_length++] = INQUIRY_RESPONSE;
          BtStreamC__res_packet[packet_length++] = BtStreamC__stored_config[NV_SAMPLING_RATE];
          BtStreamC__res_packet[packet_length++] = BtStreamC__stored_config[NV_ACCEL_RANGE];
          BtStreamC__res_packet[packet_length++] = BtStreamC__stored_config[NV_CONFIG_SETUP_BYTE0];
          BtStreamC__res_packet[packet_length++] = BtStreamC__nbr_adc_chans + BtStreamC__nbr_1byte_digi_chans + BtStreamC__nbr_2byte_digi_chans;
          BtStreamC__res_packet[packet_length++] = BtStreamC__stored_config[NV_BUFFER_SIZE];
          memcpy(BtStreamC__res_packet + packet_length, BtStreamC__channel_contents, BtStreamC__nbr_adc_chans + BtStreamC__nbr_1byte_digi_chans + BtStreamC__nbr_2byte_digi_chans);
          packet_length += BtStreamC__nbr_adc_chans + BtStreamC__nbr_1byte_digi_chans + BtStreamC__nbr_2byte_digi_chans;
          BtStreamC__inquiryResponse = FALSE;
        }
      else {
#line 376
        if (BtStreamC__samplingRateResponse) {
            BtStreamC__res_packet[packet_length++] = SAMPLING_RATE_RESPONSE;
            BtStreamC__res_packet[packet_length++] = BtStreamC__stored_config[NV_SAMPLING_RATE];
            BtStreamC__samplingRateResponse = FALSE;
          }
        else {
#line 381
          if (BtStreamC__accelRangeResponse) {
              BtStreamC__res_packet[packet_length++] = ACCEL_RANGE_RESPONSE;
              BtStreamC__res_packet[packet_length++] = BtStreamC__stored_config[NV_ACCEL_RANGE];
              BtStreamC__accelRangeResponse = FALSE;
            }
          else {
#line 386
            if (BtStreamC__configSetupByte0Response) {
                BtStreamC__res_packet[packet_length++] = CONFIG_SETUP_BYTE0_RESPONSE;
                BtStreamC__res_packet[packet_length++] = BtStreamC__stored_config[NV_CONFIG_SETUP_BYTE0];
                BtStreamC__configSetupByte0Response = FALSE;
              }
            else {
#line 391
              if (BtStreamC__accelCalibrationResponse) {
                  BtStreamC__res_packet[packet_length++] = ACCEL_CALIBRATION_RESPONSE;
                  for (i = 0; i < 21; i++) 
                    BtStreamC__res_packet[packet_length++] = BtStreamC__stored_config[NV_ACCEL_CALIBRATION + i];
                  BtStreamC__accelCalibrationResponse = FALSE;
                }
              else {
#line 397
                if (BtStreamC__gyroCalibrationResponse) {
                    BtStreamC__res_packet[packet_length++] = GYRO_CALIBRATION_RESPONSE;
                    for (i = 0; i < 21; i++) 
                      BtStreamC__res_packet[packet_length++] = BtStreamC__stored_config[NV_GYRO_CALIBRATION + i];
                    BtStreamC__gyroCalibrationResponse = FALSE;
                  }
                else {
#line 403
                  if (BtStreamC__magCalibrationResponse) {
                      BtStreamC__res_packet[packet_length++] = MAG_CALIBRATION_RESPONSE;
                      for (i = 0; i < 21; i++) 
                        BtStreamC__res_packet[packet_length++] = BtStreamC__stored_config[NV_MAG_CALIBRATION + i];
                      BtStreamC__magCalibrationResponse = FALSE;
                    }
                  else {
#line 409
                    if (BtStreamC__gsrRangeResponse) {
                        BtStreamC__res_packet[packet_length++] = GSR_RANGE_RESPONSE;
                        BtStreamC__res_packet[packet_length++] = BtStreamC__stored_config[NV_GSR_RANGE];
                        BtStreamC__gsrRangeResponse = FALSE;
                      }
                    else {
#line 414
                      if (BtStreamC__shimmerVersionResponse) {
                          BtStreamC__res_packet[packet_length++] = SHIMMER_VERSION_RESPONSE;
                          BtStreamC__res_packet[packet_length++] = 2;
                          BtStreamC__shimmerVersionResponse = FALSE;
                        }
                      else {
#line 419
                        if (BtStreamC__emgCalibrationResponse) {
                            BtStreamC__res_packet[packet_length++] = EMG_CALIBRATION_RESPONSE;
                            for (i = 0; i < 4; i++) 
                              BtStreamC__res_packet[packet_length++] = BtStreamC__stored_config[NV_EMG_CALIBRATION + i];
                            BtStreamC__emgCalibrationResponse = FALSE;
                          }
                        else {
#line 425
                          if (BtStreamC__ecgCalibrationResponse) {
                              BtStreamC__res_packet[packet_length++] = ECG_CALIBRATION_RESPONSE;
                              for (i = 0; i < 8; i++) 
                                BtStreamC__res_packet[packet_length++] = BtStreamC__stored_config[NV_ECG_CALIBRATION + i];
                              BtStreamC__ecgCalibrationResponse = FALSE;
                            }
                          else {
#line 431
                            if (BtStreamC__allCalibrationResponse) {
                                BtStreamC__res_packet[packet_length++] = ALL_CALIBRATION_RESPONSE;
                                memcpy(BtStreamC__res_packet + packet_length, BtStreamC__stored_config + NV_ACCEL_CALIBRATION, 75);
                                packet_length += 75;

                                BtStreamC__allCalibrationResponse = FALSE;
                              }
                            else {
#line 438
                              if (BtStreamC__fwVersionResponse) {
                                  BtStreamC__res_packet[packet_length++] = FW_VERSION_RESPONSE;
                                  BtStreamC__res_packet[packet_length++] = 1 & 0xFF;
                                  BtStreamC__res_packet[packet_length++] = (1 & 0xFF00) >> 8;
                                  BtStreamC__res_packet[packet_length++] = 1 & 0xFF;
                                  BtStreamC__res_packet[packet_length++] = (1 & 0xFF00) >> 8;
                                  BtStreamC__res_packet[packet_length++] = 2;
                                  BtStreamC__res_packet[packet_length++] = 0;
                                  BtStreamC__fwVersionResponse = FALSE;
                                }
                              else {
#line 448
                                if (BtStreamC__blinkLedResponse) {
                                    BtStreamC__res_packet[packet_length++] = BLINK_LED_RESPONSE;
                                    BtStreamC__res_packet[packet_length++] = BtStreamC__selectedLed;
                                    BtStreamC__blinkLedResponse = FALSE;
                                  }
                                else {
#line 453
                                  if (BtStreamC__bufferSizeResponse) {
                                      BtStreamC__res_packet[packet_length++] = BUFFER_SIZE_RESPONSE;
                                      BtStreamC__res_packet[packet_length++] = BtStreamC__stored_config[NV_BUFFER_SIZE];
                                      BtStreamC__bufferSizeResponse = FALSE;
                                    }
                                  else {
#line 458
                                    if (BtStreamC__magGainResponse) {
                                        BtStreamC__res_packet[packet_length++] = MAG_GAIN_RESPONSE;
                                        BtStreamC__res_packet[packet_length++] = (BtStreamC__stored_config[NV_MAG_CONFIG] & 0xF0) >> 4;
                                        BtStreamC__magGainResponse = FALSE;
                                      }
                                    else {
#line 463
                                      if (BtStreamC__magSamplingRateResponse) {
                                          BtStreamC__res_packet[packet_length++] = MAG_SAMPLING_RATE_RESPONSE;
                                          BtStreamC__res_packet[packet_length++] = BtStreamC__stored_config[NV_MAG_CONFIG] & 0x0F;
                                          BtStreamC__magSamplingRateResponse = FALSE;
                                        }
                                      else {
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
#line 471
      BtStreamC__Bluetooth__write(BtStreamC__res_packet, packet_length);
      BtStreamC__enable_sending = FALSE;
    }
  else {
    BtStreamC__sendResponse__postTask();
    }
}

# 67 "../../../../tos/interfaces/TaskBasic.nc"
inline static error_t BtStreamC__stopSensing__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(BtStreamC__stopSensing);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 16 "../../../../tos/platforms/shimmer2r/CRYPTO.nc"
inline static BtStreamC__CRYPTO__skipjack_encrypt(const unsigned char *pt, unsigned char *ct, skipjack_key *skey){
#line 16
  int __nesc_result;
#line 16

#line 16
  __nesc_result = CRYPTOP__CRYPTO__skipjack_encrypt(pt, ct, skey);
#line 16

#line 16
  return __nesc_result;
#line 16
}
#line 16
# 630 "../../../../tos/platforms/shimmer2r/CRYPTOP.nc"
static inline CRYPTOP__CRYPTO__skipjack_setup(const unsigned char *key, int keylen, int num_rounds, skipjack_key *skey)
#line 630
{
  int x;

#line 632
  do {
#line 632
      if (!(key != (void *)0)) {
#line 632
          ;
        }
    }
  while (
#line 632
  0);
  do {
#line 633
      if (!(skey != (void *)0)) {
#line 633
          ;
        }
    }
  while (
#line 633
  0);
  if (keylen != 10) {
    return -1;
    }
  if (num_rounds != 32 && num_rounds != 0) {
    return -2;
    }

  for (x = 0; x < 10; x++) 
    skey->key[x] = key[x] & 255;

  return 0;
}

# 15 "../../../../tos/platforms/shimmer2r/CRYPTO.nc"
inline static BtStreamC__CRYPTO__skipjack_setup(const unsigned char *key, int keylen, int num_rounds, skipjack_key *skey){
#line 15
  int __nesc_result;
#line 15

#line 15
  __nesc_result = CRYPTOP__CRYPTO__skipjack_setup(key, keylen, num_rounds, skey);
#line 15

#line 15
  return __nesc_result;
#line 15
}
#line 15
# 998 "BtStreamC.nc"
static inline void BtStreamC__prepareDataPacket(void )
#line 998
{
  skipjack_key skey;

  unsigned char Skey[10] = { 0x94, 0x74, 0xB8, 0xE8, 0xC7, 0x3B, 0xCA, 0x7D, 0xCA, 0x7D };
  unsigned char Bkey[8] = { 0x94, 0x74, 0xB8, 0xE8, 0xC7, 0x3B, 0xCA, 0x7D };
  unsigned char key[16] = { 0x94, 0x74, 0xB8, 0xE8, 0xC7, 0x3B, 0xCA, 0x7D, 0x53, 0x23, 0x91, 0x42, 0xf3, 0xc3, 0x12, 0x1a };
  uint8_t sample_size;
#line 1004
  uint8_t aux;
  uint8_t Kbuffer[8];
  unsigned char pt[8] = { 0x28, 0x85, 0x84, 0x2e, 0xa3, 0xe6, 0x99, 0x9b };
  unsigned char ct[8];
  int i;

  uint16_t accelx;
#line 1010
  uint16_t accely;
#line 1010
  uint16_t accelz;
#line 1010
  uint16_t t;

#line 1011
  sample_size = (BtStreamC__nbr_adc_chans + BtStreamC__nbr_2byte_digi_chans) * 2 + BtStreamC__nbr_1byte_digi_chans + 2;

  BtStreamC__CRYPTO__skipjack_setup(Skey, 10, 0, &skey);

  if (BtStreamC__current_buffer == 0) {

      Kbuffer[0] = BtStreamC__timestamp0;
      Kbuffer[1] = BtStreamC__timestamp0 >> 8;

      for (i = 2; i < 8; i++) 
        Kbuffer[i] = BtStreamC__sbuf0[i - 2];




      BtStreamC__Leds__led0On();
      BtStreamC__CRYPTO__skipjack_encrypt(pt, ct, &skey);
      BtStreamC__Leds__led0Off();

      for (i = 0; i < 8; ++i) 
        Kbuffer[i] = (uint8_t )ct[i];

      memcpy(BtStreamC__current_tx_packet + 1 + sample_size * BtStreamC__buffer_iteration, Kbuffer, sizeof Kbuffer);

      BtStreamC__current_buffer = 1;
    }
  else {
      Kbuffer[0] = BtStreamC__timestamp1;
      Kbuffer[1] = BtStreamC__timestamp1 >> 8;
      for (i = 2; i < 8; i++) 
        Kbuffer[i] = BtStreamC__sbuf1[i - 2];







      BtStreamC__Leds__led0On();
      BtStreamC__CRYPTO__skipjack_encrypt(pt, ct, &skey);
      BtStreamC__Leds__led0Off();


      for (i = 0; i < 8; ++i) 
        Kbuffer[i] = (uint8_t )ct[i];





      memcpy(BtStreamC__current_tx_packet + 1 + sample_size * BtStreamC__buffer_iteration, Kbuffer, sizeof Kbuffer);
#line 1089
      BtStreamC__current_buffer = 0;
    }
  BtStreamC__buffer_iteration++;
}

#line 332
static inline void BtStreamC__sendSensorData__runTask(void )
#line 332
{
  BtStreamC__prepareDataPacket();

  if (BtStreamC__stop_sensing) {
    BtStreamC__stopSensing__postTask();
    }
  else 
#line 337
    {
      if (BtStreamC__buffer_iteration >= BtStreamC__buffered_buffer_size) {
          if (BtStreamC__enable_sending) {

              BtStreamC__Bluetooth__write(BtStreamC__current_tx_packet, 1 + ((BtStreamC__nbr_adc_chans + BtStreamC__nbr_2byte_digi_chans) * 2 + BtStreamC__nbr_1byte_digi_chans + 2) * BtStreamC__buffer_iteration);
              BtStreamC__enable_sending = FALSE;

              BtStreamC__current_tx_packet = BtStreamC__current_tx_packet == BtStreamC__tx_packet0 ? BtStreamC__tx_packet1 : BtStreamC__tx_packet0;
            }
          BtStreamC__buffer_iteration = 0;
        }
    }
}

# 59 "../../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static bool BtStreamC__DockInterrupt__getValue(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = HplMsp430InterruptP__Port23__getValue();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 77 "../../../../tos/platforms/shimmer2/chips/straingauge/StrainGaugeP.nc"
static inline void StrainGaugeP__StrainGauge__ledOff(void )
#line 77
{
  TOSH_SET_URXD0_PIN();
}

#line 68
static inline void StrainGaugeP__StrainGauge__powerOff(void )
#line 68
{
  StrainGaugeP__StrainGauge__ledOff();
  TOSH_CLR_SER0_RTS_PIN();
}

# 38 "../../../../tos/platforms/shimmer2/chips/straingauge/StrainGauge.nc"
inline static void BtStreamC__StrainGauge__powerOff(void ){
#line 38
  StrainGaugeP__StrainGauge__powerOff();
#line 38
}
#line 38
# 7 "../../../../tos/chips/msp430/usart/HplMsp430I2C.nc"
inline static void Hmc5843P__HplI2C__clearModeI2C(void ){
#line 7
  HplMsp430I2C0P__HplI2C__clearModeI2C();
#line 7
}
#line 7
# 114 "../../../../tos/platforms/shimmer2/chips/hmc5843/Hmc5843P.nc"
static inline void Hmc5843P__Magnetometer__disableBus(void )
#line 114
{
  Hmc5843P__HplI2C__clearModeI2C();

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 117
    Hmc5843P__enabled = FALSE;
#line 117
    __nesc_atomic_end(__nesc_atomic); }
}

# 41 "../../../../tos/platforms/shimmer2/chips/hmc5843/Magnetometer.nc"
inline static void BtStreamC__Magnetometer__disableBus(void ){
#line 41
  Hmc5843P__Magnetometer__disableBus();
#line 41
}
#line 41
# 142 "../../../../tos/platforms/shimmer2/chips/gyro/GyroBoardP.nc"
static inline void GyroBoardP__GyroBoard__ledOff(void )
#line 142
{
  TOSH_SET_URXD0_PIN();
}

#line 117
static inline error_t GyroBoardP__StdControl__stop(void )
#line 117
{

  TOSH_SET_PROG_OUT_PIN();


  GyroBoardP__GyroBoard__ledOff();


  return SUCCESS;
}

# 105 "../../../../tos/interfaces/StdControl.nc"
inline static error_t BtStreamC__GyroStdControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = GyroBoardP__StdControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 154 "../../../../tos/platforms/shimmer2r/hardware.h"
static inline  void TOSH_SET_ACCEL_SLEEP_N_PIN()
#line 154
{
#line 154
  static volatile uint8_t r __asm ("0x0031");

#line 154
  r |= 1 << 0;
}

# 59 "../../../../tos/platforms/shimmer2r/Mma7361P.nc"
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

# 47 "../../../../tos/platforms/shimmer/chips/mma7260/Mma_Accel.nc"
inline static void BtStreamC__Accel__wake(bool wakeup){
#line 47
  Mma7361P__Accel__wake(wakeup);
#line 47
}
#line 47
# 180 "../../../../tos/chips/msp430/dma/HplMsp430DmaXP.nc"
static inline void /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__disableDMA(void )
#line 180
{
  * (volatile uint16_t *)480U &= ~0x0010;
}

# 61 "../../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
inline static void /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__HplChannel__disableDMA(void ){
#line 61
  /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__disableDMA();
#line 61
}
#line 61
# 114 "../../../../tos/chips/msp430/dma/Msp430DmaChannelP.nc"
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

# 102 "../../../../tos/chips/msp430/dma/Msp430DmaChannel.nc"
inline static error_t BtStreamC__DMA0__stopTransfer(void ){
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
# 95 "../../../../tos/chips/msp430/adc12/HplAdc12P.nc"
static inline void HplAdc12P__HplAdc12__resetIFGs(void )
#line 95
{
  HplAdc12P__ADC12IV = 0;
  HplAdc12P__ADC12IFG = 0;
}

# 106 "../../../../tos/chips/msp430/adc12/HplAdc12.nc"
inline static void shimmerAnalogSetupP__HplAdc12__resetIFGs(void ){
#line 106
  HplAdc12P__HplAdc12__resetIFGs();
#line 106
}
#line 106
# 92 "../../../../tos/chips/msp430/adc12/HplAdc12P.nc"
static inline void HplAdc12P__HplAdc12__setIEFlags(uint16_t mask)
#line 92
{
#line 92
  HplAdc12P__ADC12IE = mask;
}

# 95 "../../../../tos/chips/msp430/adc12/HplAdc12.nc"
inline static void shimmerAnalogSetupP__HplAdc12__setIEFlags(uint16_t mask){
#line 95
  HplAdc12P__HplAdc12__setIEFlags(mask);
#line 95
}
#line 95
# 105 "../../../../tos/chips/msp430/adc12/HplAdc12P.nc"
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

# 123 "../../../../tos/chips/msp430/adc12/HplAdc12.nc"
inline static void shimmerAnalogSetupP__HplAdc12__stopConversion(void ){
#line 123
  HplAdc12P__HplAdc12__stopConversion();
#line 123
}
#line 123
# 183 "../../../../tos/platforms/shimmer/shimmerAnalogSetupP.nc"
static inline void shimmerAnalogSetupP__shimmerAnalogSetup__stopConversion(void )
#line 183
{
  shimmerAnalogSetupP__HplAdc12__stopConversion();
  shimmerAnalogSetupP__HplAdc12__setIEFlags(0);
  shimmerAnalogSetupP__HplAdc12__resetIFGs();
}

# 81 "../../../../tos/platforms/shimmer/shimmerAnalogSetup.nc"
inline static void BtStreamC__shimmerAnalogSetup__stopConversion(void ){
#line 81
  shimmerAnalogSetupP__shimmerAnalogSetup__stopConversion();
#line 81
}
#line 81
# 65 "../../../../tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*BtStreamAppC.SampleTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__stop(void )
{
  /*BtStreamAppC.SampleTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents();
}

# 73 "../../../../tos/lib/timer/Alarm.nc"
inline static void /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__AlarmFrom__stop(void ){
#line 73
  /*BtStreamAppC.SampleTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__stop();
#line 73
}
#line 73
# 102 "../../../../tos/lib/timer/TransformAlarmC.nc"
static inline void /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__Alarm__stop(void )
{
  /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__AlarmFrom__stop();
}

# 73 "../../../../tos/lib/timer/Alarm.nc"
inline static void BtStreamC__SampleTimer__stop(void ){
#line 73
  /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__Alarm__stop();
#line 73
}
#line 73
# 78 "../../../../tos/lib/timer/Timer.nc"
inline static void BtStreamC__SetupTimer__stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(0U);
#line 78
}
#line 78
# 269 "BtStreamC.nc"
static inline void BtStreamC__stopSensing__runTask(void )
#line 269
{
  BtStreamC__SetupTimer__stop();
  BtStreamC__SampleTimer__stop();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 272
    BtStreamC__sensing = FALSE;
#line 272
    __nesc_atomic_end(__nesc_atomic); }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 274
    {
      if (BtStreamC__mag_read_pending) {
        BtStreamC__stop_sensing_pending = TRUE;
        }
    }
#line 278
    __nesc_atomic_end(__nesc_atomic); }
  while (BtStreamC__mag_read_pending) __nop();
  BtStreamC__stop_sensing_pending = FALSE;

  BtStreamC__BlinkTimer__stop();
  BtStreamC__activityLed = FALSE;
  BtStreamC__shimmerAnalogSetup__stopConversion();
  BtStreamC__DMA0__stopTransfer();
  if (BtStreamC__stored_config[NV_SENSORS0] & SENSOR_ACCEL) {
    BtStreamC__Accel__wake(FALSE);
    }
#line 288
  if (BtStreamC__stored_config[NV_SENSORS0] & SENSOR_GYRO || BtStreamC__stored_config[NV_SENSORS0] & SENSOR_MAG) {
      BtStreamC__GyroStdControl__stop();
      BtStreamC__Magnetometer__disableBus();
    }
  if (BtStreamC__stored_config[NV_SENSORS1] & SENSOR_STRAIN) {
      BtStreamC__StrainGauge__powerOff();

      BtStreamC__stored_config[NV_CONFIG_SETUP_BYTE0] &= ~CONFIG_5V_REG;
      BtStreamC__InternalFlash__write((void *)NV_CONFIG_SETUP_BYTE0, (void *)&BtStreamC__stored_config[NV_CONFIG_SETUP_BYTE0], 1);
    }
  if (!BtStreamC__DockInterrupt__getValue() == TRUE) {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 299
        {

          BtStreamC__ClearLedFunc();
          BtStreamC__selectedLed = 0;
        }
#line 303
        __nesc_atomic_end(__nesc_atomic); }
    }
  if (BtStreamC__bt_connected) {

      BtStreamC__SetLedFunc();
    }
  else 
#line 308
    {

      BtStreamC__ClearLedFunc();
      BtStreamC__ledOn = FALSE;
      BtStreamC__BlinkTimer__start(2048);
    }
  if (BtStreamC__stored_config[NV_SENSORS1] & SENSOR_HEART) {
      BtStreamC__beat_flag = FALSE;
      BtStreamC__UserButton__disable();
    }
  else 
#line 317
    {
      BtStreamC__UserButton__enable();
    }
  BtStreamC__stop_sensing = FALSE;

  if (BtStreamC__configureChannels) {
      BtStreamC__configureChannels = FALSE;
      BtStreamC__ConfigureChannelsTask__postTask();
    }
  else {
#line 325
    if (BtStreamC__wasSensing) {
        BtStreamC__wasSensing = FALSE;
        BtStreamC__startSensors__postTask();
      }
    }
}

#line 264
static inline void BtStreamC__ConfigureChannelsTask__runTask(void )
#line 264
{
  BtStreamC__configure_channels();
}

# 193 "../../../../tos/platforms/shimmer/shimmerAnalogSetupP.nc"
static inline void shimmerAnalogSetupP__shimmerAnalogSetup__reset(void )
#line 193
{
  shimmerAnalogSetupP__NUM_ADC_CHANS = 0;
}

# 70 "../../../../tos/platforms/shimmer/shimmerAnalogSetup.nc"
inline static void BtStreamC__shimmerAnalogSetup__reset(void ){
#line 70
  shimmerAnalogSetupP__shimmerAnalogSetup__reset();
#line 70
}
#line 70
# 104 "../../../../tos/platforms/shimmer2r/hardware.h"
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

# 47 "../../../../tos/platforms/shimmer2r/Mma7361P.nc"
static inline error_t Mma7361P__Init__init(void )
#line 47
{


  TOSH_SEL_ADC_ACCELZ_MODFUNC();
  TOSH_SEL_ADC_ACCELY_MODFUNC();
  TOSH_SEL_ADC_ACCELX_MODFUNC();

  Mma7361P__Accel__wake(1);

  return SUCCESS;
}

# 62 "../../../../tos/interfaces/Init.nc"
inline static error_t BtStreamC__AccelInit__init(void ){
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
# 96 "../../../../tos/platforms/shimmer2r/hardware.h"
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

# 62 "../../../../tos/platforms/shimmer/shimmerAnalogSetupP.nc"
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

# 46 "../../../../tos/platforms/shimmer/shimmerAnalogSetup.nc"
inline static void BtStreamC__shimmerAnalogSetup__addAccelInputs(void ){
#line 46
  shimmerAnalogSetupP__shimmerAnalogSetup__addAccelInputs();
#line 46
}
#line 46
# 95 "../../../../tos/platforms/shimmer2r/hardware.h"
static inline  void TOSH_SEL_ADC_2_MODFUNC()
#line 95
{
#line 95
  static volatile uint8_t r __asm ("0x0037");

#line 95
  r |= 1 << 2;
}

#line 95
static inline  void TOSH_MAKE_ADC_2_INPUT()
#line 95
{
#line 95
  static volatile uint8_t r __asm ("0x0036");

#line 95
  r &= ~(1 << 2);
}


static inline  void TOSH_SEL_ADC_6_MODFUNC()
#line 99
{
#line 99
  static volatile uint8_t r __asm ("0x0037");

#line 99
  r |= 1 << 6;
}

#line 99
static inline  void TOSH_MAKE_ADC_6_INPUT()
#line 99
{
#line 99
  static volatile uint8_t r __asm ("0x0036");

#line 99
  r &= ~(1 << 6);
}

#line 94
static inline  void TOSH_SEL_ADC_1_MODFUNC()
#line 94
{
#line 94
  static volatile uint8_t r __asm ("0x0037");

#line 94
  r |= 1 << 1;
}

#line 94
static inline  void TOSH_MAKE_ADC_1_INPUT()
#line 94
{
#line 94
  static volatile uint8_t r __asm ("0x0036");

#line 94
  r &= ~(1 << 1);
}

# 78 "../../../../tos/platforms/shimmer/shimmerAnalogSetupP.nc"
static inline void shimmerAnalogSetupP__shimmerAnalogSetup__addGyroInputs(void )
#line 78
{
  uint8_t new_chans[3] = { 1, 6, 2 };

#line 80
  shimmerAnalogSetupP__addNewChannels(new_chans, 3);

  shimmerAnalogSetupP__initADC12MEMCTLx();

  TOSH_MAKE_ADC_1_INPUT();
  TOSH_SEL_ADC_1_MODFUNC();

  TOSH_MAKE_ADC_6_INPUT();
  TOSH_SEL_ADC_6_MODFUNC();

  TOSH_MAKE_ADC_2_INPUT();
  TOSH_SEL_ADC_2_MODFUNC();
}

# 49 "../../../../tos/platforms/shimmer/shimmerAnalogSetup.nc"
inline static void BtStreamC__shimmerAnalogSetup__addGyroInputs(void ){
#line 49
  shimmerAnalogSetupP__shimmerAnalogSetup__addGyroInputs();
#line 49
}
#line 49
# 59 "../../../../tos/interfaces/Notify.nc"
inline static error_t GyroBoardP__buttonNotify__enable(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = GyroButtonP__Notify__enable();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 375 "../../../../tos/platforms/shimmer/chips/msp430/msp430hardware.h"
static inline void brief_pause(unsigned int n)
{
   __asm volatile ("1: \n\t"
  "dec	%0 \n\t"
  "jne	1b\n\t" : 
  "+r"(n));}

# 84 "../../../../tos/platforms/shimmer2r/hardware.h"
static inline  void TOSH_CLR_PROG_OUT_PIN()
#line 84
{
#line 84
  static volatile uint8_t r __asm ("0x0021");

#line 84
  r &= ~(1 << 1);
}

#line 123
static inline  void TOSH_CLR_UTXD0_PIN()
#line 123
{
#line 123
  static volatile uint8_t r __asm ("0x0019");

#line 123
  r &= ~(1 << 4);
}

# 53 "../../../../tos/platforms/shimmer2/chips/gyro/GyroBoardP.nc"
static inline error_t GyroBoardP__Init__init(void )
#line 53
{
  register uint16_t i;


  TOSH_MAKE_PROG_OUT_OUTPUT();
  TOSH_SEL_PROG_OUT_IOFUNC();
  TOSH_SET_PROG_OUT_PIN();


  TOSH_MAKE_SER0_CTS_OUTPUT();
  TOSH_SEL_SER0_CTS_IOFUNC();
  TOSH_CLR_SER0_CTS_PIN();


  TOSH_MAKE_UTXD0_OUTPUT();
  TOSH_SEL_UTXD0_IOFUNC();
  TOSH_CLR_UTXD0_PIN();


  TOSH_MAKE_URXD0_OUTPUT();
  TOSH_SEL_URXD0_IOFUNC();
  GyroBoardP__GyroBoard__ledOff();


  TOSH_MAKE_ADC_1_INPUT();
  TOSH_SEL_ADC_1_MODFUNC();


  TOSH_MAKE_ADC_6_INPUT();
  TOSH_SEL_ADC_6_MODFUNC();


  TOSH_MAKE_ADC_2_INPUT();
  TOSH_SEL_ADC_2_MODFUNC();





  for (i = 0; i < 6000; i++) 
    brief_pause(((unsigned long long )1000 * 4096 * 1024 / 1000000 - 2) / 3);


  TOSH_CLR_PROG_OUT_PIN();

  for (i = 0; i < 200; i++) 
    brief_pause(((unsigned long long )1000 * 4096 * 1024 / 1000000 - 2) / 3);

  GyroBoardP__buttonNotify__enable();

  return SUCCESS;
}

# 62 "../../../../tos/interfaces/Init.nc"
inline static error_t BtStreamC__GyroInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = GyroBoardP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 52 "../../../../tos/platforms/shimmer/shimmerAnalogSetup.nc"
inline static void BtStreamC__shimmerAnalogSetup__addECGInputs(void ){
#line 52
  shimmerAnalogSetupP__shimmerAnalogSetup__addECGInputs();
#line 52
}
#line 52
# 138 "../../../../tos/platforms/shimmer/shimmerAnalogSetupP.nc"
static inline void shimmerAnalogSetupP__shimmerAnalogSetup__addEMGInput(void )
#line 138
{
  uint8_t new_chans[1] = { 1 };

#line 140
  shimmerAnalogSetupP__addNewChannels(new_chans, 1);

  shimmerAnalogSetupP__initADC12MEMCTLx();

  TOSH_MAKE_ADC_1_INPUT();
  TOSH_SEL_ADC_1_MODFUNC();


  TOSH_MAKE_ADC_2_INPUT();
}

# 61 "../../../../tos/platforms/shimmer/shimmerAnalogSetup.nc"
inline static void BtStreamC__shimmerAnalogSetup__addEMGInput(void ){
#line 61
  shimmerAnalogSetupP__shimmerAnalogSetup__addEMGInput();
#line 61
}
#line 61



inline static void BtStreamC__shimmerAnalogSetup__addAnExInput(uint8_t channel){
#line 64
  shimmerAnalogSetupP__shimmerAnalogSetup__addAnExInput(channel);
#line 64
}
#line 64
# 93 "../../../../tos/platforms/shimmer2r/hardware.h"
static inline  void TOSH_SEL_ADC_0_MODFUNC()
#line 93
{
#line 93
  static volatile uint8_t r __asm ("0x0037");

#line 93
  r |= 1 << 0;
}





static inline  void TOSH_SEL_ADC_7_MODFUNC()
#line 100
{
#line 100
  static volatile uint8_t r __asm ("0x0037");

#line 100
  r |= 1 << 7;
}

# 95 "../../../../tos/platforms/shimmer/shimmerAnalogSetupP.nc"
static inline void shimmerAnalogSetupP__shimmerAnalogSetup__addStrainGaugeInputs(void )
#line 95
{
  shimmerAnalogSetupP__shimmerAnalogSetup__addECGInputs();
}

# 67 "../../../../tos/platforms/shimmer/shimmerAnalogSetup.nc"
inline static void BtStreamC__shimmerAnalogSetup__addStrainGaugeInputs(void ){
#line 67
  shimmerAnalogSetupP__shimmerAnalogSetup__addStrainGaugeInputs();
#line 67
}
#line 67
# 128 "../../../../tos/platforms/shimmer/shimmerAnalogSetupP.nc"
static inline void shimmerAnalogSetupP__shimmerAnalogSetup__addGSRInput(void )
#line 128
{
  uint8_t new_chans[1] = { 6 };

#line 130
  shimmerAnalogSetupP__addNewChannels(new_chans, 1);

  shimmerAnalogSetupP__initADC12MEMCTLx();

  TOSH_MAKE_ADC_6_INPUT();
  TOSH_SEL_ADC_6_MODFUNC();
}

# 58 "../../../../tos/platforms/shimmer/shimmerAnalogSetup.nc"
inline static void BtStreamC__shimmerAnalogSetup__addGSRInput(void ){
#line 58
  shimmerAnalogSetupP__shimmerAnalogSetup__addGSRInput();
#line 58
}
#line 58
# 72 "../../../../tos/chips/msp430/dma/HplMsp430DmaXP.nc"
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

# 75 "../../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
inline static void /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__HplChannel__setState(dma_channel_state_t s, dma_channel_trigger_t t, void *src, void *dest, uint16_t size){
#line 75
  /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__setState(s, t, src, dest, size);
#line 75
}
#line 75
# 60 "../../../../tos/chips/msp430/dma/Msp430DmaChannelP.nc"
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

# 49 "../../../../tos/chips/msp430/dma/Msp430DmaChannel.nc"
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
# 71 "../../../../tos/chips/msp430/dma/HplMsp430DmaP.nc"
static inline void HplMsp430DmaP__DmaControl__clearOnFetch(void )
#line 71
{
  HplMsp430DmaP__DMACTL1 &= ~0x0004;
}

# 43 "../../../../tos/chips/msp430/dma/HplMsp430DmaControl.nc"
inline static void Msp430DmaControlP__HplControl__clearOnFetch(void ){
#line 43
  HplMsp430DmaP__DmaControl__clearOnFetch();
#line 43
}
#line 43
# 67 "../../../../tos/chips/msp430/dma/HplMsp430DmaP.nc"
static inline void HplMsp430DmaP__DmaControl__setOnFetch(void )
#line 67
{
  HplMsp430DmaP__DMACTL1 |= 0x0004;
}

# 42 "../../../../tos/chips/msp430/dma/HplMsp430DmaControl.nc"
inline static void Msp430DmaControlP__HplControl__setOnFetch(void ){
#line 42
  HplMsp430DmaP__DmaControl__setOnFetch();
#line 42
}
#line 42
# 78 "../../../../tos/chips/msp430/dma/HplMsp430DmaP.nc"
static inline void HplMsp430DmaP__DmaControl__clearRoundRobin(void )
#line 78
{
  HplMsp430DmaP__DMACTL1 &= ~0x0002;
}

# 45 "../../../../tos/chips/msp430/dma/HplMsp430DmaControl.nc"
inline static void Msp430DmaControlP__HplControl__clearRoundRobin(void ){
#line 45
  HplMsp430DmaP__DmaControl__clearRoundRobin();
#line 45
}
#line 45
# 75 "../../../../tos/chips/msp430/dma/HplMsp430DmaP.nc"
static inline void HplMsp430DmaP__DmaControl__setRoundRobin(void )
#line 75
{
  HplMsp430DmaP__DMACTL1 |= 0x0002;
}

# 44 "../../../../tos/chips/msp430/dma/HplMsp430DmaControl.nc"
inline static void Msp430DmaControlP__HplControl__setRoundRobin(void ){
#line 44
  HplMsp430DmaP__DmaControl__setRoundRobin();
#line 44
}
#line 44
# 86 "../../../../tos/chips/msp430/dma/HplMsp430DmaP.nc"
static inline void HplMsp430DmaP__DmaControl__clearENNMI(void )
#line 86
{
  HplMsp430DmaP__DMACTL1 &= ~0x0001;
}

# 47 "../../../../tos/chips/msp430/dma/HplMsp430DmaControl.nc"
inline static void Msp430DmaControlP__HplControl__clearENNMI(void ){
#line 47
  HplMsp430DmaP__DmaControl__clearENNMI();
#line 47
}
#line 47
# 82 "../../../../tos/chips/msp430/dma/HplMsp430DmaP.nc"
static inline void HplMsp430DmaP__DmaControl__setENNMI(void )
#line 82
{
  HplMsp430DmaP__DMACTL1 |= 0x0001;
}

# 46 "../../../../tos/chips/msp430/dma/HplMsp430DmaControl.nc"
inline static void Msp430DmaControlP__HplControl__setENNMI(void ){
#line 46
  HplMsp430DmaP__DmaControl__setENNMI();
#line 46
}
#line 46
# 62 "../../../../tos/chips/msp430/dma/Msp430DmaControlP.nc"
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

# 42 "../../../../tos/chips/msp430/dma/Msp430DmaControl.nc"
inline static void shimmerAnalogSetupP__Msp430DmaControl__setFlags(bool enable_nmi, bool round_robin, bool on_fetch){
#line 42
  Msp430DmaControlP__Control__setFlags(enable_nmi, round_robin, on_fetch);
#line 42
}
#line 42
# 257 "../../../../tos/chips/msp430/dma/HplMsp430DmaXP.nc"
static inline void /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__DMA__reset(void )
#line 257
{
  * (volatile uint16_t *)496U = 0;
  * (volatile uint16_t *)498U = 0;
  * (volatile uint16_t *)500U = 0;
  * (volatile uint16_t *)502U = 0;
}

# 83 "../../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
inline static void Msp430DmaControlP__HplChannel2__reset(void ){
#line 83
  /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__DMA__reset();
#line 83
}
#line 83
# 257 "../../../../tos/chips/msp430/dma/HplMsp430DmaXP.nc"
static inline void /*HplMsp430DmaC.Dma1*/HplMsp430DmaXP__1__DMA__reset(void )
#line 257
{
  * (volatile uint16_t *)488U = 0;
  * (volatile uint16_t *)490U = 0;
  * (volatile uint16_t *)492U = 0;
  * (volatile uint16_t *)494U = 0;
}

# 83 "../../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
inline static void Msp430DmaControlP__HplChannel1__reset(void ){
#line 83
  /*HplMsp430DmaC.Dma1*/HplMsp430DmaXP__1__DMA__reset();
#line 83
}
#line 83
# 257 "../../../../tos/chips/msp430/dma/HplMsp430DmaXP.nc"
static inline void /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__reset(void )
#line 257
{
  * (volatile uint16_t *)480U = 0;
  * (volatile uint16_t *)482U = 0;
  * (volatile uint16_t *)484U = 0;
  * (volatile uint16_t *)486U = 0;
}

# 83 "../../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
inline static void Msp430DmaControlP__HplChannel0__reset(void ){
#line 83
  /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__reset();
#line 83
}
#line 83
# 100 "../../../../tos/chips/msp430/dma/HplMsp430DmaP.nc"
static inline void HplMsp430DmaP__DmaControl__reset(void )
#line 100
{
  HplMsp430DmaP__DMACTL0 = 0;
  HplMsp430DmaP__DMACTL1 = 0;
}

# 50 "../../../../tos/chips/msp430/dma/HplMsp430DmaControl.nc"
inline static void Msp430DmaControlP__HplControl__reset(void ){
#line 50
  HplMsp430DmaP__DmaControl__reset();
#line 50
}
#line 50
# 55 "../../../../tos/chips/msp430/dma/Msp430DmaControlP.nc"
static inline void Msp430DmaControlP__Control__init(void )
#line 55
{
  Msp430DmaControlP__HplControl__reset();
  Msp430DmaControlP__HplChannel0__reset();
  Msp430DmaControlP__HplChannel1__reset();
  Msp430DmaControlP__HplChannel2__reset();
}

# 41 "../../../../tos/chips/msp430/dma/Msp430DmaControl.nc"
inline static void shimmerAnalogSetupP__Msp430DmaControl__init(void ){
#line 41
  Msp430DmaControlP__Control__init();
#line 41
}
#line 41
# 247 "../../../../tos/platforms/shimmer/shimmerAnalogSetupP.nc"
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

# 77 "../../../../tos/platforms/shimmer/shimmerAnalogSetup.nc"
inline static void BtStreamC__shimmerAnalogSetup__finishADCSetup(uint16_t *buffer){
#line 77
  shimmerAnalogSetupP__shimmerAnalogSetup__finishADCSetup(buffer);
#line 77
}
#line 77
# 189 "../../../../tos/platforms/shimmer/shimmerAnalogSetupP.nc"
static inline uint8_t shimmerAnalogSetupP__shimmerAnalogSetup__getNumberOfChannels(void )
#line 189
{
  return shimmerAnalogSetupP__NUM_ADC_CHANS;
}

# 83 "../../../../tos/platforms/shimmer/shimmerAnalogSetup.nc"
inline static uint8_t BtStreamC__shimmerAnalogSetup__getNumberOfChannels(void ){
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
# 215 "../../../../tos/platforms/shimmer2/chips/hmc5843/Hmc5843P.nc"
static inline error_t Hmc5843P__Magnetometer__setGain(uint8_t gain)
#line 215
{
  uint8_t ret = SUCCESS;
#line 216
  uint8_t bitmask = 0x20;

  switch (gain) {
      case 0: 
        bitmask = 0x00;
      break;
      case 1: 
        bitmask = 0x20;
      break;
      case 2: 
        bitmask = 0x40;
      break;
      case 3: 
        bitmask = 0x60;
      break;
      case 4: 
        bitmask = 0x80;
      break;
      case 5: 
        bitmask = 0xA0;
      break;
      case 6: 
        bitmask = 0xC0;
      break;
      default: 
        ret = FAIL;
      break;
    }
  Hmc5843P__writeRegValue(1, bitmask);

  return ret;
}

# 47 "../../../../tos/platforms/shimmer2/chips/hmc5843/Magnetometer.nc"
inline static error_t BtStreamC__Magnetometer__setGain(uint8_t gain){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = Hmc5843P__Magnetometer__setGain(gain);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 62 "../../../../tos/interfaces/Init.nc"
inline static error_t Hmc5843P__I2CInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = Msp430I2CP__I2CInit__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 65 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectModuleFunc(void )
#line 65
{
#line 65
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 65
    * (volatile uint8_t * )27U |= 0x01 << 3;
#line 65
    __nesc_atomic_end(__nesc_atomic); }
}

# 92 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430I2C0P__UCLK__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectModuleFunc();
#line 92
}
#line 92
# 61 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__makeInput(void )
#line 61
{
#line 61
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 61
    * (volatile uint8_t * )26U &= ~(0x01 << 3);
#line 61
    __nesc_atomic_end(__nesc_atomic); }
}

# 78 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430I2C0P__UCLK__makeInput(void ){
#line 78
  /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__makeInput();
#line 78
}
#line 78
# 65 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectModuleFunc(void )
#line 65
{
#line 65
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 65
    * (volatile uint8_t * )27U |= 0x01 << 1;
#line 65
    __nesc_atomic_end(__nesc_atomic); }
}

# 92 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430I2C0P__SIMO__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectModuleFunc();
#line 92
}
#line 92
# 61 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__makeInput(void )
#line 61
{
#line 61
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 61
    * (volatile uint8_t * )26U &= ~(0x01 << 1);
#line 61
    __nesc_atomic_end(__nesc_atomic); }
}

# 78 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430I2C0P__SIMO__makeInput(void ){
#line 78
  /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__makeInput();
#line 78
}
#line 78
# 158 "../../../../tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void HplMsp430I2C0P__HplUsart__disableSpi(void ){
#line 158
  HplMsp430Usart0P__Usart__disableSpi();
#line 158
}
#line 158
#line 128
inline static void HplMsp430I2C0P__HplUsart__disableUart(void ){
#line 128
  HplMsp430Usart0P__Usart__disableUart();
#line 128
}
#line 128
# 158 "../../../../tos/platforms/shimmer/chips/msp430/HplMsp430Usart0P.nc"
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

# 97 "../../../../tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void HplMsp430I2C0P__HplUsart__resetUsart(bool reset){
#line 97
  HplMsp430Usart0P__Usart__resetUsart(reset);
#line 97
}
#line 97
# 66 "../../../../tos/platforms/shimmer/chips/msp430/HplMsp430I2C0P.nc"
static inline void HplMsp430I2C0P__HplI2C__setModeI2C(msp430_i2c_union_config_t *config)
#line 66
{

  HplMsp430I2C0P__HplUsart__resetUsart(TRUE);
  HplMsp430I2C0P__HplUsart__disableUart();
  HplMsp430I2C0P__HplUsart__disableSpi();
  HplMsp430I2C0P__SIMO__makeInput();
  HplMsp430I2C0P__SIMO__selectModuleFunc();
  HplMsp430I2C0P__UCLK__makeInput();
  HplMsp430I2C0P__UCLK__selectModuleFunc();

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 76
    {

      IE1 &= ~(0x80 | 0x40);

      HplMsp430I2C0P__U0CTL &= ~((0x20 | 0x01) | 0x04);
      HplMsp430I2C0P__U0CTL = 0x01;
      HplMsp430I2C0P__U0CTL |= 0x04 | 0x20;
      HplMsp430I2C0P__U0CTL &= ~0x01;

      HplMsp430I2C0P__U0CTL |= 0x02;

      HplMsp430I2C0P__I2CTCTL = 0x0020;

      I2CPSC = 0x00;
      I2CSCLH = 0x03;
      I2CSCLL = 0x03;

      HplMsp430I2C0P__I2CIE = 0;
      I2CIFG = 0;
    }
#line 95
    __nesc_atomic_end(__nesc_atomic); }
}

# 8 "../../../../tos/chips/msp430/usart/HplMsp430I2C.nc"
inline static void Hmc5843P__HplI2C__setModeI2C(msp430_i2c_union_config_t *config){
#line 8
  HplMsp430I2C0P__HplI2C__setModeI2C(config);
#line 8
}
#line 8
# 107 "../../../../tos/platforms/shimmer2/chips/hmc5843/Hmc5843P.nc"
static inline void Hmc5843P__Magnetometer__enableBus(void )
#line 107
{
  Hmc5843P__HplI2C__setModeI2C(&Hmc5843P__msp430_i2c_my_config);
  Hmc5843P__I2CInit__init();

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 111
    Hmc5843P__enabled = TRUE;
#line 111
    __nesc_atomic_end(__nesc_atomic); }
}

#line 86
static inline error_t Hmc5843P__Init__init(void )
#line 86
{





  TOSH_MAKE_PROG_OUT_OUTPUT();
  TOSH_SEL_PROG_OUT_IOFUNC();
  TOSH_CLR_PROG_OUT_PIN();

  brief_pause(((unsigned long long )10000 * 4096 * 1024 / 1000000 - 2) / 3);

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 98
    Hmc5843P__enabled = FALSE;
#line 98
    __nesc_atomic_end(__nesc_atomic); }

  Hmc5843P__Magnetometer__enableBus();

  Hmc5843P__testPhase = 0;

  return SUCCESS;
}

# 62 "../../../../tos/interfaces/Init.nc"
inline static error_t BtStreamC__MagInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = Hmc5843P__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 42 "../../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void Rmcm01P__BeatInterrupt__enable(void ){
#line 42
  HplMsp430InterruptP__Port20__enable();
#line 42
}
#line 42
# 206 "../../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port20__clear(void )
#line 206
{
#line 206
  P2IFG &= ~(1 << 0);
}

# 52 "../../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void Rmcm01P__BeatInterrupt__clear(void ){
#line 52
  HplMsp430InterruptP__Port20__clear();
#line 52
}
#line 52
#line 67
inline static void Rmcm01P__BeatInterrupt__edge(bool low_to_high){
#line 67
  HplMsp430InterruptP__Port20__edge(low_to_high);
#line 67
}
#line 67
#line 47
inline static void Rmcm01P__BeatInterrupt__disable(void ){
#line 47
  HplMsp430InterruptP__Port20__disable();
#line 47
}
#line 47
# 67 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P20*/HplMsp430GeneralIOP__8__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )46U &= ~(0x01 << 0);
}

# 99 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Rmcm01P__Msp430GeneralIO__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P20*/HplMsp430GeneralIOP__8__IO__selectIOFunc();
#line 99
}
#line 99
#line 78
inline static void Rmcm01P__Msp430GeneralIO__makeInput(void ){
#line 78
  /*HplMsp430GeneralIOC.P20*/HplMsp430GeneralIOP__8__IO__makeInput();
#line 78
}
#line 78
# 100 "../../../../tos/platforms/shimmer2r/hardware.h"
static inline  void TOSH_MAKE_ADC_7_INPUT()
#line 100
{
#line 100
  static volatile uint8_t r __asm ("0x0036");

#line 100
  r &= ~(1 << 7);
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

# 63 "../../../../tos/platforms/shimmer/chips/rmcm01/Rmcm01P.nc"
static inline error_t Rmcm01P__Init__init(void )
#line 63
{
  TOSH_MAKE_ADC_0_INPUT();
  TOSH_MAKE_ADC_7_INPUT();

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 67
    {
      Rmcm01P__Msp430GeneralIO__makeInput();
      Rmcm01P__Msp430GeneralIO__selectIOFunc();

      Rmcm01P__BeatInterrupt__disable();
      Rmcm01P__BeatInterrupt__edge(TRUE);

      Rmcm01P__BeatInterrupt__clear();
      Rmcm01P__BeatInterrupt__enable();
    }
#line 76
    __nesc_atomic_end(__nesc_atomic); }

  Rmcm01P__last = 0;

  return SUCCESS;
}

# 62 "../../../../tos/interfaces/Init.nc"
inline static error_t BtStreamC__DigitalHeartInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = Rmcm01P__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 124 "../../../../tos/platforms/shimmer2r/hardware.h"
static inline  void TOSH_CLR_URXD0_PIN()
#line 124
{
#line 124
  static volatile uint8_t r __asm ("0x0019");

#line 124
  r &= ~(1 << 5);
}

# 73 "../../../../tos/platforms/shimmer2/chips/straingauge/StrainGaugeP.nc"
static inline void StrainGaugeP__StrainGauge__ledOn(void )
#line 73
{
  TOSH_CLR_URXD0_PIN();
}

#line 63
static inline void StrainGaugeP__StrainGauge__powerOn(void )
#line 63
{
  StrainGaugeP__StrainGauge__ledOn();
  TOSH_SET_SER0_RTS_PIN();
}

# 36 "../../../../tos/platforms/shimmer2/chips/straingauge/StrainGauge.nc"
inline static void BtStreamC__StrainGauge__powerOn(void ){
#line 36
  StrainGaugeP__StrainGauge__powerOn();
#line 36
}
#line 36
# 46 "../../../../tos/platforms/shimmer2/chips/straingauge/StrainGaugeP.nc"
static inline error_t StrainGaugeP__Init__init(void )
#line 46
{


  TOSH_MAKE_SER0_RTS_OUTPUT();
  TOSH_SEL_SER0_RTS_IOFUNC();


  StrainGaugeP__StrainGauge__powerOff();


  TOSH_MAKE_URXD0_OUTPUT();
  TOSH_SEL_URXD0_IOFUNC();
  StrainGaugeP__StrainGauge__ledOff();

  return SUCCESS;
}

# 62 "../../../../tos/interfaces/Init.nc"
inline static error_t BtStreamC__StrainInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = StrainGaugeP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 46 "../../../../tos/platforms/shimmer/chips/gsr/Gsr.nc"
inline static void BtStreamC__Gsr__setRange(uint8_t range){
#line 46
  GsrP__Gsr__setRange(range);
#line 46
}
#line 46
# 206 "../../../../tos/platforms/shimmer/chips/gsr/GsrP.nc"
static inline void GsrP__Gsr__initSmoothing(uint8_t active_resistor)
#line 206
{
  GsrP__last_active_resistor = active_resistor;
  GsrP__got_first_sample = FALSE;
  GsrP__transient_sample = 6;
  GsrP__transient_smoothing_samples = 0;
  GsrP__max_resistance_step = 5000;
  GsrP__last_resistance = 10000000;
}

#line 88
static inline error_t GsrP__Init__init(void )
#line 88
{

  TOSH_MAKE_PROG_OUT_OUTPUT();
  TOSH_SEL_PROG_OUT_IOFUNC();

  TOSH_MAKE_SER0_CTS_OUTPUT();
  TOSH_SEL_SER0_CTS_IOFUNC();



  GsrP__Gsr__setRange(HW_RES_40K);
  GsrP__last_active_resistor = HW_RES_40K;

  GsrP__Gsr__initSmoothing(HW_RES_40K);

  return SUCCESS;
}

# 62 "../../../../tos/interfaces/Init.nc"
inline static error_t BtStreamC__GsrInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = GsrP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 153 "../../../../tos/platforms/shimmer2r/hardware.h"
static inline  void TOSH_SET_ACCEL_SEL0_PIN()
#line 153
{
#line 153
  static volatile uint8_t r __asm ("0x001D");

#line 153
  r |= 1 << 4;
}

# 66 "../../../../tos/platforms/shimmer2r/Mma7361P.nc"
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

# 54 "../../../../tos/platforms/shimmer/chips/mma7260/Mma_Accel.nc"
inline static void BtStreamC__Accel__setSensitivity(uint8_t sensitivity){
#line 54
  Mma7361P__Accel__setSensitivity(sensitivity);
#line 54
}
#line 54
# 106 "../../../../tos/platforms/shimmer2/chips/gyro/GyroBoardP.nc"
static inline error_t GyroBoardP__StdControl__start(void )
#line 106
{





  TOSH_CLR_PROG_OUT_PIN();

  return SUCCESS;
}

# 95 "../../../../tos/interfaces/StdControl.nc"
inline static error_t BtStreamC__GyroStdControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = GyroBoardP__StdControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 199 "BtStreamC.nc"
static inline void BtStreamC__startSensors__runTask(void )
#line 199
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 200
    BtStreamC__buffered_buffer_size = BtStreamC__stored_config[NV_BUFFER_SIZE];
#line 200
    __nesc_atomic_end(__nesc_atomic); }

  if (((BtStreamC__nbr_adc_chans + BtStreamC__nbr_2byte_digi_chans) * 2 + BtStreamC__nbr_1byte_digi_chans + 2) * BtStreamC__buffered_buffer_size <= 254) {


      BtStreamC__UserButton__disable();

      if (BtStreamC__stored_config[NV_SENSORS0] & SENSOR_GYRO) {
          BtStreamC__GyroStdControl__start();
        }

      if (BtStreamC__stored_config[NV_SENSORS0] & SENSOR_ACCEL) {
          BtStreamC__Accel__setSensitivity(BtStreamC__stored_config[NV_ACCEL_RANGE]);
          BtStreamC__Accel__wake(TRUE);
        }

      if (BtStreamC__stored_config[NV_SENSORS0] & SENSOR_GSR) {
          BtStreamC__GsrInit__init();
          if (BtStreamC__stored_config[NV_GSR_RANGE] <= HW_RES_3M3) {
              BtStreamC__Gsr__setRange(BtStreamC__stored_config[NV_GSR_RANGE]);
              BtStreamC__gsr_active_resistor = BtStreamC__stored_config[NV_GSR_RANGE];
            }
          else {
              BtStreamC__Gsr__setRange(HW_RES_40K);
              BtStreamC__gsr_active_resistor = HW_RES_40K;
            }
        }


      if (BtStreamC__stored_config[NV_SENSORS1] & SENSOR_STRAIN) {
          BtStreamC__StrainInit__init();
          BtStreamC__StrainGauge__powerOn();

          BtStreamC__stored_config[NV_CONFIG_SETUP_BYTE0] |= CONFIG_5V_REG;
          BtStreamC__InternalFlash__write((void *)NV_CONFIG_SETUP_BYTE0, (void *)&BtStreamC__stored_config[NV_CONFIG_SETUP_BYTE0], 1);
        }

      if (BtStreamC__stored_config[NV_SENSORS1] & SENSOR_HEART) {
          BtStreamC__DigitalHeartInit__init();
          BtStreamC__beat_flag = FALSE;
        }

      if (BtStreamC__stored_config[NV_SENSORS0] & SENSOR_MAG) {
          BtStreamC__MagInit__init();
          BtStreamC__magStartContinuousConversion = TRUE;

          if ((BtStreamC__stored_config[NV_MAG_CONFIG] & 0x0F) != TEN_HZ) {
            BtStreamC__changeMagSamplingRate = TRUE;
            }
#line 248
          if (((BtStreamC__stored_config[NV_MAG_CONFIG] & 0xF0) >> 4) != ONE_GAUSS) {
              BtStreamC__Magnetometer__setGain((BtStreamC__stored_config[NV_MAG_CONFIG] & 0xF0) >> 4);
            }
          else {
#line 250
            if (BtStreamC__changeMagSamplingRate) {
                BtStreamC__changeMagSamplingRate = FALSE;
                BtStreamC__Magnetometer__setOutputRate(BtStreamC__stored_config[NV_MAG_CONFIG] & 0x0F);
              }
            else 
#line 253
              {
                BtStreamC__magStartContinuousConversion = FALSE;
                BtStreamC__Magnetometer__runContinuousConversion();
              }
            }
        }
      else 
#line 257
        {
          BtStreamC__startStreaming();
        }
    }
}

# 67 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )27U &= ~(0x01 << 1);
}

# 99 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__SIMO__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectIOFunc();
#line 99
}
#line 99
# 67 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )27U &= ~(0x01 << 2);
}

# 99 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__SOMI__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectIOFunc();
#line 99
}
#line 99
# 67 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )27U &= ~(0x01 << 3);
}

# 99 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__UCLK__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectIOFunc();
#line 99
}
#line 99
# 182 "BtStreamC.nc"
static inline void BtStreamC__ToggleLed__runTask(void )
#line 182
{
  BtStreamC__ToggleLedFunc();
}

# 67 "../../../../tos/interfaces/TaskBasic.nc"
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
# 80 "../../../../tos/interfaces/AMSend.nc"
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
# 114 "../../../../tos/lib/printf/PrintfP.nc"
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

# 60 "../../../../tos/lib/serial/SerialActiveMessageP.nc"
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

# 103 "../../../../tos/interfaces/AMPacket.nc"
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

# 177 "../../../../tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setType(message_t *amsg, am_id_t type)
#line 177
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 179
  __nesc_hton_uint8(header->type.nxdata, type);
}

# 162 "../../../../tos/interfaces/AMPacket.nc"
inline static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(message_t * amsg, am_id_t t){
#line 162
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setType(amsg, t);
#line 162
}
#line 162
# 80 "../../../../tos/interfaces/AMSend.nc"
inline static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(am_id_t arg_0x7fa72e9670d0, am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(arg_0x7fa72e9670d0, addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 78 "../../../../tos/interfaces/AMPacket.nc"
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
# 127 "../../../../tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__setPayloadLength(message_t *msg, uint8_t len)
#line 127
{
  __nesc_hton_uint8(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(msg)->length.nxdata, len);
}

# 94 "../../../../tos/interfaces/Packet.nc"
inline static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(message_t * msg, uint8_t len){
#line 94
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__setPayloadLength(msg, len);
#line 94
}
#line 94
# 90 "../../../../tos/system/AMQueueImplP.nc"
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

# 75 "../../../../tos/interfaces/Send.nc"
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

# 131 "../../../../tos/lib/serial/SerialActiveMessageP.nc"
static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void )
#line 131
{
  return 28;
}

# 539 "../../../../tos/lib/serial/SerialP.nc"
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

# 62 "../../../../tos/lib/serial/SendBytePacket.nc"
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
# 54 "../../../../tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen)
#line 54
{
  return upperLen + sizeof(serial_header_t );
}

# 361 "../../../../tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen)
#line 362
{
  return 0;
}

# 23 "../../../../tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(uart_id_t arg_0x7fa72e7c04d0, message_t *msg, uint8_t upperLen){
#line 23
  unsigned char __nesc_result;
#line 23

#line 23
  switch (arg_0x7fa72e7c04d0) {
#line 23
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 23
      __nesc_result = SerialPacketInfoActiveMessageP__Info__dataLinkLength(msg, upperLen);
#line 23
      break;
#line 23
    default:
#line 23
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(arg_0x7fa72e7c04d0, msg, upperLen);
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
# 51 "../../../../tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__offset(void )
#line 51
{
  return (uint8_t )(sizeof(message_header_t ) - sizeof(serial_header_t ));
}

# 358 "../../../../tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(uart_id_t id)
#line 358
{
  return 0;
}

# 15 "../../../../tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(uart_id_t arg_0x7fa72e7c04d0){
#line 15
  unsigned char __nesc_result;
#line 15

#line 15
  switch (arg_0x7fa72e7c04d0) {
#line 15
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 15
      __nesc_result = SerialPacketInfoActiveMessageP__Info__offset();
#line 15
      break;
#line 15
    default:
#line 15
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(arg_0x7fa72e7c04d0);
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
# 111 "../../../../tos/lib/serial/SerialDispatcherP.nc"
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

# 75 "../../../../tos/interfaces/Send.nc"
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
# 67 "../../../../tos/interfaces/TaskBasic.nc"
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
# 70 "../../../../tos/platforms/shimmer2r/ShimmerSerialP.nc"
static inline void ShimmerSerialP__Resource__granted(void )
#line 70
{
}

# 238 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
static inline void /*Msp430Uart0P.UartP*/Msp430UartP__0__Resource__default__granted(uint8_t id)
#line 238
{
}

# 102 "../../../../tos/interfaces/Resource.nc"
inline static void /*Msp430Uart0P.UartP*/Msp430UartP__0__Resource__granted(uint8_t arg_0x7fa72e6b5e10){
#line 102
  switch (arg_0x7fa72e6b5e10) {
#line 102
    case /*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID:
#line 102
      ShimmerSerialP__Resource__granted();
#line 102
      break;
#line 102
    default:
#line 102
      /*Msp430Uart0P.UartP*/Msp430UartP__0__Resource__default__granted(arg_0x7fa72e6b5e10);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 101 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
static inline void /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__granted(uint8_t id)
#line 101
{
  /*Msp430Uart0P.UartP*/Msp430UartP__0__Resource__granted(id);
}

# 202 "../../../../tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__default__granted(uint8_t id)
#line 202
{
}

# 102 "../../../../tos/interfaces/Resource.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__granted(uint8_t arg_0x7fa72e257a50){
#line 102
  switch (arg_0x7fa72e257a50) {
#line 102
    case /*PlatformSerialC.UartC.UsartC*/Msp430Usart0C__0__CLIENT_ID:
#line 102
      /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__granted(/*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID);
#line 102
      break;
#line 102
    default:
#line 102
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__default__granted(arg_0x7fa72e257a50);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 216 "../../../../tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(uint8_t id)
#line 216
{
}

# 59 "../../../../tos/interfaces/ResourceConfigure.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__configure(uint8_t arg_0x7fa72e252240){
#line 59
  switch (arg_0x7fa72e252240) {
#line 59
    case /*PlatformSerialC.UartC.UsartC*/Msp430Usart0C__0__CLIENT_ID:
#line 59
      /*Msp430Uart0P.UartP*/Msp430UartP__0__ResourceConfigure__configure(/*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID);
#line 59
      break;
#line 59
    default:
#line 59
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(arg_0x7fa72e252240);
#line 59
      break;
#line 59
    }
#line 59
}
#line 59
# 190 "../../../../tos/system/ArbiterP.nc"
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

# 72 "../../../../tos/platforms/shimmer2r/ShimmerSerialP.nc"
static inline msp430_uart_union_config_t *ShimmerSerialP__Msp430UartConfigure__getConfig(void )
#line 72
{
  return &ShimmerSerialP__msp430_uart_shimmer2_config;
}

# 234 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
static inline msp430_uart_union_config_t */*Msp430Uart0P.UartP*/Msp430UartP__0__Msp430UartConfigure__default__getConfig(uint8_t id)
#line 234
{
  return &msp430_uart_default_config;
}

# 39 "../../../../tos/chips/msp430/usart/Msp430UartConfigure.nc"
inline static msp430_uart_union_config_t */*Msp430Uart0P.UartP*/Msp430UartP__0__Msp430UartConfigure__getConfig(uint8_t arg_0x7fa72e6ae890){
#line 39
  union __nesc_unnamed4274 *__nesc_result;
#line 39

#line 39
  switch (arg_0x7fa72e6ae890) {
#line 39
    case /*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID:
#line 39
      __nesc_result = ShimmerSerialP__Msp430UartConfigure__getConfig();
#line 39
      break;
#line 39
    default:
#line 39
      __nesc_result = /*Msp430Uart0P.UartP*/Msp430UartP__0__Msp430UartConfigure__default__getConfig(arg_0x7fa72e6ae890);
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
# 364 "../../../../tos/platforms/shimmer/chips/msp430/HplMsp430Usart0P.nc"
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

# 65 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P34*/HplMsp430GeneralIOP__20__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )27U |= 0x01 << 4;
}

# 92 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__UTXD__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P34*/HplMsp430GeneralIOP__20__IO__selectModuleFunc();
#line 92
}
#line 92
# 223 "../../../../tos/platforms/shimmer/chips/msp430/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P__Usart__enableUartTx(void )
#line 223
{
  HplMsp430Usart0P__UTXD__selectModuleFunc();
  HplMsp430Usart0P__ME1 |= 0x80;
}

# 67 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P35*/HplMsp430GeneralIOP__21__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )27U &= ~(0x01 << 5);
}

# 99 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__URXD__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P35*/HplMsp430GeneralIOP__21__IO__selectIOFunc();
#line 99
}
#line 99
# 239 "../../../../tos/platforms/shimmer/chips/msp430/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P__Usart__disableUartRx(void )
#line 239
{
  HplMsp430Usart0P__ME1 &= ~0x40;
  HplMsp430Usart0P__URXD__selectIOFunc();
}

# 65 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P35*/HplMsp430GeneralIOP__21__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )27U |= 0x01 << 5;
}

# 92 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__URXD__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P35*/HplMsp430GeneralIOP__21__IO__selectModuleFunc();
#line 92
}
#line 92
# 234 "../../../../tos/platforms/shimmer/chips/msp430/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P__Usart__enableUartRx(void )
#line 234
{
  HplMsp430Usart0P__URXD__selectModuleFunc();
  HplMsp430Usart0P__ME1 |= 0x40;
}

# 67 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P34*/HplMsp430GeneralIOP__20__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )27U &= ~(0x01 << 4);
}

# 99 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__UTXD__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P34*/HplMsp430GeneralIOP__20__IO__selectIOFunc();
#line 99
}
#line 99
# 228 "../../../../tos/platforms/shimmer/chips/msp430/HplMsp430Usart0P.nc"
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

# 7 "../../../../tos/chips/msp430/usart/HplMsp430I2C.nc"
inline static void HplMsp430Usart0P__HplI2C__clearModeI2C(void ){
#line 7
  HplMsp430I2C0P__HplI2C__clearModeI2C();
#line 7
}
#line 7
# 297 "../../../../tos/platforms/shimmer/chips/msp430/HplMsp430Usart0P.nc"
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

# 174 "../../../../tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430Uart0P.UartP*/Msp430UartP__0__Usart__setModeUart(msp430_uart_union_config_t *config){
#line 174
  HplMsp430Usart0P__Usart__setModeUart(config);
#line 174
}
#line 174
# 382 "../../../../tos/platforms/shimmer/chips/msp430/HplMsp430Usart0P.nc"
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

# 182 "../../../../tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430Uart0P.UartP*/Msp430UartP__0__Usart__enableIntr(void ){
#line 182
  HplMsp430Usart0P__Usart__enableIntr();
#line 182
}
#line 182
# 110 "../../../../tos/interfaces/AMSend.nc"
inline static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(message_t * msg, error_t error){
#line 110
  PrintfP__AMSend__sendDone(msg, error);
#line 110
}
#line 110
# 65 "../../../../tos/system/AMQueueEntryP.nc"
static inline void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(message_t *m, error_t err)
#line 65
{
  /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(m, err);
}

# 215 "../../../../tos/system/AMQueueImplP.nc"
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(uint8_t id, message_t *msg, error_t err)
#line 215
{
}

# 100 "../../../../tos/interfaces/Send.nc"
inline static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(uint8_t arg_0x7fa72e969cf0, message_t * msg, error_t error){
#line 100
  switch (arg_0x7fa72e969cf0) {
#line 100
    case 0U:
#line 100
      /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(msg, error);
#line 100
      break;
#line 100
    default:
#line 100
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(arg_0x7fa72e969cf0, msg, error);
#line 100
      break;
#line 100
    }
#line 100
}
#line 100
# 163 "../../../../tos/system/AMQueueImplP.nc"
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

# 110 "../../../../tos/interfaces/AMSend.nc"
inline static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(am_id_t arg_0x7fa72e8ff940, message_t * msg, error_t error){
#line 110
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(arg_0x7fa72e8ff940, msg, error);
#line 110
}
#line 110
# 101 "../../../../tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(message_t *msg, error_t result)
#line 101
{
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(msg), msg, result);
}

# 376 "../../../../tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(uart_id_t idxxx, message_t *msg, error_t error)
#line 376
{
  return;
}

# 100 "../../../../tos/interfaces/Send.nc"
inline static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(uart_id_t arg_0x7fa72e7c1110, message_t * msg, error_t error){
#line 100
  switch (arg_0x7fa72e7c1110) {
#line 100
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 100
      /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(msg, error);
#line 100
      break;
#line 100
    default:
#line 100
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(arg_0x7fa72e7c1110, msg, error);
#line 100
      break;
#line 100
    }
#line 100
}
#line 100
# 158 "../../../../tos/lib/serial/SerialDispatcherP.nc"
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

# 65 "../../../../tos/system/AMQueueImplP.nc"
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

# 122 "../../../../tos/lib/serial/SerialActiveMessageP.nc"
static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(message_t *msg)
#line 122
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(msg);

#line 124
  return __nesc_ntoh_uint8(header->length.nxdata);
}

# 78 "../../../../tos/interfaces/Packet.nc"
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
# 67 "../../../../tos/interfaces/TaskBasic.nc"
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
# 126 "../../../../tos/interfaces/Packet.nc"
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
# 73 "../../../../tos/system/QueueC.nc"
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

# 88 "../../../../tos/interfaces/Queue.nc"
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
# 212 "../../../../tos/lib/serial/SerialDispatcherP.nc"
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

# 109 "../../../../tos/lib/serial/SerialActiveMessageP.nc"
static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(uint8_t id, message_t *msg, void *payload, uint8_t len)
#line 109
{
  return msg;
}

# 78 "../../../../tos/interfaces/Receive.nc"
inline static message_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(am_id_t arg_0x7fa72e8feb10, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
    __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(arg_0x7fa72e8feb10, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 113 "../../../../tos/lib/serial/SerialActiveMessageP.nc"
static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(message_t *msg, void *payload, uint8_t len)
#line 113
{
  return /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(msg), msg, msg->data, len);
}

# 371 "../../../../tos/lib/serial/SerialDispatcherP.nc"
static inline message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len)
#line 373
{
  return msg;
}

# 78 "../../../../tos/interfaces/Receive.nc"
inline static message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(uart_id_t arg_0x7fa72e7c2570, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  switch (arg_0x7fa72e7c2570) {
#line 78
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 78
      __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(msg, payload, len);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(arg_0x7fa72e7c2570, msg, payload, len);
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
# 57 "../../../../tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen)
#line 57
{
  return dataLinkLen - sizeof(serial_header_t );
}

# 365 "../../../../tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen)
#line 366
{
  return 0;
}

# 31 "../../../../tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(uart_id_t arg_0x7fa72e7c04d0, message_t *msg, uint8_t dataLinkLen){
#line 31
  unsigned char __nesc_result;
#line 31

#line 31
  switch (arg_0x7fa72e7c04d0) {
#line 31
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 31
      __nesc_result = SerialPacketInfoActiveMessageP__Info__upperLength(msg, dataLinkLen);
#line 31
      break;
#line 31
    default:
#line 31
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(arg_0x7fa72e7c04d0, msg, dataLinkLen);
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
# 275 "../../../../tos/lib/serial/SerialDispatcherP.nc"
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

# 49 "../../../../tos/lib/serial/SerialStartP.nc"
static inline void SerialStartP__SerialControl__stopDone(error_t error)
#line 49
{
}

# 138 "../../../../tos/interfaces/SplitControl.nc"
inline static void SerialP__SplitControl__stopDone(error_t error){
#line 138
  SerialStartP__SerialControl__stopDone(error);
#line 138
}
#line 138
# 208 "../../../../tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__granted(void )
#line 208
{
}

# 46 "../../../../tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted(void ){
#line 46
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__granted();
#line 46
}
#line 46
# 128 "../../../../tos/chips/msp430/usart/HplMsp430Usart.nc"
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
# 92 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
static inline void /*Msp430Uart0P.UartP*/Msp430UartP__0__ResourceConfigure__unconfigure(uint8_t id)
#line 92
{
  /*Msp430Uart0P.UartP*/Msp430UartP__0__Usart__resetUsart(TRUE);
  /*Msp430Uart0P.UartP*/Msp430UartP__0__Usart__disableIntr();
  /*Msp430Uart0P.UartP*/Msp430UartP__0__Usart__disableUart();
}

# 218 "../../../../tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id)
#line 218
{
}

# 65 "../../../../tos/interfaces/ResourceConfigure.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(uint8_t arg_0x7fa72e252240){
#line 65
  switch (arg_0x7fa72e252240) {
#line 65
    case /*PlatformSerialC.UartC.UsartC*/Msp430Usart0C__0__CLIENT_ID:
#line 65
      /*Msp430Uart0P.UartP*/Msp430UartP__0__ResourceConfigure__unconfigure(/*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID);
#line 65
      break;
#line 65
    default:
#line 65
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(arg_0x7fa72e252240);
#line 65
      break;
#line 65
    }
#line 65
}
#line 65
# 67 "../../../../tos/interfaces/TaskBasic.nc"
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
# 68 "../../../../tos/system/FcfsResourceQueueC.nc"
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

# 70 "../../../../tos/interfaces/ResourceQueue.nc"
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
# 60 "../../../../tos/system/FcfsResourceQueueC.nc"
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

# 53 "../../../../tos/interfaces/ResourceQueue.nc"
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
# 111 "../../../../tos/system/ArbiterP.nc"
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

# 233 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
static inline error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__default__release(uint8_t id)
#line 233
{
#line 233
  return FAIL;
}

# 120 "../../../../tos/interfaces/Resource.nc"
inline static error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__release(uint8_t arg_0x7fa72e6af580){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  switch (arg_0x7fa72e6af580) {
#line 120
    case /*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID:
#line 120
      __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__release(/*PlatformSerialC.UartC.UsartC*/Msp430Usart0C__0__CLIENT_ID);
#line 120
      break;
#line 120
    default:
#line 120
      __nesc_result = /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__default__release(arg_0x7fa72e6af580);
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
# 230 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
static inline bool /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__default__isOwner(uint8_t id)
#line 230
{
#line 230
  return FALSE;
}

# 128 "../../../../tos/interfaces/Resource.nc"
inline static bool /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__isOwner(uint8_t arg_0x7fa72e6af580){
#line 128
  unsigned char __nesc_result;
#line 128

#line 128
  switch (arg_0x7fa72e6af580) {
#line 128
    case /*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID:
#line 128
      __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__isOwner(/*PlatformSerialC.UartC.UsartC*/Msp430Usart0C__0__CLIENT_ID);
#line 128
      break;
#line 128
    default:
#line 128
      __nesc_result = /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__default__isOwner(arg_0x7fa72e6af580);
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
# 77 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
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

# 120 "../../../../tos/interfaces/Resource.nc"
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
# 65 "../../../../tos/platforms/shimmer2r/ShimmerSerialP.nc"
static inline error_t ShimmerSerialP__StdControl__stop(void )
#line 65
{
  ShimmerSerialP__Resource__release();
  return SUCCESS;
}

# 105 "../../../../tos/interfaces/StdControl.nc"
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
# 336 "../../../../tos/lib/serial/SerialP.nc"
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

# 67 "../../../../tos/interfaces/TaskBasic.nc"
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
# 344 "../../../../tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFlush__default__flush(void )
#line 344
{
  SerialP__defaultSerialFlushTask__postTask();
}

# 49 "../../../../tos/lib/serial/SerialFlush.nc"
inline static void SerialP__SerialFlush__flush(void ){
#line 49
  SerialP__SerialFlush__default__flush();
#line 49
}
#line 49
# 332 "../../../../tos/lib/serial/SerialP.nc"
static inline void SerialP__stopDoneTask__runTask(void )
#line 332
{
  SerialP__SerialFlush__flush();
}

# 48 "../../../../tos/lib/serial/SerialStartP.nc"
static inline void SerialStartP__SerialControl__startDone(error_t error)
#line 48
{
}

# 113 "../../../../tos/interfaces/SplitControl.nc"
inline static void SerialP__SplitControl__startDone(error_t error){
#line 113
  SerialStartP__SerialControl__startDone(error);
#line 113
}
#line 113
# 133 "../../../../tos/system/ArbiterP.nc"
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

# 81 "../../../../tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__immediateRequested(void ){
#line 81
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__immediateRequested();
#line 81
}
#line 81
# 206 "../../../../tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__immediateRequested(uint8_t id)
#line 206
{
}

# 61 "../../../../tos/interfaces/ResourceRequested.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__immediateRequested(uint8_t arg_0x7fa72e256cf0){
#line 61
    /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__immediateRequested(arg_0x7fa72e256cf0);
#line 61
}
#line 61
# 93 "../../../../tos/system/ArbiterP.nc"
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

# 232 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
static inline error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__default__immediateRequest(uint8_t id)
#line 232
{
#line 232
  return FAIL;
}

# 97 "../../../../tos/interfaces/Resource.nc"
inline static error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__immediateRequest(uint8_t arg_0x7fa72e6af580){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  switch (arg_0x7fa72e6af580) {
#line 97
    case /*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID:
#line 97
      __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__immediateRequest(/*PlatformSerialC.UartC.UsartC*/Msp430Usart0C__0__CLIENT_ID);
#line 97
      break;
#line 97
    default:
#line 97
      __nesc_result = /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__default__immediateRequest(arg_0x7fa72e6af580);
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
# 65 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
static inline error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__Resource__immediateRequest(uint8_t id)
#line 65
{
  return /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__immediateRequest(id);
}

# 97 "../../../../tos/interfaces/Resource.nc"
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
# 61 "../../../../tos/platforms/shimmer2r/ShimmerSerialP.nc"
static inline error_t ShimmerSerialP__StdControl__start(void )
#line 61
{
  return ShimmerSerialP__Resource__immediateRequest();
}

# 95 "../../../../tos/interfaces/StdControl.nc"
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
# 322 "../../../../tos/lib/serial/SerialP.nc"
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

# 56 "../../../../tos/lib/serial/SerialFrameComm.nc"
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
# 67 "../../../../tos/interfaces/TaskBasic.nc"
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
# 194 "../../../../tos/lib/serial/SerialDispatcherP.nc"
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

# 91 "../../../../tos/lib/serial/SendBytePacket.nc"
inline static void SerialP__SendBytePacket__sendCompleted(error_t error){
#line 91
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error);
#line 91
}
#line 91
# 244 "../../../../tos/lib/serial/SerialP.nc"
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

# 67 "../../../../tos/interfaces/TaskBasic.nc"
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
# 48 "../../../../tos/interfaces/UartStream.nc"
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
# 126 "../../../../tos/system/AMQueueImplP.nc"
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

# 70 "../../../../tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 226 "../../../../tos/platforms/shimmer/shimmerAnalogSetupP.nc"
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

# 109 "../../../../tos/lib/printf/PrintfP.nc"
static inline error_t PrintfP__Init__init(void )
#line 109
{
  /* atomic removed: atomic calls only */
#line 110
  PrintfP__state = PrintfP__S_STARTED;
  return SUCCESS;
}

# 216 "../../../../tos/lib/serial/SerialP.nc"
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

# 55 "../../../../tos/system/FcfsResourceQueueC.nc"
static inline error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__Init__init(void )
#line 55
{
  memset(/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__resQ, /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY, sizeof /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__resQ);
  return SUCCESS;
}

# 98 "../../../../tos/lib/printf/PutcharP.nc"
static inline error_t PutcharP__Init__init(void )
#line 98
{
  error_t rv = SUCCESS;



  return rv;
}

# 57 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__CC2int(/*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t x)
#line 57
{
#line 57
  union /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4____nesc_unnamed4405 {
#line 57
    /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t f;
#line 57
    uint16_t t;
  } 
#line 57
  c = { .f = x };

#line 57
  return c.t;
}

static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__compareControl(void )
{
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t x = { 
  .cm = 1, 
  .ccis = 0, 
  .clld = 0, 
  .cap = 0, 
  .ccie = 0 };

  return /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__CC2int(x);
}

#line 105
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__setControlAsCompare(void )
{
  * (volatile uint16_t * )388U = /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__compareControl();
}

# 47 "../../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__setControlAsCompare(void ){
#line 47
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__setControlAsCompare();
#line 47
}
#line 47
# 53 "../../../../tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline error_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Init__init(void )
{
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__disableEvents();
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__setControlAsCompare();
  return SUCCESS;
}

# 62 "../../../../tos/interfaces/Init.nc"
inline static error_t RealMainP__SoftwareInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Init__init();
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
# 67 "../../../../tos/interfaces/TaskBasic.nc"
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
# 562 "../../../../tos/platforms/shimmer/chips/bluetooth/RovingNetworksP.nc"
static inline error_t RovingNetworksP__StdControl__start(void )
#line 562
{
  brief_pause(((unsigned long long )15000 * 4096 * 1024 / 1000000 - 2) / 3);
  RovingNetworksP__runSetCommands__postTask();

  return SUCCESS;
}

# 95 "../../../../tos/interfaces/StdControl.nc"
inline static error_t BtStreamC__BTStdControl__start(void ){
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
# 209 "../../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port23__clear(void )
#line 209
{
#line 209
  P2IFG &= ~(1 << 3);
}

# 52 "../../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void BtStreamC__DockInterrupt__clear(void ){
#line 52
  HplMsp430InterruptP__Port23__clear();
#line 52
}
#line 52
# 193 "../../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port23__enable(void )
#line 193
{
#line 193
  P2IE |= 1 << 3;
}

# 42 "../../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void BtStreamC__DockInterrupt__enable(void ){
#line 42
  HplMsp430InterruptP__Port23__enable();
#line 42
}
#line 42
#line 67
inline static void BtStreamC__DockInterrupt__edge(bool low_to_high){
#line 67
  HplMsp430InterruptP__Port23__edge(low_to_high);
#line 67
}
#line 67
# 115 "../../../../tos/platforms/shimmer/chips/msp430/InternalFlashC.nc"
static inline error_t InternalFlashC__InternalFlash__read(void *addr, void *buf, uint16_t size)
#line 115
{

  addr += InternalFlashC__IFLASH_OFFSET;
  if (InternalFlashC__chooseSegment()) {
    addr += InternalFlashC__IFLASH_SIZE;
    }
  memcpy(buf, addr, size);

  return SUCCESS;
}

# 56 "../../../../tos/interfaces/InternalFlash.nc"
inline static error_t BtStreamC__InternalFlash__read(void *addr, void * buf, uint16_t size){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = InternalFlashC__InternalFlash__read(addr, buf, size);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 57 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__CC2int(/*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t x)
#line 57
{
#line 57
  union /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5____nesc_unnamed4406 {
#line 57
    /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t f;
#line 57
    uint16_t t;
  } 
#line 57
  c = { .f = x };

#line 57
  return c.t;
}

static inline uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__compareControl(void )
{
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t x = { 
  .cm = 1, 
  .ccis = 0, 
  .clld = 0, 
  .cap = 0, 
  .ccie = 0 };

  return /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__CC2int(x);
}

#line 105
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__setControlAsCompare(void )
{
  * (volatile uint16_t * )390U = /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__compareControl();
}

# 47 "../../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*BtStreamAppC.BlinkTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__setControlAsCompare(void ){
#line 47
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__setControlAsCompare();
#line 47
}
#line 47
# 53 "../../../../tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline error_t /*BtStreamAppC.BlinkTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Init__init(void )
{
  /*BtStreamAppC.BlinkTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__disableEvents();
  /*BtStreamAppC.BlinkTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__setControlAsCompare();
  return SUCCESS;
}

# 62 "../../../../tos/interfaces/Init.nc"
inline static error_t BtStreamC__BlinkTimerInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*BtStreamAppC.BlinkTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 57 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__CC2int(/*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t x)
#line 57
{
#line 57
  union /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3____nesc_unnamed4407 {
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

# 47 "../../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*BtStreamAppC.SampleTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__setControlAsCompare(void ){
#line 47
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__setControlAsCompare();
#line 47
}
#line 47
# 53 "../../../../tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline error_t /*BtStreamAppC.SampleTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Init__init(void )
{
  /*BtStreamAppC.SampleTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents();
  /*BtStreamAppC.SampleTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__setControlAsCompare();
  return SUCCESS;
}

# 62 "../../../../tos/interfaces/Init.nc"
inline static error_t BtStreamC__SampleTimerInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*BtStreamAppC.SampleTimer.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 219 "../../../../tos/platforms/shimmer/chips/bluetooth/RovingNetworksP.nc"
static inline void RovingNetworksP__Bluetooth__disableRemoteConfig(bool disableConfig)
#line 219
{
  RovingNetworksP__disableRemoteConfig = disableConfig;
}

# 74 "../../../../tos/platforms/shimmer/chips/bluetooth/Bluetooth.nc"
inline static void BtStreamC__Bluetooth__disableRemoteConfig(bool disableConfig){
#line 74
  RovingNetworksP__Bluetooth__disableRemoteConfig(disableConfig);
#line 74
}
#line 74
# 363 "../../../../tos/chips/msp430/usart/HplMsp430Usart1P.nc"
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

# 180 "../../../../tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void RovingNetworksP__UARTControl__enableRxIntr(void ){
#line 180
  HplMsp430Usart1P__Usart__enableRxIntr();
#line 180
}
#line 180
# 370 "../../../../tos/chips/msp430/usart/HplMsp430Usart1P.nc"
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

# 181 "../../../../tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void RovingNetworksP__UARTControl__enableTxIntr(void ){
#line 181
  HplMsp430Usart1P__Usart__enableTxIntr();
#line 181
}
#line 181
# 151 "../../../../tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static inline void HplMsp430Usart1P__Usart__setUmctl(uint8_t control)
#line 151
{
  U1MCTL = control;
}

# 90 "../../../../tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void RovingNetworksP__UARTControl__setUmctl(uint8_t umctl){
#line 90
  HplMsp430Usart1P__Usart__setUmctl(umctl);
#line 90
}
#line 90
#line 80
inline static void RovingNetworksP__UARTControl__setUbr(uint16_t ubr){
#line 80
  HplMsp430Usart1P__Usart__setUbr(ubr);
#line 80
}
#line 80
# 359 "../../../../tos/chips/msp430/usart/HplMsp430Usart1P.nc"
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

# 67 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P37*/HplMsp430GeneralIOP__23__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )27U &= ~(0x01 << 7);
}

# 99 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart1P__URXD__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P37*/HplMsp430GeneralIOP__23__IO__selectIOFunc();
#line 99
}
#line 99
# 67 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P36*/HplMsp430GeneralIOP__22__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )27U &= ~(0x01 << 6);
}

# 99 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart1P__UTXD__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P36*/HplMsp430GeneralIOP__22__IO__selectIOFunc();
#line 99
}
#line 99
# 211 "../../../../tos/chips/msp430/usart/HplMsp430Usart1P.nc"
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

# 65 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P36*/HplMsp430GeneralIOP__22__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )27U |= 0x01 << 6;
}

# 92 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart1P__UTXD__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P36*/HplMsp430GeneralIOP__22__IO__selectModuleFunc();
#line 92
}
#line 92
# 220 "../../../../tos/chips/msp430/usart/HplMsp430Usart1P.nc"
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

# 65 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P37*/HplMsp430GeneralIOP__23__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )27U |= 0x01 << 7;
}

# 92 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart1P__URXD__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P37*/HplMsp430GeneralIOP__23__IO__selectModuleFunc();
#line 92
}
#line 92
# 231 "../../../../tos/chips/msp430/usart/HplMsp430Usart1P.nc"
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

# 67 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P53*/HplMsp430GeneralIOP__35__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )51U &= ~(0x01 << 3);
}

# 99 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart1P__UCLK__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P53*/HplMsp430GeneralIOP__35__IO__selectIOFunc();
#line 99
}
#line 99
# 67 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P52*/HplMsp430GeneralIOP__34__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )51U &= ~(0x01 << 2);
}

# 99 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart1P__SOMI__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P52*/HplMsp430GeneralIOP__34__IO__selectIOFunc();
#line 99
}
#line 99
# 67 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P51*/HplMsp430GeneralIOP__33__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )51U &= ~(0x01 << 1);
}

# 99 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart1P__SIMO__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P51*/HplMsp430GeneralIOP__33__IO__selectIOFunc();
#line 99
}
#line 99
# 251 "../../../../tos/chips/msp430/usart/HplMsp430Usart1P.nc"
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

# 174 "../../../../tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void RovingNetworksP__UARTControl__setModeUart(msp430_uart_union_config_t *config){
#line 174
  HplMsp430Usart1P__Usart__setModeUart(config);
#line 174
}
#line 174
# 143 "../../../../tos/platforms/shimmer/chips/bluetooth/RovingNetworksP.nc"
static inline void RovingNetworksP__setupUART(void )
#line 143
{
  msp430_uart_union_config_t RN_uart_config = { { .ubr = UBR_1MHZ_115200, .umctl = UMCTL_1MHZ_115200, 
  .ssel = 0x02, .pena = 0, .pev = 0, .spb = 0, .clen = 1, .listen = 0, .mm = 0, .ckpl = 0, .urxse = 0, .urxeie = 0, 
  .urxwie = 0, .utxe = 1, .urxe = 1 } };

  RovingNetworksP__UARTControl__setModeUart(&RN_uart_config);








  RovingNetworksP__UARTControl__setUbr(0x08);
  RovingNetworksP__UARTControl__setUmctl(0xee);
#line 172
  RovingNetworksP__UARTControl__enableTxIntr();
  RovingNetworksP__UARTControl__enableRxIntr();
}

# 78 "../../../../tos/platforms/shimmer2r/hardware.h"
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

# 196 "../../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port26__enable(void )
#line 196
{
#line 196
  P2IE |= 1 << 6;
}

# 42 "../../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void RovingNetworksP__ConnectionInterrupt__enable(void ){
#line 42
  HplMsp430InterruptP__Port26__enable();
#line 42
}
#line 42
# 212 "../../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port26__clear(void )
#line 212
{
#line 212
  P2IFG &= ~(1 << 6);
}

# 52 "../../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
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
# 108 "../../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port16__clear(void )
#line 108
{
#line 108
  P1IFG &= ~(1 << 6);
}

# 52 "../../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void RovingNetworksP__RTSInterrupt__clear(void ){
#line 52
  HplMsp430InterruptP__Port16__clear();
#line 52
}
#line 52
# 92 "../../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port16__enable(void )
#line 92
{
#line 92
  P1IE |= 1 << 6;
}

# 42 "../../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
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
# 81 "../../../../tos/platforms/shimmer2r/hardware.h"
static inline  void TOSH_SET_BT_RESET_PIN()
#line 81
{
#line 81
  static volatile uint8_t r __asm ("0x0031");

#line 81
  r |= 1 << 5;
}

# 117 "../../../../tos/platforms/shimmer/chips/bluetooth/RovingNetworksP.nc"
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

# 114 "../../../../tos/platforms/shimmer2r/hardware.h"
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

# 518 "../../../../tos/platforms/shimmer/chips/bluetooth/RovingNetworksP.nc"
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

# 62 "../../../../tos/interfaces/Init.nc"
inline static error_t BtStreamC__BluetoothInit__init(void ){
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
# 143 "../../../../tos/platforms/shimmer/chips/msp430/FastClockP.nc"
static inline void FastClockP__FastClock__setSMCLK(uint8_t mhz)
#line 143
{
  switch (mhz) {
      case 1: 
        BCSCTL2 |= 0x06;
      FastClockP__setTimerAInputDivider(1);
      break;
      case 2: 
        BCSCTL2 |= 0x04;
      BCSCTL2 &= ~0x02;
      FastClockP__setTimerAInputDivider(2);
      break;
      case 4: 
        BCSCTL2 |= 0x02;
      BCSCTL2 &= ~0x04;
      FastClockP__setTimerAInputDivider(4);
      break;
      default: 
        BCSCTL2 |= 0x06;
      FastClockP__setTimerAInputDivider(1);
      break;
    }
}

# 41 "../../../../tos/platforms/shimmer/chips/msp430/FastClock.nc"
inline static void BtStreamC__FastClock__setSMCLK(uint8_t mhz){
#line 41
  FastClockP__FastClock__setSMCLK(mhz);
#line 41
}
#line 41
# 62 "../../../../tos/platforms/shimmer2r/Leds.nc"
inline static void FastClockP__Leds__led0Off(void ){
#line 62
  LedsP__Leds__led0Off();
#line 62
}
#line 62
#line 57
inline static void FastClockP__Leds__led0On(void ){
#line 57
  LedsP__Leds__led0On();
#line 57
}
#line 57
# 91 "../../../../tos/platforms/shimmer/chips/msp430/FastClockP.nc"
static inline error_t FastClockP__Init__init(void )
#line 91
{
  register uint8_t i;





  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 98
    {

      BCSCTL1 &= ~0x80;

      FastClockP__Leds__led0On();
      do {
          IFG1 &= ~0x02;

          __delay_cycles(50);
        }
      while (
      IFG1 & 0x02);
      FastClockP__Leds__led0Off();

      for (i = 0; i < 100; i++) 
        brief_pause(((unsigned long long )500 * 4096 * 1024 / 1000000 - 2) / 3);





      BCSCTL2 = 0;
      BCSCTL2 |= 0x80;

      BCSCTL2 |= 0x08;
      BCSCTL2 |= 0x02;
      BCSCTL2 &= ~0x04;
      FastClockP__setTimerAInputDivider(4);
    }
#line 126
    __nesc_atomic_end(__nesc_atomic); }

  return SUCCESS;
}

# 62 "../../../../tos/interfaces/Init.nc"
inline static error_t BtStreamC__FastClockInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = FastClockP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 791 "BtStreamC.nc"
static inline void BtStreamC__init(void )
#line 791
{

  BtStreamC__FastClockInit__init();
  BtStreamC__FastClock__setSMCLK(1);


  BtStreamC__enable_sending = FALSE;
  BtStreamC__bt_connected = FALSE;
  BtStreamC__command_mode_complete = FALSE;
  BtStreamC__sensing = FALSE;
  BtStreamC__wasSensing = FALSE;
  BtStreamC__configureChannels = FALSE;
  BtStreamC__changeMagSamplingRate = FALSE;
  BtStreamC__magStartContinuousConversion = FALSE;
  BtStreamC__sendAck = FALSE;
  BtStreamC__command_pending = FALSE;
  BtStreamC__mag_read_pending = FALSE;
  BtStreamC__stop_sensing_pending = FALSE;
  BtStreamC__current_buffer = 0;
  BtStreamC__nbr_1byte_digi_chans = 0;
  BtStreamC__nbr_2byte_digi_chans = 0;
  BtStreamC__nbr_adc_chans = 0;
  BtStreamC__samplingRateResponse = FALSE;
  BtStreamC__accelRangeResponse = FALSE;
  BtStreamC__configSetupByte0Response = FALSE;
  BtStreamC__gsrRangeResponse = FALSE;
  BtStreamC__shimmerVersionResponse = FALSE;
  BtStreamC__inquiryResponse = FALSE;
  BtStreamC__accelCalibrationResponse = FALSE;
  BtStreamC__gyroCalibrationResponse = FALSE;
  BtStreamC__magCalibrationResponse = FALSE;
  BtStreamC__emgCalibrationResponse = FALSE;
  BtStreamC__ecgCalibrationResponse = FALSE;
  BtStreamC__allCalibrationResponse = FALSE;
  BtStreamC__fwVersionResponse = FALSE;
  BtStreamC__blinkLedResponse = FALSE;
  BtStreamC__bufferSizeResponse = FALSE;
  BtStreamC__magGainResponse = FALSE;
  BtStreamC__magSamplingRateResponse = FALSE;
  BtStreamC__selectedLed = 0;
  BtStreamC__activityLed = FALSE;
  BtStreamC__warningLed = FALSE;
  BtStreamC__warningLedCount = 0;
  BtStreamC__beat_flag = 0;
  BtStreamC__last_GSR_val = 0;
  *BtStreamC__tx_packet0 = DATA_PACKET;
  *BtStreamC__tx_packet1 = DATA_PACKET;
  BtStreamC__current_tx_packet = BtStreamC__tx_packet0;
  BtStreamC__buffer_iteration = 0;
  BtStreamC__stop_sensing = FALSE;

  BtStreamC__BluetoothInit__init();
  BtStreamC__Bluetooth__disableRemoteConfig(TRUE);

  BtStreamC__SampleTimerInit__init();
  BtStreamC__BlinkTimerInit__init();

  BtStreamC__InternalFlash__read((void *)0, (void *)BtStreamC__stored_config, NV_NUM_CONFIG_BYTES);
  if (BtStreamC__stored_config[NV_SENSORS0] == 0xFF) {


      BtStreamC__stored_config[NV_SAMPLING_RATE] = SAMPLING_50HZ;
      BtStreamC__stored_config[NV_BUFFER_SIZE] = 1;
      BtStreamC__stored_config[NV_SENSORS0] = SENSOR_ACCEL;
      BtStreamC__stored_config[NV_SENSORS1] = 0;
      BtStreamC__stored_config[NV_ACCEL_RANGE] = RANGE_1_5G;
      BtStreamC__stored_config[NV_MAG_CONFIG] = (ONE_GAUSS << 4) + TEN_HZ;
      BtStreamC__stored_config[NV_GSR_RANGE] = HW_RES_40K;
      BtStreamC__stored_config[NV_CONFIG_SETUP_BYTE0] = 0;
      BtStreamC__InternalFlash__write((void *)0, (void *)BtStreamC__stored_config, NV_NUM_CONFIG_BYTES);
    }


  TOSH_MAKE_SER0_RTS_OUTPUT();
  TOSH_SEL_SER0_RTS_IOFUNC();
  if (BtStreamC__stored_config[NV_CONFIG_SETUP_BYTE0] & CONFIG_5V_REG) {
    TOSH_SET_SER0_RTS_PIN();
    }
  else {
#line 869
    TOSH_CLR_SER0_RTS_PIN();
    }

  if (BtStreamC__stored_config[NV_CONFIG_SETUP_BYTE0] & CONFIG_PMUX) {
    TOSH_SET_PWRMUX_SEL_PIN();
    }
  else {
#line 875
    TOSH_CLR_PWRMUX_SEL_PIN();
    }
  if (BtStreamC__stored_config[NV_CONFIG_SETUP_BYTE0] & CONFIG_GYRO_TEMP_VREF) {
    TOSH_SET_SER0_CTS_PIN();
    }
  else {
#line 880
    TOSH_CLR_SER0_CTS_PIN();
    }
  BtStreamC__configure_channels();

  if (!BtStreamC__DockInterrupt__getValue()) {
      BtStreamC__DockInterrupt__edge(TRUE);
    }
  else 
#line 886
    {
      BtStreamC__DockInterrupt__edge(FALSE);
    }
  BtStreamC__DockInterrupt__enable();
  BtStreamC__DockInterrupt__clear();
}

#line 1095
static inline void BtStreamC__Boot__booted(void )
#line 1095
{
  BtStreamC__init();
  BtStreamC__BTStdControl__start();
}

# 67 "../../../../tos/interfaces/TaskBasic.nc"
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
# 348 "../../../../tos/lib/serial/SerialP.nc"
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

# 104 "../../../../tos/interfaces/SplitControl.nc"
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
# 44 "../../../../tos/lib/serial/SerialStartP.nc"
static inline void SerialStartP__Boot__booted(void )
#line 44
{
  SerialStartP__SerialControl__start();
}

# 60 "../../../../tos/interfaces/Boot.nc"
inline static void RealMainP__Boot__booted(void ){
#line 60
  SerialStartP__Boot__booted();
#line 60
  BtStreamC__Boot__booted();
#line 60
}
#line 60
# 419 "../../../../tos/platforms/shimmer/chips/msp430/msp430hardware.h"
static inline  void __nesc_disable_interrupt(void )
{
  __dint();
  __nop();
}

# 63 "../../../../tos/chips/msp430/timer/Msp430ClockP.nc"
static inline mcu_power_t Msp430ClockP__McuPowerOverride__lowestState(void )
#line 63
{
  return MSP430_POWER_LPM3;
}

# 62 "../../../../tos/interfaces/McuPowerOverride.nc"
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
# 74 "../../../../tos/chips/msp430/McuSleepC.nc"
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

# 407 "../../../../tos/platforms/shimmer/chips/msp430/msp430hardware.h"
static inline  mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)
#line 407
{
  return m1 < m2 ? m1 : m2;
}

# 112 "../../../../tos/chips/msp430/McuSleepC.nc"
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

# 79 "../../../../tos/interfaces/McuSleep.nc"
inline static void SchedulerBasicP__McuSleep__sleep(void ){
#line 79
  McuSleepC__McuSleep__sleep();
#line 79
}
#line 79
# 78 "../../../../tos/system/SchedulerBasicP.nc"
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

# 72 "../../../../tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__taskLoop(void ){
#line 72
  SchedulerBasicP__Scheduler__taskLoop();
#line 72
}
#line 72
# 98 "../../../../tos/interfaces/ArbiterInfo.nc"
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
# 397 "../../../../tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__dataReceived(uint8_t data)
#line 397
{
  SerialP__rx_state_machine(FALSE, data);
}

# 94 "../../../../tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__dataReceived(uint8_t data){
#line 94
  SerialP__SerialFrameComm__dataReceived(data);
#line 94
}
#line 94
# 394 "../../../../tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__delimiterReceived(void )
#line 394
{
  SerialP__rx_state_machine(TRUE, 0);
}

# 85 "../../../../tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__delimiterReceived(void ){
#line 85
  SerialP__SerialFrameComm__delimiterReceived();
#line 85
}
#line 85
# 73 "../../../../tos/lib/serial/HdlcTranslateC.nc"
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

# 241 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
static inline void /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__default__receivedByte(uint8_t id, uint8_t byte)
#line 241
{
}

# 79 "../../../../tos/interfaces/UartStream.nc"
inline static void /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__receivedByte(uint8_t arg_0x7fa72e6b2e60, uint8_t byte){
#line 79
  switch (arg_0x7fa72e6b2e60) {
#line 79
    case /*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID:
#line 79
      HdlcTranslateC__UartStream__receivedByte(byte);
#line 79
      break;
#line 79
    default:
#line 79
      /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__default__receivedByte(arg_0x7fa72e6b2e60, byte);
#line 79
      break;
#line 79
    }
#line 79
}
#line 79
# 132 "../../../../tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error)
#line 132
{
}

# 242 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
static inline void /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__default__receiveDone(uint8_t id, uint8_t *buf, uint16_t len, error_t error)
#line 242
{
}

# 99 "../../../../tos/interfaces/UartStream.nc"
inline static void /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__receiveDone(uint8_t arg_0x7fa72e6b2e60, uint8_t * buf, uint16_t len, error_t error){
#line 99
  switch (arg_0x7fa72e6b2e60) {
#line 99
    case /*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID:
#line 99
      HdlcTranslateC__UartStream__receiveDone(buf, len, error);
#line 99
      break;
#line 99
    default:
#line 99
      /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__default__receiveDone(arg_0x7fa72e6b2e60, buf, len, error);
#line 99
      break;
#line 99
    }
#line 99
}
#line 99
# 134 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
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

# 65 "../../../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__rxDone(uint8_t id, uint8_t data)
#line 65
{
}

# 54 "../../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__rxDone(uint8_t arg_0x7fa72e297600, uint8_t data){
#line 54
  switch (arg_0x7fa72e297600) {
#line 54
    case /*PlatformSerialC.UartC.UsartC*/Msp430Usart0C__0__CLIENT_ID:
#line 54
      /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartInterrupts__rxDone(/*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID, data);
#line 54
      break;
#line 54
    default:
#line 54
      /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__rxDone(arg_0x7fa72e297600, data);
#line 54
      break;
#line 54
    }
#line 54
}
#line 54
# 90 "../../../../tos/interfaces/ArbiterInfo.nc"
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
# 54 "../../../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__rxDone(uint8_t data)
#line 54
{
  if (/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__inUse()) {
    /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__rxDone(/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__userId(), data);
    }
}

# 54 "../../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static void HplMsp430Usart0P__Interrupts__rxDone(uint8_t data){
#line 54
  /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__rxDone(data);
#line 54
}
#line 54
# 401 "../../../../tos/lib/serial/SerialP.nc"
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

# 203 "../../../../tos/lib/serial/SerialDispatcherP.nc"
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

# 62 "../../../../tos/lib/serial/ReceiveBytePacket.nc"
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
# 311 "../../../../tos/lib/serial/SerialP.nc"
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

# 80 "../../../../tos/lib/serial/ReceiveBytePacket.nc"
inline static void SerialP__ReceiveBytePacket__endPacket(error_t result){
#line 80
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(result);
#line 80
}
#line 80
# 221 "../../../../tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap(void )
#line 221
{
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which ? 0 : 1;
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer = (uint8_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which];
}

# 67 "../../../../tos/interfaces/TaskBasic.nc"
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
# 234 "../../../../tos/lib/serial/SerialP.nc"
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

# 67 "../../../../tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__SerialFrameComm__resetReceive(void )
#line 67
{
  HdlcTranslateC__state.receiveEscape = 0;
}

# 79 "../../../../tos/lib/serial/SerialFrameComm.nc"
inline static void SerialP__SerialFrameComm__resetReceive(void ){
#line 79
  HdlcTranslateC__SerialFrameComm__resetReceive();
#line 79
}
#line 79
# 244 "../../../../tos/lib/serial/SerialDispatcherP.nc"
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

# 69 "../../../../tos/lib/serial/ReceiveBytePacket.nc"
inline static void SerialP__ReceiveBytePacket__byteReceived(uint8_t data){
#line 69
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(data);
#line 69
}
#line 69
# 301 "../../../../tos/lib/serial/SerialP.nc"
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

# 55 "../../../../tos/platforms/shimmer/chips/msp430/HplMsp430I2C0P.nc"
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

# 6 "../../../../tos/chips/msp430/usart/HplMsp430I2C.nc"
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
# 66 "../../../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__I2CInterrupts__default__fired(uint8_t id)
#line 66
{
}

# 39 "../../../../tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc"
inline static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__I2CInterrupts__fired(uint8_t arg_0x7fa72e2964e0){
#line 39
    /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__I2CInterrupts__default__fired(arg_0x7fa72e2964e0);
#line 39
}
#line 39
# 59 "../../../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawI2CInterrupts__fired(void )
#line 59
{
  if (/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__inUse()) {
    /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__I2CInterrupts__fired(/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__userId());
    }
}

# 223 "../../../../tos/platforms/shimmer/chips/msp430/HplMsp430I2C0P.nc"
static inline bool HplMsp430I2C0P__HplI2C__isStartDetectPending(void )
#line 223
{
  if (I2CIFG & 0x80) {
      I2CIFG &= ~0x80;
      return SUCCESS;
    }
  return FAIL;
}

# 90 "../../../../tos/chips/msp430/usart/HplMsp430I2C.nc"
inline static bool Msp430I2CP__HplI2C__isStartDetectPending(void ){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = HplMsp430I2C0P__HplI2C__isStartDetectPending();
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 231 "../../../../tos/platforms/shimmer/chips/msp430/HplMsp430I2C0P.nc"
static inline bool HplMsp430I2C0P__HplI2C__isGeneralCallPending(void )
#line 231
{
  if (I2CIFG & 0x40) {
      I2CIFG &= ~0x40;
      return SUCCESS;
    }
  return FAIL;
}

# 91 "../../../../tos/chips/msp430/usart/HplMsp430I2C.nc"
inline static bool Msp430I2CP__HplI2C__isGeneralCallPending(void ){
#line 91
  unsigned char __nesc_result;
#line 91

#line 91
  __nesc_result = HplMsp430I2C0P__HplI2C__isGeneralCallPending();
#line 91

#line 91
  return __nesc_result;
#line 91
}
#line 91
# 67 "../../../../tos/interfaces/TaskBasic.nc"
inline static error_t Msp430I2CP__writeDone__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(Msp430I2CP__writeDone);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 237 "../../../../tos/platforms/shimmer/chips/msp430/Msp430I2CP.nc"
static inline void Msp430I2CP__localTxData(void )
#line 237
{
  uint16_t *_data16 = (uint16_t *)Msp430I2CP__data;

  if (Msp430I2CP__stateI2C != Msp430I2CP__PACKET_WRITE) {
    return;
    }


  if (I2CTCTL & 0x80) {
      I2CDRB = _data16[(int )Msp430I2CP__ptr >> 1];
      Msp430I2CP__ptr = Msp430I2CP__ptr + 2;
    }
  else {
      I2CDRB = Msp430I2CP__data[(int )Msp430I2CP__ptr];
      Msp430I2CP__ptr++;
    }



  if (Msp430I2CP__ptr == Msp430I2CP__length) {
      Msp430I2CP__I2CIE &= ~0x20;
      Msp430I2CP__result = SUCCESS;
      if (!Msp430I2CP__writeDone__postTask()) {
        Msp430I2CP__stateI2C = Msp430I2CP__IDLE;
        }
    }
}

# 67 "../../../../tos/interfaces/TaskBasic.nc"
inline static error_t Msp430I2CP__readDone__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(Msp430I2CP__readDone);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 160 "../../../../tos/platforms/shimmer/chips/msp430/Msp430I2CP.nc"
static inline void Msp430I2CP__localRxData(void )
#line 160
{
  uint16_t *_data16 = (uint16_t *)Msp430I2CP__data;

  if (Msp430I2CP__stateI2C != Msp430I2CP__PACKET_READ) {
    return;
    }


  if (I2CTCTL & 0x80) {
      _data16[(int )Msp430I2CP__ptr >> 1] = I2CDRB;
      Msp430I2CP__ptr = Msp430I2CP__ptr + 2;
    }
  else {
      Msp430I2CP__data[(int )Msp430I2CP__ptr] = I2CDRB & 0xFF;
      Msp430I2CP__ptr++;
    }



  if (Msp430I2CP__ptr == Msp430I2CP__length) {
      Msp430I2CP__I2CIE &= ~0x10;
      Msp430I2CP__result = SUCCESS;
      if (!Msp430I2CP__readDone__postTask()) {
        Msp430I2CP__stateI2C = Msp430I2CP__IDLE;
        }
    }
}

# 247 "../../../../tos/platforms/shimmer/chips/msp430/HplMsp430I2C0P.nc"
static inline bool HplMsp430I2C0P__HplI2C__isAccessReadyPending(void )
#line 247
{
  if (I2CIFG & 0x08) {
      I2CIFG &= ~0x08;
      return SUCCESS;
    }
  return FAIL;
}

# 94 "../../../../tos/chips/msp430/usart/HplMsp430I2C.nc"
inline static bool Msp430I2CP__HplI2C__isAccessReadyPending(void ){
#line 94
  unsigned char __nesc_result;
#line 94

#line 94
  __nesc_result = HplMsp430I2C0P__HplI2C__isAccessReadyPending();
#line 94

#line 94
  return __nesc_result;
#line 94
}
#line 94
# 255 "../../../../tos/platforms/shimmer/chips/msp430/HplMsp430I2C0P.nc"
static inline bool HplMsp430I2C0P__HplI2C__isOwnAddressPending(void )
#line 255
{
  if (I2CIFG & 0x04) {
      I2CIFG &= ~0x04;
      return SUCCESS;
    }
  return FAIL;
}

# 95 "../../../../tos/chips/msp430/usart/HplMsp430I2C.nc"
inline static bool Msp430I2CP__HplI2C__isOwnAddressPending(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = HplMsp430I2C0P__HplI2C__isOwnAddressPending();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 263 "../../../../tos/platforms/shimmer/chips/msp430/HplMsp430I2C0P.nc"
static inline bool HplMsp430I2C0P__HplI2C__isNoAckPending(void )
#line 263
{
  if (I2CIFG & 0x02) {
      I2CIFG &= ~0x02;
      return SUCCESS;
    }
  return FAIL;
}

# 96 "../../../../tos/chips/msp430/usart/HplMsp430I2C.nc"
inline static bool Msp430I2CP__HplI2C__isNoAckPending(void ){
#line 96
  unsigned char __nesc_result;
#line 96

#line 96
  __nesc_result = HplMsp430I2C0P__HplI2C__isNoAckPending();
#line 96

#line 96
  return __nesc_result;
#line 96
}
#line 96
# 271 "../../../../tos/platforms/shimmer/chips/msp430/HplMsp430I2C0P.nc"
static inline bool HplMsp430I2C0P__HplI2C__isArbitrationLostPending(void )
#line 271
{
  if (I2CIFG & 0x01) {
      I2CIFG &= ~0x01;
      return SUCCESS;
    }
  return FAIL;
}

# 97 "../../../../tos/chips/msp430/usart/HplMsp430I2C.nc"
inline static bool Msp430I2CP__HplI2C__isArbitrationLostPending(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = HplMsp430I2C0P__HplI2C__isArbitrationLostPending();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 285 "../../../../tos/platforms/shimmer/chips/msp430/Msp430I2CP.nc"
static inline void Msp430I2CP__I2CInterrupts__fired(void )
#line 285
{
  volatile uint16_t value = I2CIV;

  switch (value) {
      case 0x0000: 
        break;
      case 0x0002: 
        Msp430I2CP__localNoAck();
      Msp430I2CP__HplI2C__isArbitrationLostPending();
      break;
      case 0x0004: 
        Msp430I2CP__localNoAck();
      Msp430I2CP__HplI2C__isNoAckPending();
      break;
      case 0x0006: 
        Msp430I2CP__HplI2C__isOwnAddressPending();
      break;
      case 0x0008: 
        Msp430I2CP__HplI2C__isAccessReadyPending();
      break;
      case 0x000A: 
        Msp430I2CP__localRxData();
      break;
      case 0x000C: 
        Msp430I2CP__localTxData();
      break;
      case 0x000E: 
        Msp430I2CP__HplI2C__isGeneralCallPending();
      break;
      case 0x0010: 
        Msp430I2CP__HplI2C__isStartDetectPending();
      break;
    }
}

# 39 "../../../../tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc"
inline static void HplMsp430Usart0P__I2CInterrupts__fired(void ){
#line 39
  Msp430I2CP__I2CInterrupts__fired();
#line 39
  /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawI2CInterrupts__fired();
#line 39
}
#line 39
# 240 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
static inline void /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__default__sendDone(uint8_t id, uint8_t *buf, uint16_t len, error_t error)
#line 240
{
}

# 57 "../../../../tos/interfaces/UartStream.nc"
inline static void /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__sendDone(uint8_t arg_0x7fa72e6b2e60, uint8_t * buf, uint16_t len, error_t error){
#line 57
  switch (arg_0x7fa72e6b2e60) {
#line 57
    case /*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID:
#line 57
      HdlcTranslateC__UartStream__sendDone(buf, len, error);
#line 57
      break;
#line 57
    default:
#line 57
      /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__default__sendDone(arg_0x7fa72e6b2e60, buf, len, error);
#line 57
      break;
#line 57
    }
#line 57
}
#line 57
# 389 "../../../../tos/platforms/shimmer/chips/msp430/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P__Usart__tx(uint8_t data)
#line 389
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 390
    HplMsp430Usart0P__U0TXBUF = data;
#line 390
    __nesc_atomic_end(__nesc_atomic); }
}

# 224 "../../../../tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430Uart0P.UartP*/Msp430UartP__0__Usart__tx(uint8_t data){
#line 224
  HplMsp430Usart0P__Usart__tx(data);
#line 224
}
#line 224
# 162 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
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

# 64 "../../../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__txDone(uint8_t id)
#line 64
{
}

# 49 "../../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__txDone(uint8_t arg_0x7fa72e297600){
#line 49
  switch (arg_0x7fa72e297600) {
#line 49
    case /*PlatformSerialC.UartC.UsartC*/Msp430Usart0C__0__CLIENT_ID:
#line 49
      /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartInterrupts__txDone(/*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID);
#line 49
      break;
#line 49
    default:
#line 49
      /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__txDone(arg_0x7fa72e297600);
#line 49
      break;
#line 49
    }
#line 49
}
#line 49
# 49 "../../../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__txDone(void )
#line 49
{
  if (/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__inUse()) {
    /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__txDone(/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__userId());
    }
}

# 49 "../../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static void HplMsp430Usart0P__Interrupts__txDone(void ){
#line 49
  /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__txDone();
#line 49
}
#line 49
# 65 "../../../../tos/lib/serial/SerialFrameComm.nc"
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
# 530 "../../../../tos/lib/serial/SerialP.nc"
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

# 71 "../../../../tos/lib/serial/SendBytePacket.nc"
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
# 178 "../../../../tos/lib/serial/SerialDispatcherP.nc"
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

# 81 "../../../../tos/lib/serial/SendBytePacket.nc"
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
# 669 "../../../../tos/lib/serial/SerialP.nc"
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

# 100 "../../../../tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__putDone(void ){
#line 100
  SerialP__SerialFrameComm__putDone();
#line 100
}
#line 100
# 50 "../../../../tos/interfaces/Queue.nc"
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
# 65 "../../../../tos/system/QueueC.nc"
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

# 97 "../../../../tos/interfaces/Queue.nc"
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
# 152 "../../../../tos/lib/printf/PrintfP.nc"
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

# 49 "../../../../tos/lib/printf/Putchar.nc"
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
# 102 "../../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
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

# 72 "../../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port10__fired(void ){
#line 72
  HplMsp430InterruptP__Port10__default__fired();
#line 72
}
#line 72
# 103 "../../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
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

# 72 "../../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port11__fired(void ){
#line 72
  HplMsp430InterruptP__Port11__default__fired();
#line 72
}
#line 72
# 104 "../../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
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

# 72 "../../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port12__fired(void ){
#line 72
  HplMsp430InterruptP__Port12__default__fired();
#line 72
}
#line 72
# 67 "../../../../tos/interfaces/TaskBasic.nc"
inline static error_t /*GyroButtonC.SwitchToggleC*/SwitchToggleC__0__sendEvent__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*GyroButtonC.SwitchToggleC*/SwitchToggleC__0__sendEvent);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 105 "../../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port13__clear(void )
#line 105
{
#line 105
  P1IFG &= ~(1 << 3);
}

# 52 "../../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplGyroButtonC.InterruptUserButtonC*/Msp430InterruptC__0__HplInterrupt__clear(void ){
#line 52
  HplMsp430InterruptP__Port13__clear();
#line 52
}
#line 52
# 97 "../../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port13__disable(void )
#line 97
{
#line 97
  P1IE &= ~(1 << 3);
}

# 47 "../../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplGyroButtonC.InterruptUserButtonC*/Msp430InterruptC__0__HplInterrupt__disable(void ){
#line 47
  HplMsp430InterruptP__Port13__disable();
#line 47
}
#line 47
# 69 "../../../../tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline error_t /*HplGyroButtonC.InterruptUserButtonC*/Msp430InterruptC__0__Interrupt__disable(void )
#line 69
{
  /* atomic removed: atomic calls only */
#line 70
  {
    /*HplGyroButtonC.InterruptUserButtonC*/Msp430InterruptC__0__HplInterrupt__disable();
    /*HplGyroButtonC.InterruptUserButtonC*/Msp430InterruptC__0__HplInterrupt__clear();
  }
  return SUCCESS;
}

# 61 "../../../../tos/interfaces/GpioInterrupt.nc"
inline static error_t /*GyroButtonC.SwitchToggleC*/SwitchToggleC__0__GpioInterrupt__disable(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = /*HplGyroButtonC.InterruptUserButtonC*/Msp430InterruptC__0__Interrupt__disable();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 64 "../../../../tos/platforms/shimmer/SwitchToggleC.nc"
static inline void /*GyroButtonC.SwitchToggleC*/SwitchToggleC__0__GpioInterrupt__fired(void )
#line 64
{
  /*GyroButtonC.SwitchToggleC*/SwitchToggleC__0__GpioInterrupt__disable();

  /*GyroButtonC.SwitchToggleC*/SwitchToggleC__0__sendEvent__postTask();
}

# 68 "../../../../tos/interfaces/GpioInterrupt.nc"
inline static void /*HplGyroButtonC.InterruptUserButtonC*/Msp430InterruptC__0__Interrupt__fired(void ){
#line 68
  /*GyroButtonC.SwitchToggleC*/SwitchToggleC__0__GpioInterrupt__fired();
#line 68
}
#line 68
# 77 "../../../../tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline void /*HplGyroButtonC.InterruptUserButtonC*/Msp430InterruptC__0__HplInterrupt__fired(void )
#line 77
{
  /*HplGyroButtonC.InterruptUserButtonC*/Msp430InterruptC__0__HplInterrupt__clear();
  /*HplGyroButtonC.InterruptUserButtonC*/Msp430InterruptC__0__Interrupt__fired();
}

# 72 "../../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port13__fired(void ){
#line 72
  /*HplGyroButtonC.InterruptUserButtonC*/Msp430InterruptC__0__HplInterrupt__fired();
#line 72
}
#line 72
# 106 "../../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
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

# 72 "../../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port14__fired(void ){
#line 72
  HplMsp430InterruptP__Port14__default__fired();
#line 72
}
#line 72
# 107 "../../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
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

# 72 "../../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port15__fired(void ){
#line 72
  HplMsp430InterruptP__Port15__default__fired();
#line 72
}
#line 72
# 67 "../../../../tos/interfaces/TaskBasic.nc"
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
# 116 "../../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
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

# 59 "../../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
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
# 623 "../../../../tos/platforms/shimmer/chips/bluetooth/RovingNetworksP.nc"
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

# 72 "../../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port16__fired(void ){
#line 72
  RovingNetworksP__RTSInterrupt__fired();
#line 72
}
#line 72
# 109 "../../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
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

# 72 "../../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port17__fired(void ){
#line 72
  HplMsp430InterruptP__Port17__default__fired();
#line 72
}
#line 72
# 67 "../../../../tos/interfaces/TaskBasic.nc"
inline static error_t /*UserButtonC.SwitchToggleC*/SwitchToggleC__1__sendEvent__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*UserButtonC.SwitchToggleC*/SwitchToggleC__1__sendEvent);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 64 "../../../../tos/platforms/shimmer/SwitchToggleC.nc"
static inline void /*UserButtonC.SwitchToggleC*/SwitchToggleC__1__GpioInterrupt__fired(void )
#line 64
{
  /*UserButtonC.SwitchToggleC*/SwitchToggleC__1__GpioInterrupt__disable();

  /*UserButtonC.SwitchToggleC*/SwitchToggleC__1__sendEvent__postTask();
}

# 68 "../../../../tos/interfaces/GpioInterrupt.nc"
inline static void /*HplUserButtonC.InterruptUserButtonC*/Msp430InterruptC__1__Interrupt__fired(void ){
#line 68
  /*UserButtonC.SwitchToggleC*/SwitchToggleC__1__GpioInterrupt__fired();
#line 68
}
#line 68
# 52 "../../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplUserButtonC.InterruptUserButtonC*/Msp430InterruptC__1__HplInterrupt__clear(void ){
#line 52
  HplMsp430InterruptP__Port20__clear();
#line 52
}
#line 52
# 77 "../../../../tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline void /*HplUserButtonC.InterruptUserButtonC*/Msp430InterruptC__1__HplInterrupt__fired(void )
#line 77
{
  /*HplUserButtonC.InterruptUserButtonC*/Msp430InterruptC__1__HplInterrupt__clear();
  /*HplUserButtonC.InterruptUserButtonC*/Msp430InterruptC__1__Interrupt__fired();
}

# 1253 "BtStreamC.nc"
static inline void BtStreamC__DigitalHeartRate__beat(uint32_t time)
#line 1253
{
  BtStreamC__beat_flag = TRUE;
  BtStreamC__beat_time = time;
}

# 43 "../../../../tos/platforms/shimmer/chips/rmcm01/DigitalHeartRate.nc"
inline static void Rmcm01P__DigitalHeartRate__beat(uint32_t time_32k){
#line 43
  BtStreamC__DigitalHeartRate__beat(time_32k);
#line 43
}
#line 43
# 64 "../../../../tos/lib/timer/Counter.nc"
inline static /*DigitalHeartRateC.CounterToLocalTimeC*/CounterToLocalTimeC__2__Counter__size_type /*DigitalHeartRateC.CounterToLocalTimeC*/CounterToLocalTimeC__2__Counter__get(void ){
#line 64
  unsigned long __nesc_result;
#line 64

#line 64
  __nesc_result = /*Counter32khz32C.Transform*/TransformCounterC__2__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 53 "../../../../tos/lib/timer/CounterToLocalTimeC.nc"
static inline uint32_t /*DigitalHeartRateC.CounterToLocalTimeC*/CounterToLocalTimeC__2__LocalTime__get(void )
{
  return /*DigitalHeartRateC.CounterToLocalTimeC*/CounterToLocalTimeC__2__Counter__get();
}

# 61 "../../../../tos/lib/timer/LocalTime.nc"
inline static uint32_t Rmcm01P__LocalTime__get(void ){
#line 61
  unsigned long __nesc_result;
#line 61

#line 61
  __nesc_result = /*DigitalHeartRateC.CounterToLocalTimeC*/CounterToLocalTimeC__2__LocalTime__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 83 "../../../../tos/platforms/shimmer/chips/rmcm01/Rmcm01P.nc"
static inline void Rmcm01P__BeatInterrupt__fired(void )
#line 83
{

  Rmcm01P__incoming = Rmcm01P__LocalTime__get();









  if (Rmcm01P__incoming - Rmcm01P__last > 8190) {
      Rmcm01P__DigitalHeartRate__beat(Rmcm01P__incoming - Rmcm01P__last);
      Rmcm01P__last = Rmcm01P__incoming;
    }

  Rmcm01P__BeatInterrupt__clear();
}

# 72 "../../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port20__fired(void ){
#line 72
  Rmcm01P__BeatInterrupt__fired();
#line 72
  /*HplUserButtonC.InterruptUserButtonC*/Msp430InterruptC__1__HplInterrupt__fired();
#line 72
}
#line 72
# 207 "../../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
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

# 72 "../../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port21__fired(void ){
#line 72
  HplMsp430InterruptP__Port21__default__fired();
#line 72
}
#line 72
# 208 "../../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
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

# 72 "../../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port22__fired(void ){
#line 72
  HplMsp430InterruptP__Port22__default__fired();
#line 72
}
#line 72
# 1258 "BtStreamC.nc"
static inline void BtStreamC__DockInterrupt__fired(void )
#line 1258
{
  if (BtStreamC__DockInterrupt__getValue() == TRUE) {
      BtStreamC__DockInterrupt__edge(FALSE);
    }
  else 
#line 1261
    {
      BtStreamC__DockInterrupt__edge(TRUE);
      if (!BtStreamC__sensing) {
          /* atomic removed: atomic calls only */
#line 1264
          {

            BtStreamC__ClearLedFunc();
            BtStreamC__selectedLed = 0;
          }
          if (BtStreamC__bt_connected) {
#line 1269
            BtStreamC__SetLedFunc();
            }
        }
    }
#line 1272
  BtStreamC__DockInterrupt__clear();
}

# 72 "../../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port23__fired(void ){
#line 72
  BtStreamC__DockInterrupt__fired();
#line 72
}
#line 72
# 210 "../../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
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

# 72 "../../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port24__fired(void ){
#line 72
  HplMsp430InterruptP__Port24__default__fired();
#line 72
}
#line 72
# 211 "../../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
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

# 72 "../../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port25__fired(void ){
#line 72
  HplMsp430InterruptP__Port25__default__fired();
#line 72
}
#line 72
# 1117 "BtStreamC.nc"
static inline void BtStreamC__Bluetooth__connectionClosed(uint8_t reason)
#line 1117
{
  BtStreamC__enable_sending = FALSE;
  BtStreamC__bt_connected = FALSE;
  if (BtStreamC__sensing) {
    BtStreamC__stop_sensing = TRUE;
    }
  else {
#line 1123
    BtStreamC__stopSensing__postTask();
    }
}

# 94 "../../../../tos/platforms/shimmer/chips/bluetooth/Bluetooth.nc"
inline static void RovingNetworksP__Bluetooth__connectionClosed(uint8_t reason){
#line 94
  BtStreamC__Bluetooth__connectionClosed(reason);
#line 94
}
#line 94
# 1101 "BtStreamC.nc"
static inline void BtStreamC__Bluetooth__connectionMade(uint8_t status)
#line 1101
{
  BtStreamC__enable_sending = TRUE;
  BtStreamC__bt_connected = TRUE;
  BtStreamC__BlinkTimer__stop();
  BtStreamC__SetLedFunc();
}

# 93 "../../../../tos/platforms/shimmer/chips/bluetooth/Bluetooth.nc"
inline static void RovingNetworksP__Bluetooth__connectionMade(uint8_t status){
#line 93
  BtStreamC__Bluetooth__connectionMade(status);
#line 93
}
#line 93
# 220 "../../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
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

# 59 "../../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
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
# 636 "../../../../tos/platforms/shimmer/chips/bluetooth/RovingNetworksP.nc"
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

# 72 "../../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port26__fired(void ){
#line 72
  RovingNetworksP__ConnectionInterrupt__fired();
#line 72
}
#line 72
# 213 "../../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
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

# 72 "../../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port27__fired(void ){
#line 72
  HplMsp430InterruptP__Port27__default__fired();
#line 72
}
#line 72
# 329 "../../../../tos/platforms/shimmer/shimmerMessage.h"
static __inline void msg_clear(struct Message *msg)
{
  msg->length = 0;
  msg->start = 0;
}

# 67 "../../../../tos/interfaces/TaskBasic.nc"
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
# 1109 "BtStreamC.nc"
static inline void BtStreamC__Bluetooth__commandModeEnded(void )
#line 1109
{
  BtStreamC__command_mode_complete = TRUE;
  BtStreamC__SetLedFunc();
  BtStreamC__ledOn = TRUE;
  BtStreamC__BlinkTimer__start(51);
}

# 95 "../../../../tos/platforms/shimmer/chips/bluetooth/Bluetooth.nc"
inline static void RovingNetworksP__Bluetooth__commandModeEnded(void ){
#line 95
  BtStreamC__Bluetooth__commandModeEnded();
#line 95
}
#line 95
# 194 "../../../../tos/platforms/shimmer/shimmerMessage.h"
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

# 38 "BtCommandParser.nc"
inline static void BtCommandParserP__BtCommandParser__activate(const uint8_t action, uint8_t arg_size, uint8_t *arg){
#line 38
  BtStreamC__BtCommandParser__activate(action, arg_size, arg);
#line 38
}
#line 38
# 44 "BtCommandParserP.nc"
static inline void BtCommandParserP__BtCommandParser__handleByte(uint8_t data)
#line 44
{
  if (BtCommandParserP__waiting_for_args) {
      BtCommandParserP__args[BtCommandParserP__arg_size++] = data;
      if (! --BtCommandParserP__waiting_for_args) {
          BtCommandParserP__BtCommandParser__activate(BtCommandParserP__pending_command, BtCommandParserP__arg_size, BtCommandParserP__args);
          BtCommandParserP__waiting_for_args = BtCommandParserP__arg_size = 0;
        }
    }
  else {
      switch (data) {
          case INQUIRY_COMMAND: 
            case GET_SAMPLING_RATE_COMMAND: 
              case START_STREAMING_COMMAND: 
                case STOP_STREAMING_COMMAND: 
                  case TOGGLE_LED_COMMAND: 
                    case GET_ACCEL_RANGE_COMMAND: 
                      case GET_CONFIG_SETUP_BYTE0_COMMAND: 
                        case GET_ACCEL_CALIBRATION_COMMAND: 
                          case GET_GYRO_CALIBRATION_COMMAND: 
                            case GET_MAG_CALIBRATION_COMMAND: 
                              case GET_GSR_RANGE_COMMAND: 
                                case GET_SHIMMER_VERSION_COMMAND: 
                                  case GET_EMG_CALIBRATION_COMMAND: 
                                    case GET_ECG_CALIBRATION_COMMAND: 
                                      case GET_ALL_CALIBRATION_COMMAND: 
                                        case GET_FW_VERSION_COMMAND: 
                                          case GET_BLINK_LED_COMMAND: 
                                            case GET_BUFFER_SIZE_COMMAND: 
                                              case GET_MAG_GAIN_COMMAND: 
                                                case GET_MAG_SAMPLING_RATE_COMMAND: 
                                                  BtCommandParserP__BtCommandParser__activate(data, 0, (void *)0);
          break;
          case SET_SAMPLING_RATE_COMMAND: 
            case SET_ACCEL_RANGE_COMMAND: 
              case SET_5V_REGULATOR_COMMAND: 
                case SET_PMUX_COMMAND: 
                  case SET_CONFIG_SETUP_BYTE0_COMMAND: 
                    case SET_GSR_RANGE_COMMAND: 
                      case SET_BLINK_LED_COMMAND: 
                        case SET_GYRO_TEMP_VREF_COMMAND: 
                          case SET_BUFFER_SIZE_COMMAND: 
                            case SET_MAG_GAIN_COMMAND: 
                              case SET_MAG_SAMPLING_RATE_COMMAND: 
                                BtCommandParserP__waiting_for_args = 1;
          BtCommandParserP__pending_command = data;
          break;
          case SET_SENSORS_COMMAND: 
            BtCommandParserP__waiting_for_args = 2;
          BtCommandParserP__pending_command = data;
          break;
          case SET_EMG_CALIBRATION_COMMAND: 
            BtCommandParserP__waiting_for_args = 4;
          BtCommandParserP__pending_command = data;
          break;
          case SET_ECG_CALIBRATION_COMMAND: 
            BtCommandParserP__waiting_for_args = 8;
          BtCommandParserP__pending_command = data;
          break;
          case SET_ACCEL_CALIBRATION_COMMAND: 
            case SET_GYRO_CALIBRATION_COMMAND: 
              case SET_MAG_CALIBRATION_COMMAND: 
                BtCommandParserP__waiting_for_args = 21;
          BtCommandParserP__pending_command = data;
          default: ;
        }
    }
}

# 36 "BtCommandParser.nc"
inline static void BtStreamC__BtCommandParser__handleByte(uint8_t data){
#line 36
  BtCommandParserP__BtCommandParser__handleByte(data);
#line 36
}
#line 36
# 1127 "BtStreamC.nc"
static inline void BtStreamC__Bluetooth__dataAvailable(uint8_t data)
#line 1127
{
  if (BtStreamC__bt_connected) {
    BtStreamC__BtCommandParser__handleByte(data);
    }
}

# 103 "../../../../tos/platforms/shimmer/chips/bluetooth/Bluetooth.nc"
inline static void RovingNetworksP__Bluetooth__dataAvailable(uint8_t data){
#line 103
  BtStreamC__Bluetooth__dataAvailable(data);
#line 103
}
#line 103
# 590 "../../../../tos/platforms/shimmer/chips/bluetooth/RovingNetworksP.nc"
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

# 54 "../../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static void HplMsp430Usart1P__Interrupts__rxDone(uint8_t data){
#line 54
  RovingNetworksP__UARTData__rxDone(data);
#line 54
}
#line 54
# 67 "../../../../tos/interfaces/TaskBasic.nc"
inline static error_t BtStreamC__ProcessCommand__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(BtStreamC__ProcessCommand);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 616 "../../../../tos/platforms/shimmer/chips/bluetooth/RovingNetworksP.nc"
static inline void RovingNetworksP__UARTData__txDone(void )
#line 616
{
  if (!RovingNetworksP__transmissionOverflow) {
      RovingNetworksP__sendNextChar__postTask();
    }
}

# 49 "../../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static void HplMsp430Usart1P__Interrupts__txDone(void ){
#line 49
  RovingNetworksP__UARTData__txDone();
#line 49
}
#line 49
# 267 "../../../../tos/platforms/shimmer/shimmerAnalogSetupP.nc"
static inline void shimmerAnalogSetupP__HplAdc12__conversionDone(uint16_t iv)
#line 267
{
}

# 112 "../../../../tos/chips/msp430/adc12/HplAdc12.nc"
inline static void HplAdc12P__HplAdc12__conversionDone(uint16_t iv){
#line 112
  shimmerAnalogSetupP__HplAdc12__conversionDone(iv);
#line 112
}
#line 112
# 78 "../../../../tos/chips/msp430/dma/Msp430DmaControlP.nc"
static inline void Msp430DmaControlP__HplChannel2__transferDone(error_t error)
#line 78
{
}

# 127 "../../../../tos/chips/msp430/dma/Msp430DmaChannelP.nc"
static inline void /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__Channel__default__transferDone(error_t error)
#line 127
{
}

# 107 "../../../../tos/chips/msp430/dma/Msp430DmaChannel.nc"
inline static void /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__Channel__transferDone(error_t success){
#line 107
  /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__Channel__default__transferDone(success);
#line 107
}
#line 107
# 123 "../../../../tos/chips/msp430/dma/Msp430DmaChannelP.nc"
static inline void /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__HplChannel__transferDone(error_t error)
#line 123
{
  /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__Channel__transferDone(error);
}

# 85 "../../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
inline static void /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__DMA__transferDone(error_t success){
#line 85
  /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__HplChannel__transferDone(success);
#line 85
  Msp430DmaControlP__HplChannel2__transferDone(success);
#line 85
}
#line 85
# 63 "../../../../tos/chips/msp430/dma/HplMsp430DmaXP.nc"
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

# 77 "../../../../tos/chips/msp430/dma/Msp430DmaControlP.nc"
static inline void Msp430DmaControlP__HplChannel1__transferDone(error_t error)
#line 77
{
}

# 127 "../../../../tos/chips/msp430/dma/Msp430DmaChannelP.nc"
static inline void /*Msp430DmaC.Channel1P*/Msp430DmaChannelP__1__Channel__default__transferDone(error_t error)
#line 127
{
}

# 107 "../../../../tos/chips/msp430/dma/Msp430DmaChannel.nc"
inline static void /*Msp430DmaC.Channel1P*/Msp430DmaChannelP__1__Channel__transferDone(error_t success){
#line 107
  /*Msp430DmaC.Channel1P*/Msp430DmaChannelP__1__Channel__default__transferDone(success);
#line 107
}
#line 107
# 123 "../../../../tos/chips/msp430/dma/Msp430DmaChannelP.nc"
static inline void /*Msp430DmaC.Channel1P*/Msp430DmaChannelP__1__HplChannel__transferDone(error_t error)
#line 123
{
  /*Msp430DmaC.Channel1P*/Msp430DmaChannelP__1__Channel__transferDone(error);
}

# 85 "../../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
inline static void /*HplMsp430DmaC.Dma1*/HplMsp430DmaXP__1__DMA__transferDone(error_t success){
#line 85
  /*Msp430DmaC.Channel1P*/Msp430DmaChannelP__1__HplChannel__transferDone(success);
#line 85
  Msp430DmaControlP__HplChannel1__transferDone(success);
#line 85
}
#line 85
# 63 "../../../../tos/chips/msp430/dma/HplMsp430DmaXP.nc"
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

# 76 "../../../../tos/chips/msp430/dma/Msp430DmaControlP.nc"
static inline void Msp430DmaControlP__HplChannel0__transferDone(error_t error)
#line 76
{
}

# 67 "../../../../tos/interfaces/TaskBasic.nc"
inline static error_t BtStreamC__gsr_range__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(BtStreamC__gsr_range);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 91 "../../../../tos/chips/msp430/dma/Msp430DmaChannel.nc"
inline static error_t BtStreamC__DMA0__repeatTransfer(void *src_addr, void *dst_addr, uint16_t size){
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
# 1198 "BtStreamC.nc"
static inline void BtStreamC__DMA0__transferDone(error_t success)
#line 1198
{
  if (BtStreamC__current_buffer == 0) {
      BtStreamC__DMA0__repeatTransfer((void *)0x0140, (void *)BtStreamC__sbuf1, BtStreamC__nbr_adc_chans);
    }
  else {
      BtStreamC__DMA0__repeatTransfer((void *)0x0140, (void *)BtStreamC__sbuf0, BtStreamC__nbr_adc_chans);
    }
  if (BtStreamC__stored_config[NV_SENSORS0] & SENSOR_GSR) {
      BtStreamC__gsr_range__postTask();
    }
  if (BtStreamC__nbr_1byte_digi_chans > 0 || BtStreamC__nbr_2byte_digi_chans > 0) {
    BtStreamC__clockin_result__postTask();
    }
  else {
#line 1211
    BtStreamC__sendSensorData__postTask();
    }
}

# 265 "../../../../tos/platforms/shimmer/shimmerAnalogSetupP.nc"
static inline void shimmerAnalogSetupP__Msp430DmaChannel__transferDone(error_t success)
#line 265
{
}

# 107 "../../../../tos/chips/msp430/dma/Msp430DmaChannel.nc"
inline static void /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__Channel__transferDone(error_t success){
#line 107
  shimmerAnalogSetupP__Msp430DmaChannel__transferDone(success);
#line 107
  BtStreamC__DMA0__transferDone(success);
#line 107
}
#line 107
# 123 "../../../../tos/chips/msp430/dma/Msp430DmaChannelP.nc"
static inline void /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__HplChannel__transferDone(error_t error)
#line 123
{
  /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__Channel__transferDone(error);
}

# 85 "../../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
inline static void /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__transferDone(error_t success){
#line 85
  /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__HplChannel__transferDone(success);
#line 85
  Msp430DmaControlP__HplChannel0__transferDone(success);
#line 85
}
#line 85
# 63 "../../../../tos/chips/msp430/dma/HplMsp430DmaXP.nc"
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

# 39 "../../../../tos/chips/msp430/dma/HplMsp430DmaInterrupt.nc"
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
# 204 "../../../../tos/chips/msp430/dma/HplMsp430DmaXP.nc"
static inline void /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__setSrc(void *saddr)
#line 204
{
  * (volatile uint16_t *)482U = (uint16_t )saddr;
}

# 71 "../../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
inline static void /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__HplChannel__setSrc(void *saddr){
#line 71
  /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__setSrc(saddr);
#line 71
}
#line 71
# 208 "../../../../tos/chips/msp430/dma/HplMsp430DmaXP.nc"
static inline void /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__setDst(void *daddr)
#line 208
{
  * (volatile uint16_t *)484U = (uint16_t )daddr;
}

# 72 "../../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
inline static void /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__HplChannel__setDst(void *daddr){
#line 72
  /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__setDst(daddr);
#line 72
}
#line 72
# 212 "../../../../tos/chips/msp430/dma/HplMsp430DmaXP.nc"
static inline void /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__setSize(uint16_t sz)
#line 212
{
  * (volatile uint16_t *)486U = sz;
}

# 73 "../../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
inline static void /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__HplChannel__setSize(uint16_t sz){
#line 73
  /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__setSize(sz);
#line 73
}
#line 73
# 439 "../../../../tos/platforms/shimmer/chips/msp430/msp430hardware.h"
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

# 11 "../../../../tos/chips/msp430/timer/Msp430TimerCommonP.nc"
__attribute((wakeup)) __attribute((interrupt(0x000C)))  void sig_TIMERA0_VECTOR(void )
#line 11
{
#line 11
  Msp430TimerCommonP__VectorTimerA0__fired();
}

# 180 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
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

# 12 "../../../../tos/chips/msp430/timer/Msp430TimerCommonP.nc"
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

# 146 "../../../../tos/chips/msp430/timer/Msp430TimerP.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__default__fired(uint8_t n)
{
}

# 39 "../../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__fired(uint8_t arg_0x7fa72eacc8b0){
#line 39
  switch (arg_0x7fa72eacc8b0) {
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
      /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__default__fired(arg_0x7fa72eacc8b0);
#line 39
      break;
#line 39
    }
#line 39
}
#line 39
# 147 "../../../../tos/lib/timer/TransformAlarmC.nc"
static void /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__Alarm__startAt(/*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__to_size_type t0, /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__to_size_type dt)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__m_t0 = t0;
      /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__m_dt = dt;
      /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__set_alarm();
    }
#line 154
    __nesc_atomic_end(__nesc_atomic); }
}

#line 107
static void /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__set_alarm(void )
{
  /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__to_size_type now = /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__Counter__get();
#line 109
  /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__to_size_type expires;
#line 109
  /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__to_size_type remaining;




  expires = /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__m_t0 + /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__m_dt;


  remaining = (/*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__to_size_type )(expires - now);


  if (/*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__m_t0 <= now) 
    {
      if (expires >= /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__m_t0 && 
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__m_t0 || 
      expires <= now) {
        remaining = 0;
        }
    }
#line 132
  if (remaining > /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__MAX_DELAY) 
    {
      /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__m_t0 = now + /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__MAX_DELAY;
      /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__m_dt = remaining - /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__MAX_DELAY;
      remaining = /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__MAX_DELAY;
    }
  else 
    {
      /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__m_t0 += /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__m_dt;
      /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__m_dt = 0;
    }
  /*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__AlarmFrom__startAt((/*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__from_size_type )now << 5, 
  (/*BtStreamAppC.SampleTimer.Transform*/TransformAlarmC__0__from_size_type )remaining << 5);
}

# 80 "../../../../tos/lib/timer/TransformCounterC.nc"
static /*CounterMilli16C.Transform*/TransformCounterC__0__to_size_type /*CounterMilli16C.Transform*/TransformCounterC__0__Counter__get(void )
{
  /*CounterMilli16C.Transform*/TransformCounterC__0__to_size_type rv = 0;

#line 83
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*CounterMilli16C.Transform*/TransformCounterC__0__upper_count_type high = /*CounterMilli16C.Transform*/TransformCounterC__0__m_upper;
      /*CounterMilli16C.Transform*/TransformCounterC__0__from_size_type low = /*CounterMilli16C.Transform*/TransformCounterC__0__CounterFrom__get();

#line 87
      if (/*CounterMilli16C.Transform*/TransformCounterC__0__CounterFrom__isOverflowPending()) 
        {






          high++;
          low = /*CounterMilli16C.Transform*/TransformCounterC__0__CounterFrom__get();
        }
      {
        /*CounterMilli16C.Transform*/TransformCounterC__0__to_size_type high_to = high;
        /*CounterMilli16C.Transform*/TransformCounterC__0__to_size_type low_to = low >> /*CounterMilli16C.Transform*/TransformCounterC__0__LOW_SHIFT_RIGHT;

#line 101
        rv = (high_to << /*CounterMilli16C.Transform*/TransformCounterC__0__HIGH_SHIFT_LEFT) | low_to;
      }
    }
#line 103
    __nesc_atomic_end(__nesc_atomic); }
  return rv;
}

# 62 "../../../../tos/chips/msp430/timer/Msp430TimerP.nc"
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

# 80 "../../../../tos/lib/timer/TransformCounterC.nc"
static /*Counter32khz32C.Transform*/TransformCounterC__2__to_size_type /*Counter32khz32C.Transform*/TransformCounterC__2__Counter__get(void )
{
  /*Counter32khz32C.Transform*/TransformCounterC__2__to_size_type rv = 0;

  /* atomic removed: atomic calls only */
#line 84
  {
    /*Counter32khz32C.Transform*/TransformCounterC__2__upper_count_type high = /*Counter32khz32C.Transform*/TransformCounterC__2__m_upper;
    /*Counter32khz32C.Transform*/TransformCounterC__2__from_size_type low = /*Counter32khz32C.Transform*/TransformCounterC__2__CounterFrom__get();

#line 87
    if (/*Counter32khz32C.Transform*/TransformCounterC__2__CounterFrom__isOverflowPending()) 
      {






        high++;
        low = /*Counter32khz32C.Transform*/TransformCounterC__2__CounterFrom__get();
      }
    {
      /*Counter32khz32C.Transform*/TransformCounterC__2__to_size_type high_to = high;
      /*Counter32khz32C.Transform*/TransformCounterC__2__to_size_type low_to = low >> /*Counter32khz32C.Transform*/TransformCounterC__2__LOW_SHIFT_RIGHT;

#line 101
      rv = (high_to << /*Counter32khz32C.Transform*/TransformCounterC__2__HIGH_SHIFT_LEFT) | low_to;
    }
  }
  return rv;
}

# 170 "../../../../tos/system/SchedulerBasicP.nc"
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

# 107 "../../../../tos/lib/timer/TransformAlarmC.nc"
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__set_alarm(void )
{
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type now = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Counter__get();
#line 109
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type expires;
#line 109
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type remaining;




  expires = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_t0 + /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_dt;


  remaining = (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type )(expires - now);


  if (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_t0 <= now) 
    {
      if (expires >= /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_t0 && 
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_t0 || 
      expires <= now) {
        remaining = 0;
        }
    }
#line 132
  if (remaining > /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__MAX_DELAY) 
    {
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_t0 = now + /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__MAX_DELAY;
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_dt = remaining - /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__MAX_DELAY;
      remaining = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__MAX_DELAY;
    }
  else 
    {
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_t0 += /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_dt;
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_dt = 0;
    }
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__startAt((/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__from_size_type )now << 5, 
  (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__from_size_type )remaining << 5);
}

# 80 "../../../../tos/lib/timer/TransformCounterC.nc"
static /*CounterMilli32C.Transform*/TransformCounterC__1__to_size_type /*CounterMilli32C.Transform*/TransformCounterC__1__Counter__get(void )
{
  /*CounterMilli32C.Transform*/TransformCounterC__1__to_size_type rv = 0;

#line 83
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*CounterMilli32C.Transform*/TransformCounterC__1__upper_count_type high = /*CounterMilli32C.Transform*/TransformCounterC__1__m_upper;
      /*CounterMilli32C.Transform*/TransformCounterC__1__from_size_type low = /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__get();

#line 87
      if (/*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__isOverflowPending()) 
        {






          high++;
          low = /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__get();
        }
      {
        /*CounterMilli32C.Transform*/TransformCounterC__1__to_size_type high_to = high;
        /*CounterMilli32C.Transform*/TransformCounterC__1__to_size_type low_to = low >> /*CounterMilli32C.Transform*/TransformCounterC__1__LOW_SHIFT_RIGHT;

#line 101
        rv = (high_to << /*CounterMilli32C.Transform*/TransformCounterC__1__HIGH_SHIFT_LEFT) | low_to;
      }
    }
#line 103
    __nesc_atomic_end(__nesc_atomic); }
  return rv;
}

# 147 "../../../../tos/lib/timer/TransformAlarmC.nc"
static void /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__Alarm__startAt(/*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__to_size_type t0, /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__to_size_type dt)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__m_t0 = t0;
      /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__m_dt = dt;
      /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__set_alarm();
    }
#line 154
    __nesc_atomic_end(__nesc_atomic); }
}

#line 107
static void /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__set_alarm(void )
{
  /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__to_size_type now = /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__Counter__get();
#line 109
  /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__to_size_type expires;
#line 109
  /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__to_size_type remaining;




  expires = /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__m_t0 + /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__m_dt;


  remaining = (/*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__to_size_type )(expires - now);


  if (/*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__m_t0 <= now) 
    {
      if (expires >= /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__m_t0 && 
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__m_t0 || 
      expires <= now) {
        remaining = 0;
        }
    }
#line 132
  if (remaining > /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__MAX_DELAY) 
    {
      /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__m_t0 = now + /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__MAX_DELAY;
      /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__m_dt = remaining - /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__MAX_DELAY;
      remaining = /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__MAX_DELAY;
    }
  else 
    {
      /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__m_t0 += /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__m_dt;
      /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__m_dt = 0;
    }
  /*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__AlarmFrom__startAt((/*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__from_size_type )now << 5, 
  (/*BtStreamAppC.BlinkTimer.Transform*/TransformAlarmC__2__from_size_type )remaining << 5);
}

# 57 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static void /*HplMsp430GeneralIOC.P40*/HplMsp430GeneralIOP__24__IO__clr(void )
#line 57
{
#line 57
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 57
    * (volatile uint8_t * )29U &= ~(0x01 << 0);
#line 57
    __nesc_atomic_end(__nesc_atomic); }
}

#line 58
static void /*HplMsp430GeneralIOC.P40*/HplMsp430GeneralIOP__24__IO__toggle(void )
#line 58
{
#line 58
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 58
    * (volatile uint8_t * )29U ^= 0x01 << 0;
#line 58
    __nesc_atomic_end(__nesc_atomic); }
}

#line 56
static void /*HplMsp430GeneralIOC.P43*/HplMsp430GeneralIOP__27__IO__set(void )
#line 56
{
#line 56
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 56
    * (volatile uint8_t * )29U |= 0x01 << 3;
#line 56
    __nesc_atomic_end(__nesc_atomic); }
}

#line 56
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

#line 56
static void /*HplMsp430GeneralIOC.P40*/HplMsp430GeneralIOP__24__IO__set(void )
#line 56
{
#line 56
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 56
    * (volatile uint8_t * )29U |= 0x01 << 0;
#line 56
    __nesc_atomic_end(__nesc_atomic); }
}

# 14 "../../../../tos/chips/msp430/timer/Msp430TimerCommonP.nc"
__attribute((wakeup)) __attribute((interrupt(0x0018)))  void sig_TIMERB1_VECTOR(void )
#line 14
{
#line 14
  Msp430TimerCommonP__VectorTimerB1__fired();
}

# 63 "../../../../tos/system/RealMainP.nc"
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

# 175 "../../../../tos/chips/msp430/timer/Msp430ClockP.nc"
static void Msp430ClockP__set_dco_calib(int calib)
{
  BCSCTL1 = (BCSCTL1 & ~0x07) | ((calib >> 8) & 0x07);
  DCOCTL = calib & 0xff;
}

# 134 "../../../../tos/system/SchedulerBasicP.nc"
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

# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x7fa72ec329c0){
#line 75
  switch (arg_0x7fa72ec329c0) {
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
    case BtStreamC__ToggleLed:
#line 75
      BtStreamC__ToggleLed__runTask();
#line 75
      break;
#line 75
    case BtStreamC__startSensors:
#line 75
      BtStreamC__startSensors__runTask();
#line 75
      break;
#line 75
    case BtStreamC__ConfigureChannelsTask:
#line 75
      BtStreamC__ConfigureChannelsTask__runTask();
#line 75
      break;
#line 75
    case BtStreamC__stopSensing:
#line 75
      BtStreamC__stopSensing__runTask();
#line 75
      break;
#line 75
    case BtStreamC__sendSensorData:
#line 75
      BtStreamC__sendSensorData__runTask();
#line 75
      break;
#line 75
    case BtStreamC__sendResponse:
#line 75
      BtStreamC__sendResponse__runTask();
#line 75
      break;
#line 75
    case BtStreamC__startConfigTimer:
#line 75
      BtStreamC__startConfigTimer__runTask();
#line 75
      break;
#line 75
    case BtStreamC__ProcessCommand:
#line 75
      BtStreamC__ProcessCommand__runTask();
#line 75
      break;
#line 75
    case BtStreamC__collect_results:
#line 75
      BtStreamC__collect_results__runTask();
#line 75
      break;
#line 75
    case BtStreamC__clockin_result:
#line 75
      BtStreamC__clockin_result__runTask();
#line 75
      break;
#line 75
    case BtStreamC__gsr_range:
#line 75
      BtStreamC__gsr_range__runTask();
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
    case /*GyroButtonC.SwitchToggleC*/SwitchToggleC__0__sendEvent:
#line 75
      /*GyroButtonC.SwitchToggleC*/SwitchToggleC__0__sendEvent__runTask();
#line 75
      break;
#line 75
    case GyroButtonP__debounce:
#line 75
      GyroButtonP__debounce__runTask();
#line 75
      break;
#line 75
    case Msp430I2CP__readDone:
#line 75
      Msp430I2CP__readDone__runTask();
#line 75
      break;
#line 75
    case Msp430I2CP__writeDone:
#line 75
      Msp430I2CP__writeDone__runTask();
#line 75
      break;
#line 75
    case /*UserButtonC.SwitchToggleC*/SwitchToggleC__1__sendEvent:
#line 75
      /*UserButtonC.SwitchToggleC*/SwitchToggleC__1__sendEvent__runTask();
#line 75
      break;
#line 75
    case UserButtonP__debounce:
#line 75
      UserButtonP__debounce__runTask();
#line 75
      break;
#line 75
    default:
#line 75
      SchedulerBasicP__TaskBasic__default__runTask(arg_0x7fa72ec329c0);
#line 75
      break;
#line 75
    }
#line 75
}
#line 75
# 63 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static void /*HplMsp430GeneralIOC.P20*/HplMsp430GeneralIOP__8__IO__makeOutput(void )
#line 63
{
#line 63
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 63
    * (volatile uint8_t * )42U |= 0x01 << 0;
#line 63
    __nesc_atomic_end(__nesc_atomic); }
}

# 69 "../../../../tos/chips/msp430/pins/Msp430InterruptC.nc"
static error_t /*HplUserButtonC.InterruptUserButtonC*/Msp430InterruptC__1__Interrupt__disable(void )
#line 69
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 70
    {
      /*HplUserButtonC.InterruptUserButtonC*/Msp430InterruptC__1__HplInterrupt__disable();
      /*HplUserButtonC.InterruptUserButtonC*/Msp430InterruptC__1__HplInterrupt__clear();
    }
#line 73
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 144 "../../../../tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

#line 147
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 148 "../../../../tos/platforms/shimmer2/chips/hmc5843/Hmc5843P.nc"
static error_t Hmc5843P__Magnetometer__setOutputRate(uint8_t rate)
#line 148
{
  uint8_t ret = SUCCESS;
#line 149
  uint8_t bitmask = 0x10;

  switch (rate) {
      case 0: 
        bitmask = 0;
      break;
      case 1: 
        bitmask = 0x04;
      break;
      case 2: 
        bitmask = 0x08;
      break;
      case 3: 
        bitmask = 0x0c;
      break;
      case 4: 
        bitmask = 0x10;
      break;
      case 5: 
        bitmask = 0x14;
      break;
      case 6: 
        bitmask = 0x18;
      break;
      default: 
        ret = FAIL;
      break;
    }
  Hmc5843P__writeRegValue(0, bitmask);

  return ret;
}

#line 120
static error_t Hmc5843P__writeRegValue(uint8_t reg_addr, uint8_t val)
#line 120
{

  Hmc5843P__packet[0] = reg_addr;
  Hmc5843P__packet[1] = val;

  Hmc5843P__I2CInit__init();
  Hmc5843P__I2CPacket__write(I2C_START | I2C_STOP, 0x1e, 2, Hmc5843P__packet);
  return SUCCESS;
}

# 67 "../../../../tos/platforms/shimmer/chips/msp430/Msp430I2CP.nc"
static error_t Msp430I2CP__I2CInit__init(void )
#line 67
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 68
    Msp430I2CP__stateI2C = Msp430I2CP__IDLE;
#line 68
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 187 "BtStreamC.nc"
static void BtStreamC__startStreaming(void )
#line 187
{
  BtStreamC__BlinkTimer__start(1024);
  BtStreamC__activityLed = TRUE;
  BtStreamC__ToggleLedFunc();

  BtStreamC__buffer_iteration = 0;

  if (BtStreamC__stored_config[NV_SAMPLING_RATE] != SAMPLING_0HZ_OFF) {
    BtStreamC__SampleTimer__start(BtStreamC__stored_config[NV_SAMPLING_RATE]);
    }
#line 196
  BtStreamC__sensing = TRUE;
}

# 183 "../../../../tos/platforms/shimmer/chips/bluetooth/RovingNetworksP.nc"
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

# 73 "../../../../tos/lib/timer/VirtualizeTimerC.nc"
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

# 61 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static void /*HplMsp430GeneralIOC.P20*/HplMsp430GeneralIOP__8__IO__makeInput(void )
#line 61
{
#line 61
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 61
    * (volatile uint8_t * )42U &= ~(0x01 << 0);
#line 61
    __nesc_atomic_end(__nesc_atomic); }
}

# 52 "../../../../tos/chips/msp430/pins/Msp430InterruptC.nc"
static error_t /*HplUserButtonC.InterruptUserButtonC*/Msp430InterruptC__1__enable(bool rising)
#line 52
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 53
    {
      /*HplUserButtonC.InterruptUserButtonC*/Msp430InterruptC__1__Interrupt__disable();
      /*HplUserButtonC.InterruptUserButtonC*/Msp430InterruptC__1__HplInterrupt__edge(rising);
      /*HplUserButtonC.InterruptUserButtonC*/Msp430InterruptC__1__HplInterrupt__enable();
    }
#line 57
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 154 "../../../../tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, FALSE);
}

# 130 "../../../../tos/platforms/shimmer2/chips/hmc5843/Hmc5843P.nc"
static error_t Hmc5843P__readValues(uint8_t size, uint8_t *data)
#line 130
{
  Hmc5843P__readSize = size;
  Hmc5843P__readDataBuffer = data;

  Hmc5843P__I2CInit__init();
  Hmc5843P__I2CPacket__read(I2C_START | I2C_STOP, 0x1e, size, data);
  return SUCCESS;
}

# 61 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static void /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP__3__IO__makeInput(void )
#line 61
{
#line 61
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 61
    * (volatile uint8_t * )34U &= ~(0x01 << 3);
#line 61
    __nesc_atomic_end(__nesc_atomic); }
}

# 52 "../../../../tos/chips/msp430/pins/Msp430InterruptC.nc"
static error_t /*HplGyroButtonC.InterruptUserButtonC*/Msp430InterruptC__0__enable(bool rising)
#line 52
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 53
    {
      /*HplGyroButtonC.InterruptUserButtonC*/Msp430InterruptC__0__Interrupt__disable();
      /*HplGyroButtonC.InterruptUserButtonC*/Msp430InterruptC__0__HplInterrupt__edge(rising);
      /*HplGyroButtonC.InterruptUserButtonC*/Msp430InterruptC__0__HplInterrupt__enable();
    }
#line 57
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 147 "../../../../tos/lib/timer/TransformAlarmC.nc"
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type dt)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_t0 = t0;
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_dt = dt;
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__set_alarm();
    }
#line 154
    __nesc_atomic_end(__nesc_atomic); }
}

# 159 "../../../../tos/platforms/shimmer/chips/gsr/GsrP.nc"
static uint8_t GsrP__Gsr__controlRange(uint16_t ADC_val, uint8_t active_resistor)
#line 159
{
  uint8_t ret = active_resistor;

#line 161
  switch (active_resistor) {
      case HW_RES_40K: 
        if (ADC_val < 1120) {
            GsrP__Gsr__setRange(HW_RES_287K);
            ret = HW_RES_287K;
          }
      break;
      case HW_RES_287K: 
        if (ADC_val <= 3960 && ADC_val >= 1490) {
            ;
          }
        else {
#line 171
          if (ADC_val < 1490) {
              GsrP__Gsr__setRange(HW_RES_1M);
              ret = HW_RES_1M;
            }
          else 
#line 174
            {
              GsrP__Gsr__setRange(HW_RES_40K);
              ret = HW_RES_40K;
            }
          }
#line 178
      break;
      case HW_RES_1M: 
        if (ADC_val <= 3700 && ADC_val >= 1630) {
            ;
          }
        else {
#line 182
          if (ADC_val < 1630) {
              GsrP__Gsr__setRange(HW_RES_3M3);
              ret = HW_RES_3M3;
            }
          else 
#line 185
            {
              GsrP__Gsr__setRange(HW_RES_287K);
              ret = HW_RES_287K;
            }
          }
#line 189
      break;
      case HW_RES_3M3: 
        if (ADC_val <= 3930 && ADC_val >= 1125) {
            ;
          }
        else {
#line 193
          if (ADC_val > 3930) {
              GsrP__Gsr__setRange(HW_RES_1M);
              ret = HW_RES_1M;
            }
          else 
#line 196
            {
            }
          }
      break;
      default: ;
    }
  return ret;
}

#line 107
static void GsrP__Gsr__setRange(uint8_t range)
#line 107
{
  switch (range) {
      case HW_RES_40K: 
        TOSH_CLR_PROG_OUT_PIN();
      TOSH_CLR_SER0_CTS_PIN();
      break;
      case HW_RES_287K: 
        TOSH_SET_PROG_OUT_PIN();
      TOSH_CLR_SER0_CTS_PIN();
      break;
      case HW_RES_1M: 
        TOSH_CLR_PROG_OUT_PIN();
      TOSH_SET_SER0_CTS_PIN();
      break;
      case HW_RES_3M3: 
        TOSH_SET_PROG_OUT_PIN();
      TOSH_SET_SER0_CTS_PIN();
      break;
    }
}

#line 221
static bool GsrP__Gsr__smoothTransition(uint8_t *dummy_active_resistor, uint32_t sampling_period)
#line 221
{

  if (*dummy_active_resistor != GsrP__last_active_resistor) {
      GsrP__transient_sample = ceil(80 / sampling_period);
      GsrP__transient_active_resistor = GsrP__last_active_resistor;
    }
  GsrP__last_active_resistor = *dummy_active_resistor;
  if (GsrP__transient_sample) {
      GsrP__transient_sample--;

      *dummy_active_resistor = GsrP__transient_active_resistor;
      return TRUE;
    }
  return FALSE;
}

# 68 "../../../../tos/platforms/shimmer/chips/msp430/InternalFlashC.nc"
static error_t InternalFlashC__InternalFlash__write(void *addr, void *buf, uint16_t size)
#line 68
{

  volatile int8_t *newPtr;
  int8_t *oldPtr;
  int8_t *bufPtr = (int8_t *)buf;
  int8_t version;
  uint16_t i;

  if (InternalFlashC__IFLASH_BOUND_HIGH + 2 < (uint16_t )addr + size) {
    return FAIL;
    }
  addr += InternalFlashC__IFLASH_OFFSET;
  newPtr = oldPtr = (int8_t *)InternalFlashC__IFLASH_OFFSET;
  if (InternalFlashC__chooseSegment()) {
      oldPtr += InternalFlashC__IFLASH_SIZE;
    }
  else {
      addr += InternalFlashC__IFLASH_SIZE;
      newPtr += InternalFlashC__IFLASH_SIZE;
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 89
    {
      FCTL2 = 0xA500 + 0x0080 + 0x0004;
      FCTL3 = 0xA500;
      FCTL1 = 0xA500 + 0x0002;
      *newPtr = 0;
      FCTL1 = 0xA500 + 0x0040;

      for (i = 0; i < InternalFlashC__IFLASH_SIZE - 1; i++, newPtr++, oldPtr++) {
          if ((uint16_t )newPtr < (uint16_t )addr || (uint16_t )addr + size <= (uint16_t )newPtr) {
            *newPtr = *oldPtr;
            }
          else {
#line 100
            *newPtr = * bufPtr++;
            }
        }
#line 102
      version = *oldPtr + 1;
      if (version == InternalFlashC__IFLASH_INVALID_VNUM) {
        version++;
        }
#line 105
      *newPtr = version;

      FCTL1 = 0xA500;
      FCTL3 = 0xA500 + 0x0010;
    }
#line 109
    __nesc_atomic_end(__nesc_atomic); }

  return SUCCESS;
}

#line 58
static uint8_t InternalFlashC__chooseSegment(void )
#line 58
{
  int8_t vnum0 = * (int8_t *)InternalFlashC__IFLASH_SEG0_VNUM_ADDR;
  int8_t vnum1 = * (int8_t *)InternalFlashC__IFLASH_SEG1_VNUM_ADDR;

#line 61
  if (vnum0 == InternalFlashC__IFLASH_INVALID_VNUM) {
    return 1;
    }
  else {
#line 63
    if (vnum1 == InternalFlashC__IFLASH_INVALID_VNUM) {
      return 0;
      }
    }
#line 65
  return (int8_t )(vnum0 - vnum1) < 0;
}

# 655 "../../../../tos/platforms/shimmer2r/CRYPTOP.nc"
static CRYPTOP__CRYPTO__skipjack_encrypt(const unsigned char *pt, unsigned char *ct, skipjack_key *skey)
#line 655
{
  unsigned w1;
#line 656
  unsigned w2;
#line 656
  unsigned w3;
#line 656
  unsigned w4;
#line 656
  unsigned tmp;
#line 656
  unsigned tmp1;
  int x;
#line 657
  int kp;

  do {
#line 659
      if (!(pt != (void *)0)) {
#line 659
          ;
        }
    }
  while (
#line 659
  0);
  do {
#line 660
      if (!(ct != (void *)0)) {
#line 660
          ;
        }
    }
  while (
#line 660
  0);
  do {
#line 661
      if (!(skey != (void *)0)) {
#line 661
          ;
        }
    }
  while (
#line 661
  0);


  w1 = ((unsigned )pt[0] << 8) | pt[1];
  w2 = ((unsigned )pt[2] << 8) | pt[3];
  w3 = ((unsigned )pt[4] << 8) | pt[5];
  w4 = ((unsigned )pt[6] << 8) | pt[7];


  for (x = 1, kp = 0; x < 9; x++) {
      tmp = CRYPTOP__g_func(w1, &kp, skey->key);
#line 671
      w1 = (tmp ^ w4) ^ x;
#line 671
      w4 = w3;
#line 671
      w3 = w2;
#line 671
      w2 = tmp;
#line 671
      ;
    }


  for (; x < 17; x++) {
      tmp = CRYPTOP__g_func(w1, &kp, skey->key);
#line 676
      tmp1 = w4;
#line 676
      w4 = w3;
#line 676
      w3 = (w1 ^ w2) ^ x;
#line 676
      w1 = tmp1;
#line 676
      w2 = tmp;
#line 676
      ;
    }


  for (; x < 25; x++) {
      tmp = CRYPTOP__g_func(w1, &kp, skey->key);
#line 681
      w1 = (tmp ^ w4) ^ x;
#line 681
      w4 = w3;
#line 681
      w3 = w2;
#line 681
      w2 = tmp;
#line 681
      ;
    }


  for (; x < 33; x++) {
      tmp = CRYPTOP__g_func(w1, &kp, skey->key);
#line 686
      tmp1 = w4;
#line 686
      w4 = w3;
#line 686
      w3 = (w1 ^ w2) ^ x;
#line 686
      w1 = tmp1;
#line 686
      w2 = tmp;
#line 686
      ;
    }


  ct[0] = (w1 >> 8) & 255;
#line 690
  ct[1] = w1 & 255;
  ct[2] = (w2 >> 8) & 255;
#line 691
  ct[3] = w2 & 255;
  ct[4] = (w3 >> 8) & 255;
#line 692
  ct[5] = w3 & 255;
  ct[6] = (w4 >> 8) & 255;
#line 693
  ct[7] = w4 & 255;

  return 0;
}

#line 599
static unsigned CRYPTOP__g_func(unsigned w, int *kp, unsigned char *key)
#line 599
{
  unsigned char g1;
#line 600
  unsigned char g2;

  g1 = (w >> 8) & 255;
#line 602
  g2 = w & 255;
  g1 ^= CRYPTOP__sbox[g2 ^ key[*kp]];
#line 603
  *kp = CRYPTOP__keystep[*kp];
  g2 ^= CRYPTOP__sbox[g1 ^ key[*kp]];
#line 604
  *kp = CRYPTOP__keystep[*kp];
  g1 ^= CRYPTOP__sbox[g2 ^ key[*kp]];
#line 605
  *kp = CRYPTOP__keystep[*kp];
  g2 ^= CRYPTOP__sbox[g1 ^ key[*kp]];
#line 606
  *kp = CRYPTOP__keystep[*kp];
  return ((unsigned )g1 << 8) | (unsigned )g2;
}

# 59 "../../../../tos/platforms/shimmer/chips/msp430/HplMsp430I2C0P.nc"
static void HplMsp430I2C0P__HplI2C__clearModeI2C(void )
#line 59
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 60
    {
      HplMsp430I2C0P__U0CTL &= ~((0x20 | 0x04) | 0x01);
      HplMsp430I2C0P__HplUsart__resetUsart(TRUE);
    }
#line 63
    __nesc_atomic_end(__nesc_atomic); }
}

# 217 "../../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static bool HplMsp430InterruptP__Port23__getValue(void )
#line 217
{
#line 217
  bool b;

#line 217
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 217
    b = (P2IN >> 3) & 1;
#line 217
    __nesc_atomic_end(__nesc_atomic); }
#line 217
  return b;
}

# 67 "../../../../tos/interfaces/Notify.nc"
static error_t BtStreamC__UserButton__disable(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = UserButtonP__Notify__disable();
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
#line 59
static error_t BtStreamC__UserButton__enable(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = UserButtonP__Notify__enable();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 894 "BtStreamC.nc"
static void BtStreamC__configure_channels(void )
#line 894
{
  uint8_t *channel_contents_ptr = BtStreamC__channel_contents;

  BtStreamC__nbr_adc_chans = 0;
  BtStreamC__nbr_1byte_digi_chans = 0;
  BtStreamC__nbr_2byte_digi_chans = 0;

  BtStreamC__shimmerAnalogSetup__reset();

  if (BtStreamC__stored_config[NV_SENSORS0] & SENSOR_ACCEL) {
      BtStreamC__AccelInit__init();
      BtStreamC__shimmerAnalogSetup__addAccelInputs();
      * channel_contents_ptr++ = X_ACCEL;
      * channel_contents_ptr++ = Y_ACCEL;
      * channel_contents_ptr++ = Z_ACCEL;
    }

  if (BtStreamC__stored_config[NV_SENSORS0] & SENSOR_GYRO) {
      BtStreamC__shimmerAnalogSetup__addGyroInputs();
      * channel_contents_ptr++ = X_GYRO;
      * channel_contents_ptr++ = Y_GYRO;
      * channel_contents_ptr++ = Z_GYRO;

      BtStreamC__ToggleLedFunc();
      BtStreamC__warningLedCount = 0;
      BtStreamC__warningLed = TRUE;
      BtStreamC__BlinkTimer__stop();
      BtStreamC__BlinkTimer__start(102);
      BtStreamC__GyroInit__init();


      BtStreamC__GyroStdControl__stop();
      BtStreamC__BlinkTimer__stop();
      BtStreamC__warningLed = FALSE;
      if (BtStreamC__bt_connected) {
#line 928
        BtStreamC__SetLedFunc();
        }
      else {
#line 929
        BtStreamC__ClearLedFunc();
        }

      if (BtStreamC__stored_config[NV_CONFIG_SETUP_BYTE0] & CONFIG_GYRO_TEMP_VREF) {
        TOSH_SET_SER0_CTS_PIN();
        }
    }
  else {
#line 936
    if (BtStreamC__stored_config[NV_SENSORS0] & SENSOR_ECG) {
        BtStreamC__shimmerAnalogSetup__addECGInputs();
        * channel_contents_ptr++ = ECG_RA_LL;
        * channel_contents_ptr++ = ECG_LA_LL;
      }
    else {
      if (BtStreamC__stored_config[NV_SENSORS0] & SENSOR_EMG) {
          BtStreamC__shimmerAnalogSetup__addEMGInput();
          * channel_contents_ptr++ = EMG;
        }
      }
    }
#line 947
  if (BtStreamC__stored_config[NV_SENSORS0] & SENSOR_ANEX_A7) {
      BtStreamC__shimmerAnalogSetup__addAnExInput(7);
      * channel_contents_ptr++ = ANEX_A7;
    }

  if (BtStreamC__stored_config[NV_SENSORS0] & SENSOR_ANEX_A0) {
      BtStreamC__shimmerAnalogSetup__addAnExInput(0);
      * channel_contents_ptr++ = ANEX_A0;
    }

  if (BtStreamC__stored_config[NV_SENSORS1] & SENSOR_STRAIN) {
      BtStreamC__shimmerAnalogSetup__addStrainGaugeInputs();
      * channel_contents_ptr++ = STRAIN_HIGH;
      * channel_contents_ptr++ = STRAIN_LOW;
    }
  else {

    if (BtStreamC__stored_config[NV_SENSORS0] & SENSOR_GSR) {
        BtStreamC__shimmerAnalogSetup__addGSRInput();
        * channel_contents_ptr++ = GSR_RAW;
      }
    }

  if (BtStreamC__stored_config[NV_SENSORS0] & SENSOR_MAG) {
      * channel_contents_ptr++ = X_MAG;
      * channel_contents_ptr++ = Y_MAG;
      * channel_contents_ptr++ = Z_MAG;
      BtStreamC__nbr_2byte_digi_chans += 3;
    }

  if (BtStreamC__stored_config[NV_SENSORS1] & SENSOR_HEART) {
      * channel_contents_ptr++ = HEART_RATE;
      BtStreamC__nbr_2byte_digi_chans += 1;
      BtStreamC__UserButton__disable();
    }
  else 
#line 981
    {
      BtStreamC__UserButton__enable();
    }

  BtStreamC__shimmerAnalogSetup__finishADCSetup((uint16_t *)BtStreamC__sbuf0);
  BtStreamC__nbr_adc_chans = BtStreamC__shimmerAnalogSetup__getNumberOfChannels();


  if (BtStreamC__wasSensing) {
      BtStreamC__wasSensing = FALSE;
      BtStreamC__startSensors__postTask();
    }
}

# 206 "../../../../tos/platforms/shimmer/shimmerAnalogSetupP.nc"
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

#line 99
static void shimmerAnalogSetupP__shimmerAnalogSetup__addECGInputs(void )
#line 99
{
  uint8_t new_chans[2] = { 1, 2 };

#line 101
  shimmerAnalogSetupP__addNewChannels(new_chans, 2);

  shimmerAnalogSetupP__initADC12MEMCTLx();

  TOSH_MAKE_ADC_1_INPUT();
  TOSH_SEL_ADC_1_MODFUNC();

  TOSH_MAKE_ADC_2_INPUT();
  TOSH_SEL_ADC_2_MODFUNC();
}

#line 151
static void shimmerAnalogSetupP__shimmerAnalogSetup__addAnExInput(uint8_t channel)
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

# 214 "../../../../tos/platforms/shimmer/chips/msp430/HplMsp430Usart0P.nc"
static void HplMsp430Usart0P__Usart__disableUart(void )
#line 214
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 215
    {
      HplMsp430Usart0P__ME1 &= ~(0x80 | 0x40);
      HplMsp430Usart0P__UTXD__selectIOFunc();
      HplMsp430Usart0P__URXD__selectIOFunc();
    }
#line 219
    __nesc_atomic_end(__nesc_atomic); }
}

#line 254
static void HplMsp430Usart0P__Usart__disableSpi(void )
#line 254
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 255
    {
      HplMsp430Usart0P__ME1 &= ~0x40;
      HplMsp430Usart0P__SIMO__selectIOFunc();
      HplMsp430Usart0P__SOMI__selectIOFunc();
      HplMsp430Usart0P__UCLK__selectIOFunc();
    }
#line 260
    __nesc_atomic_end(__nesc_atomic); }
}

# 53 "../../../../tos/system/AMQueueEntryP.nc"
static error_t /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 55
{
  /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(msg, dest);
  /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(msg, 100);
  return /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__send(msg, len);
}

# 172 "../../../../tos/lib/serial/SerialActiveMessageP.nc"
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

# 519 "../../../../tos/lib/serial/SerialP.nc"
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

# 85 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__ResourceConfigure__configure(uint8_t id)
#line 85
{
  msp430_uart_union_config_t *config = /*Msp430Uart0P.UartP*/Msp430UartP__0__Msp430UartConfigure__getConfig(id);

#line 87
  /*Msp430Uart0P.UartP*/Msp430UartP__0__m_byte_time = config->uartConfig.ubr / 2;
  /*Msp430Uart0P.UartP*/Msp430UartP__0__Usart__setModeUart(config);
  /*Msp430Uart0P.UartP*/Msp430UartP__0__Usart__enableIntr();
}

# 174 "../../../../tos/system/AMQueueImplP.nc"
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

# 142 "../../../../tos/lib/printf/PrintfP.nc"
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

# 135 "../../../../tos/lib/serial/SerialActiveMessageP.nc"
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

# 177 "../../../../tos/system/ArbiterP.nc"
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

# 357 "../../../../tos/lib/serial/SerialP.nc"
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

# 98 "../../../../tos/lib/serial/HdlcTranslateC.nc"
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

# 147 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
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

# 60 "../../../../tos/platforms/shimmer/chips/msp430/FastClockP.nc"
static void FastClockP__setTimerAInputDivider(uint8_t val)
#line 60
{




  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 65
    {

      TACTL = TACTL & ~(0x0020 | 0x0010);

      switch (val) {
          case 1: 
            TACTL = TACTL & ~(0x0080 | 0x0040);
          break;
          case 2: 
            TACTL = 0x0040 | (TACTL & ~0x0080);
          break;
          case 4: 
            TACTL = 0x0080 | (TACTL & ~0x0040);
          break;
          case 8: 
            TACTL |= 0x0080 | 0x0040;
          break;
          default: ;
        }



      TACTL = 0x0020 | (TACTL & ~0x0010);
    }
#line 88
    __nesc_atomic_end(__nesc_atomic); }
}

# 154 "../../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
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

# 140 "../../../../tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static void HplMsp430Usart1P__Usart__setUbr(uint16_t control)
#line 140
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 141
    {
      U1BR0 = control & 0x00FF;
      U1BR1 = (control >> 8) & 0x00FF;
    }
#line 144
    __nesc_atomic_end(__nesc_atomic); }
}

# 240 "../../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static void HplMsp430InterruptP__Port23__edge(bool l2h)
#line 240
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 241
    {
      if (l2h) {
#line 242
        P2IES &= ~(1 << 3);
        }
      else {
#line 243
        P2IES |= 1 << 3;
        }
    }
#line 245
    __nesc_atomic_end(__nesc_atomic); }
}

# 98 "../../../../tos/platforms/shimmer/chips/msp430/HplMsp430Usart0P.nc"
__attribute((wakeup)) __attribute((interrupt(0x0012)))  void sig_UART0RX_VECTOR(void )
#line 98
{
  uint8_t temp = U0RXBUF;

  HplMsp430Usart0P__Interrupts__rxDone(temp);
}

# 153 "../../../../tos/system/ArbiterP.nc"
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

# 412 "../../../../tos/lib/serial/SerialP.nc"
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

# 91 "../../../../tos/system/crc.h"
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

# 296 "../../../../tos/lib/serial/SerialDispatcherP.nc"
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

# 166 "../../../../tos/system/ArbiterP.nc"
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

# 104 "../../../../tos/platforms/shimmer/chips/msp430/HplMsp430Usart0P.nc"
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

# 264 "../../../../tos/platforms/shimmer/chips/msp430/Msp430I2CP.nc"
static void Msp430I2CP__localNoAck(void )
#line 264
{
  if (Msp430I2CP__stateI2C != Msp430I2CP__PACKET_WRITE && Msp430I2CP__stateI2C != Msp430I2CP__PACKET_READ) {
    return;
    }
  I2CNDAT = 0;
  Msp430I2CP__I2CIE = 0;


  if (I2CDCTL & 0x01) {
    I2CTCTL |= 0x02;
    }
  if (Msp430I2CP__stateI2C == Msp430I2CP__PACKET_WRITE) {
      if (!Msp430I2CP__writeDone__postTask()) {
        Msp430I2CP__stateI2C = Msp430I2CP__IDLE;
        }
    }
  else {
#line 279
    if (Msp430I2CP__stateI2C == Msp430I2CP__PACKET_READ) {
        if (!Msp430I2CP__readDone__postTask()) {
          Msp430I2CP__stateI2C = Msp430I2CP__IDLE;
          }
      }
    }
}

# 118 "../../../../tos/lib/serial/HdlcTranslateC.nc"
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

# 130 "../../../../tos/lib/printf/PrintfP.nc"
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

# 107 "../../../../tos/lib/printf/PutcharP.nc"
__attribute((noinline))   int putchar(int c)
#line 107
{
#line 119
  return PutcharP__Putchar__putchar(c);
}

# 64 "../../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
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

# 96 "../../../../tos/chips/msp430/usart/HplMsp430Usart1P.nc"
__attribute((wakeup)) __attribute((interrupt(0x0006)))  void sig_UART1RX_VECTOR(void )
#line 96
{
  uint8_t temp = U1RXBUF;

#line 98
  HplMsp430Usart1P__Interrupts__rxDone(temp);
}

# 1215 "BtStreamC.nc"
static void BtStreamC__BtCommandParser__activate(uint8_t action, uint8_t arg_size, uint8_t *arg)
#line 1215
{
  bool temp;

  /* atomic removed: atomic calls only */
#line 1218
  temp = BtStreamC__command_pending;
  if (!temp) {
      BtStreamC__g_arg_size = arg_size;
      memcpy(BtStreamC__g_arg, arg, arg_size);
      BtStreamC__g_action = action;
      BtStreamC__command_pending = TRUE;
      BtStreamC__ProcessCommand__postTask();
    }
}

# 101 "../../../../tos/chips/msp430/usart/HplMsp430Usart1P.nc"
__attribute((wakeup)) __attribute((interrupt(0x0004)))  void sig_UART1TX_VECTOR(void )
#line 101
{
  HplMsp430Usart1P__Interrupts__txDone();
}

# 120 "../../../../tos/chips/msp430/adc12/HplAdc12P.nc"
__attribute((wakeup)) __attribute((interrupt(0x000E)))  void sig_ADC12_VECTOR(void )
#line 120
{
  HplAdc12P__HplAdc12__conversionDone(HplAdc12P__ADC12IV);
}

# 63 "../../../../tos/chips/msp430/dma/HplMsp430DmaP.nc"
__attribute((wakeup)) __attribute((interrupt(0x0000)))  void sig_XX_DMA_VECTOR_XX(void )
#line 63
{
  HplMsp430DmaP__Interrupt__fired();
}

# 97 "../../../../tos/chips/msp430/dma/Msp430DmaChannelP.nc"
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

