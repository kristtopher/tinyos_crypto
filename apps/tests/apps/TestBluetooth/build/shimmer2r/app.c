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
# 431 "/usr/local/lib/ncc/nesc_nx.h"
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
extern void *memset(void *arg_0x7fe9e8205020, int arg_0x7fe9e82052a0, size_t arg_0x7fe9e8205560);


extern int strcmp(const char *arg_0x7fe9e8202680, const char *arg_0x7fe9e8202980);
extern char *strcpy(char *arg_0x7fe9e82012b0, const char *arg_0x7fe9e82015b0);

extern size_t strlen(const char *arg_0x7fe9e81ffc40);
#line 65
extern void *memset(void *arg_0x7fe9e81ed060, int arg_0x7fe9e81ed2e0, size_t arg_0x7fe9e81ed5a0);
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

  void (*__cleanup)(struct _reent *arg_0x7fe9e81b0170);


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


  void (**_sig_func)(int arg_0x7fe9e81ab480);




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
#line 384
extern volatile unsigned char U0TCTL __asm ("__""U0TCTL");
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
static inline void TOSH_SEL_ADC_0_IOFUNC()  ;
static inline void TOSH_MAKE_ADC_1_OUTPUT()  ;
#line 94
static inline void TOSH_SEL_ADC_1_IOFUNC()  ;
static inline void TOSH_MAKE_ADC_2_OUTPUT()  ;
#line 95
static inline void TOSH_SEL_ADC_2_IOFUNC()  ;



static inline void TOSH_MAKE_ADC_6_OUTPUT()  ;
#line 99
static inline void TOSH_SEL_ADC_6_IOFUNC()  ;
static inline void TOSH_MAKE_ADC_7_OUTPUT()  ;
#line 100
static inline void TOSH_SEL_ADC_7_IOFUNC()  ;

static inline void TOSH_MAKE_ADC_ACCELZ_INPUT()  ;
#line 102
static inline void TOSH_SEL_ADC_ACCELZ_IOFUNC()  ;
static inline void TOSH_MAKE_ADC_ACCELY_INPUT()  ;
#line 103
static inline void TOSH_SEL_ADC_ACCELY_IOFUNC()  ;
static inline void TOSH_MAKE_ADC_ACCELX_INPUT()  ;
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


static inline void TOSH_CLR_PWRMUX_SEL_PIN()  ;
#line 152
static inline void TOSH_MAKE_PWRMUX_SEL_OUTPUT()  ;
#line 152
static inline void TOSH_SEL_PWRMUX_SEL_IOFUNC()  ;
static inline void TOSH_CLR_ACCEL_SEL0_PIN()  ;
#line 153
static inline void TOSH_MAKE_ACCEL_SEL0_OUTPUT()  ;
#line 153
static inline void TOSH_SEL_ACCEL_SEL0_IOFUNC()  ;
static inline void TOSH_CLR_ACCEL_SLEEP_N_PIN()  ;
#line 154
static inline void TOSH_MAKE_ACCEL_SLEEP_N_OUTPUT()  ;
#line 154
static inline void TOSH_SEL_ACCEL_SLEEP_N_IOFUNC()  ;
# 39 "../../../../tos/chips/msp430/timer/Msp430Timer.h"
enum __nesc_unnamed4251 {
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
typedef struct __nesc_unnamed4252 {

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
typedef struct __nesc_unnamed4253 {

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
typedef struct __nesc_unnamed4254 {

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
# 42 "../../../../tos/platforms/shimmer/UserButton.h"
typedef enum __nesc_unnamed4255 {
#line 42
  BUTTON_RELEASED = 0, BUTTON_PRESSED = 1
} 
#line 42
button_state_t;
# 43 "../../../../tos/types/Leds.h"
enum __nesc_unnamed4256 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 6 "../../../../tos/platforms/shimmer/chips/bluetooth/RovingNetworks.h"
enum __nesc_unnamed4257 {
  SLAVE_MODE, 
  MASTER_MODE, 
  TRIGGER_MASTER_MODE, 
  AUTO_MASTER_MODE
};

enum __nesc_unnamed4258 {
  NADA, 
  INITIAL, 
  FINAL
};
# 41 "../../../../tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4259 {
#line 41
  int notUsed;
} 
#line 41
TSecond;
typedef struct __nesc_unnamed4260 {
#line 42
  int notUsed;
} 
#line 42
TMilli;
typedef struct __nesc_unnamed4261 {
#line 43
  int notUsed;
} 
#line 43
T32khz;
typedef struct __nesc_unnamed4262 {
#line 44
  int notUsed;
} 
#line 44
TMicro;
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
# 56 "../../../../tos/chips/msp430/usart/msp430usart.h"
#line 48
typedef enum __nesc_unnamed4263 {

  USART_NONE = 0, 
  USART_UART = 1, 
  USART_UART_TX = 2, 
  USART_UART_RX = 3, 
  USART_SPI = 4, 
  USART_I2C = 5
} msp430_usartmode_t;










#line 58
typedef struct __nesc_unnamed4264 {
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
typedef struct __nesc_unnamed4265 {
  unsigned int txept : 1;
  unsigned int stc : 1;
  unsigned int txwake : 1;
  unsigned int urxse : 1;
  unsigned int ssel : 2;
  unsigned int ckpl : 1;
  unsigned int ckph : 1;
} __attribute((packed))  msp430_utctl_t;










#line 79
typedef struct __nesc_unnamed4266 {
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
typedef struct __nesc_unnamed4267 {
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
typedef struct __nesc_unnamed4268 {
  uint16_t ubr;
  uint8_t uctl;
  uint8_t utctl;
} msp430_spi_registers_t;




#line 124
typedef union __nesc_unnamed4269 {
  msp430_spi_config_t spiConfig;
  msp430_spi_registers_t spiRegisters;
} msp430_spi_union_config_t;
#line 169
#line 150
typedef enum __nesc_unnamed4270 {

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
typedef struct __nesc_unnamed4271 {
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
typedef struct __nesc_unnamed4272 {
  uint16_t ubr;
  uint8_t umctl;
  uint8_t uctl;
  uint8_t utctl;
  uint8_t urctl;
  uint8_t ume;
} msp430_uart_registers_t;




#line 211
typedef union __nesc_unnamed4273 {
  msp430_uart_config_t uartConfig;
  msp430_uart_registers_t uartRegisters;
} msp430_uart_union_config_t;
#line 248
#line 240
typedef struct __nesc_unnamed4274 {
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
typedef struct __nesc_unnamed4275 {
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
typedef struct __nesc_unnamed4276 {
  uint8_t uctl;
  uint8_t i2ctctl;
  uint8_t i2cpsc;
  uint8_t i2csclh;
  uint8_t i2cscll;
  uint16_t i2coa;
} msp430_i2c_registers_t;




#line 287
typedef union __nesc_unnamed4277 {
  msp430_i2c_config_t i2cConfig;
  msp430_i2c_registers_t i2cRegisters;
} msp430_i2c_union_config_t;
#line 309
typedef uint8_t uart_speed_t;
typedef uint8_t uart_parity_t;
typedef uint8_t uart_duplex_t;

enum __nesc_unnamed4278 {
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

enum __nesc_unnamed4279 {
  TOS_UART_OFF, 
  TOS_UART_RONLY, 
  TOS_UART_TONLY, 
  TOS_UART_DUPLEX
};

enum __nesc_unnamed4280 {
  TOS_UART_PARITY_NONE, 
  TOS_UART_PARITY_EVEN, 
  TOS_UART_PARITY_ODD
};
typedef TMilli TestBluetoothC__activityTimer__precision_tag;
enum /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Timer*/Msp430Timer32khzC__0____nesc_unnamed4281 {
  Msp430Timer32khzC__0__ALARM_ID = 0U
};
typedef T32khz /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__frequency_tag;
typedef /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__frequency_tag /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__precision_tag;
typedef uint16_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__size_type;
typedef T32khz /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__frequency_tag;
typedef /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__frequency_tag /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__precision_tag;
typedef uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__size_type;
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
uint8_t arg_0x7fe9e79f48b0);
# 39 "../../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX0__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Overflow__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX1__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__default__fired(
# 51 "../../../../tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x7fe9e79f48b0);
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
# 39 "../../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Event__fired(void );
# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__default__fired(void );
# 48 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Timer__overflow(void );
# 44 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__getEvent(void );
#line 91
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__default__captured(uint16_t time);
# 42 "../../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__getControl(void );
# 39 "../../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Event__fired(void );
# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__default__fired(void );
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
uint8_t arg_0x7fe9e7af09c0);
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__default__runTask(
# 56 "../../../../tos/system/SchedulerBasicP.nc"
uint8_t arg_0x7fe9e7af09c0);
# 57 "../../../../tos/interfaces/Scheduler.nc"
static void SchedulerBasicP__Scheduler__init(void );
#line 72
static void SchedulerBasicP__Scheduler__taskLoop(void );
#line 65
static bool SchedulerBasicP__Scheduler__runNextTask(void );
# 60 "../../../../tos/interfaces/Boot.nc"
static void TestBluetoothC__Boot__booted(void );
# 83 "../../../../tos/lib/timer/Timer.nc"
static void TestBluetoothC__activityTimer__fired(void );
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void TestBluetoothC__sendStuff__runTask(void );
# 103 "../../../../tos/platforms/shimmer/chips/bluetooth/Bluetooth.nc"
static void TestBluetoothC__Bluetooth__dataAvailable(uint8_t data);
#line 94
static void TestBluetoothC__Bluetooth__connectionClosed(uint8_t reason);









static void TestBluetoothC__Bluetooth__writeDone(void );
#line 93
static void TestBluetoothC__Bluetooth__connectionMade(uint8_t status);

static void TestBluetoothC__Bluetooth__commandModeEnded(void );
# 62 "../../../../tos/interfaces/Init.nc"
static error_t LedsP__Init__init(void );
# 62 "../../../../tos/platforms/shimmer2r/Leds.nc"
static void LedsP__Leds__led0Off(void );
#line 95
static void LedsP__Leds__led2Off(void );
#line 57
static void LedsP__Leds__led0On(void );
#line 90
static void LedsP__Leds__led2On(void );
# 99 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
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
# 46 "../../../../tos/interfaces/GeneralIO.nc"
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__makeOutput(void );
#line 40
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__set(void );
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__clr(void );




static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__makeOutput(void );
#line 40
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__set(void );





static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__makeOutput(void );
#line 40
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__set(void );
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__clr(void );
# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__fired(void );
# 48 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__overflow(void );
# 103 "../../../../tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__startAt(/*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__size_type dt);
#line 73
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__stop(void );
# 62 "../../../../tos/interfaces/Init.nc"
static error_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Init__init(void );
# 48 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__overflow(void );
# 64 "../../../../tos/lib/timer/Counter.nc"
static /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__size_type /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__get(void );






static bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__isOverflowPending(void );










static void /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__overflow(void );
#line 64
static /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__size_type /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__get(void );
# 109 "../../../../tos/lib/timer/Alarm.nc"
static /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__getNow(void );
#line 103
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__size_type dt);
#line 116
static /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__getAlarm(void );
#line 73
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__stop(void );




static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__fired(void );
# 82 "../../../../tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__overflow(void );
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
uint8_t arg_0x7fe9e74da020);
# 64 "../../../../tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(
# 48 "../../../../tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7fe9e74da020, 
# 64 "../../../../tos/lib/timer/Timer.nc"
uint32_t dt);
#line 78
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(
# 48 "../../../../tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7fe9e74da020);
# 82 "../../../../tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
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
# 90 "../../../../tos/platforms/shimmer/chips/bluetooth/Bluetooth.nc"
static void RovingNetworksP__Bluetooth__resetDefaults(void );
#line 51
static error_t RovingNetworksP__Bluetooth__write(const uint8_t *buf, uint8_t len);
#line 64
static void RovingNetworksP__Bluetooth__setRadioMode(uint8_t mode);
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

enum Msp430ClockP____nesc_unnamed4282 {

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
uint8_t arg_0x7fe9e79f48b0);
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
uint8_t arg_0x7fe9e79f48b0);
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
# 55 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
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
# 91 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__captured(uint16_t time);
# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__fired(void );
# 55 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
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
uint8_t arg_0x7fe9e7af09c0);
# 79 "../../../../tos/interfaces/McuSleep.nc"
static void SchedulerBasicP__McuSleep__sleep(void );
# 61 "../../../../tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP____nesc_unnamed4283 {

  SchedulerBasicP__NUM_TASKS = 6U, 
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
# 64 "../../../../tos/lib/timer/Timer.nc"
static void TestBluetoothC__activityTimer__startPeriodic(uint32_t dt);
#line 78
static void TestBluetoothC__activityTimer__stop(void );
# 62 "../../../../tos/interfaces/Init.nc"
static error_t TestBluetoothC__BluetoothInit__init(void );
# 62 "../../../../tos/platforms/shimmer2r/Leds.nc"
static void TestBluetoothC__Leds__led0Off(void );
#line 95
static void TestBluetoothC__Leds__led2Off(void );
#line 57
static void TestBluetoothC__Leds__led0On(void );
#line 90
static void TestBluetoothC__Leds__led2On(void );
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t TestBluetoothC__sendStuff__postTask(void );
# 90 "../../../../tos/platforms/shimmer/chips/bluetooth/Bluetooth.nc"
static void TestBluetoothC__Bluetooth__resetDefaults(void );
#line 51
static error_t TestBluetoothC__Bluetooth__write(const uint8_t *buf, uint8_t len);
#line 64
static void TestBluetoothC__Bluetooth__setRadioMode(uint8_t mode);
# 95 "../../../../tos/interfaces/StdControl.nc"
static error_t TestBluetoothC__BTStdControl__start(void );
# 62 "TestBluetoothC.nc"
enum TestBluetoothC____nesc_unnamed4284 {
#line 62
  TestBluetoothC__sendStuff = 0U
};
#line 62
typedef int TestBluetoothC____nesc_sillytask_sendStuff[TestBluetoothC__sendStuff];
#line 50
char TestBluetoothC__msgbuf[29];

static inline void TestBluetoothC__Boot__booted(void );









static inline void TestBluetoothC__sendStuff__runTask(void );



static inline void TestBluetoothC__activityTimer__fired(void );



static inline void TestBluetoothC__Bluetooth__connectionMade(uint8_t status);






static inline void TestBluetoothC__Bluetooth__connectionClosed(uint8_t reason);





static inline void TestBluetoothC__Bluetooth__dataAvailable(uint8_t data);



static inline void TestBluetoothC__Bluetooth__writeDone(void );


static inline void TestBluetoothC__Bluetooth__commandModeEnded(void );
# 46 "../../../../tos/interfaces/GeneralIO.nc"
static void LedsP__Led0__makeOutput(void );
#line 40
static void LedsP__Led0__set(void );
static void LedsP__Led0__clr(void );




static void LedsP__Led1__makeOutput(void );
#line 40
static void LedsP__Led1__set(void );





static void LedsP__Led2__makeOutput(void );
#line 40
static void LedsP__Led2__set(void );
static void LedsP__Led2__clr(void );
# 57 "../../../../tos/platforms/shimmer2r/LedsP.nc"
static inline error_t LedsP__Init__init(void );
#line 75
static inline void LedsP__Leds__led0On(void );




static inline void LedsP__Leds__led0Off(void );
#line 105
static inline void LedsP__Leds__led2On(void );




static inline void LedsP__Leds__led2Off(void );
# 65 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
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
static inline void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__set(void );






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
# 85 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__makeOutput(void );
#line 48
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__set(void );




static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__clr(void );
# 48 "../../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__set(void );
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__clr(void );




static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__makeOutput(void );
# 85 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__makeOutput(void );
#line 48
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__set(void );
# 48 "../../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__set(void );





static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__makeOutput(void );
# 85 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__makeOutput(void );
#line 48
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__set(void );




static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__clr(void );
# 48 "../../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__set(void );
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__clr(void );




static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__makeOutput(void );
# 41 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEvent(uint16_t time);

static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEventFromNow(uint16_t delta);
# 45 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__get(void );
# 78 "../../../../tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__fired(void );
# 57 "../../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__enableEvents(void );
#line 47
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__setControlAsCompare(void );










static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents(void );
#line 44
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__clearPendingInterrupt(void );
# 53 "../../../../tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline error_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Init__init(void );
#line 65
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__stop(void );




static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__fired(void );










static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__startAt(uint16_t t0, uint16_t dt);
#line 114
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__overflow(void );
# 45 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__get(void );
static bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__isOverflowPending(void );
# 82 "../../../../tos/lib/timer/Counter.nc"
static void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__overflow(void );
# 49 "../../../../tos/chips/msp430/timer/Msp430CounterC.nc"
static inline uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__get(void );




static inline bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__isOverflowPending(void );









static inline void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__overflow(void );
# 64 "../../../../tos/lib/timer/Counter.nc"
static /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__size_type /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__get(void );






static bool /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__isOverflowPending(void );










static void /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__overflow(void );
# 67 "../../../../tos/lib/timer/TransformCounterC.nc"
/*CounterMilli32C.Transform*/TransformCounterC__0__upper_count_type /*CounterMilli32C.Transform*/TransformCounterC__0__m_upper;

enum /*CounterMilli32C.Transform*/TransformCounterC__0____nesc_unnamed4285 {

  TransformCounterC__0__LOW_SHIFT_RIGHT = 5, 
  TransformCounterC__0__HIGH_SHIFT_LEFT = 8 * sizeof(/*CounterMilli32C.Transform*/TransformCounterC__0__from_size_type ) - /*CounterMilli32C.Transform*/TransformCounterC__0__LOW_SHIFT_RIGHT, 
  TransformCounterC__0__NUM_UPPER_BITS = 8 * sizeof(/*CounterMilli32C.Transform*/TransformCounterC__0__to_size_type ) - 8 * sizeof(/*CounterMilli32C.Transform*/TransformCounterC__0__from_size_type ) + 5, 



  TransformCounterC__0__OVERFLOW_MASK = /*CounterMilli32C.Transform*/TransformCounterC__0__NUM_UPPER_BITS ? ((/*CounterMilli32C.Transform*/TransformCounterC__0__upper_count_type )2 << (/*CounterMilli32C.Transform*/TransformCounterC__0__NUM_UPPER_BITS - 1)) - 1 : 0
};

static /*CounterMilli32C.Transform*/TransformCounterC__0__to_size_type /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__get(void );
#line 133
static inline void /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__overflow(void );
# 78 "../../../../tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__fired(void );
#line 103
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type dt);
#line 73
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__stop(void );
# 64 "../../../../tos/lib/timer/Counter.nc"
static /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__get(void );
# 77 "../../../../tos/lib/timer/TransformAlarmC.nc"
/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_t0;
/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_dt;

enum /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0____nesc_unnamed4286 {

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
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_unnamed4287 {
#line 74
  AlarmToTimerC__0__fired = 1U
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
uint8_t arg_0x7fe9e74da020);
#line 71
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4288 {
#line 71
  VirtualizeTimerC__0__updateFromTimer = 2U
};
#line 71
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer];
#line 53
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4289 {

  VirtualizeTimerC__0__NUM_TIMERS = 1U, 
  VirtualizeTimerC__0__END_OF_LIST = 255
};








#line 59
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4290 {

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









static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt);









static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num);
#line 204
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num);
# 58 "../../../../tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
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
enum RovingNetworksP____nesc_unnamed4291 {
#line 88
  RovingNetworksP__sendNextChar = 3U
};
#line 88
typedef int RovingNetworksP____nesc_sillytask_sendNextChar[RovingNetworksP__sendNextChar];
#line 302
enum RovingNetworksP____nesc_unnamed4292 {
#line 302
  RovingNetworksP__runMasterCommands = 4U
};
#line 302
typedef int RovingNetworksP____nesc_sillytask_runMasterCommands[RovingNetworksP__runMasterCommands];
#line 376
enum RovingNetworksP____nesc_unnamed4293 {
#line 376
  RovingNetworksP__runSetCommands = 5U
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






static inline void RovingNetworksP__Bluetooth__setRadioMode(uint8_t mode);
#line 223
static inline void RovingNetworksP__Bluetooth__resetDefaults(void );
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
inline static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__fired(uint8_t arg_0x7fe9e79f48b0){
#line 39
  switch (arg_0x7fe9e79f48b0) {
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
      /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__default__fired(arg_0x7fe9e79f48b0);
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
  union /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0____nesc_unnamed4294 {
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
  union /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1____nesc_unnamed4295 {
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
  union /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2____nesc_unnamed4296 {
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

# 114 "../../../../tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__overflow(void )
{
}

# 58 "../../../../tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void )
{
}

# 177 "../../../../tos/lib/timer/TransformAlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__overflow(void )
{
}

# 82 "../../../../tos/lib/timer/Counter.nc"
inline static void /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__overflow(void ){
#line 82
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__overflow();
#line 82
  /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow();
#line 82
}
#line 82
# 133 "../../../../tos/lib/timer/TransformCounterC.nc"
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

# 82 "../../../../tos/lib/timer/Counter.nc"
inline static void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__overflow(void ){
#line 82
  /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__overflow();
#line 82
}
#line 82
# 64 "../../../../tos/chips/msp430/timer/Msp430CounterC.nc"
static inline void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__overflow(void )
{
  /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__overflow();
}

# 48 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
inline static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__overflow(void ){
#line 48
  /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__overflow();
#line 48
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__overflow();
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
inline static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__fired(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired();
#line 78
}
#line 78
# 162 "../../../../tos/lib/timer/TransformAlarmC.nc"
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

# 78 "../../../../tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__fired(void ){
#line 78
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__fired();
#line 78
}
#line 78
# 135 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__disableEvents(void )
{
  * (volatile uint16_t * )386U &= ~0x0010;
}

# 58 "../../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents(void ){
#line 58
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__disableEvents();
#line 58
}
#line 58
# 70 "../../../../tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__fired(void )
{
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents();
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__fired();
}

# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__fired(void ){
#line 45
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__fired();
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
  union /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3____nesc_unnamed4297 {
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
# 130 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__enableEvents(void )
{
  * (volatile uint16_t * )386U |= 0x0010;
}

# 57 "../../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__enableEvents(void ){
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
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__clearPendingInterrupt(void ){
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
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEvent(uint16_t time){
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
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEventFromNow(uint16_t delta){
#line 43
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEventFromNow(delta);
#line 43
}
#line 43
# 45 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
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
# 81 "../../../../tos/chips/msp430/timer/Msp430AlarmC.nc"
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

# 103 "../../../../tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type dt){
#line 103
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 192 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__default__fired(void )
{
}

# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__default__fired();
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
  union /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4____nesc_unnamed4298 {
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

# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__default__fired();
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
  union /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5____nesc_unnamed4299 {
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
  union /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6____nesc_unnamed4300 {
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
  union /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7____nesc_unnamed4301 {
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
  union /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8____nesc_unnamed4302 {
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
  union /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9____nesc_unnamed4303 {
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
# 56 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P43*/HplMsp430GeneralIOP__27__IO__set(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 56
  * (volatile uint8_t * )29U |= 0x01 << 3;
}

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
# 56 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__set(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 56
  * (volatile uint8_t * )29U |= 0x01 << 2;
}

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
# 56 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P40*/HplMsp430GeneralIOP__24__IO__set(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 56
  * (volatile uint8_t * )29U |= 0x01 << 0;
}

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

# 87 "TestBluetoothC.nc"
static inline void TestBluetoothC__Bluetooth__writeDone(void )
#line 87
{
}

# 104 "../../../../tos/platforms/shimmer/chips/bluetooth/Bluetooth.nc"
inline static void RovingNetworksP__Bluetooth__writeDone(void ){
#line 104
  TestBluetoothC__Bluetooth__writeDone();
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
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__startAt(t0, dt);
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
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__stop(void )
{
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents();
}

# 73 "../../../../tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__stop(void ){
#line 73
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__stop();
#line 73
}
#line 73
# 102 "../../../../tos/lib/timer/TransformAlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__stop(void )
{
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__stop();
}

# 73 "../../../../tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void ){
#line 73
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__stop();
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
# 64 "../../../../tos/lib/timer/Counter.nc"
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
# 86 "../../../../tos/lib/timer/TransformAlarmC.nc"
static inline /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__getNow(void )
{
  return /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__get();
}

# 109 "../../../../tos/lib/timer/Alarm.nc"
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
inline static error_t TestBluetoothC__sendStuff__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(TestBluetoothC__sendStuff);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 66 "TestBluetoothC.nc"
static inline void TestBluetoothC__activityTimer__fired(void )
#line 66
{
  TestBluetoothC__sendStuff__postTask();
}

# 204 "../../../../tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num)
{
}

# 83 "../../../../tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(uint8_t arg_0x7fe9e74da020){
#line 83
  switch (arg_0x7fe9e74da020) {
#line 83
    case 0U:
#line 83
      TestBluetoothC__activityTimer__fired();
#line 83
      break;
#line 83
    default:
#line 83
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(arg_0x7fe9e74da020);
#line 83
      break;
#line 83
    }
#line 83
}
#line 83
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

# 116 "../../../../tos/lib/timer/Alarm.nc"
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
# 74 "../../../../tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void )
{
  if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot == FALSE) {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt, FALSE);
    }
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired();
}

# 51 "../../../../tos/platforms/shimmer/chips/bluetooth/Bluetooth.nc"
inline static error_t TestBluetoothC__Bluetooth__write(const uint8_t *buf, uint8_t len){
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
# 62 "TestBluetoothC.nc"
static inline void TestBluetoothC__sendStuff__runTask(void )
#line 62
{
  TestBluetoothC__Bluetooth__write(TestBluetoothC__msgbuf, strlen(TestBluetoothC__msgbuf));
}

# 57 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__CC2int(/*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t x)
#line 57
{
#line 57
  union /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3____nesc_unnamed4304 {
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
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__setControlAsCompare(void ){
#line 47
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__setControlAsCompare();
#line 47
}
#line 47
# 53 "../../../../tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline error_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Init__init(void )
{
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents();
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__setControlAsCompare();
  return SUCCESS;
}

# 62 "../../../../tos/interfaces/Init.nc"
inline static error_t RealMainP__SoftwareInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Init__init();
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
# 375 "../../../../tos/platforms/shimmer/chips/msp430/msp430hardware.h"
static inline void brief_pause(unsigned int n)
{
   __asm volatile ("1: \n\t"
  "dec	%0 \n\t"
  "jne	1b\n\t" : 
  "+r"(n));}

# 562 "../../../../tos/platforms/shimmer/chips/bluetooth/RovingNetworksP.nc"
static inline error_t RovingNetworksP__StdControl__start(void )
#line 562
{
  brief_pause(((unsigned long long )15000 * 4096 * 1024 / 1000000 - 2) / 3);
  RovingNetworksP__runSetCommands__postTask();

  return SUCCESS;
}

# 95 "../../../../tos/interfaces/StdControl.nc"
inline static error_t TestBluetoothC__BTStdControl__start(void ){
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
# 202 "../../../../tos/platforms/shimmer/chips/bluetooth/RovingNetworksP.nc"
static inline void RovingNetworksP__Bluetooth__setRadioMode(uint8_t mode)
#line 202
{
  RovingNetworksP__newMode = TRUE;
  RovingNetworksP__radioMode = mode;
}

# 64 "../../../../tos/platforms/shimmer/chips/bluetooth/Bluetooth.nc"
inline static void TestBluetoothC__Bluetooth__setRadioMode(uint8_t mode){
#line 64
  RovingNetworksP__Bluetooth__setRadioMode(mode);
#line 64
}
#line 64
# 223 "../../../../tos/platforms/shimmer/chips/bluetooth/RovingNetworksP.nc"
static inline void RovingNetworksP__Bluetooth__resetDefaults(void )
#line 223
{
  RovingNetworksP__resetDefaultsRequest = TRUE;
}

# 90 "../../../../tos/platforms/shimmer/chips/bluetooth/Bluetooth.nc"
inline static void TestBluetoothC__Bluetooth__resetDefaults(void ){
#line 90
  RovingNetworksP__Bluetooth__resetDefaults();
#line 90
}
#line 90
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
inline static error_t TestBluetoothC__BluetoothInit__init(void ){
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
# 52 "TestBluetoothC.nc"
static inline void TestBluetoothC__Boot__booted(void )
#line 52
{
  strcpy(TestBluetoothC__msgbuf, "hello, bluetooth is awake!\n\r");

  TestBluetoothC__BluetoothInit__init();
  TestBluetoothC__Bluetooth__resetDefaults();
  TestBluetoothC__Bluetooth__setRadioMode(SLAVE_MODE);

  TestBluetoothC__BTStdControl__start();
}

# 60 "../../../../tos/interfaces/Boot.nc"
inline static void RealMainP__Boot__booted(void ){
#line 60
  TestBluetoothC__Boot__booted();
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
# 105 "../../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
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

# 72 "../../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port13__fired(void ){
#line 72
  HplMsp430InterruptP__Port13__default__fired();
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
# 206 "../../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
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

# 72 "../../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port20__fired(void ){
#line 72
  HplMsp430InterruptP__Port20__default__fired();
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
# 209 "../../../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
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

# 72 "../../../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port23__fired(void ){
#line 72
  HplMsp430InterruptP__Port23__default__fired();
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
# 164 "../../../../tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].isrunning = FALSE;
}

# 78 "../../../../tos/lib/timer/Timer.nc"
inline static void TestBluetoothC__activityTimer__stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(0U);
#line 78
}
#line 78
# 57 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P40*/HplMsp430GeneralIOP__24__IO__clr(void )
#line 57
{
  /* atomic removed: atomic calls only */
#line 57
  * (volatile uint8_t * )29U &= ~(0x01 << 0);
}

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
inline static void TestBluetoothC__Leds__led0On(void ){
#line 57
  LedsP__Leds__led0On();
#line 57
}
#line 57
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
inline static void TestBluetoothC__Leds__led2Off(void ){
#line 95
  LedsP__Leds__led2Off();
#line 95
}
#line 95
# 77 "TestBluetoothC.nc"
static inline void TestBluetoothC__Bluetooth__connectionClosed(uint8_t reason)
#line 77
{
  TestBluetoothC__Leds__led2Off();
  TestBluetoothC__Leds__led0On();
  TestBluetoothC__activityTimer__stop();
}

# 94 "../../../../tos/platforms/shimmer/chips/bluetooth/Bluetooth.nc"
inline static void RovingNetworksP__Bluetooth__connectionClosed(uint8_t reason){
#line 94
  TestBluetoothC__Bluetooth__connectionClosed(reason);
#line 94
}
#line 94
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
# 144 "../../../../tos/lib/timer/VirtualizeTimerC.nc"
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

static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, FALSE);
}

# 64 "../../../../tos/lib/timer/Timer.nc"
inline static void TestBluetoothC__activityTimer__startPeriodic(uint32_t dt){
#line 64
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(0U, dt);
#line 64
}
#line 64
# 57 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P43*/HplMsp430GeneralIOP__27__IO__clr(void )
#line 57
{
  /* atomic removed: atomic calls only */
#line 57
  * (volatile uint8_t * )29U &= ~(0x01 << 3);
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
inline static void TestBluetoothC__Leds__led2On(void ){
#line 90
  LedsP__Leds__led2On();
#line 90
}
#line 90
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
inline static void TestBluetoothC__Leds__led0Off(void ){
#line 62
  LedsP__Leds__led0Off();
#line 62
}
#line 62
# 70 "TestBluetoothC.nc"
static inline void TestBluetoothC__Bluetooth__connectionMade(uint8_t status)
#line 70
{
  TestBluetoothC__Leds__led0Off();
  TestBluetoothC__Leds__led2On();

  TestBluetoothC__activityTimer__startPeriodic(1000);
}

# 93 "../../../../tos/platforms/shimmer/chips/bluetooth/Bluetooth.nc"
inline static void RovingNetworksP__Bluetooth__connectionMade(uint8_t status){
#line 93
  TestBluetoothC__Bluetooth__connectionMade(status);
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
# 90 "TestBluetoothC.nc"
static inline void TestBluetoothC__Bluetooth__commandModeEnded(void )
#line 90
{
  TestBluetoothC__Leds__led0On();
}

# 95 "../../../../tos/platforms/shimmer/chips/bluetooth/Bluetooth.nc"
inline static void RovingNetworksP__Bluetooth__commandModeEnded(void ){
#line 95
  TestBluetoothC__Bluetooth__commandModeEnded();
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

# 83 "TestBluetoothC.nc"
static inline void TestBluetoothC__Bluetooth__dataAvailable(uint8_t data)
#line 83
{
}

# 103 "../../../../tos/platforms/shimmer/chips/bluetooth/Bluetooth.nc"
inline static void RovingNetworksP__Bluetooth__dataAvailable(uint8_t data){
#line 103
  TestBluetoothC__Bluetooth__dataAvailable(data);
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
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__fired(uint8_t arg_0x7fe9e79f48b0){
#line 39
  switch (arg_0x7fe9e79f48b0) {
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
      /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__default__fired(arg_0x7fe9e79f48b0);
#line 39
      break;
#line 39
    }
#line 39
}
#line 39
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

# 80 "../../../../tos/lib/timer/TransformCounterC.nc"
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
static void SchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x7fe9e7af09c0){
#line 75
  switch (arg_0x7fe9e7af09c0) {
#line 75
    case TestBluetoothC__sendStuff:
#line 75
      TestBluetoothC__sendStuff__runTask();
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
      SchedulerBasicP__TaskBasic__default__runTask(arg_0x7fe9e7af09c0);
#line 75
      break;
#line 75
    }
#line 75
}
#line 75
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

# 147 "../../../../tos/lib/timer/TransformAlarmC.nc"
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

#line 64
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

__attribute((wakeup)) __attribute((interrupt(0x0004)))  void sig_UART1TX_VECTOR(void )
#line 101
{
  HplMsp430Usart1P__Interrupts__txDone();
}

