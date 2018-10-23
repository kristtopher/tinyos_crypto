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
extern void *memset(void *arg_0x7fbff5db5020, int arg_0x7fbff5db52a0, size_t arg_0x7fbff5db5560);
#line 65
extern void *memset(void *arg_0x7fbff5d9d060, int arg_0x7fbff5d9d2e0, size_t arg_0x7fbff5d9d5a0);
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

  void (*__cleanup)(struct _reent *arg_0x7fbff5d60170);


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


  void (**_sig_func)(int arg_0x7fbff5d5b480);




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
#line 382
extern volatile unsigned char U0CTL __asm ("__""U0CTL");

extern volatile unsigned char U0TCTL __asm ("__""U0TCTL");



extern volatile unsigned char U0MCTL __asm ("__""U0MCTL");

extern volatile unsigned char U0BR0 __asm ("__""U0BR0");

extern volatile unsigned char U0BR1 __asm ("__""U0BR1");

extern const volatile unsigned char U0RXBUF __asm ("__""U0RXBUF");
#line 441
extern volatile unsigned char U1TCTL __asm ("__""U1TCTL");
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
# 345 "../../../tos/platforms/shimmer/chips/msp430/msp430hardware.h"
static volatile uint8_t U0CTLnr __asm ("0x0070");
static volatile uint8_t I2CTCTLnr __asm ("0x0071");
static volatile uint8_t I2CDCTLnr __asm ("0x0072");
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
static inline void TOSH_MAKE_BT_CTS_OUTPUT()  ;
#line 78
static inline void TOSH_SEL_BT_CTS_IOFUNC()  ;
static inline void TOSH_MAKE_BT_TXD_OUTPUT()  ;
#line 79
static inline void TOSH_SEL_BT_TXD_IOFUNC()  ;
static inline void TOSH_MAKE_BT_RXD_INPUT()  ;
#line 80
static inline void TOSH_SEL_BT_RXD_IOFUNC()  ;
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
# 40 "/usr/lib/gcc/msp430/4.6.3/include/stdarg.h" 3
typedef __builtin_va_list __gnuc_va_list;
#line 102
typedef __gnuc_va_list va_list;
# 52 "/usr/lib/gcc/msp430/4.6.3/../../../../msp430/include/stdio.h" 3
int __attribute((format(printf, 1, 2))) printf(const char *string, ...);






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
# 59 "../../../tos/chips/msp430/adc12/Msp430Adc12.h"
#line 48
typedef struct __nesc_unnamed4286 {

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
typedef struct __nesc_unnamed4287 {


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
typedef struct __nesc_unnamed4288 {
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
typedef struct __nesc_unnamed4289 {
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
enum SerialAMQueueP____nesc_unnamed4290 {
  SerialAMQueueP__NUM_CLIENTS = 1U
};
enum /*PlatformSerialC.UartC*/Msp430Uart0C__0____nesc_unnamed4291 {
  Msp430Uart0C__0__CLIENT_ID = 0U
};
typedef T32khz /*Msp430Uart0P.UartP*/Msp430UartP__0__Counter__precision_tag;
typedef uint16_t /*Msp430Uart0P.UartP*/Msp430UartP__0__Counter__size_type;
typedef T32khz /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__frequency_tag;
typedef /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__frequency_tag /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__precision_tag;
typedef uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__size_type;
enum /*PlatformSerialC.UartC.UsartC*/Msp430Usart0C__0____nesc_unnamed4292 {
  Msp430Usart0C__0__CLIENT_ID = 0U
};
typedef uint8_t /*PrintfC.QueueC*/QueueC__0__queue_t;
typedef /*PrintfC.QueueC*/QueueC__0__queue_t /*PrintfC.QueueC*/QueueC__0__Queue__t;
typedef uint8_t PrintfP__Queue__t;
typedef uint16_t TestPrintfC__Read__val_t;
typedef TMilli TestPrintfC__Timer__precision_tag;
typedef uint16_t AdcP__Read__val_t;
typedef uint16_t AdcP__ReadNow__val_t;
typedef const msp430adc12_channel_config_t *AdcP__Config__adc_config_t;
typedef TMilli Msp430RefVoltGeneratorP__SwitchOffTimer__precision_tag;
typedef TMilli Msp430RefVoltGeneratorP__SwitchOffSettleTimer__precision_tag;
typedef TMilli Msp430RefVoltGeneratorP__SwitchOnTimer__precision_tag;
typedef const msp430adc12_channel_config_t *Msp430RefVoltArbiterImplP__Config__adc_config_t;
enum /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Timer*/Msp430Timer32khzC__0____nesc_unnamed4293 {
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
enum /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__0____nesc_unnamed4294 {
  Msp430Adc12ClientAutoRVGC__0__ID = 0U
};
typedef const msp430adc12_channel_config_t */*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__0__ConfSub__adc_config_t;
typedef const msp430adc12_channel_config_t */*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__0__ConfUp__adc_config_t;
enum /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadClientC*/AdcReadClientC__0____nesc_unnamed4295 {
  AdcReadClientC__0__CLIENT = 0U
};
typedef TMilli AdcStreamP__Alarm__precision_tag;
typedef uint32_t AdcStreamP__Alarm__size_type;
typedef const msp430adc12_channel_config_t *AdcStreamP__AdcConfigure__adc_config_t;
typedef uint16_t AdcStreamP__ReadStream__val_t;
enum /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Timer*/Msp430Timer32khzC__1____nesc_unnamed4296 {
  Msp430Timer32khzC__1__ALARM_ID = 1U
};
typedef T32khz /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__frequency_tag;
typedef /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__frequency_tag /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__precision_tag;
typedef uint16_t /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__size_type;
typedef TMilli /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__to_precision_tag;
typedef uint32_t /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__to_size_type;
typedef T32khz /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__from_precision_tag;
typedef uint16_t /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__from_size_type;
typedef /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__to_precision_tag /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__Alarm__precision_tag;
typedef /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__to_size_type /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__Alarm__size_type;
typedef /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__from_precision_tag /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__AlarmFrom__precision_tag;
typedef /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__from_size_type /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__AlarmFrom__size_type;
typedef /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__to_precision_tag /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__Counter__precision_tag;
typedef /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__to_size_type /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__Counter__size_type;
typedef uint16_t /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__val_t;
typedef /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__val_t /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__Service__val_t;
typedef /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__val_t /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__ReadStream__val_t;
enum /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__1____nesc_unnamed4297 {
  Msp430Adc12ClientAutoRVGC__1__ID = 1U
};
typedef const msp430adc12_channel_config_t */*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__1__ConfSub__adc_config_t;
typedef const msp430adc12_channel_config_t */*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__1__ConfUp__adc_config_t;
enum /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC*/AdcReadStreamClientC__0____nesc_unnamed4298 {
  AdcReadStreamClientC__0__RSCLIENT = 0U
};
typedef const msp430adc12_channel_config_t *Msp430InternalVoltageP__AdcConfigure__adc_config_t;
enum /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__2____nesc_unnamed4299 {
  Msp430Adc12ClientAutoRVGC__2__ID = 2U
};
typedef const msp430adc12_channel_config_t */*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__2__ConfSub__adc_config_t;
typedef const msp430adc12_channel_config_t */*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__2__ConfUp__adc_config_t;
enum /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC*/AdcReadNowClientC__0____nesc_unnamed4300 {
  AdcReadNowClientC__0__CLIENT = 1U
};
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
uint8_t arg_0x7fbff553c8b0);
# 52 "../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__clear(void );


static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__setClockSource(uint16_t clockSource);
#line 54
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__disableEvents(void );
#line 50
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__setMode(int mode);





static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__setInputDivider(uint16_t inputDivider);
# 39 "../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX0__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Overflow__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX1__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__default__fired(
# 51 "../../../tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x7fbff553c8b0);
# 45 "../../../tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get(void );
static bool /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__isOverflowPending(void );
# 44 "../../../tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__getEvent(void );
#line 91
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__default__captured(uint16_t time);
# 42 "../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Control__getControl(void );



static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Control__setControl(msp430_compare_control_t control);
# 39 "../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Event__fired(void );
# 41 "../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__setEvent(uint16_t time);
# 48 "../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Timer__overflow(void );
# 44 "../../../tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__getEvent(void );
#line 91
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__default__captured(uint16_t time);
# 42 "../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__getControl(void );



static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__setControl(msp430_compare_control_t control);
# 39 "../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Event__fired(void );
# 41 "../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__setEvent(uint16_t time);
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
#line 57
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__enableEvents(void );
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__disableEvents(void );
#line 44
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__clearPendingInterrupt(void );
# 39 "../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Event__fired(void );
# 41 "../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__setEvent(uint16_t time);

static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__setEventFromNow(uint16_t delta);
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
uint8_t arg_0x7fbff56a09c0);
# 75 "../../../tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__default__runTask(
# 56 "../../../tos/system/SchedulerBasicP.nc"
uint8_t arg_0x7fbff56a09c0);
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
am_id_t arg_0x7fbff53d30d0, 
# 103 "../../../tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 75 "../../../tos/interfaces/Send.nc"
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(
# 46 "../../../tos/system/AMQueueImplP.nc"
uint8_t arg_0x7fbff53d6cf0, 
# 67 "../../../tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 100
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(
# 46 "../../../tos/system/AMQueueImplP.nc"
uint8_t arg_0x7fbff53d6cf0, 
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
am_id_t arg_0x7fbff536c920, 
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
am_id_t arg_0x7fbff536bb00, 
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
uart_id_t arg_0x7fbff522f110, 
# 67 "../../../tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 100
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(
# 51 "../../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7fbff522f110, 
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
uart_id_t arg_0x7fbff5230570, 
# 71 "../../../tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "../../../tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(
# 54 "../../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7fbff522e4d0, 
# 31 "../../../tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(
# 54 "../../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7fbff522e4d0);
# 23 "../../../tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(
# 54 "../../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7fbff522e4d0, 
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
uint8_t arg_0x7fbff511f110);
# 59 "../../../tos/interfaces/ResourceConfigure.nc"
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__ResourceConfigure__configure(
# 44 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fbff511f110);
# 39 "../../../tos/chips/msp430/usart/Msp430UartConfigure.nc"
static msp430_uart_union_config_t */*Msp430Uart0P.UartP*/Msp430UartP__0__Msp430UartConfigure__default__getConfig(
# 49 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fbff511a890);
# 48 "../../../tos/interfaces/UartStream.nc"
static error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__send(
# 45 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fbff511fe60, 
# 44 "../../../tos/interfaces/UartStream.nc"
uint8_t * buf, 



uint16_t len);
#line 79
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__default__receivedByte(
# 45 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fbff511fe60, 
# 79 "../../../tos/interfaces/UartStream.nc"
uint8_t byte);
#line 99
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__default__receiveDone(
# 45 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fbff511fe60, 
# 95 "../../../tos/interfaces/UartStream.nc"
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__default__sendDone(
# 45 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fbff511fe60, 
# 53 "../../../tos/interfaces/UartStream.nc"
uint8_t * buf, 



uint16_t len, error_t error);
# 82 "../../../tos/lib/timer/Counter.nc"
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__Counter__overflow(void );
# 120 "../../../tos/interfaces/Resource.nc"
static error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__default__release(
# 48 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fbff511c580);
# 97 "../../../tos/interfaces/Resource.nc"
static error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__default__immediateRequest(
# 48 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fbff511c580);
# 102 "../../../tos/interfaces/Resource.nc"
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__granted(
# 48 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fbff511c580);
# 128 "../../../tos/interfaces/Resource.nc"
static bool /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__default__isOwner(
# 48 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fbff511c580);
# 120 "../../../tos/interfaces/Resource.nc"
static error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__Resource__release(
# 43 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fbff5122e10);
# 97 "../../../tos/interfaces/Resource.nc"
static error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__Resource__immediateRequest(
# 43 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fbff5122e10);
# 102 "../../../tos/interfaces/Resource.nc"
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__Resource__default__granted(
# 43 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fbff5122e10);
# 54 "../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartInterrupts__rxDone(
# 51 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fbff50f99b0, 
# 54 "../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
uint8_t data);
#line 49
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartInterrupts__txDone(
# 51 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fbff50f99b0);
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
#line 85
static void /*HplMsp430GeneralIOC.P40*/HplMsp430GeneralIOP__24__IO__makeOutput(void );
#line 48
static void /*HplMsp430GeneralIOC.P40*/HplMsp430GeneralIOP__24__IO__set(void );




static void /*HplMsp430GeneralIOC.P40*/HplMsp430GeneralIOP__24__IO__clr(void );
#line 85
static void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__makeOutput(void );
#line 48
static void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__set(void );




static void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__clr(void );
#line 85
static void /*HplMsp430GeneralIOC.P43*/HplMsp430GeneralIOP__27__IO__makeOutput(void );
#line 48
static void /*HplMsp430GeneralIOC.P43*/HplMsp430GeneralIOP__27__IO__set(void );




static void /*HplMsp430GeneralIOC.P43*/HplMsp430GeneralIOP__27__IO__clr(void );
#line 78
static void /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIOP__40__IO__makeInput(void );
#line 99
static void /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIOP__40__IO__selectIOFunc(void );
#line 92
static void /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIOP__40__IO__selectModuleFunc(void );
#line 78
static void /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIOP__41__IO__makeInput(void );
#line 99
static void /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIOP__41__IO__selectIOFunc(void );
#line 92
static void /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIOP__41__IO__selectModuleFunc(void );
#line 78
static void /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIOP__42__IO__makeInput(void );
#line 99
static void /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIOP__42__IO__selectIOFunc(void );
#line 92
static void /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIOP__42__IO__selectModuleFunc(void );
#line 78
static void /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIOP__43__IO__makeInput(void );
#line 99
static void /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIOP__43__IO__selectIOFunc(void );
#line 92
static void /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIOP__43__IO__selectModuleFunc(void );
#line 78
static void /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIOP__44__IO__makeInput(void );
#line 99
static void /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIOP__44__IO__selectIOFunc(void );
#line 92
static void /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIOP__44__IO__selectModuleFunc(void );
#line 78
static void /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIOP__45__IO__makeInput(void );
#line 99
static void /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIOP__45__IO__selectIOFunc(void );
#line 92
static void /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIOP__45__IO__selectModuleFunc(void );
#line 78
static void /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIOP__46__IO__makeInput(void );
#line 99
static void /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIOP__46__IO__selectIOFunc(void );
#line 92
static void /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIOP__46__IO__selectModuleFunc(void );
#line 78
static void /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIOP__47__IO__makeInput(void );
#line 99
static void /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIOP__47__IO__selectIOFunc(void );
#line 92
static void /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIOP__47__IO__selectModuleFunc(void );
# 48 "../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__overflow(void );
# 64 "../../../tos/lib/timer/Counter.nc"
static /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__size_type /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__get(void );






static bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__isOverflowPending(void );
# 62 "../../../tos/interfaces/Init.nc"
static error_t LedsP__Init__init(void );
# 62 "../../../tos/platforms/shimmer2r/Leds.nc"
static void LedsP__Leds__led0Off(void );










static void LedsP__Leds__led1On(void );




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




static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__makeOutput(void );
#line 40
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__set(void );
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__clr(void );




static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__makeOutput(void );
#line 40
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__set(void );
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__clr(void );
# 54 "../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__rxDone(
# 39 "../../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x7fbff4d04600, 
# 54 "../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
uint8_t data);
#line 49
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__txDone(
# 39 "../../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x7fbff4d04600);
# 39 "../../../tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc"
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawI2CInterrupts__fired(void );
#line 39
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__I2CInterrupts__default__fired(
# 40 "../../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x7fbff4d034e0);
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
uint8_t arg_0x7fbff4cc4cf0);
# 65 "../../../tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(
# 60 "../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fbff4cc0240);
# 59 "../../../tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(
# 60 "../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fbff4cc0240);
# 56 "../../../tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void );
#line 46
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__granted(void );
#line 81
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__immediateRequested(void );
# 120 "../../../tos/interfaces/Resource.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__release(
# 54 "../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fbff4cc5a50);
# 97 "../../../tos/interfaces/Resource.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__immediateRequest(
# 54 "../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fbff4cc5a50);
# 102 "../../../tos/interfaces/Resource.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__default__granted(
# 54 "../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fbff4cc5a50);
# 128 "../../../tos/interfaces/Resource.nc"
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__isOwner(
# 54 "../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fbff4cc5a50);
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
static void TestPrintfC__Boot__booted(void );
# 63 "../../../tos/interfaces/Read.nc"
static void TestPrintfC__Read__readDone(error_t result, TestPrintfC__Read__val_t val);
# 83 "../../../tos/lib/timer/Timer.nc"
static void TestPrintfC__Timer__fired(void );
# 60 "../../../tos/interfaces/Boot.nc"
static void SerialStartP__Boot__booted(void );
# 113 "../../../tos/interfaces/SplitControl.nc"
static void SerialStartP__SerialControl__startDone(error_t error);
#line 138
static void SerialStartP__SerialControl__stopDone(error_t error);
# 102 "../../../tos/interfaces/Resource.nc"
static void AdcP__SubResourceReadNow__granted(
# 46 "../../../tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x7fbff4a96530);
# 55 "../../../tos/interfaces/Read.nc"
static error_t AdcP__Read__read(
# 38 "../../../tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x7fbff4a9d1e0);
# 63 "../../../tos/interfaces/Read.nc"
static void AdcP__Read__default__readDone(
# 38 "../../../tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x7fbff4a9d1e0, 
# 63 "../../../tos/interfaces/Read.nc"
error_t result, AdcP__Read__val_t val);
# 66 "../../../tos/interfaces/ReadNow.nc"
static void AdcP__ReadNow__default__readDone(
# 39 "../../../tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x7fbff4a9b060, 
# 66 "../../../tos/interfaces/ReadNow.nc"
error_t result, AdcP__ReadNow__val_t val);
# 102 "../../../tos/interfaces/Resource.nc"
static void AdcP__ResourceReadNow__default__granted(
# 40 "../../../tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x7fbff4a99db0);
# 58 "../../../tos/interfaces/AdcConfigure.nc"
static AdcP__Config__adc_config_t AdcP__Config__default__getConfiguration(
# 48 "../../../tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x7fbff4a94b90);
# 189 "../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static error_t AdcP__SingleChannel__default__getData(
# 49 "../../../tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x7fbff4a912a0);
# 84 "../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static error_t AdcP__SingleChannel__default__configureSingle(
# 49 "../../../tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x7fbff4a912a0, 
# 84 "../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
const msp430adc12_channel_config_t * config);
#line 227
static uint16_t * AdcP__SingleChannel__multipleDataReady(
# 49 "../../../tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x7fbff4a912a0, 
# 227 "../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
uint16_t * buffer, uint16_t numSamples);
#line 206
static error_t AdcP__SingleChannel__singleDataReady(
# 49 "../../../tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x7fbff4a912a0, 
# 206 "../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
uint16_t data);
# 120 "../../../tos/interfaces/Resource.nc"
static error_t AdcP__ResourceRead__default__release(
# 44 "../../../tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x7fbff4a971e0);
# 88 "../../../tos/interfaces/Resource.nc"
static error_t AdcP__ResourceRead__default__request(
# 44 "../../../tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x7fbff4a971e0);
# 102 "../../../tos/interfaces/Resource.nc"
static void AdcP__ResourceRead__granted(
# 44 "../../../tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x7fbff4a971e0);
# 75 "../../../tos/interfaces/TaskBasic.nc"
static void AdcP__readDone__runTask(void );
# 107 "../../../tos/chips/msp430/adc12/Msp430Adc12MultiChannel.nc"
static void Msp430Adc12ImplP__MultiChannel__default__dataReady(
# 42 "../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x7fbff4a1e940, 
# 107 "../../../tos/chips/msp430/adc12/Msp430Adc12MultiChannel.nc"
uint16_t *buffer, uint16_t numSamples);
# 112 "../../../tos/chips/msp430/adc12/HplAdc12.nc"
static void Msp430Adc12ImplP__HplAdc12__conversionDone(uint16_t iv);
# 45 "../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void Msp430Adc12ImplP__CompareA1__fired(void );
# 49 "../../../tos/chips/msp430/adc12/Msp430Adc12Overflow.nc"
static void Msp430Adc12ImplP__Overflow__default__memOverflow(
# 43 "../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x7fbff4a1c900);
# 54 "../../../tos/chips/msp430/adc12/Msp430Adc12Overflow.nc"
static void Msp430Adc12ImplP__Overflow__default__conversionTimeOverflow(
# 43 "../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x7fbff4a1c900);
# 62 "../../../tos/interfaces/Init.nc"
static error_t Msp430Adc12ImplP__Init__init(void );
# 48 "../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void Msp430Adc12ImplP__TimerA__overflow(void );
# 189 "../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static error_t Msp430Adc12ImplP__SingleChannel__getData(
# 41 "../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x7fbff4a1f1c0);
# 84 "../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static error_t Msp430Adc12ImplP__SingleChannel__configureSingle(
# 41 "../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x7fbff4a1f1c0, 
# 84 "../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
const msp430adc12_channel_config_t * config);
#line 227
static uint16_t * Msp430Adc12ImplP__SingleChannel__default__multipleDataReady(
# 41 "../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x7fbff4a1f1c0, 
# 227 "../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
uint16_t * buffer, uint16_t numSamples);
#line 138
static error_t Msp430Adc12ImplP__SingleChannel__configureMultiple(
# 41 "../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x7fbff4a1f1c0, 
# 138 "../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
const msp430adc12_channel_config_t * config, uint16_t * buffer, uint16_t numSamples, uint16_t jiffies);
#line 206
static error_t Msp430Adc12ImplP__SingleChannel__default__singleDataReady(
# 41 "../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x7fbff4a1f1c0, 
# 206 "../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
uint16_t data);
# 45 "../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void Msp430Adc12ImplP__CompareA0__fired(void );
# 63 "../../../tos/chips/msp430/adc12/HplAdc12.nc"
static adc12ctl0_t HplAdc12P__HplAdc12__getCtl0(void );
#line 82
static adc12memctl_t HplAdc12P__HplAdc12__getMCtl(uint8_t idx);
#line 106
static void HplAdc12P__HplAdc12__resetIFGs(void );
#line 118
static bool HplAdc12P__HplAdc12__isBusy(void );
#line 75
static void HplAdc12P__HplAdc12__setMCtl(uint8_t idx, adc12memctl_t memControl);
#line 128
static void HplAdc12P__HplAdc12__startConversion(void );
#line 51
static void HplAdc12P__HplAdc12__setCtl0(adc12ctl0_t control0);
#line 89
static uint16_t HplAdc12P__HplAdc12__getMem(uint8_t idx);





static void HplAdc12P__HplAdc12__setIEFlags(uint16_t mask);





static uint16_t HplAdc12P__HplAdc12__getIEFlags(void );
#line 123
static void HplAdc12P__HplAdc12__stopConversion(void );
#line 57
static void HplAdc12P__HplAdc12__setCtl1(adc12ctl1_t control1);
# 62 "../../../tos/interfaces/Init.nc"
static error_t /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__Init__init(void );
# 79 "../../../tos/interfaces/ResourceQueue.nc"
static error_t /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(resource_client_id_t id);
#line 53
static bool /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty(void );








static bool /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue(void );
# 53 "../../../tos/interfaces/ResourceRequested.nc"
static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(
# 52 "../../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fbff48dd9d0);
# 65 "../../../tos/interfaces/ResourceConfigure.nc"
static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(
# 56 "../../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fbff48db0d0);
# 59 "../../../tos/interfaces/ResourceConfigure.nc"
static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(
# 56 "../../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fbff48db0d0);
# 120 "../../../tos/interfaces/Resource.nc"
static error_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(
# 51 "../../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fbff48de660);
# 88 "../../../tos/interfaces/Resource.nc"
static error_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(
# 51 "../../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fbff48de660);
# 102 "../../../tos/interfaces/Resource.nc"
static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__default__granted(
# 51 "../../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fbff48de660);
# 98 "../../../tos/interfaces/ArbiterInfo.nc"
static uint8_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ArbiterInfo__userId(void );
# 75 "../../../tos/interfaces/TaskBasic.nc"
static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void );
# 112 "../../../tos/chips/msp430/adc12/HplAdc12.nc"
static void Msp430RefVoltGeneratorP__HplAdc12__conversionDone(uint16_t iv);
# 83 "../../../tos/lib/timer/Timer.nc"
static void Msp430RefVoltGeneratorP__SwitchOffTimer__fired(void );
# 104 "../../../tos/interfaces/SplitControl.nc"
static error_t Msp430RefVoltGeneratorP__RefVolt_2_5V__start(void );
#line 130
static error_t Msp430RefVoltGeneratorP__RefVolt_2_5V__stop(void );
# 83 "../../../tos/lib/timer/Timer.nc"
static void Msp430RefVoltGeneratorP__SwitchOffSettleTimer__fired(void );
# 104 "../../../tos/interfaces/SplitControl.nc"
static error_t Msp430RefVoltGeneratorP__RefVolt_1_5V__start(void );
#line 130
static error_t Msp430RefVoltGeneratorP__RefVolt_1_5V__stop(void );
# 83 "../../../tos/lib/timer/Timer.nc"
static void Msp430RefVoltGeneratorP__SwitchOnTimer__fired(void );
# 58 "../../../tos/interfaces/AdcConfigure.nc"
static Msp430RefVoltArbiterImplP__Config__adc_config_t Msp430RefVoltArbiterImplP__Config__default__getConfiguration(
# 43 "../../../tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
uint8_t arg_0x7fbff481fd00);
# 113 "../../../tos/interfaces/SplitControl.nc"
static void Msp430RefVoltArbiterImplP__RefVolt_2_5V__startDone(error_t error);
#line 138
static void Msp430RefVoltArbiterImplP__RefVolt_2_5V__stopDone(error_t error);
# 120 "../../../tos/interfaces/Resource.nc"
static error_t Msp430RefVoltArbiterImplP__AdcResource__default__release(
# 40 "../../../tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
uint8_t arg_0x7fbff4823e50);
# 88 "../../../tos/interfaces/Resource.nc"
static error_t Msp430RefVoltArbiterImplP__AdcResource__default__request(
# 40 "../../../tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
uint8_t arg_0x7fbff4823e50);
# 102 "../../../tos/interfaces/Resource.nc"
static void Msp430RefVoltArbiterImplP__AdcResource__granted(
# 40 "../../../tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
uint8_t arg_0x7fbff4823e50);
# 120 "../../../tos/interfaces/Resource.nc"
static error_t Msp430RefVoltArbiterImplP__ClientResource__release(
# 38 "../../../tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
uint8_t arg_0x7fbff4826af0);
# 88 "../../../tos/interfaces/Resource.nc"
static error_t Msp430RefVoltArbiterImplP__ClientResource__request(
# 38 "../../../tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
uint8_t arg_0x7fbff4826af0);
# 102 "../../../tos/interfaces/Resource.nc"
static void Msp430RefVoltArbiterImplP__ClientResource__default__granted(
# 38 "../../../tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
uint8_t arg_0x7fbff4826af0);
# 75 "../../../tos/interfaces/TaskBasic.nc"
static void Msp430RefVoltArbiterImplP__switchOff__runTask(void );
# 113 "../../../tos/interfaces/SplitControl.nc"
static void Msp430RefVoltArbiterImplP__RefVolt_1_5V__startDone(error_t error);
#line 138
static void Msp430RefVoltArbiterImplP__RefVolt_1_5V__stopDone(error_t error);
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
uint8_t arg_0x7fbff46bb020);
# 92 "../../../tos/lib/timer/Timer.nc"
static bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(
# 48 "../../../tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7fbff46bb020);
# 64 "../../../tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(
# 48 "../../../tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7fbff46bb020, 
# 64 "../../../tos/lib/timer/Timer.nc"
uint32_t dt);








static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(
# 48 "../../../tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7fbff46bb020, 
# 73 "../../../tos/lib/timer/Timer.nc"
uint32_t dt);




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(
# 48 "../../../tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7fbff46bb020);
# 82 "../../../tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 58 "../../../tos/interfaces/AdcConfigure.nc"
static /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__0__ConfSub__adc_config_t /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__0__ConfSub__getConfiguration(void );
# 75 "../../../tos/interfaces/TaskBasic.nc"
static void AdcStreamP__bufferDone__runTask(void );
#line 75
static void AdcStreamP__readStreamDone__runTask(void );
#line 75
static void AdcStreamP__readStreamFail__runTask(void );
# 78 "../../../tos/lib/timer/Alarm.nc"
static void AdcStreamP__Alarm__fired(void );
# 62 "../../../tos/interfaces/Init.nc"
static error_t AdcStreamP__Init__init(void );
# 58 "../../../tos/interfaces/AdcConfigure.nc"
static AdcStreamP__AdcConfigure__adc_config_t AdcStreamP__AdcConfigure__default__getConfiguration(
# 53 "../../../tos/chips/msp430/adc12/AdcStreamP.nc"
uint8_t arg_0x7fbff4605960);
# 189 "../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static error_t AdcStreamP__SingleChannel__default__getData(
# 52 "../../../tos/chips/msp430/adc12/AdcStreamP.nc"
uint8_t arg_0x7fbff4606020);
# 84 "../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static error_t AdcStreamP__SingleChannel__default__configureSingle(
# 52 "../../../tos/chips/msp430/adc12/AdcStreamP.nc"
uint8_t arg_0x7fbff4606020, 
# 84 "../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
const msp430adc12_channel_config_t * config);
#line 227
static uint16_t * AdcStreamP__SingleChannel__multipleDataReady(
# 52 "../../../tos/chips/msp430/adc12/AdcStreamP.nc"
uint8_t arg_0x7fbff4606020, 
# 227 "../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
uint16_t * buffer, uint16_t numSamples);
#line 138
static error_t AdcStreamP__SingleChannel__default__configureMultiple(
# 52 "../../../tos/chips/msp430/adc12/AdcStreamP.nc"
uint8_t arg_0x7fbff4606020, 
# 138 "../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
const msp430adc12_channel_config_t * config, uint16_t * buffer, uint16_t numSamples, uint16_t jiffies);
#line 206
static error_t AdcStreamP__SingleChannel__singleDataReady(
# 52 "../../../tos/chips/msp430/adc12/AdcStreamP.nc"
uint8_t arg_0x7fbff4606020, 
# 206 "../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
uint16_t data);
# 78 "../../../tos/interfaces/ReadStream.nc"
static error_t AdcStreamP__ReadStream__read(
# 49 "../../../tos/chips/msp430/adc12/AdcStreamP.nc"
uint8_t arg_0x7fbff460ccc0, 
# 78 "../../../tos/interfaces/ReadStream.nc"
uint32_t usPeriod);
# 45 "../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__fired(void );
# 48 "../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__overflow(void );
# 103 "../../../tos/lib/timer/Alarm.nc"
static void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__startAt(/*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__size_type t0, /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__size_type dt);





static /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__Alarm__size_type /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__Alarm__getNow(void );
#line 103
static void /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__Alarm__startAt(/*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__Alarm__size_type t0, /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__Alarm__size_type dt);
#line 78
static void /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__AlarmFrom__fired(void );
# 82 "../../../tos/lib/timer/Counter.nc"
static void /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__Counter__overflow(void );
# 89 "../../../tos/interfaces/ReadStream.nc"
static void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__Service__bufferDone(
# 26 "../../../tos/system/ArbitratedReadStreamC.nc"
uint8_t arg_0x7fbff45916f0, 
# 89 "../../../tos/interfaces/ReadStream.nc"
error_t result, 
#line 86
/*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__Service__val_t * buf, 



uint16_t count);
#line 102
static void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__Service__readDone(
# 26 "../../../tos/system/ArbitratedReadStreamC.nc"
uint8_t arg_0x7fbff45916f0, 
# 102 "../../../tos/interfaces/ReadStream.nc"
error_t result, uint32_t usActualPeriod);
#line 89
static void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__ReadStream__default__bufferDone(
# 24 "../../../tos/system/ArbitratedReadStreamC.nc"
uint8_t arg_0x7fbff45953a0, 
# 89 "../../../tos/interfaces/ReadStream.nc"
error_t result, 
#line 86
/*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__ReadStream__val_t * buf, 



uint16_t count);
#line 102
static void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__ReadStream__default__readDone(
# 24 "../../../tos/system/ArbitratedReadStreamC.nc"
uint8_t arg_0x7fbff45953a0, 
# 102 "../../../tos/interfaces/ReadStream.nc"
error_t result, uint32_t usActualPeriod);
# 120 "../../../tos/interfaces/Resource.nc"
static error_t /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__Resource__default__release(
# 27 "../../../tos/system/ArbitratedReadStreamC.nc"
uint8_t arg_0x7fbff458d7f0);
# 102 "../../../tos/interfaces/Resource.nc"
static void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__Resource__granted(
# 27 "../../../tos/system/ArbitratedReadStreamC.nc"
uint8_t arg_0x7fbff458d7f0);
# 58 "../../../tos/interfaces/AdcConfigure.nc"
static /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__1__ConfSub__adc_config_t /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__1__ConfSub__getConfiguration(void );
#line 58
static Msp430InternalVoltageP__AdcConfigure__adc_config_t Msp430InternalVoltageP__AdcConfigure__getConfiguration(void );
#line 58
static /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__2__ConfSub__adc_config_t /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__2__ConfSub__getConfiguration(void );
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

enum Msp430ClockP____nesc_unnamed4301 {

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
uint8_t arg_0x7fbff553c8b0);
# 48 "../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__overflow(void );
# 91 "../../../tos/chips/msp430/timer/Msp430TimerP.nc"
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__setMode(int mode);









static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__clear(void );









static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__disableEvents(void );




static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__setClockSource(uint16_t clockSource);




static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__setInputDivider(uint16_t inputDivider);




static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX0__fired(void );




static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX1__fired(void );





static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Overflow__fired(void );








static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__default__fired(uint8_t n);
# 39 "../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__fired(
# 51 "../../../tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x7fbff553c8b0);
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

static inline uint16_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__CC2int(/*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t x)  ;
static inline /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Control__getControl(void );
#line 100
static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Control__setControl(/*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t x);
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__getEvent(void );




static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__setEvent(uint16_t x);
#line 180
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__default__captured(uint16_t n);







static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Timer__overflow(void );
# 91 "../../../tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__captured(uint16_t time);
# 45 "../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__fired(void );
# 55 "../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t;

static inline uint16_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__CC2int(/*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t x)  ;
static inline /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__getControl(void );
#line 100
static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__setControl(/*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t x);
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__getEvent(void );




static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__setEvent(uint16_t x);
#line 180
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__default__captured(uint16_t n);







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
# 45 "../../../tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Timer__get(void );
# 55 "../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t;


static inline /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__getControl(void );









static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__clearPendingInterrupt(void );
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
uint8_t arg_0x7fbff56a09c0);
# 79 "../../../tos/interfaces/McuSleep.nc"
static void SchedulerBasicP__McuSleep__sleep(void );
# 61 "../../../tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP____nesc_unnamed4302 {

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
am_id_t arg_0x7fbff53d30d0, 
# 80 "../../../tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 100 "../../../tos/interfaces/Send.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(
# 46 "../../../tos/system/AMQueueImplP.nc"
uint8_t arg_0x7fbff53d6cf0, 
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
enum /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4303 {
#line 126
  AMQueueImplP__0__CancelTask = 0U
};
#line 126
typedef int /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_sillytask_CancelTask[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask];
#line 169
enum /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4304 {
#line 169
  AMQueueImplP__0__errorTask = 1U
};
#line 169
typedef int /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_sillytask_errorTask[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask];
#line 57
#line 55
typedef struct /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4305 {
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
am_id_t arg_0x7fbff536c920, 
# 103 "../../../tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "../../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(
# 48 "../../../tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x7fbff536bb00, 
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
enum SerialP____nesc_unnamed4306 {
#line 191
  SerialP__RunTx = 2U
};
#line 191
typedef int SerialP____nesc_sillytask_RunTx[SerialP__RunTx];
#line 322
enum SerialP____nesc_unnamed4307 {
#line 322
  SerialP__startDoneTask = 3U
};
#line 322
typedef int SerialP____nesc_sillytask_startDoneTask[SerialP__startDoneTask];









enum SerialP____nesc_unnamed4308 {
#line 332
  SerialP__stopDoneTask = 4U
};
#line 332
typedef int SerialP____nesc_sillytask_stopDoneTask[SerialP__stopDoneTask];








enum SerialP____nesc_unnamed4309 {
#line 341
  SerialP__defaultSerialFlushTask = 5U
};
#line 341
typedef int SerialP____nesc_sillytask_defaultSerialFlushTask[SerialP__defaultSerialFlushTask];
#line 81
enum SerialP____nesc_unnamed4310 {
  SerialP__RX_DATA_BUFFER_SIZE = 2, 
  SerialP__TX_DATA_BUFFER_SIZE = 4, 
  SerialP__SERIAL_MTU = 255, 
  SerialP__SERIAL_VERSION = 1, 
  SerialP__ACK_QUEUE_SIZE = 5
};

enum SerialP____nesc_unnamed4311 {
  SerialP__RXSTATE_NOSYNC, 
  SerialP__RXSTATE_PROTO, 
  SerialP__RXSTATE_TOKEN, 
  SerialP__RXSTATE_INFO, 
  SerialP__RXSTATE_INACTIVE
};

enum SerialP____nesc_unnamed4312 {
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
typedef enum SerialP____nesc_unnamed4313 {
  SerialP__BUFFER_AVAILABLE, 
  SerialP__BUFFER_FILLING, 
  SerialP__BUFFER_COMPLETE
} SerialP__tx_data_buffer_states_t;

enum SerialP____nesc_unnamed4314 {
  SerialP__TX_ACK_INDEX = 0, 
  SerialP__TX_DATA_INDEX = 1, 
  SerialP__TX_BUFFER_COUNT = 2
};






#line 124
typedef struct SerialP____nesc_unnamed4315 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP__RX_DATA_BUFFER_SIZE + 1];
} SerialP__rx_buf_t;




#line 130
typedef struct SerialP____nesc_unnamed4316 {
  uint8_t state;
  uint8_t buf;
} SerialP__tx_buf_t;





#line 135
typedef struct SerialP____nesc_unnamed4317 {
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
uart_id_t arg_0x7fbff522f110, 
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
uart_id_t arg_0x7fbff5230570, 
# 71 "../../../tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "../../../tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(
# 54 "../../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7fbff522e4d0, 
# 31 "../../../tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(
# 54 "../../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7fbff522e4d0);
# 23 "../../../tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(
# 54 "../../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7fbff522e4d0, 
# 23 "../../../tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen);
# 71 "../../../tos/lib/serial/SendBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend(void );
#line 62
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(uint8_t first_byte);
# 158 "../../../tos/lib/serial/SerialDispatcherP.nc"
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4318 {
#line 158
  SerialDispatcherP__0__signalSendDone = 6U
};
#line 158
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_sillytask_signalSendDone[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone];
#line 275
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4319 {
#line 275
  SerialDispatcherP__0__receiveTask = 7U
};
#line 275
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_sillytask_receiveTask[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask];
#line 66
#line 62
typedef enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4320 {
  SerialDispatcherP__0__SEND_STATE_IDLE = 0, 
  SerialDispatcherP__0__SEND_STATE_BEGIN = 1, 
  SerialDispatcherP__0__SEND_STATE_DATA = 2
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__send_state_t;

enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4321 {
  SerialDispatcherP__0__RECV_STATE_IDLE = 0, 
  SerialDispatcherP__0__RECV_STATE_BEGIN = 1, 
  SerialDispatcherP__0__RECV_STATE_DATA = 2
};






#line 74
typedef struct /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4322 {
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
typedef struct HdlcTranslateC____nesc_unnamed4323 {
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
uint8_t arg_0x7fbff511a890);
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
uint8_t arg_0x7fbff511fe60, 
# 79 "../../../tos/interfaces/UartStream.nc"
uint8_t byte);
#line 99
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__receiveDone(
# 45 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fbff511fe60, 
# 95 "../../../tos/interfaces/UartStream.nc"
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__sendDone(
# 45 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fbff511fe60, 
# 53 "../../../tos/interfaces/UartStream.nc"
uint8_t * buf, 



uint16_t len, error_t error);
# 120 "../../../tos/interfaces/Resource.nc"
static error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__release(
# 48 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fbff511c580);
# 97 "../../../tos/interfaces/Resource.nc"
static error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__immediateRequest(
# 48 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fbff511c580);
# 128 "../../../tos/interfaces/Resource.nc"
static bool /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__isOwner(
# 48 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fbff511c580);
# 102 "../../../tos/interfaces/Resource.nc"
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__Resource__granted(
# 43 "../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fbff5122e10);
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
#line 56
static void /*HplMsp430GeneralIOC.P40*/HplMsp430GeneralIOP__24__IO__set(void );
static inline void /*HplMsp430GeneralIOC.P40*/HplMsp430GeneralIOP__24__IO__clr(void );





static inline void /*HplMsp430GeneralIOC.P40*/HplMsp430GeneralIOP__24__IO__makeOutput(void );
#line 56
static void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__set(void );
static inline void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__clr(void );





static inline void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__makeOutput(void );
#line 56
static void /*HplMsp430GeneralIOC.P43*/HplMsp430GeneralIOP__27__IO__set(void );
static inline void /*HplMsp430GeneralIOC.P43*/HplMsp430GeneralIOP__27__IO__clr(void );





static inline void /*HplMsp430GeneralIOC.P43*/HplMsp430GeneralIOP__27__IO__makeOutput(void );
#line 61
static inline void /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIOP__40__IO__makeInput(void );



static inline void /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIOP__40__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIOP__40__IO__selectIOFunc(void );
#line 61
static inline void /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIOP__41__IO__makeInput(void );



static inline void /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIOP__41__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIOP__41__IO__selectIOFunc(void );
#line 61
static inline void /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIOP__42__IO__makeInput(void );



static inline void /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIOP__42__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIOP__42__IO__selectIOFunc(void );
#line 61
static inline void /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIOP__43__IO__makeInput(void );



static inline void /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIOP__43__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIOP__43__IO__selectIOFunc(void );
#line 61
static inline void /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIOP__44__IO__makeInput(void );



static inline void /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIOP__44__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIOP__44__IO__selectIOFunc(void );
#line 61
static inline void /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIOP__45__IO__makeInput(void );



static inline void /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIOP__45__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIOP__45__IO__selectIOFunc(void );
#line 61
static inline void /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIOP__46__IO__makeInput(void );



static inline void /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIOP__46__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIOP__46__IO__selectIOFunc(void );
#line 61
static inline void /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIOP__47__IO__makeInput(void );



static inline void /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIOP__47__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIOP__47__IO__selectIOFunc(void );
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




static void LedsP__Led1__makeOutput(void );
#line 40
static void LedsP__Led1__set(void );
static void LedsP__Led1__clr(void );




static void LedsP__Led2__makeOutput(void );
#line 40
static void LedsP__Led2__set(void );
static void LedsP__Led2__clr(void );
# 57 "../../../tos/platforms/shimmer2r/LedsP.nc"
static inline error_t LedsP__Init__init(void );
#line 75
static inline void LedsP__Leds__led0On(void );




static inline void LedsP__Leds__led0Off(void );









static inline void LedsP__Leds__led1On(void );




static inline void LedsP__Leds__led1Off(void );









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
# 85 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__makeOutput(void );
#line 48
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__set(void );




static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__clr(void );
# 48 "../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__set(void );
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__clr(void );




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
uint8_t arg_0x7fbff4d04600, 
# 54 "../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
uint8_t data);
#line 49
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__txDone(
# 39 "../../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x7fbff4d04600);
# 39 "../../../tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc"
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__I2CInterrupts__fired(
# 40 "../../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x7fbff4d034e0);








static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__txDone(void );




static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__rxDone(uint8_t data);




static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawI2CInterrupts__fired(void );




static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__txDone(uint8_t id);
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__rxDone(uint8_t id, uint8_t data);
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__I2CInterrupts__default__fired(uint8_t id);
# 49 "../../../tos/system/FcfsResourceQueueC.nc"
enum /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0____nesc_unnamed4324 {
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
uint8_t arg_0x7fbff4cc4cf0);
# 65 "../../../tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(
# 60 "../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fbff4cc0240);
# 59 "../../../tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__configure(
# 60 "../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fbff4cc0240);
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
uint8_t arg_0x7fbff4cc5a50);
# 67 "../../../tos/interfaces/TaskBasic.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__postTask(void );
# 75 "../../../tos/system/ArbiterP.nc"
enum /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0____nesc_unnamed4325 {
#line 75
  ArbiterP__0__grantedTask = 8U
};
#line 75
typedef int /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0____nesc_sillytask_grantedTask[/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask];
#line 67
enum /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0____nesc_unnamed4326 {
#line 67
  ArbiterP__0__RES_CONTROLLED, ArbiterP__0__RES_GRANTING, ArbiterP__0__RES_IMM_GRANTING, ArbiterP__0__RES_BUSY
};
#line 68
enum /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0____nesc_unnamed4327 {
#line 68
  ArbiterP__0__default_owner_id = 1U
};
#line 69
enum /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0____nesc_unnamed4328 {
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
enum PrintfP____nesc_unnamed4329 {
#line 114
  PrintfP__retrySend = 9U
};
#line 114
typedef int PrintfP____nesc_sillytask_retrySend[PrintfP__retrySend];
#line 101
enum PrintfP____nesc_unnamed4330 {
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
# 55 "../../../tos/interfaces/Read.nc"
static error_t TestPrintfC__Read__read(void );
# 62 "../../../tos/platforms/shimmer2r/Leds.nc"
static void TestPrintfC__Leds__led0Off(void );










static void TestPrintfC__Leds__led1On(void );




static void TestPrintfC__Leds__led1Off(void );
#line 95
static void TestPrintfC__Leds__led2Off(void );
#line 57
static void TestPrintfC__Leds__led0On(void );
#line 90
static void TestPrintfC__Leds__led2On(void );
# 64 "../../../tos/lib/timer/Timer.nc"
static void TestPrintfC__Timer__startPeriodic(uint32_t dt);
# 55 "TestPrintfC.nc"
uint32_t TestPrintfC__dummyVar2 = 0;
uint32_t TestPrintfC__v0 = 0x2885842e;
uint32_t TestPrintfC__v1 = 0xa3e6999b;
uint32_t TestPrintfC__k[4] = { 0x9474B8E8, 0xC73BCA7D, 0x53239142, 0xf3c3121a };
uint32_t TestPrintfC__sum = 0;
#line 59
uint32_t TestPrintfC__delta = 0x9e3779b9;
int TestPrintfC__i;
int TestPrintfC__a = 0;

static inline void TestPrintfC__Boot__booted(void );



static inline void TestPrintfC__Timer__fired(void );
#line 97
static void TestPrintfC__Read__readDone(error_t result, uint16_t data);
# 104 "../../../tos/interfaces/SplitControl.nc"
static error_t SerialStartP__SerialControl__start(void );
# 44 "../../../tos/lib/serial/SerialStartP.nc"
static inline void SerialStartP__Boot__booted(void );



static inline void SerialStartP__SerialControl__startDone(error_t error);
static inline void SerialStartP__SerialControl__stopDone(error_t error);
# 63 "../../../tos/interfaces/Read.nc"
static void AdcP__Read__readDone(
# 38 "../../../tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x7fbff4a9d1e0, 
# 63 "../../../tos/interfaces/Read.nc"
error_t result, AdcP__Read__val_t val);
# 66 "../../../tos/interfaces/ReadNow.nc"
static void AdcP__ReadNow__readDone(
# 39 "../../../tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x7fbff4a9b060, 
# 66 "../../../tos/interfaces/ReadNow.nc"
error_t result, AdcP__ReadNow__val_t val);
# 102 "../../../tos/interfaces/Resource.nc"
static void AdcP__ResourceReadNow__granted(
# 40 "../../../tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x7fbff4a99db0);
# 58 "../../../tos/interfaces/AdcConfigure.nc"
static AdcP__Config__adc_config_t AdcP__Config__getConfiguration(
# 48 "../../../tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x7fbff4a94b90);
# 189 "../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static error_t AdcP__SingleChannel__getData(
# 49 "../../../tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x7fbff4a912a0);
# 84 "../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static error_t AdcP__SingleChannel__configureSingle(
# 49 "../../../tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x7fbff4a912a0, 
# 84 "../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
const msp430adc12_channel_config_t * config);
# 120 "../../../tos/interfaces/Resource.nc"
static error_t AdcP__ResourceRead__release(
# 44 "../../../tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x7fbff4a971e0);
# 88 "../../../tos/interfaces/Resource.nc"
static error_t AdcP__ResourceRead__request(
# 44 "../../../tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x7fbff4a971e0);
# 67 "../../../tos/interfaces/TaskBasic.nc"
static error_t AdcP__readDone__postTask(void );
# 136 "../../../tos/chips/msp430/adc12/AdcP.nc"
enum AdcP____nesc_unnamed4331 {
#line 136
  AdcP__readDone = 10U
};
#line 136
typedef int AdcP____nesc_sillytask_readDone[AdcP__readDone];
#line 54
enum AdcP____nesc_unnamed4332 {
  AdcP__STATE_READ, 
  AdcP__STATE_READNOW, 
  AdcP__STATE_READNOW_INVALID_CONFIG
};


uint8_t AdcP__state;
uint8_t AdcP__owner;
uint16_t AdcP__value;

static error_t AdcP__configure(uint8_t client);









static inline error_t AdcP__Read__read(uint8_t client);




static void AdcP__ResourceRead__granted(uint8_t client);
#line 98
static void AdcP__SubResourceReadNow__granted(uint8_t nowClient);
#line 136
static inline void AdcP__readDone__runTask(void );





static error_t AdcP__SingleChannel__singleDataReady(uint8_t client, uint16_t data);
#line 161
static inline uint16_t *AdcP__SingleChannel__multipleDataReady(uint8_t client, 
uint16_t *buf, uint16_t numSamples);





static inline error_t AdcP__ResourceRead__default__request(uint8_t client);

static inline error_t AdcP__ResourceRead__default__release(uint8_t client);

static inline void AdcP__Read__default__readDone(uint8_t client, error_t result, uint16_t val);




static inline void AdcP__ResourceReadNow__default__granted(uint8_t nowClient);
static inline void AdcP__ReadNow__default__readDone(uint8_t client, error_t result, uint16_t val);

static inline error_t AdcP__SingleChannel__default__getData(uint8_t client);




const msp430adc12_channel_config_t AdcP__defaultConfig = { INPUT_CHANNEL_NONE, 0, 0, 0, 0, 0, 0, 0 };
static inline const msp430adc12_channel_config_t *
AdcP__Config__default__getConfiguration(uint8_t client);



static inline error_t AdcP__SingleChannel__default__configureSingle(uint8_t client, 
const msp430adc12_channel_config_t *config);
# 107 "../../../tos/chips/msp430/adc12/Msp430Adc12MultiChannel.nc"
static void Msp430Adc12ImplP__MultiChannel__dataReady(
# 42 "../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x7fbff4a1e940, 
# 107 "../../../tos/chips/msp430/adc12/Msp430Adc12MultiChannel.nc"
uint16_t *buffer, uint16_t numSamples);
# 63 "../../../tos/chips/msp430/adc12/HplAdc12.nc"
static adc12ctl0_t Msp430Adc12ImplP__HplAdc12__getCtl0(void );
#line 82
static adc12memctl_t Msp430Adc12ImplP__HplAdc12__getMCtl(uint8_t idx);
#line 106
static void Msp430Adc12ImplP__HplAdc12__resetIFGs(void );
#line 75
static void Msp430Adc12ImplP__HplAdc12__setMCtl(uint8_t idx, adc12memctl_t memControl);
#line 128
static void Msp430Adc12ImplP__HplAdc12__startConversion(void );
#line 51
static void Msp430Adc12ImplP__HplAdc12__setCtl0(adc12ctl0_t control0);
#line 89
static uint16_t Msp430Adc12ImplP__HplAdc12__getMem(uint8_t idx);





static void Msp430Adc12ImplP__HplAdc12__setIEFlags(uint16_t mask);





static uint16_t Msp430Adc12ImplP__HplAdc12__getIEFlags(void );
#line 123
static void Msp430Adc12ImplP__HplAdc12__stopConversion(void );
#line 57
static void Msp430Adc12ImplP__HplAdc12__setCtl1(adc12ctl1_t control1);
# 78 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void Msp430Adc12ImplP__Port64__makeInput(void );
#line 99
static void Msp430Adc12ImplP__Port64__selectIOFunc(void );
#line 92
static void Msp430Adc12ImplP__Port64__selectModuleFunc(void );
# 41 "../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void Msp430Adc12ImplP__CompareA1__setEvent(uint16_t time);
# 46 "../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static void Msp430Adc12ImplP__ControlA0__setControl(msp430_compare_control_t control);
# 78 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void Msp430Adc12ImplP__Port62__makeInput(void );
#line 99
static void Msp430Adc12ImplP__Port62__selectIOFunc(void );
#line 92
static void Msp430Adc12ImplP__Port62__selectModuleFunc(void );
# 49 "../../../tos/chips/msp430/adc12/Msp430Adc12Overflow.nc"
static void Msp430Adc12ImplP__Overflow__memOverflow(
# 43 "../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x7fbff4a1c900);
# 54 "../../../tos/chips/msp430/adc12/Msp430Adc12Overflow.nc"
static void Msp430Adc12ImplP__Overflow__conversionTimeOverflow(
# 43 "../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x7fbff4a1c900);
# 78 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void Msp430Adc12ImplP__Port67__makeInput(void );
#line 99
static void Msp430Adc12ImplP__Port67__selectIOFunc(void );
#line 92
static void Msp430Adc12ImplP__Port67__selectModuleFunc(void );
#line 78
static void Msp430Adc12ImplP__Port60__makeInput(void );
#line 99
static void Msp430Adc12ImplP__Port60__selectIOFunc(void );
#line 92
static void Msp430Adc12ImplP__Port60__selectModuleFunc(void );
#line 78
static void Msp430Adc12ImplP__Port65__makeInput(void );
#line 99
static void Msp430Adc12ImplP__Port65__selectIOFunc(void );
#line 92
static void Msp430Adc12ImplP__Port65__selectModuleFunc(void );
# 52 "../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void Msp430Adc12ImplP__TimerA__clear(void );


static void Msp430Adc12ImplP__TimerA__setClockSource(uint16_t clockSource);
#line 54
static void Msp430Adc12ImplP__TimerA__disableEvents(void );
#line 50
static void Msp430Adc12ImplP__TimerA__setMode(int mode);





static void Msp430Adc12ImplP__TimerA__setInputDivider(uint16_t inputDivider);
# 98 "../../../tos/interfaces/ArbiterInfo.nc"
static uint8_t Msp430Adc12ImplP__ADCArbiterInfo__userId(void );
# 46 "../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static void Msp430Adc12ImplP__ControlA1__setControl(msp430_compare_control_t control);
# 227 "../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static uint16_t * Msp430Adc12ImplP__SingleChannel__multipleDataReady(
# 41 "../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x7fbff4a1f1c0, 
# 227 "../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
uint16_t * buffer, uint16_t numSamples);
#line 206
static error_t Msp430Adc12ImplP__SingleChannel__singleDataReady(
# 41 "../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x7fbff4a1f1c0, 
# 206 "../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
uint16_t data);
# 78 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void Msp430Adc12ImplP__Port63__makeInput(void );
#line 99
static void Msp430Adc12ImplP__Port63__selectIOFunc(void );
#line 92
static void Msp430Adc12ImplP__Port63__selectModuleFunc(void );
# 41 "../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void Msp430Adc12ImplP__CompareA0__setEvent(uint16_t time);
# 78 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void Msp430Adc12ImplP__Port61__makeInput(void );
#line 99
static void Msp430Adc12ImplP__Port61__selectIOFunc(void );
#line 92
static void Msp430Adc12ImplP__Port61__selectModuleFunc(void );
#line 78
static void Msp430Adc12ImplP__Port66__makeInput(void );
#line 99
static void Msp430Adc12ImplP__Port66__selectIOFunc(void );
#line 92
static void Msp430Adc12ImplP__Port66__selectModuleFunc(void );
# 71 "../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
enum Msp430Adc12ImplP____nesc_unnamed4333 {
  Msp430Adc12ImplP__SINGLE_DATA = 1, 
  Msp430Adc12ImplP__SINGLE_DATA_REPEAT = 2, 
  Msp430Adc12ImplP__MULTIPLE_DATA = 4, 
  Msp430Adc12ImplP__MULTIPLE_DATA_REPEAT = 8, 
  Msp430Adc12ImplP__MULTI_CHANNEL = 16, 
  Msp430Adc12ImplP__CONVERSION_MODE_MASK = 0x1F, 

  Msp430Adc12ImplP__ADC_BUSY = 32, 
  Msp430Adc12ImplP__USE_TIMERA = 64, 
  Msp430Adc12ImplP__ADC_OVERFLOW = 128
};

uint8_t Msp430Adc12ImplP__state;

uint16_t Msp430Adc12ImplP__resultBufferLength;
uint16_t * Msp430Adc12ImplP__resultBufferStart;
uint16_t Msp430Adc12ImplP__resultBufferIndex;
uint8_t Msp430Adc12ImplP__numChannels;
uint8_t Msp430Adc12ImplP__clientID;

static inline error_t Msp430Adc12ImplP__Init__init(void );
#line 109
static inline void Msp430Adc12ImplP__prepareTimerA(uint16_t interval, uint16_t csSAMPCON, uint16_t cdSAMPCON);
#line 127
static inline void Msp430Adc12ImplP__startTimerA(void );
#line 148
static inline void Msp430Adc12ImplP__configureAdcPin(uint8_t inch);
#line 165
static void Msp430Adc12ImplP__resetAdcPin(uint8_t inch);
#line 182
static error_t Msp430Adc12ImplP__SingleChannel__configureSingle(uint8_t id, 
const msp430adc12_channel_config_t *config);
#line 277
static inline error_t Msp430Adc12ImplP__SingleChannel__configureMultiple(uint8_t id, 
const msp430adc12_channel_config_t *config, 
uint16_t *buf, uint16_t length, uint16_t jiffies);
#line 400
static error_t Msp430Adc12ImplP__SingleChannel__getData(uint8_t id);
#line 509
static void Msp430Adc12ImplP__stopConversion(void );
#line 546
static inline void Msp430Adc12ImplP__TimerA__overflow(void );
static inline void Msp430Adc12ImplP__CompareA0__fired(void );
static inline void Msp430Adc12ImplP__CompareA1__fired(void );

static inline void Msp430Adc12ImplP__HplAdc12__conversionDone(uint16_t iv);
#line 651
static inline error_t Msp430Adc12ImplP__SingleChannel__default__singleDataReady(uint8_t id, uint16_t data);




static inline uint16_t *Msp430Adc12ImplP__SingleChannel__default__multipleDataReady(uint8_t id, 
uint16_t *buf, uint16_t numSamples);




static inline void Msp430Adc12ImplP__MultiChannel__default__dataReady(uint8_t id, uint16_t *buffer, uint16_t numSamples);

static inline void Msp430Adc12ImplP__Overflow__default__memOverflow(uint8_t id);
static inline void Msp430Adc12ImplP__Overflow__default__conversionTimeOverflow(uint8_t id);
# 112 "../../../tos/chips/msp430/adc12/HplAdc12.nc"
static void HplAdc12P__HplAdc12__conversionDone(uint16_t iv);
# 51 "../../../tos/chips/msp430/adc12/HplAdc12P.nc"
static volatile uint16_t HplAdc12P__ADC12CTL0 __asm ("0x01A0");
static volatile uint16_t HplAdc12P__ADC12CTL1 __asm ("0x01A2");
static volatile uint16_t HplAdc12P__ADC12IFG __asm ("0x01A4");
static volatile uint16_t HplAdc12P__ADC12IE __asm ("0x01A6");
static volatile uint16_t HplAdc12P__ADC12IV __asm ("0x01A8");

static inline adc12ctl0_t HplAdc12P__int2adc12ctl0(uint16_t x)  ;

static inline uint16_t HplAdc12P__adc12ctl0cast2int(adc12ctl0_t x)  ;
static inline uint16_t HplAdc12P__adc12ctl1cast2int(adc12ctl1_t x)  ;
static inline uint8_t HplAdc12P__adc12memctl2int(adc12memctl_t x)  ;
static inline adc12memctl_t HplAdc12P__int2adc12memctl(uint8_t x)  ;

static inline void HplAdc12P__HplAdc12__setCtl0(adc12ctl0_t control0);



static inline void HplAdc12P__HplAdc12__setCtl1(adc12ctl1_t control1);



static inline adc12ctl0_t HplAdc12P__HplAdc12__getCtl0(void );







static inline void HplAdc12P__HplAdc12__setMCtl(uint8_t i, adc12memctl_t memCtl);



static inline adc12memctl_t HplAdc12P__HplAdc12__getMCtl(uint8_t i);



static inline uint16_t HplAdc12P__HplAdc12__getMem(uint8_t i);



static inline void HplAdc12P__HplAdc12__setIEFlags(uint16_t mask);
static inline uint16_t HplAdc12P__HplAdc12__getIEFlags(void );

static inline void HplAdc12P__HplAdc12__resetIFGs(void );




static inline void HplAdc12P__HplAdc12__startConversion(void );




static void HplAdc12P__HplAdc12__stopConversion(void );
#line 118
static inline bool HplAdc12P__HplAdc12__isBusy(void );

void sig_ADC12_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x000E)))  ;
# 49 "../../../tos/system/RoundRobinResourceQueueC.nc"
enum /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0____nesc_unnamed4334 {
  RoundRobinResourceQueueC__0__NO_ENTRY = 0xFF, 
  RoundRobinResourceQueueC__0__SIZE = 3U ? (3U - 1) / 8 + 1 : 0
};

uint8_t /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__resQ[/*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__SIZE];
uint8_t /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__last = 0;

static inline void /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__clearEntry(uint8_t id);



static inline error_t /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__Init__init(void );




static inline bool /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty(void );








static bool /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue(void );
#line 97
static inline error_t /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(resource_client_id_t id);
# 53 "../../../tos/interfaces/ResourceRequested.nc"
static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(
# 52 "../../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fbff48dd9d0);
# 65 "../../../tos/interfaces/ResourceConfigure.nc"
static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(
# 56 "../../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fbff48db0d0);
# 59 "../../../tos/interfaces/ResourceConfigure.nc"
static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(
# 56 "../../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fbff48db0d0);
# 79 "../../../tos/interfaces/ResourceQueue.nc"
static error_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__enqueue(resource_client_id_t id);
#line 53
static bool /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__dequeue(void );
# 102 "../../../tos/interfaces/Resource.nc"
static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__granted(
# 51 "../../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fbff48de660);
# 67 "../../../tos/interfaces/TaskBasic.nc"
static error_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__postTask(void );
# 68 "../../../tos/system/SimpleArbiterP.nc"
enum /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0____nesc_unnamed4335 {
#line 68
  SimpleArbiterP__0__grantedTask = 11U
};
#line 68
typedef int /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0____nesc_sillytask_grantedTask[/*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask];
#line 62
enum /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0____nesc_unnamed4336 {
#line 62
  SimpleArbiterP__0__RES_IDLE = 0, SimpleArbiterP__0__RES_GRANTING = 1, SimpleArbiterP__0__RES_BUSY = 2
};
#line 63
enum /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0____nesc_unnamed4337 {
#line 63
  SimpleArbiterP__0__NO_RES = 0xFF
};
uint8_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__RES_IDLE;
uint8_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__resId = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__NO_RES;



static error_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(uint8_t id);
#line 96
static error_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(uint8_t id);
#line 131
static uint8_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ArbiterInfo__userId(void );
#line 149
static inline void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void );








static inline void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__default__granted(uint8_t id);

static inline void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(uint8_t id);



static inline void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(uint8_t id);

static inline void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id);
# 63 "../../../tos/chips/msp430/adc12/HplAdc12.nc"
static adc12ctl0_t Msp430RefVoltGeneratorP__HplAdc12__getCtl0(void );
#line 118
static bool Msp430RefVoltGeneratorP__HplAdc12__isBusy(void );
#line 51
static void Msp430RefVoltGeneratorP__HplAdc12__setCtl0(adc12ctl0_t control0);
# 73 "../../../tos/lib/timer/Timer.nc"
static void Msp430RefVoltGeneratorP__SwitchOffTimer__startOneShot(uint32_t dt);




static void Msp430RefVoltGeneratorP__SwitchOffTimer__stop(void );
# 113 "../../../tos/interfaces/SplitControl.nc"
static void Msp430RefVoltGeneratorP__RefVolt_2_5V__startDone(error_t error);
#line 138
static void Msp430RefVoltGeneratorP__RefVolt_2_5V__stopDone(error_t error);
# 92 "../../../tos/lib/timer/Timer.nc"
static bool Msp430RefVoltGeneratorP__SwitchOffSettleTimer__isRunning(void );
#line 73
static void Msp430RefVoltGeneratorP__SwitchOffSettleTimer__startOneShot(uint32_t dt);




static void Msp430RefVoltGeneratorP__SwitchOffSettleTimer__stop(void );
# 113 "../../../tos/interfaces/SplitControl.nc"
static void Msp430RefVoltGeneratorP__RefVolt_1_5V__startDone(error_t error);
#line 138
static void Msp430RefVoltGeneratorP__RefVolt_1_5V__stopDone(error_t error);
# 73 "../../../tos/lib/timer/Timer.nc"
static void Msp430RefVoltGeneratorP__SwitchOnTimer__startOneShot(uint32_t dt);




static void Msp430RefVoltGeneratorP__SwitchOnTimer__stop(void );
# 66 "../../../tos/chips/msp430/adc12/Msp430RefVoltGeneratorP.nc"
#line 53
typedef enum Msp430RefVoltGeneratorP____nesc_unnamed4338 {

  Msp430RefVoltGeneratorP__GENERATOR_OFF = 0, 

  Msp430RefVoltGeneratorP__REFERENCE_1_5V_STABLE = 1, 
  Msp430RefVoltGeneratorP__REFERENCE_2_5V_STABLE = 2, 

  Msp430RefVoltGeneratorP__REFERENCE_1_5V_ON_PENDING = 3, 
  Msp430RefVoltGeneratorP__REFERENCE_2_5V_ON_PENDING = 4, 

  Msp430RefVoltGeneratorP__REFERENCE_1_5V_OFF_PENDING = 5, 
  Msp430RefVoltGeneratorP__REFERENCE_2_5V_OFF_PENDING = 6
} 
Msp430RefVoltGeneratorP__state_t;

Msp430RefVoltGeneratorP__state_t Msp430RefVoltGeneratorP__m_state;


static error_t Msp430RefVoltGeneratorP__switchOn(uint8_t level);
static error_t Msp430RefVoltGeneratorP__switchOff(void );
static void Msp430RefVoltGeneratorP__signalStartDone(Msp430RefVoltGeneratorP__state_t state, error_t result);
static void Msp430RefVoltGeneratorP__signalStopDone(Msp430RefVoltGeneratorP__state_t state, error_t result);
static error_t Msp430RefVoltGeneratorP__start(Msp430RefVoltGeneratorP__state_t targetState);
static error_t Msp430RefVoltGeneratorP__stop(Msp430RefVoltGeneratorP__state_t nextState);


static inline error_t Msp430RefVoltGeneratorP__RefVolt_1_5V__start(void );



static inline error_t Msp430RefVoltGeneratorP__RefVolt_2_5V__start(void );



static inline error_t Msp430RefVoltGeneratorP__RefVolt_1_5V__stop(void );



static inline error_t Msp430RefVoltGeneratorP__RefVolt_2_5V__stop(void );



static error_t Msp430RefVoltGeneratorP__start(Msp430RefVoltGeneratorP__state_t targetState);
#line 147
static error_t Msp430RefVoltGeneratorP__stop(Msp430RefVoltGeneratorP__state_t nextState);
#line 173
static void Msp430RefVoltGeneratorP__signalStartDone(Msp430RefVoltGeneratorP__state_t state, error_t result);






static void Msp430RefVoltGeneratorP__signalStopDone(Msp430RefVoltGeneratorP__state_t state, error_t result);







static inline void Msp430RefVoltGeneratorP__SwitchOnTimer__fired(void );
#line 205
static inline void Msp430RefVoltGeneratorP__SwitchOffTimer__fired(void );
#line 233
static inline void Msp430RefVoltGeneratorP__SwitchOffSettleTimer__fired(void );


static inline void Msp430RefVoltGeneratorP__HplAdc12__conversionDone(uint16_t iv);



static error_t Msp430RefVoltGeneratorP__switchOn(uint8_t level);
#line 259
static error_t Msp430RefVoltGeneratorP__switchOff(void );
# 58 "../../../tos/interfaces/AdcConfigure.nc"
static Msp430RefVoltArbiterImplP__Config__adc_config_t Msp430RefVoltArbiterImplP__Config__getConfiguration(
# 43 "../../../tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
uint8_t arg_0x7fbff481fd00);
# 104 "../../../tos/interfaces/SplitControl.nc"
static error_t Msp430RefVoltArbiterImplP__RefVolt_2_5V__start(void );
#line 130
static error_t Msp430RefVoltArbiterImplP__RefVolt_2_5V__stop(void );
# 120 "../../../tos/interfaces/Resource.nc"
static error_t Msp430RefVoltArbiterImplP__AdcResource__release(
# 40 "../../../tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
uint8_t arg_0x7fbff4823e50);
# 88 "../../../tos/interfaces/Resource.nc"
static error_t Msp430RefVoltArbiterImplP__AdcResource__request(
# 40 "../../../tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
uint8_t arg_0x7fbff4823e50);
# 102 "../../../tos/interfaces/Resource.nc"
static void Msp430RefVoltArbiterImplP__ClientResource__granted(
# 38 "../../../tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
uint8_t arg_0x7fbff4826af0);
# 67 "../../../tos/interfaces/TaskBasic.nc"
static error_t Msp430RefVoltArbiterImplP__switchOff__postTask(void );
# 104 "../../../tos/interfaces/SplitControl.nc"
static error_t Msp430RefVoltArbiterImplP__RefVolt_1_5V__start(void );
#line 130
static error_t Msp430RefVoltArbiterImplP__RefVolt_1_5V__stop(void );
# 52 "../../../tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
enum Msp430RefVoltArbiterImplP____nesc_unnamed4339 {
#line 52
  Msp430RefVoltArbiterImplP__switchOff = 12U
};
#line 52
typedef int Msp430RefVoltArbiterImplP____nesc_sillytask_switchOff[Msp430RefVoltArbiterImplP__switchOff];
#line 46
enum Msp430RefVoltArbiterImplP____nesc_unnamed4340 {
  Msp430RefVoltArbiterImplP__NO_OWNER = 0xFF
};
uint8_t Msp430RefVoltArbiterImplP__syncOwner = Msp430RefVoltArbiterImplP__NO_OWNER;
bool Msp430RefVoltArbiterImplP__ref2_5v;



static inline error_t Msp430RefVoltArbiterImplP__ClientResource__request(uint8_t client);
#line 71
static void Msp430RefVoltArbiterImplP__AdcResource__granted(uint8_t client);
#line 103
static inline void Msp430RefVoltArbiterImplP__RefVolt_1_5V__startDone(error_t error);








static void Msp430RefVoltArbiterImplP__RefVolt_2_5V__startDone(error_t error);








static error_t Msp430RefVoltArbiterImplP__ClientResource__release(uint8_t client);
#line 141
static inline void Msp430RefVoltArbiterImplP__switchOff__runTask(void );
#line 157
static inline void Msp430RefVoltArbiterImplP__RefVolt_1_5V__stopDone(error_t error);



static inline void Msp430RefVoltArbiterImplP__RefVolt_2_5V__stopDone(error_t error);








static inline void Msp430RefVoltArbiterImplP__ClientResource__default__granted(uint8_t client);
static inline error_t Msp430RefVoltArbiterImplP__AdcResource__default__request(uint8_t client);








static inline error_t Msp430RefVoltArbiterImplP__AdcResource__default__release(uint8_t client);
const msp430adc12_channel_config_t Msp430RefVoltArbiterImplP__defaultConfig = { INPUT_CHANNEL_NONE, 0, 0, 0, 0, 0, 0, 0 };
static inline const msp430adc12_channel_config_t *
Msp430RefVoltArbiterImplP__Config__default__getConfiguration(uint8_t client);
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

enum /*CounterMilli32C.Transform*/TransformCounterC__0____nesc_unnamed4341 {

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

enum /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0____nesc_unnamed4342 {

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
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_unnamed4343 {
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
uint8_t arg_0x7fbff46bb020);
#line 71
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4344 {
#line 71
  VirtualizeTimerC__0__updateFromTimer = 14U
};
#line 71
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer];
#line 53
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4345 {

  VirtualizeTimerC__0__NUM_TIMERS = 4U, 
  VirtualizeTimerC__0__END_OF_LIST = 255
};








#line 59
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4346 {

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









static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt);




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt);




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num);




static inline bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(uint8_t num);
#line 204
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num);
# 58 "../../../tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 58 "../../../tos/interfaces/AdcConfigure.nc"
static /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__0__ConfUp__adc_config_t /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__0__ConfUp__getConfiguration(void );
# 47 "../../../tos/chips/msp430/adc12/Msp430Adc12ConfAlertC.nc"
static inline const msp430adc12_channel_config_t */*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__0__ConfSub__getConfiguration(void );
# 67 "../../../tos/interfaces/TaskBasic.nc"
static error_t AdcStreamP__bufferDone__postTask(void );
#line 67
static error_t AdcStreamP__readStreamDone__postTask(void );
#line 67
static error_t AdcStreamP__readStreamFail__postTask(void );
# 109 "../../../tos/lib/timer/Alarm.nc"
static AdcStreamP__Alarm__size_type AdcStreamP__Alarm__getNow(void );
#line 103
static void AdcStreamP__Alarm__startAt(AdcStreamP__Alarm__size_type t0, AdcStreamP__Alarm__size_type dt);
# 58 "../../../tos/interfaces/AdcConfigure.nc"
static AdcStreamP__AdcConfigure__adc_config_t AdcStreamP__AdcConfigure__getConfiguration(
# 53 "../../../tos/chips/msp430/adc12/AdcStreamP.nc"
uint8_t arg_0x7fbff4605960);
# 189 "../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static error_t AdcStreamP__SingleChannel__getData(
# 52 "../../../tos/chips/msp430/adc12/AdcStreamP.nc"
uint8_t arg_0x7fbff4606020);
# 84 "../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static error_t AdcStreamP__SingleChannel__configureSingle(
# 52 "../../../tos/chips/msp430/adc12/AdcStreamP.nc"
uint8_t arg_0x7fbff4606020, 
# 84 "../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
const msp430adc12_channel_config_t * config);
#line 138
static error_t AdcStreamP__SingleChannel__configureMultiple(
# 52 "../../../tos/chips/msp430/adc12/AdcStreamP.nc"
uint8_t arg_0x7fbff4606020, 
# 138 "../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
const msp430adc12_channel_config_t * config, uint16_t * buffer, uint16_t numSamples, uint16_t jiffies);
# 89 "../../../tos/interfaces/ReadStream.nc"
static void AdcStreamP__ReadStream__bufferDone(
# 49 "../../../tos/chips/msp430/adc12/AdcStreamP.nc"
uint8_t arg_0x7fbff460ccc0, 
# 89 "../../../tos/interfaces/ReadStream.nc"
error_t result, 
#line 86
AdcStreamP__ReadStream__val_t * buf, 



uint16_t count);
#line 102
static void AdcStreamP__ReadStream__readDone(
# 49 "../../../tos/chips/msp430/adc12/AdcStreamP.nc"
uint8_t arg_0x7fbff460ccc0, 
# 102 "../../../tos/interfaces/ReadStream.nc"
error_t result, uint32_t usActualPeriod);
# 119 "../../../tos/chips/msp430/adc12/AdcStreamP.nc"
enum AdcStreamP____nesc_unnamed4347 {
#line 119
  AdcStreamP__readStreamDone = 15U
};
#line 119
typedef int AdcStreamP____nesc_sillytask_readStreamDone[AdcStreamP__readStreamDone];
#line 135
enum AdcStreamP____nesc_unnamed4348 {
#line 135
  AdcStreamP__readStreamFail = 16U
};
#line 135
typedef int AdcStreamP____nesc_sillytask_readStreamFail[AdcStreamP__readStreamFail];
#line 156
enum AdcStreamP____nesc_unnamed4349 {
#line 156
  AdcStreamP__bufferDone = 17U
};
#line 156
typedef int AdcStreamP____nesc_sillytask_bufferDone[AdcStreamP__bufferDone];
#line 58
enum AdcStreamP____nesc_unnamed4350 {
  AdcStreamP__NSTREAM = 1U
};




uint8_t AdcStreamP__client = AdcStreamP__NSTREAM;


struct AdcStreamP__list_entry_t {
  uint16_t count;
  struct AdcStreamP__list_entry_t * next;
};
struct AdcStreamP__list_entry_t *AdcStreamP__bufferQueue[AdcStreamP__NSTREAM];
struct AdcStreamP__list_entry_t * *AdcStreamP__bufferQueueEnd[AdcStreamP__NSTREAM];
uint16_t * AdcStreamP__lastBuffer;
#line 74
uint16_t AdcStreamP__lastCount;

uint16_t AdcStreamP__count;
uint16_t * AdcStreamP__buffer;
uint16_t * AdcStreamP__pos;
uint32_t AdcStreamP__now;
#line 79
uint32_t AdcStreamP__period;
bool AdcStreamP__periodModified;


static inline error_t AdcStreamP__Init__init(void );








static inline void AdcStreamP__sampleSingle(void );



static inline error_t AdcStreamP__postBuffer(uint8_t c, uint16_t *buf, uint16_t n);
#line 119
static inline void AdcStreamP__readStreamDone__runTask(void );
#line 135
static inline void AdcStreamP__readStreamFail__runTask(void );
#line 156
static inline void AdcStreamP__bufferDone__runTask(void );
#line 168
static inline void AdcStreamP__nextAlarm(void );




static inline void AdcStreamP__Alarm__fired(void );



static error_t AdcStreamP__nextBuffer(bool startNextAlarm);
#line 204
static void AdcStreamP__nextMultiple(uint8_t c);
#line 219
static error_t AdcStreamP__ReadStream__read(uint8_t c, uint32_t usPeriod);
#line 240
static error_t AdcStreamP__SingleChannel__singleDataReady(uint8_t streamClient, uint16_t data);
#line 279
static uint16_t *AdcStreamP__SingleChannel__multipleDataReady(uint8_t streamClient, 
uint16_t *buf, uint16_t length);
#line 302
const msp430adc12_channel_config_t AdcStreamP__defaultConfig = { 
.inch = SUPPLY_VOLTAGE_HALF_CHANNEL, 
.sref = REFERENCE_VREFplus_AVss, 
.ref2_5v = REFVOLT_LEVEL_1_5, 
.adc12ssel = SHT_SOURCE_ACLK, 
.adc12div = SHT_CLOCK_DIV_1, 
.sht = SAMPLE_HOLD_4_CYCLES, 
.sampcon_ssel = SAMPCON_SOURCE_SMCLK, 
.sampcon_id = SAMPCON_CLOCK_DIV_1 };

static inline const msp430adc12_channel_config_t *AdcStreamP__AdcConfigure__default__getConfiguration(uint8_t c);



static inline error_t AdcStreamP__SingleChannel__default__configureMultiple(uint8_t c, 
const msp430adc12_channel_config_t *config, uint16_t b[], 
uint16_t numSamples, uint16_t jiffies);



static inline error_t AdcStreamP__SingleChannel__default__getData(uint8_t c);



static inline error_t AdcStreamP__SingleChannel__default__configureSingle(uint8_t c, 
const msp430adc12_channel_config_t *config);
# 41 "../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEvent(uint16_t time);

static void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEventFromNow(uint16_t delta);
# 45 "../../../tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__get(void );
# 78 "../../../tos/lib/timer/Alarm.nc"
static void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__fired(void );
# 57 "../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__enableEvents(void );
static void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__disableEvents(void );
#line 44
static void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__clearPendingInterrupt(void );
# 70 "../../../tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__fired(void );










static inline void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__startAt(uint16_t t0, uint16_t dt);
#line 114
static inline void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__overflow(void );
# 78 "../../../tos/lib/timer/Alarm.nc"
static void /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__Alarm__fired(void );
#line 103
static void /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__AlarmFrom__startAt(/*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__AlarmFrom__size_type t0, /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__AlarmFrom__size_type dt);
# 64 "../../../tos/lib/timer/Counter.nc"
static /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__Counter__size_type /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__Counter__get(void );
# 77 "../../../tos/lib/timer/TransformAlarmC.nc"
/*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__to_size_type /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__m_t0;
/*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__to_size_type /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__m_dt;

enum /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1____nesc_unnamed4351 {

  TransformAlarmC__1__MAX_DELAY_LOG2 = 8 * sizeof(/*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__from_size_type ) - 1 - 5, 
  TransformAlarmC__1__MAX_DELAY = (/*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__to_size_type )1 << /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__MAX_DELAY_LOG2
};

static inline /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__to_size_type /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__Alarm__getNow(void );
#line 107
static void /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__set_alarm(void );
#line 147
static inline void /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__Alarm__startAt(/*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__to_size_type t0, /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__to_size_type dt);
#line 162
static inline void /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__AlarmFrom__fired(void );
#line 177
static inline void /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__Counter__overflow(void );
# 78 "../../../tos/interfaces/ReadStream.nc"
static error_t /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__Service__read(
# 26 "../../../tos/system/ArbitratedReadStreamC.nc"
uint8_t arg_0x7fbff45916f0, 
# 78 "../../../tos/interfaces/ReadStream.nc"
uint32_t usPeriod);










static void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__ReadStream__bufferDone(
# 24 "../../../tos/system/ArbitratedReadStreamC.nc"
uint8_t arg_0x7fbff45953a0, 
# 89 "../../../tos/interfaces/ReadStream.nc"
error_t result, 
#line 86
/*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__ReadStream__val_t * buf, 



uint16_t count);
#line 102
static void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__ReadStream__readDone(
# 24 "../../../tos/system/ArbitratedReadStreamC.nc"
uint8_t arg_0x7fbff45953a0, 
# 102 "../../../tos/interfaces/ReadStream.nc"
error_t result, uint32_t usActualPeriod);
# 120 "../../../tos/interfaces/Resource.nc"
static error_t /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__Resource__release(
# 27 "../../../tos/system/ArbitratedReadStreamC.nc"
uint8_t arg_0x7fbff458d7f0);



uint32_t /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__period[1U];
#line 48
static inline void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__Service__bufferDone(uint8_t client, error_t result, /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__val_t *buf, uint16_t count);




static inline void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__Service__readDone(uint8_t client, error_t result, uint32_t actualPeriod);





static inline void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__Resource__granted(uint8_t client);







static inline error_t /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__Resource__default__release(uint8_t client);
#line 79
static inline void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__ReadStream__default__bufferDone(uint8_t client, error_t result, /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__val_t *buf, uint16_t count);



static inline void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__ReadStream__default__readDone(uint8_t client, error_t result, uint32_t actualPeriod);
# 58 "../../../tos/interfaces/AdcConfigure.nc"
static /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__1__ConfUp__adc_config_t /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__1__ConfUp__getConfiguration(void );
# 47 "../../../tos/chips/msp430/adc12/Msp430Adc12ConfAlertC.nc"
static inline const msp430adc12_channel_config_t */*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__1__ConfSub__getConfiguration(void );
# 39 "../../../tos/chips/msp430/sensors/Msp430InternalVoltageP.nc"
const msp430adc12_channel_config_t Msp430InternalVoltageP__config = { 
.inch = SUPPLY_VOLTAGE_HALF_CHANNEL, 
.sref = REFERENCE_VREFplus_AVss, 
.ref2_5v = REFVOLT_LEVEL_1_5, 
.adc12ssel = SHT_SOURCE_ACLK, 
.adc12div = SHT_CLOCK_DIV_1, 
.sht = SAMPLE_HOLD_4_CYCLES, 
.sampcon_ssel = SAMPCON_SOURCE_SMCLK, 
.sampcon_id = SAMPCON_CLOCK_DIV_1 };


static inline const msp430adc12_channel_config_t *Msp430InternalVoltageP__AdcConfigure__getConfiguration(void );
# 58 "../../../tos/interfaces/AdcConfigure.nc"
static /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__2__ConfUp__adc_config_t /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__2__ConfUp__getConfiguration(void );
# 47 "../../../tos/chips/msp430/adc12/Msp430Adc12ConfAlertC.nc"
static inline const msp430adc12_channel_config_t */*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__2__ConfSub__getConfiguration(void );
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

# 546 "../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline void Msp430Adc12ImplP__TimerA__overflow(void )
#line 546
{
}

# 48 "../../../tos/chips/msp430/timer/Msp430Timer.nc"
inline static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__overflow(void ){
#line 48
  Msp430Adc12ImplP__TimerA__overflow();
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
inline static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__fired(uint8_t arg_0x7fbff553c8b0){
#line 39
  switch (arg_0x7fbff553c8b0) {
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
      /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__default__fired(arg_0x7fbff553c8b0);
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

# 547 "../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline void Msp430Adc12ImplP__CompareA0__fired(void )
#line 547
{
}

# 45 "../../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__fired(void ){
#line 45
  Msp430Adc12ImplP__CompareA0__fired();
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

# 548 "../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline void Msp430Adc12ImplP__CompareA1__fired(void )
#line 548
{
}

# 45 "../../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__fired(void ){
#line 45
  Msp430Adc12ImplP__CompareA1__fired();
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

#line 177
static inline void /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__Counter__overflow(void )
{
}

# 82 "../../../tos/lib/timer/Counter.nc"
inline static void /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__overflow(void ){
#line 82
  /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__Counter__overflow();
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
static inline void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__overflow(void )
{
}

#line 114
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__overflow(void )
{
}

# 48 "../../../tos/chips/msp430/timer/Msp430Timer.nc"
inline static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__overflow(void ){
#line 48
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__overflow();
#line 48
  /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__overflow();
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
# 322 "../../../tos/chips/msp430/adc12/AdcStreamP.nc"
static inline error_t AdcStreamP__SingleChannel__default__getData(uint8_t c)
{
  return FAIL;
}

# 189 "../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
inline static error_t AdcStreamP__SingleChannel__getData(uint8_t arg_0x7fbff4606020){
#line 189
  unsigned char __nesc_result;
#line 189

#line 189
  switch (arg_0x7fbff4606020) {
#line 189
    case /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC*/AdcReadStreamClientC__0__RSCLIENT:
#line 189
      __nesc_result = Msp430Adc12ImplP__SingleChannel__getData(/*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__1__ID);
#line 189
      break;
#line 189
    default:
#line 189
      __nesc_result = AdcStreamP__SingleChannel__default__getData(arg_0x7fbff4606020);
#line 189
      break;
#line 189
    }
#line 189

#line 189
  return __nesc_result;
#line 189
}
#line 189
# 92 "../../../tos/chips/msp430/adc12/AdcStreamP.nc"
static inline void AdcStreamP__sampleSingle(void )
#line 92
{
  AdcStreamP__SingleChannel__getData(AdcStreamP__client);
}

#line 173
static inline void AdcStreamP__Alarm__fired(void )
#line 173
{
  AdcStreamP__sampleSingle();
}

# 78 "../../../tos/lib/timer/Alarm.nc"
inline static void /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__Alarm__fired(void ){
#line 78
  AdcStreamP__Alarm__fired();
#line 78
}
#line 78
# 162 "../../../tos/lib/timer/TransformAlarmC.nc"
static inline void /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__AlarmFrom__fired(void )
{
  /* atomic removed: atomic calls only */
  {
    if (/*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__m_dt == 0) 
      {
        /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__Alarm__fired();
      }
    else 
      {
        /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__set_alarm();
      }
  }
}

# 78 "../../../tos/lib/timer/Alarm.nc"
inline static void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__fired(void ){
#line 78
  /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__AlarmFrom__fired();
#line 78
}
#line 78
# 135 "../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__disableEvents(void )
{
  * (volatile uint16_t * )388U &= ~0x0010;
}

# 58 "../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__disableEvents(void ){
#line 58
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__disableEvents();
#line 58
}
#line 58
# 70 "../../../tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__fired(void )
{
  /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__disableEvents();
  /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__fired();
}

# 45 "../../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__fired(void ){
#line 45
  /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__fired();
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

# 61 "../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIOP__47__IO__makeInput(void )
#line 61
{
  /* atomic removed: atomic calls only */
#line 61
  * (volatile uint8_t * )54U &= ~(0x01 << 7);
}

# 78 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port67__makeInput(void ){
#line 78
  /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIOP__47__IO__makeInput();
#line 78
}
#line 78
# 65 "../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIOP__47__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )55U |= 0x01 << 7;
}

# 92 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port67__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIOP__47__IO__selectModuleFunc();
#line 92
}
#line 92
# 61 "../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIOP__46__IO__makeInput(void )
#line 61
{
  /* atomic removed: atomic calls only */
#line 61
  * (volatile uint8_t * )54U &= ~(0x01 << 6);
}

# 78 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port66__makeInput(void ){
#line 78
  /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIOP__46__IO__makeInput();
#line 78
}
#line 78
# 65 "../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIOP__46__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )55U |= 0x01 << 6;
}

# 92 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port66__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIOP__46__IO__selectModuleFunc();
#line 92
}
#line 92
# 61 "../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIOP__45__IO__makeInput(void )
#line 61
{
  /* atomic removed: atomic calls only */
#line 61
  * (volatile uint8_t * )54U &= ~(0x01 << 5);
}

# 78 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port65__makeInput(void ){
#line 78
  /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIOP__45__IO__makeInput();
#line 78
}
#line 78
# 65 "../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIOP__45__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )55U |= 0x01 << 5;
}

# 92 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port65__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIOP__45__IO__selectModuleFunc();
#line 92
}
#line 92
# 61 "../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIOP__44__IO__makeInput(void )
#line 61
{
  /* atomic removed: atomic calls only */
#line 61
  * (volatile uint8_t * )54U &= ~(0x01 << 4);
}

# 78 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port64__makeInput(void ){
#line 78
  /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIOP__44__IO__makeInput();
#line 78
}
#line 78
# 65 "../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIOP__44__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )55U |= 0x01 << 4;
}

# 92 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port64__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIOP__44__IO__selectModuleFunc();
#line 92
}
#line 92
# 61 "../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIOP__43__IO__makeInput(void )
#line 61
{
  /* atomic removed: atomic calls only */
#line 61
  * (volatile uint8_t * )54U &= ~(0x01 << 3);
}

# 78 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port63__makeInput(void ){
#line 78
  /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIOP__43__IO__makeInput();
#line 78
}
#line 78
# 65 "../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIOP__43__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )55U |= 0x01 << 3;
}

# 92 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port63__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIOP__43__IO__selectModuleFunc();
#line 92
}
#line 92
# 61 "../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIOP__42__IO__makeInput(void )
#line 61
{
  /* atomic removed: atomic calls only */
#line 61
  * (volatile uint8_t * )54U &= ~(0x01 << 2);
}

# 78 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port62__makeInput(void ){
#line 78
  /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIOP__42__IO__makeInput();
#line 78
}
#line 78
# 65 "../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIOP__42__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )55U |= 0x01 << 2;
}

# 92 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port62__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIOP__42__IO__selectModuleFunc();
#line 92
}
#line 92
# 61 "../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIOP__41__IO__makeInput(void )
#line 61
{
  /* atomic removed: atomic calls only */
#line 61
  * (volatile uint8_t * )54U &= ~(0x01 << 1);
}

# 78 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port61__makeInput(void ){
#line 78
  /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIOP__41__IO__makeInput();
#line 78
}
#line 78
# 65 "../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIOP__41__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )55U |= 0x01 << 1;
}

# 92 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port61__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIOP__41__IO__selectModuleFunc();
#line 92
}
#line 92
# 61 "../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIOP__40__IO__makeInput(void )
#line 61
{
  /* atomic removed: atomic calls only */
#line 61
  * (volatile uint8_t * )54U &= ~(0x01 << 0);
}

# 78 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port60__makeInput(void ){
#line 78
  /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIOP__40__IO__makeInput();
#line 78
}
#line 78
# 65 "../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIOP__40__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )55U |= 0x01 << 0;
}

# 92 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port60__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIOP__40__IO__selectModuleFunc();
#line 92
}
#line 92
# 148 "../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline void Msp430Adc12ImplP__configureAdcPin(uint8_t inch)
{

  switch (inch) 
    {
      case 0: Msp430Adc12ImplP__Port60__selectModuleFunc();
#line 153
      Msp430Adc12ImplP__Port60__makeInput();
#line 153
      break;
      case 1: Msp430Adc12ImplP__Port61__selectModuleFunc();
#line 154
      Msp430Adc12ImplP__Port61__makeInput();
#line 154
      break;
      case 2: Msp430Adc12ImplP__Port62__selectModuleFunc();
#line 155
      Msp430Adc12ImplP__Port62__makeInput();
#line 155
      break;
      case 3: Msp430Adc12ImplP__Port63__selectModuleFunc();
#line 156
      Msp430Adc12ImplP__Port63__makeInput();
#line 156
      break;
      case 4: Msp430Adc12ImplP__Port64__selectModuleFunc();
#line 157
      Msp430Adc12ImplP__Port64__makeInput();
#line 157
      break;
      case 5: Msp430Adc12ImplP__Port65__selectModuleFunc();
#line 158
      Msp430Adc12ImplP__Port65__makeInput();
#line 158
      break;
      case 6: Msp430Adc12ImplP__Port66__selectModuleFunc();
#line 159
      Msp430Adc12ImplP__Port66__makeInput();
#line 159
      break;
      case 7: Msp430Adc12ImplP__Port67__selectModuleFunc();
#line 160
      Msp430Adc12ImplP__Port67__makeInput();
#line 160
      break;
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
inline static void Msp430Adc12ImplP__HplAdc12__startConversion(void ){
#line 128
  HplAdc12P__HplAdc12__startConversion();
#line 128
}
#line 128
# 50 "../../../tos/chips/msp430/timer/Msp430Timer.nc"
inline static void Msp430Adc12ImplP__TimerA__setMode(int mode){
#line 50
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__setMode(mode);
#line 50
}
#line 50
# 57 "../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  uint16_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__CC2int(/*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t x)
#line 57
{
#line 57
  union /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1____nesc_unnamed4357 {
#line 57
    /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t f;
#line 57
    uint16_t t;
  } 
#line 57
  c = { .f = x };

#line 57
  return c.t;
}

#line 100
static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__setControl(/*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t x)
{
  * (volatile uint16_t * )356U = /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__CC2int(x);
}

# 46 "../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void Msp430Adc12ImplP__ControlA1__setControl(msp430_compare_control_t control){
#line 46
  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__setControl(control);
#line 46
}
#line 46
# 127 "../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline void Msp430Adc12ImplP__startTimerA(void )
{

  msp430_compare_control_t ccSetSHI = { 
  .ccifg = 0, .cov = 0, .out = 1, .cci = 0, .ccie = 0, 
  .outmod = 0, .cap = 0, .clld = 0, .scs = 0, .ccis = 0, .cm = 0 };
  msp430_compare_control_t ccResetSHI = { 
  .ccifg = 0, .cov = 0, .out = 0, .cci = 0, .ccie = 0, 
  .outmod = 0, .cap = 0, .clld = 0, .scs = 0, .ccis = 0, .cm = 0 };
  msp430_compare_control_t ccRSOutmod = { 
  .ccifg = 0, .cov = 0, .out = 0, .cci = 0, .ccie = 0, 
  .outmod = 7, .cap = 0, .clld = 0, .scs = 0, .ccis = 0, .cm = 0 };

  Msp430Adc12ImplP__ControlA1__setControl(ccResetSHI);
  Msp430Adc12ImplP__ControlA1__setControl(ccSetSHI);

  Msp430Adc12ImplP__ControlA1__setControl(ccRSOutmod);
  Msp430Adc12ImplP__TimerA__setMode(MSP430TIMER_UP_MODE);
}

# 130 "../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__enableEvents(void )
{
  * (volatile uint16_t * )388U |= 0x0010;
}

# 57 "../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__enableEvents(void ){
#line 57
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__enableEvents();
#line 57
}
#line 57
# 95 "../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__clearPendingInterrupt(void )
{
  * (volatile uint16_t * )388U &= ~0x0001;
}

# 44 "../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__clearPendingInterrupt(void ){
#line 44
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__clearPendingInterrupt();
#line 44
}
#line 44
# 155 "../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__setEvent(uint16_t x)
{
  * (volatile uint16_t * )404U = x;
}

# 41 "../../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEvent(uint16_t time){
#line 41
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__setEvent(time);
#line 41
}
#line 41
# 45 "../../../tos/chips/msp430/timer/Msp430Timer.nc"
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
# 165 "../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__setEventFromNow(uint16_t x)
{
  * (volatile uint16_t * )404U = /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Timer__get() + x;
}

# 43 "../../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEventFromNow(uint16_t delta){
#line 43
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__setEventFromNow(delta);
#line 43
}
#line 43
# 45 "../../../tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__get(void ){
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
static inline void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__startAt(uint16_t t0, uint16_t dt)
{
  /* atomic removed: atomic calls only */
  {
    uint16_t now = /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__get();
    uint16_t elapsed = now - t0;

#line 87
    if (elapsed >= dt) 
      {
        /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEventFromNow(2);
      }
    else 
      {
        uint16_t remaining = dt - elapsed;

#line 94
        if (remaining <= 2) {
          /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEventFromNow(2);
          }
        else {
#line 97
          /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEvent(now + remaining);
          }
      }
#line 99
    /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__clearPendingInterrupt();
    /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__enableEvents();
  }
}

# 103 "../../../tos/lib/timer/Alarm.nc"
inline static void /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__AlarmFrom__startAt(/*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__AlarmFrom__size_type t0, /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__AlarmFrom__size_type dt){
#line 103
  /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 192 "../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
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
  union /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5____nesc_unnamed4358 {
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
  union /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6____nesc_unnamed4359 {
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
  union /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7____nesc_unnamed4360 {
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
  union /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8____nesc_unnamed4361 {
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
  union /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9____nesc_unnamed4362 {
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
# 79 "../../../tos/system/ArbitratedReadStreamC.nc"
static inline void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__ReadStream__default__bufferDone(uint8_t client, error_t result, /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__val_t *buf, uint16_t count)
{
}

# 89 "../../../tos/interfaces/ReadStream.nc"
inline static void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__ReadStream__bufferDone(uint8_t arg_0x7fbff45953a0, error_t result, /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__ReadStream__val_t * buf, uint16_t count){
#line 89
    /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__ReadStream__default__bufferDone(arg_0x7fbff45953a0, result, buf, count);
#line 89
}
#line 89
# 48 "../../../tos/system/ArbitratedReadStreamC.nc"
static inline void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__Service__bufferDone(uint8_t client, error_t result, /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__val_t *buf, uint16_t count)
{
  /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__ReadStream__bufferDone(client, result, buf, count);
}

# 89 "../../../tos/interfaces/ReadStream.nc"
inline static void AdcStreamP__ReadStream__bufferDone(uint8_t arg_0x7fbff460ccc0, error_t result, AdcStreamP__ReadStream__val_t * buf, uint16_t count){
#line 89
  /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__Service__bufferDone(arg_0x7fbff460ccc0, result, buf, count);
#line 89
}
#line 89
# 156 "../../../tos/chips/msp430/adc12/AdcStreamP.nc"
static inline void AdcStreamP__bufferDone__runTask(void )
#line 156
{
  uint16_t *b;
#line 157
  uint16_t c;

#line 158
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      b = AdcStreamP__lastBuffer;
      c = AdcStreamP__lastCount;
      AdcStreamP__lastBuffer = (void *)0;
    }
#line 163
    __nesc_atomic_end(__nesc_atomic); }

  AdcStreamP__ReadStream__bufferDone(AdcStreamP__client, SUCCESS, b, c);
}

# 83 "../../../tos/system/ArbitratedReadStreamC.nc"
static inline void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__ReadStream__default__readDone(uint8_t client, error_t result, uint32_t actualPeriod)
{
}

# 102 "../../../tos/interfaces/ReadStream.nc"
inline static void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__ReadStream__readDone(uint8_t arg_0x7fbff45953a0, error_t result, uint32_t usActualPeriod){
#line 102
    /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__ReadStream__default__readDone(arg_0x7fbff45953a0, result, usActualPeriod);
#line 102
}
#line 102
# 67 "../../../tos/system/ArbitratedReadStreamC.nc"
static inline error_t /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__Resource__default__release(uint8_t client)
#line 67
{
#line 67
  return FAIL;
}

# 120 "../../../tos/interfaces/Resource.nc"
inline static error_t /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__Resource__release(uint8_t arg_0x7fbff458d7f0){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  switch (arg_0x7fbff458d7f0) {
#line 120
    case /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC*/AdcReadStreamClientC__0__RSCLIENT:
#line 120
      __nesc_result = Msp430RefVoltArbiterImplP__ClientResource__release(/*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__1__ID);
#line 120
      break;
#line 120
    default:
#line 120
      __nesc_result = /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__Resource__default__release(arg_0x7fbff458d7f0);
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
# 53 "../../../tos/system/ArbitratedReadStreamC.nc"
static inline void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__Service__readDone(uint8_t client, error_t result, uint32_t actualPeriod)
{
  /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__Resource__release(client);
  /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__ReadStream__readDone(client, result, actualPeriod);
}

# 102 "../../../tos/interfaces/ReadStream.nc"
inline static void AdcStreamP__ReadStream__readDone(uint8_t arg_0x7fbff460ccc0, error_t result, uint32_t usActualPeriod){
#line 102
  /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__Service__readDone(arg_0x7fbff460ccc0, result, usActualPeriod);
#line 102
}
#line 102
# 135 "../../../tos/chips/msp430/adc12/AdcStreamP.nc"
static inline void AdcStreamP__readStreamFail__runTask(void )
#line 135
{

  struct AdcStreamP__list_entry_t *entry;
  uint8_t c = AdcStreamP__client;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 140
    entry = AdcStreamP__bufferQueue[c];
#line 140
    __nesc_atomic_end(__nesc_atomic); }
  for (; entry; entry = entry->next) {
      uint16_t tmp_count __attribute((unused))  = entry->count;

#line 143
      AdcStreamP__ReadStream__bufferDone(c, FAIL, (uint16_t * )entry, entry->count);
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      AdcStreamP__bufferQueue[c] = (void *)0;
      AdcStreamP__bufferQueueEnd[c] = &AdcStreamP__bufferQueue[c];
    }
#line 150
    __nesc_atomic_end(__nesc_atomic); }

  AdcStreamP__client = AdcStreamP__NSTREAM;
  AdcStreamP__ReadStream__readDone(c, FAIL, 0);
}

# 180 "../../../tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static inline error_t Msp430RefVoltArbiterImplP__AdcResource__default__release(uint8_t client)
#line 180
{
#line 180
  return FAIL;
}

# 120 "../../../tos/interfaces/Resource.nc"
inline static error_t Msp430RefVoltArbiterImplP__AdcResource__release(uint8_t arg_0x7fbff4823e50){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  switch (arg_0x7fbff4823e50) {
#line 120
    case /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__0__ID:
#line 120
      __nesc_result = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(/*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__0__ID);
#line 120
      break;
#line 120
    case /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__1__ID:
#line 120
      __nesc_result = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(/*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__1__ID);
#line 120
      break;
#line 120
    case /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__2__ID:
#line 120
      __nesc_result = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(/*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__2__ID);
#line 120
      break;
#line 120
    default:
#line 120
      __nesc_result = Msp430RefVoltArbiterImplP__AdcResource__default__release(arg_0x7fbff4823e50);
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
# 66 "../../../tos/system/RoundRobinResourceQueueC.nc"
static inline bool /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty(void )
#line 66
{
  unsigned int i;

  /* atomic removed: atomic calls only */
#line 68
  {
    for (i = 0; i < sizeof /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__resQ; i++) 
      if (/*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__resQ[i] > 0) {
          unsigned char __nesc_temp = 
#line 70
          FALSE;

#line 70
          return __nesc_temp;
        }
#line 71
    {
      unsigned char __nesc_temp = 
#line 71
      TRUE;

#line 71
      return __nesc_temp;
    }
  }
}

# 53 "../../../tos/interfaces/ResourceQueue.nc"
inline static bool /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 57 "../../../tos/system/RoundRobinResourceQueueC.nc"
static inline void /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__clearEntry(uint8_t id)
#line 57
{
  /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__resQ[id / 8] &= ~(1 << id % 8);
}

#line 79
static inline resource_client_id_t /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue(void )
#line 79
{
  int i;

  /* atomic removed: atomic calls only */
#line 81
  {
    for (i = /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__last + 1; ; i++) {
        if (i == 3U) {
          i = 0;
          }
#line 85
        if (/*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(i)) {
            /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__clearEntry(i);
            /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__last = i;
            {
              unsigned char __nesc_temp = 
#line 88
              i;

#line 88
              return __nesc_temp;
            }
          }
#line 90
        if (i == /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__last) {
          break;
          }
      }
#line 93
    {
      unsigned char __nesc_temp = 
#line 93
      /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__NO_ENTRY;

#line 93
      return __nesc_temp;
    }
  }
}

# 70 "../../../tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 67 "../../../tos/interfaces/TaskBasic.nc"
inline static error_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 166 "../../../tos/system/SimpleArbiterP.nc"
static inline void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id)
#line 166
{
}

# 65 "../../../tos/interfaces/ResourceConfigure.nc"
inline static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(uint8_t arg_0x7fbff48db0d0){
#line 65
    /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(arg_0x7fbff48db0d0);
#line 65
}
#line 65
# 119 "../../../tos/chips/msp430/adc12/AdcStreamP.nc"
static inline void AdcStreamP__readStreamDone__runTask(void )
#line 119
{
  uint8_t c = AdcStreamP__client;
  uint32_t actualPeriod = AdcStreamP__period;

#line 122
  if (AdcStreamP__periodModified) {
    actualPeriod = AdcStreamP__period - AdcStreamP__period % 1000;
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      AdcStreamP__bufferQueue[c] = (void *)0;
      AdcStreamP__bufferQueueEnd[c] = &AdcStreamP__bufferQueue[c];
    }
#line 129
    __nesc_atomic_end(__nesc_atomic); }

  AdcStreamP__client = AdcStreamP__NSTREAM;
  AdcStreamP__ReadStream__readDone(c, SUCCESS, actualPeriod);
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

# 113 "../../../tos/interfaces/SplitControl.nc"
inline static void Msp430RefVoltGeneratorP__RefVolt_2_5V__startDone(error_t error){
#line 113
  Msp430RefVoltArbiterImplP__RefVolt_2_5V__startDone(error);
#line 113
}
#line 113
# 78 "../../../tos/interfaces/ReadStream.nc"
inline static error_t /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__Service__read(uint8_t arg_0x7fbff45916f0, uint32_t usPeriod){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = AdcStreamP__ReadStream__read(arg_0x7fbff45916f0, usPeriod);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 59 "../../../tos/system/ArbitratedReadStreamC.nc"
static inline void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__Resource__granted(uint8_t client)
#line 59
{
  /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__Service__read(client, /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__period[client]);
}

# 170 "../../../tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static inline void Msp430RefVoltArbiterImplP__ClientResource__default__granted(uint8_t client)
#line 170
{
}

# 102 "../../../tos/interfaces/Resource.nc"
inline static void Msp430RefVoltArbiterImplP__ClientResource__granted(uint8_t arg_0x7fbff4826af0){
#line 102
  switch (arg_0x7fbff4826af0) {
#line 102
    case /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__0__ID:
#line 102
      AdcP__ResourceRead__granted(/*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadClientC*/AdcReadClientC__0__CLIENT);
#line 102
      break;
#line 102
    case /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__1__ID:
#line 102
      /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__Resource__granted(/*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC*/AdcReadStreamClientC__0__RSCLIENT);
#line 102
      break;
#line 102
    case /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__2__ID:
#line 102
      AdcP__SubResourceReadNow__granted(/*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC*/AdcReadNowClientC__0__CLIENT);
#line 102
      break;
#line 102
    default:
#line 102
      Msp430RefVoltArbiterImplP__ClientResource__default__granted(arg_0x7fbff4826af0);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 103 "../../../tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static inline void Msp430RefVoltArbiterImplP__RefVolt_1_5V__startDone(error_t error)
{
  if (Msp430RefVoltArbiterImplP__syncOwner != Msp430RefVoltArbiterImplP__NO_OWNER) {


      Msp430RefVoltArbiterImplP__ClientResource__granted(Msp430RefVoltArbiterImplP__syncOwner);
    }
}

# 113 "../../../tos/interfaces/SplitControl.nc"
inline static void Msp430RefVoltGeneratorP__RefVolt_1_5V__startDone(error_t error){
#line 113
  Msp430RefVoltArbiterImplP__RefVolt_1_5V__startDone(error);
#line 113
}
#line 113
# 188 "../../../tos/chips/msp430/adc12/Msp430RefVoltGeneratorP.nc"
static inline void Msp430RefVoltGeneratorP__SwitchOnTimer__fired(void )
#line 188
{
  switch (Msp430RefVoltGeneratorP__m_state) {
      case Msp430RefVoltGeneratorP__REFERENCE_1_5V_ON_PENDING: 
        Msp430RefVoltGeneratorP__m_state = Msp430RefVoltGeneratorP__REFERENCE_1_5V_STABLE;
      Msp430RefVoltGeneratorP__RefVolt_1_5V__startDone(SUCCESS);
      break;

      case Msp430RefVoltGeneratorP__REFERENCE_2_5V_ON_PENDING: 
        Msp430RefVoltGeneratorP__m_state = Msp430RefVoltGeneratorP__REFERENCE_2_5V_STABLE;
      Msp430RefVoltGeneratorP__RefVolt_2_5V__startDone(SUCCESS);
      break;

      default: 
        return;
    }
}

# 73 "../../../tos/lib/timer/Timer.nc"
inline static void Msp430RefVoltGeneratorP__SwitchOffTimer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(1U, dt);
#line 73
}
#line 73
inline static void Msp430RefVoltGeneratorP__SwitchOffSettleTimer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(2U, dt);
#line 73
}
#line 73
# 161 "../../../tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static inline void Msp430RefVoltArbiterImplP__RefVolt_2_5V__stopDone(error_t error)
{
}

# 138 "../../../tos/interfaces/SplitControl.nc"
inline static void Msp430RefVoltGeneratorP__RefVolt_2_5V__stopDone(error_t error){
#line 138
  Msp430RefVoltArbiterImplP__RefVolt_2_5V__stopDone(error);
#line 138
}
#line 138
# 157 "../../../tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static inline void Msp430RefVoltArbiterImplP__RefVolt_1_5V__stopDone(error_t error)
{
}

# 138 "../../../tos/interfaces/SplitControl.nc"
inline static void Msp430RefVoltGeneratorP__RefVolt_1_5V__stopDone(error_t error){
#line 138
  Msp430RefVoltArbiterImplP__RefVolt_1_5V__stopDone(error);
#line 138
}
#line 138
# 205 "../../../tos/chips/msp430/adc12/Msp430RefVoltGeneratorP.nc"
static inline void Msp430RefVoltGeneratorP__SwitchOffTimer__fired(void )
#line 205
{
  switch (Msp430RefVoltGeneratorP__m_state) {
      case Msp430RefVoltGeneratorP__REFERENCE_1_5V_OFF_PENDING: 
        if (Msp430RefVoltGeneratorP__switchOff() == SUCCESS) {
            Msp430RefVoltGeneratorP__m_state = Msp430RefVoltGeneratorP__GENERATOR_OFF;
            Msp430RefVoltGeneratorP__RefVolt_1_5V__stopDone(SUCCESS);
          }
        else {
            Msp430RefVoltGeneratorP__SwitchOffTimer__startOneShot(20);
          }
      break;

      case Msp430RefVoltGeneratorP__REFERENCE_2_5V_OFF_PENDING: 
        if (Msp430RefVoltGeneratorP__switchOff() == SUCCESS) {
            Msp430RefVoltGeneratorP__m_state = Msp430RefVoltGeneratorP__GENERATOR_OFF;
            Msp430RefVoltGeneratorP__RefVolt_2_5V__stopDone(SUCCESS);

            Msp430RefVoltGeneratorP__SwitchOffSettleTimer__startOneShot(2048);
          }
        else 
#line 223
          {
            Msp430RefVoltGeneratorP__SwitchOffTimer__startOneShot(20);
          }
      break;

      default: 
        break;
    }
}

static inline void Msp430RefVoltGeneratorP__SwitchOffSettleTimer__fired(void )
#line 233
{
}

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
inline static void TestPrintfC__Leds__led2Off(void ){
#line 95
  LedsP__Leds__led2Off();
#line 95
}
#line 95
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
inline static void TestPrintfC__Leds__led0On(void ){
#line 57
  LedsP__Leds__led0On();
#line 57
}
#line 57
# 80 "../../../tos/platforms/shimmer2r/LedsP.nc"
static inline void LedsP__Leds__led0Off(void )
#line 80
{
  LedsP__Led0__set();
  ;
#line 82
  ;
}

# 62 "../../../tos/platforms/shimmer2r/Leds.nc"
inline static void TestPrintfC__Leds__led0Off(void ){
#line 62
  LedsP__Leds__led0Off();
#line 62
}
#line 62
# 57 "../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
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
inline static void TestPrintfC__Leds__led2On(void ){
#line 90
  LedsP__Leds__led2On();
#line 90
}
#line 90
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
inline static void TestPrintfC__Leds__led1Off(void ){
#line 78
  LedsP__Leds__led1Off();
#line 78
}
#line 78
# 171 "../../../tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static inline error_t Msp430RefVoltArbiterImplP__AdcResource__default__request(uint8_t client)
{
  return FAIL;
}

# 88 "../../../tos/interfaces/Resource.nc"
inline static error_t Msp430RefVoltArbiterImplP__AdcResource__request(uint8_t arg_0x7fbff4823e50){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  switch (arg_0x7fbff4823e50) {
#line 88
    case /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__0__ID:
#line 88
      __nesc_result = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(/*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__0__ID);
#line 88
      break;
#line 88
    case /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__1__ID:
#line 88
      __nesc_result = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(/*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__1__ID);
#line 88
      break;
#line 88
    case /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__2__ID:
#line 88
      __nesc_result = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(/*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__2__ID);
#line 88
      break;
#line 88
    default:
#line 88
      __nesc_result = Msp430RefVoltArbiterImplP__AdcResource__default__request(arg_0x7fbff4823e50);
#line 88
      break;
#line 88
    }
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 54 "../../../tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static inline error_t Msp430RefVoltArbiterImplP__ClientResource__request(uint8_t client)
{
  return Msp430RefVoltArbiterImplP__AdcResource__request(client);
}

# 168 "../../../tos/chips/msp430/adc12/AdcP.nc"
static inline error_t AdcP__ResourceRead__default__request(uint8_t client)
#line 168
{
#line 168
  return FAIL;
}

# 88 "../../../tos/interfaces/Resource.nc"
inline static error_t AdcP__ResourceRead__request(uint8_t arg_0x7fbff4a971e0){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  switch (arg_0x7fbff4a971e0) {
#line 88
    case /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadClientC*/AdcReadClientC__0__CLIENT:
#line 88
      __nesc_result = Msp430RefVoltArbiterImplP__ClientResource__request(/*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__0__ID);
#line 88
      break;
#line 88
    default:
#line 88
      __nesc_result = AdcP__ResourceRead__default__request(arg_0x7fbff4a971e0);
#line 88
      break;
#line 88
    }
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 75 "../../../tos/chips/msp430/adc12/AdcP.nc"
static inline error_t AdcP__Read__read(uint8_t client)
{
  return AdcP__ResourceRead__request(client);
}

# 55 "../../../tos/interfaces/Read.nc"
inline static error_t TestPrintfC__Read__read(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = AdcP__Read__read(/*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadClientC*/AdcReadClientC__0__CLIENT);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 67 "TestPrintfC.nc"
static inline void TestPrintfC__Timer__fired(void )
#line 67
{
  TestPrintfC__Read__read();
  TestPrintfC__Leds__led1Off();
  if (TestPrintfC__a % 2 == 0) {
      TestPrintfC__Leds__led2On();
      TestPrintfC__Leds__led0Off();
      printf("Input   IN0 0x%x IN1 0x%x \n", (unsigned )TestPrintfC__v0, (unsigned )TestPrintfC__v1);
      for (TestPrintfC__i = 0; TestPrintfC__i < 32; TestPrintfC__i++) {
          TestPrintfC__sum += TestPrintfC__delta;
          TestPrintfC__v0 += (((TestPrintfC__v1 << 4) + TestPrintfC__k[0]) ^ (TestPrintfC__v1 + TestPrintfC__sum)) ^ ((TestPrintfC__v1 >> 5) + TestPrintfC__k[1]);
          TestPrintfC__v1 += (((TestPrintfC__v0 << 4) + TestPrintfC__k[2]) ^ (TestPrintfC__v0 + TestPrintfC__sum)) ^ ((TestPrintfC__v0 >> 5) + TestPrintfC__k[3]);
        }
      printf("Encrypt IN0 0x%x IN1 0x%x \n\n", (unsigned )TestPrintfC__v0, (unsigned )TestPrintfC__v1);
    }
  else {
      TestPrintfC__Leds__led0On();
      TestPrintfC__Leds__led2Off();
      printf("Input   IN0 0x%x IN1 0x%x \n", (unsigned )TestPrintfC__v0, (unsigned )TestPrintfC__v1);
      for (TestPrintfC__i = 0; TestPrintfC__i < 32; TestPrintfC__i++) {
          TestPrintfC__v1 -= (((TestPrintfC__v0 << 4) + TestPrintfC__k[2]) ^ (TestPrintfC__v0 + TestPrintfC__sum)) ^ ((TestPrintfC__v0 >> 5) + TestPrintfC__k[3]);
#line 86
          ;
          TestPrintfC__v0 -= (((TestPrintfC__v1 << 4) + TestPrintfC__k[0]) ^ (TestPrintfC__v1 + TestPrintfC__sum)) ^ ((TestPrintfC__v1 >> 5) + TestPrintfC__k[1]);
          TestPrintfC__sum -= TestPrintfC__delta;
        }
      printf("Decrypt IN0 0x%x IN1 0x%x \n\n", (unsigned )TestPrintfC__v0, (unsigned )TestPrintfC__v1);
    }
  printf("%d\n", TestPrintfC__dummyVar2);
  TestPrintfC__a += 1;
  printfflush();
}

# 204 "../../../tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num)
{
}

# 83 "../../../tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(uint8_t arg_0x7fbff46bb020){
#line 83
  switch (arg_0x7fbff46bb020) {
#line 83
    case 0U:
#line 83
      Msp430RefVoltGeneratorP__SwitchOnTimer__fired();
#line 83
      break;
#line 83
    case 1U:
#line 83
      Msp430RefVoltGeneratorP__SwitchOffTimer__fired();
#line 83
      break;
#line 83
    case 2U:
#line 83
      Msp430RefVoltGeneratorP__SwitchOffSettleTimer__fired();
#line 83
      break;
#line 83
    case 3U:
#line 83
      TestPrintfC__Timer__fired();
#line 83
      break;
#line 83
    default:
#line 83
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(arg_0x7fbff46bb020);
#line 83
      break;
#line 83
    }
#line 83
}
#line 83
# 160 "../../../tos/system/SimpleArbiterP.nc"
static inline void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(uint8_t id)
#line 160
{
}

# 53 "../../../tos/interfaces/ResourceRequested.nc"
inline static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(uint8_t arg_0x7fbff48dd9d0){
#line 53
    /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(arg_0x7fbff48dd9d0);
#line 53
}
#line 53
# 97 "../../../tos/system/RoundRobinResourceQueueC.nc"
static inline error_t /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(resource_client_id_t id)
#line 97
{
  /* atomic removed: atomic calls only */
#line 98
  {
    if (!/*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(id)) {
        /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__resQ[id / 8] |= 1 << id % 8;
        {
          unsigned char __nesc_temp = 
#line 101
          SUCCESS;

#line 101
          return __nesc_temp;
        }
      }
#line 103
    {
      unsigned char __nesc_temp = 
#line 103
      EBUSY;

#line 103
      return __nesc_temp;
    }
  }
}

# 79 "../../../tos/interfaces/ResourceQueue.nc"
inline static error_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__enqueue(resource_client_id_t id){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(id);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 53 "../../../tos/system/QueueC.nc"
static inline bool /*PrintfC.QueueC*/QueueC__0__Queue__empty(void )
#line 53
{
  return /*PrintfC.QueueC*/QueueC__0__size == 0;
}

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
# 131 "../../../tos/lib/serial/SerialActiveMessageP.nc"
static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void )
#line 131
{
  return 28;
}

# 73 "../../../tos/system/QueueC.nc"
static inline void /*PrintfC.QueueC*/QueueC__0__printQueue(void )
#line 73
{
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
inline static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(am_id_t arg_0x7fbff53d30d0, am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(arg_0x7fbff53d30d0, addr, msg, len);
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
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(uart_id_t arg_0x7fbff522e4d0, message_t *msg, uint8_t upperLen){
#line 23
  unsigned char __nesc_result;
#line 23

#line 23
  switch (arg_0x7fbff522e4d0) {
#line 23
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 23
      __nesc_result = SerialPacketInfoActiveMessageP__Info__dataLinkLength(msg, upperLen);
#line 23
      break;
#line 23
    default:
#line 23
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(arg_0x7fbff522e4d0, msg, upperLen);
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
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(uart_id_t arg_0x7fbff522e4d0){
#line 15
  unsigned char __nesc_result;
#line 15

#line 15
  switch (arg_0x7fbff522e4d0) {
#line 15
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 15
      __nesc_result = SerialPacketInfoActiveMessageP__Info__offset();
#line 15
      break;
#line 15
    default:
#line 15
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(arg_0x7fbff522e4d0);
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
# 118 "../../../tos/chips/msp430/adc12/HplAdc12P.nc"
static inline bool HplAdc12P__HplAdc12__isBusy(void )
#line 118
{
#line 118
  return HplAdc12P__ADC12CTL1 & 0x0001;
}

# 118 "../../../tos/chips/msp430/adc12/HplAdc12.nc"
inline static bool Msp430RefVoltGeneratorP__HplAdc12__isBusy(void ){
#line 118
  unsigned char __nesc_result;
#line 118

#line 118
  __nesc_result = HplAdc12P__HplAdc12__isBusy();
#line 118

#line 118
  return __nesc_result;
#line 118
}
#line 118
# 57 "../../../tos/chips/msp430/adc12/HplAdc12P.nc"
static inline  adc12ctl0_t HplAdc12P__int2adc12ctl0(uint16_t x)
#line 57
{
#line 57
  union __nesc_unnamed4363 {
#line 57
    uint16_t f;
#line 57
    adc12ctl0_t t;
  } 
#line 57
  c = { .f = x };

#line 57
  return c.t;
}

#line 72
static inline adc12ctl0_t HplAdc12P__HplAdc12__getCtl0(void )
#line 72
{
  return HplAdc12P__int2adc12ctl0(HplAdc12P__ADC12CTL0);
}

# 63 "../../../tos/chips/msp430/adc12/HplAdc12.nc"
inline static adc12ctl0_t Msp430RefVoltGeneratorP__HplAdc12__getCtl0(void ){
#line 63
  struct __nesc_unnamed4288 __nesc_result;
#line 63

#line 63
  __nesc_result = HplAdc12P__HplAdc12__getCtl0();
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 59 "../../../tos/chips/msp430/adc12/HplAdc12P.nc"
static inline  uint16_t HplAdc12P__adc12ctl0cast2int(adc12ctl0_t x)
#line 59
{
#line 59
  union __nesc_unnamed4364 {
#line 59
    adc12ctl0_t f;
#line 59
    uint16_t t;
  } 
#line 59
  c = { .f = x };

#line 59
  return c.t;
}



static inline void HplAdc12P__HplAdc12__setCtl0(adc12ctl0_t control0)
#line 64
{
  HplAdc12P__ADC12CTL0 = HplAdc12P__adc12ctl0cast2int(control0);
}

# 51 "../../../tos/chips/msp430/adc12/HplAdc12.nc"
inline static void Msp430RefVoltGeneratorP__HplAdc12__setCtl0(adc12ctl0_t control0){
#line 51
  HplAdc12P__HplAdc12__setCtl0(control0);
#line 51
}
#line 51
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
# 50 "../../../tos/chips/msp430/sensors/Msp430InternalVoltageP.nc"
static inline const msp430adc12_channel_config_t *Msp430InternalVoltageP__AdcConfigure__getConfiguration(void )
{
  return &Msp430InternalVoltageP__config;
}

# 186 "../../../tos/chips/msp430/adc12/AdcP.nc"
static inline const msp430adc12_channel_config_t *
AdcP__Config__default__getConfiguration(uint8_t client)
{
  return &AdcP__defaultConfig;
}

# 58 "../../../tos/interfaces/AdcConfigure.nc"
inline static AdcP__Config__adc_config_t AdcP__Config__getConfiguration(uint8_t arg_0x7fbff4a94b90){
#line 58
  struct __nesc_unnamed4286 const *__nesc_result;
#line 58

#line 58
  switch (arg_0x7fbff4a94b90) {
#line 58
    case /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadClientC*/AdcReadClientC__0__CLIENT:
#line 58
      __nesc_result = Msp430InternalVoltageP__AdcConfigure__getConfiguration();
#line 58
      break;
#line 58
    case /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC*/AdcReadNowClientC__0__CLIENT:
#line 58
      __nesc_result = Msp430InternalVoltageP__AdcConfigure__getConfiguration();
#line 58
      break;
#line 58
    default:
#line 58
      __nesc_result = AdcP__Config__default__getConfiguration(arg_0x7fbff4a94b90);
#line 58
      break;
#line 58
    }
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 191 "../../../tos/chips/msp430/adc12/AdcP.nc"
static inline error_t AdcP__SingleChannel__default__configureSingle(uint8_t client, 
const msp430adc12_channel_config_t *config)
#line 192
{
#line 192
  return FAIL;
}

# 84 "../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
inline static error_t AdcP__SingleChannel__configureSingle(uint8_t arg_0x7fbff4a912a0, const msp430adc12_channel_config_t * config){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  switch (arg_0x7fbff4a912a0) {
#line 84
    case /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadClientC*/AdcReadClientC__0__CLIENT:
#line 84
      __nesc_result = Msp430Adc12ImplP__SingleChannel__configureSingle(/*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__0__ID, config);
#line 84
      break;
#line 84
    case /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC*/AdcReadNowClientC__0__CLIENT:
#line 84
      __nesc_result = Msp430Adc12ImplP__SingleChannel__configureSingle(/*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__2__ID, config);
#line 84
      break;
#line 84
    default:
#line 84
      __nesc_result = AdcP__SingleChannel__default__configureSingle(arg_0x7fbff4a912a0, config);
#line 84
      break;
#line 84
    }
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 177 "../../../tos/chips/msp430/adc12/AdcP.nc"
static inline void AdcP__ResourceReadNow__default__granted(uint8_t nowClient)
#line 177
{
}

# 102 "../../../tos/interfaces/Resource.nc"
inline static void AdcP__ResourceReadNow__granted(uint8_t arg_0x7fbff4a99db0){
#line 102
    AdcP__ResourceReadNow__default__granted(arg_0x7fbff4a99db0);
#line 102
}
#line 102
# 64 "../../../tos/lib/timer/Counter.nc"
inline static /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__Counter__size_type /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__Counter__get(void ){
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
static inline /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__to_size_type /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__Alarm__getNow(void )
{
  return /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__Counter__get();
}

# 109 "../../../tos/lib/timer/Alarm.nc"
inline static AdcStreamP__Alarm__size_type AdcStreamP__Alarm__getNow(void ){
#line 109
  unsigned long __nesc_result;
#line 109

#line 109
  __nesc_result = /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__Alarm__getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 326 "../../../tos/chips/msp430/adc12/AdcStreamP.nc"
static inline error_t AdcStreamP__SingleChannel__default__configureSingle(uint8_t c, 
const msp430adc12_channel_config_t *config)
#line 327
{
#line 327
  return FAIL;
}

# 84 "../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
inline static error_t AdcStreamP__SingleChannel__configureSingle(uint8_t arg_0x7fbff4606020, const msp430adc12_channel_config_t * config){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  switch (arg_0x7fbff4606020) {
#line 84
    case /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC*/AdcReadStreamClientC__0__RSCLIENT:
#line 84
      __nesc_result = Msp430Adc12ImplP__SingleChannel__configureSingle(/*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__1__ID, config);
#line 84
      break;
#line 84
    default:
#line 84
      __nesc_result = AdcStreamP__SingleChannel__default__configureSingle(arg_0x7fbff4606020, config);
#line 84
      break;
#line 84
    }
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 312 "../../../tos/chips/msp430/adc12/AdcStreamP.nc"
static inline const msp430adc12_channel_config_t *AdcStreamP__AdcConfigure__default__getConfiguration(uint8_t c)
{
  return &AdcStreamP__defaultConfig;
}

# 58 "../../../tos/interfaces/AdcConfigure.nc"
inline static AdcStreamP__AdcConfigure__adc_config_t AdcStreamP__AdcConfigure__getConfiguration(uint8_t arg_0x7fbff4605960){
#line 58
  struct __nesc_unnamed4286 const *__nesc_result;
#line 58

#line 58
  switch (arg_0x7fbff4605960) {
#line 58
    case /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC*/AdcReadStreamClientC__0__RSCLIENT:
#line 58
      __nesc_result = Msp430InternalVoltageP__AdcConfigure__getConfiguration();
#line 58
      break;
#line 58
    default:
#line 58
      __nesc_result = AdcStreamP__AdcConfigure__default__getConfiguration(arg_0x7fbff4605960);
#line 58
      break;
#line 58
    }
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 67 "../../../tos/interfaces/TaskBasic.nc"
inline static error_t AdcStreamP__readStreamDone__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(AdcStreamP__readStreamDone);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 147 "../../../tos/lib/timer/TransformAlarmC.nc"
static inline void /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__Alarm__startAt(/*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__to_size_type t0, /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__to_size_type dt)
{
  /* atomic removed: atomic calls only */
  {
    /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__m_t0 = t0;
    /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__m_dt = dt;
    /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__set_alarm();
  }
}

# 103 "../../../tos/lib/timer/Alarm.nc"
inline static void AdcStreamP__Alarm__startAt(AdcStreamP__Alarm__size_type t0, AdcStreamP__Alarm__size_type dt){
#line 103
  /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 168 "../../../tos/chips/msp430/adc12/AdcStreamP.nc"
static inline void AdcStreamP__nextAlarm(void )
#line 168
{
  AdcStreamP__Alarm__startAt(AdcStreamP__now, AdcStreamP__period);
  AdcStreamP__now += AdcStreamP__period;
}

# 155 "../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__setEvent(uint16_t x)
{
  * (volatile uint16_t * )372U = x;
}

# 41 "../../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void Msp430Adc12ImplP__CompareA1__setEvent(uint16_t time){
#line 41
  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__setEvent(time);
#line 41
}
#line 41
# 155 "../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__setEvent(uint16_t x)
{
  * (volatile uint16_t * )370U = x;
}

# 41 "../../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void Msp430Adc12ImplP__CompareA0__setEvent(uint16_t time){
#line 41
  /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__setEvent(time);
#line 41
}
#line 41
# 57 "../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  uint16_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__CC2int(/*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t x)
#line 57
{
#line 57
  union /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0____nesc_unnamed4365 {
#line 57
    /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t f;
#line 57
    uint16_t t;
  } 
#line 57
  c = { .f = x };

#line 57
  return c.t;
}

#line 100
static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Control__setControl(/*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t x)
{
  * (volatile uint16_t * )354U = /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__CC2int(x);
}

# 46 "../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void Msp430Adc12ImplP__ControlA0__setControl(msp430_compare_control_t control){
#line 46
  /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Control__setControl(control);
#line 46
}
#line 46
# 121 "../../../tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__setInputDivider(uint16_t inputDivider)
{
  * (volatile uint16_t * )352U = (* (volatile uint16_t * )352U & ~(0x0040 | 0x0080)) | ((inputDivider << 6) & (0x0040 | 0x0080));
}

# 56 "../../../tos/chips/msp430/timer/Msp430Timer.nc"
inline static void Msp430Adc12ImplP__TimerA__setInputDivider(uint16_t inputDivider){
#line 56
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__setInputDivider(inputDivider);
#line 56
}
#line 56
# 116 "../../../tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__setClockSource(uint16_t clockSource)
{
  * (volatile uint16_t * )352U = (* (volatile uint16_t * )352U & ~(256U | 512U)) | ((clockSource << 8) & (256U | 512U));
}

# 55 "../../../tos/chips/msp430/timer/Msp430Timer.nc"
inline static void Msp430Adc12ImplP__TimerA__setClockSource(uint16_t clockSource){
#line 55
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__setClockSource(clockSource);
#line 55
}
#line 55
# 111 "../../../tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__disableEvents(void )
{
  * (volatile uint16_t * )352U &= ~2U;
}

# 54 "../../../tos/chips/msp430/timer/Msp430Timer.nc"
inline static void Msp430Adc12ImplP__TimerA__disableEvents(void ){
#line 54
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__disableEvents();
#line 54
}
#line 54
# 101 "../../../tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__clear(void )
{
  * (volatile uint16_t * )352U |= 4U;
}

# 52 "../../../tos/chips/msp430/timer/Msp430Timer.nc"
inline static void Msp430Adc12ImplP__TimerA__clear(void ){
#line 52
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__clear();
#line 52
}
#line 52
# 109 "../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline void Msp430Adc12ImplP__prepareTimerA(uint16_t interval, uint16_t csSAMPCON, uint16_t cdSAMPCON)
{

  msp430_compare_control_t ccResetSHI = { 
  .ccifg = 0, .cov = 0, .out = 0, .cci = 0, .ccie = 0, 
  .outmod = 0, .cap = 0, .clld = 0, .scs = 0, .ccis = 0, .cm = 0 };

  Msp430Adc12ImplP__TimerA__setMode(MSP430TIMER_STOP_MODE);
  Msp430Adc12ImplP__TimerA__clear();
  Msp430Adc12ImplP__TimerA__disableEvents();
  Msp430Adc12ImplP__TimerA__setClockSource(csSAMPCON);
  Msp430Adc12ImplP__TimerA__setInputDivider(cdSAMPCON);
  Msp430Adc12ImplP__ControlA0__setControl(ccResetSHI);
  Msp430Adc12ImplP__CompareA0__setEvent(interval - 1);
  Msp430Adc12ImplP__CompareA1__setEvent((interval - 1) / 2);
}

# 92 "../../../tos/chips/msp430/adc12/HplAdc12P.nc"
static inline void HplAdc12P__HplAdc12__setIEFlags(uint16_t mask)
#line 92
{
#line 92
  HplAdc12P__ADC12IE = mask;
}

# 95 "../../../tos/chips/msp430/adc12/HplAdc12.nc"
inline static void Msp430Adc12ImplP__HplAdc12__setIEFlags(uint16_t mask){
#line 95
  HplAdc12P__HplAdc12__setIEFlags(mask);
#line 95
}
#line 95
# 61 "../../../tos/chips/msp430/adc12/HplAdc12P.nc"
static inline  uint8_t HplAdc12P__adc12memctl2int(adc12memctl_t x)
#line 61
{
#line 61
  union __nesc_unnamed4366 {
#line 61
    adc12memctl_t f;
#line 61
    uint8_t t;
  } 
#line 61
  c = { .f = x };

#line 61
  return c.t;
}

#line 80
static inline void HplAdc12P__HplAdc12__setMCtl(uint8_t i, adc12memctl_t memCtl)
#line 80
{
  ((volatile char *)0x0080)[i] = HplAdc12P__adc12memctl2int(memCtl);
}

# 75 "../../../tos/chips/msp430/adc12/HplAdc12.nc"
inline static void Msp430Adc12ImplP__HplAdc12__setMCtl(uint8_t idx, adc12memctl_t memControl){
#line 75
  HplAdc12P__HplAdc12__setMCtl(idx, memControl);
#line 75
}
#line 75
# 60 "../../../tos/chips/msp430/adc12/HplAdc12P.nc"
static inline  uint16_t HplAdc12P__adc12ctl1cast2int(adc12ctl1_t x)
#line 60
{
#line 60
  union __nesc_unnamed4367 {
#line 60
    adc12ctl1_t f;
#line 60
    uint16_t t;
  } 
#line 60
  c = { .f = x };

#line 60
  return c.t;
}






static inline void HplAdc12P__HplAdc12__setCtl1(adc12ctl1_t control1)
#line 68
{
  HplAdc12P__ADC12CTL1 = HplAdc12P__adc12ctl1cast2int(control1);
}

# 57 "../../../tos/chips/msp430/adc12/HplAdc12.nc"
inline static void Msp430Adc12ImplP__HplAdc12__setCtl1(adc12ctl1_t control1){
#line 57
  HplAdc12P__HplAdc12__setCtl1(control1);
#line 57
}
#line 57
#line 51
inline static void Msp430Adc12ImplP__HplAdc12__setCtl0(adc12ctl0_t control0){
#line 51
  HplAdc12P__HplAdc12__setCtl0(control0);
#line 51
}
#line 51
#line 63
inline static adc12ctl0_t Msp430Adc12ImplP__HplAdc12__getCtl0(void ){
#line 63
  struct __nesc_unnamed4288 __nesc_result;
#line 63

#line 63
  __nesc_result = HplAdc12P__HplAdc12__getCtl0();
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 98 "../../../tos/interfaces/ArbiterInfo.nc"
inline static uint8_t Msp430Adc12ImplP__ADCArbiterInfo__userId(void ){
#line 98
  unsigned char __nesc_result;
#line 98

#line 98
  __nesc_result = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ArbiterInfo__userId();
#line 98

#line 98
  return __nesc_result;
#line 98
}
#line 98
# 277 "../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline error_t Msp430Adc12ImplP__SingleChannel__configureMultiple(uint8_t id, 
const msp430adc12_channel_config_t *config, 
uint16_t *buf, uint16_t length, uint16_t jiffies)
{
  error_t result = ERESERVE;





  if ((((!config || !buf) || !length) || jiffies == 1) || jiffies == 2) {
    return EINVAL;
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 290
    {
      if (Msp430Adc12ImplP__state & Msp430Adc12ImplP__ADC_BUSY) 
        {
          unsigned char __nesc_temp = 
#line 292
          EBUSY;

          {
#line 292
            __nesc_atomic_end(__nesc_atomic); 
#line 292
            return __nesc_temp;
          }
        }
#line 293
      if (Msp430Adc12ImplP__ADCArbiterInfo__userId() == id) {
          adc12ctl1_t ctl1 = { 
          .adc12busy = 0, 
          .conseq = length > 16 ? 3 : 1, 
          .adc12ssel = config->adc12ssel, 
          .adc12div = config->adc12div, 
          .issh = 0, 
          .shp = 1, 
          .shs = jiffies == 0 ? 0 : 1, 
          .cstartadd = 0 };

          adc12memctl_t memctl = { 
          .inch = config->inch, 
          .sref = config->sref, 
          .eos = 0 };

          uint16_t i;
#line 309
          uint16_t mask = 1;
          adc12ctl0_t ctl0 = Msp430Adc12ImplP__HplAdc12__getCtl0();

#line 311
          ctl0.msc = jiffies == 0 ? 1 : 0;
          ctl0.sht0 = config->sht;
          ctl0.sht1 = config->sht;

          Msp430Adc12ImplP__state = Msp430Adc12ImplP__MULTIPLE_DATA;
          Msp430Adc12ImplP__resultBufferStart = (void *)0;
          Msp430Adc12ImplP__resultBufferLength = length;
          Msp430Adc12ImplP__resultBufferStart = buf;
          Msp430Adc12ImplP__resultBufferIndex = 0;
          Msp430Adc12ImplP__HplAdc12__setCtl0(ctl0);
          Msp430Adc12ImplP__HplAdc12__setCtl1(ctl1);
          for (i = 0; i < length - 1 && i < 15; i++) 
            Msp430Adc12ImplP__HplAdc12__setMCtl(i, memctl);
          memctl.eos = 1;
          Msp430Adc12ImplP__HplAdc12__setMCtl(i, memctl);
          Msp430Adc12ImplP__HplAdc12__setIEFlags(mask << i);

          if (jiffies) {
              Msp430Adc12ImplP__state |= Msp430Adc12ImplP__USE_TIMERA;
              Msp430Adc12ImplP__prepareTimerA(jiffies, config->sampcon_ssel, config->sampcon_id);
            }
          result = SUCCESS;
        }
    }
#line 334
    __nesc_atomic_end(__nesc_atomic); }
  return result;
}

# 316 "../../../tos/chips/msp430/adc12/AdcStreamP.nc"
static inline error_t AdcStreamP__SingleChannel__default__configureMultiple(uint8_t c, 
const msp430adc12_channel_config_t *config, uint16_t b[], 
uint16_t numSamples, uint16_t jiffies)
{
  return FAIL;
}

# 138 "../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
inline static error_t AdcStreamP__SingleChannel__configureMultiple(uint8_t arg_0x7fbff4606020, const msp430adc12_channel_config_t * config, uint16_t * buffer, uint16_t numSamples, uint16_t jiffies){
#line 138
  unsigned char __nesc_result;
#line 138

#line 138
  switch (arg_0x7fbff4606020) {
#line 138
    case /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC*/AdcReadStreamClientC__0__RSCLIENT:
#line 138
      __nesc_result = Msp430Adc12ImplP__SingleChannel__configureMultiple(/*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__1__ID, config, buffer, numSamples, jiffies);
#line 138
      break;
#line 138
    default:
#line 138
      __nesc_result = AdcStreamP__SingleChannel__default__configureMultiple(arg_0x7fbff4606020, config, buffer, numSamples, jiffies);
#line 138
      break;
#line 138
    }
#line 138

#line 138
  return __nesc_result;
#line 138
}
#line 138
# 96 "../../../tos/chips/msp430/adc12/AdcStreamP.nc"
static inline error_t AdcStreamP__postBuffer(uint8_t c, uint16_t *buf, uint16_t n)
{
  if (n < sizeof(struct AdcStreamP__list_entry_t )) {
    return ESIZE;
    }
#line 100
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      struct AdcStreamP__list_entry_t * newEntry = (struct AdcStreamP__list_entry_t * )buf;

      if (!AdcStreamP__bufferQueueEnd[c]) 
        {
          unsigned char __nesc_temp = 
#line 105
          FAIL;

          {
#line 105
            __nesc_atomic_end(__nesc_atomic); 
#line 105
            return __nesc_temp;
          }
        }
#line 107
      newEntry->count = n;
      newEntry->next = (void *)0;
      *AdcStreamP__bufferQueueEnd[c] = newEntry;
      AdcStreamP__bufferQueueEnd[c] = & newEntry->next;
    }
#line 111
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 67 "../../../tos/interfaces/TaskBasic.nc"
inline static error_t AdcStreamP__readStreamFail__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(AdcStreamP__readStreamFail);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 180 "../../../tos/chips/msp430/adc12/AdcP.nc"
static inline error_t AdcP__SingleChannel__default__getData(uint8_t client)
{
  return EINVAL;
}

# 189 "../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
inline static error_t AdcP__SingleChannel__getData(uint8_t arg_0x7fbff4a912a0){
#line 189
  unsigned char __nesc_result;
#line 189

#line 189
  switch (arg_0x7fbff4a912a0) {
#line 189
    case /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadClientC*/AdcReadClientC__0__CLIENT:
#line 189
      __nesc_result = Msp430Adc12ImplP__SingleChannel__getData(/*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__0__ID);
#line 189
      break;
#line 189
    case /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC*/AdcReadNowClientC__0__CLIENT:
#line 189
      __nesc_result = Msp430Adc12ImplP__SingleChannel__getData(/*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__2__ID);
#line 189
      break;
#line 189
    default:
#line 189
      __nesc_result = AdcP__SingleChannel__default__getData(arg_0x7fbff4a912a0);
#line 189
      break;
#line 189
    }
#line 189

#line 189
  return __nesc_result;
#line 189
}
#line 189
# 57 "../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
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

# 53 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__clr(void ){
#line 53
  /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__clr();
#line 53
}
#line 53
# 49 "../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__clr(void )
#line 49
{
#line 49
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__clr();
}

# 41 "../../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__clr(void ){
#line 41
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__clr();
#line 41
}
#line 41
# 90 "../../../tos/platforms/shimmer2r/LedsP.nc"
static inline void LedsP__Leds__led1On(void )
#line 90
{
  LedsP__Led1__clr();
  ;
#line 92
  ;
}

# 73 "../../../tos/platforms/shimmer2r/Leds.nc"
inline static void TestPrintfC__Leds__led1On(void ){
#line 73
  LedsP__Leds__led1On();
#line 73
}
#line 73
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

# 67 "../../../tos/interfaces/TaskBasic.nc"
inline static error_t Msp430RefVoltArbiterImplP__switchOff__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(Msp430RefVoltArbiterImplP__switchOff);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 87 "../../../tos/chips/msp430/adc12/Msp430RefVoltGeneratorP.nc"
static inline error_t Msp430RefVoltGeneratorP__RefVolt_1_5V__stop(void )
#line 87
{
  return Msp430RefVoltGeneratorP__stop(Msp430RefVoltGeneratorP__REFERENCE_1_5V_OFF_PENDING);
}

# 130 "../../../tos/interfaces/SplitControl.nc"
inline static error_t Msp430RefVoltArbiterImplP__RefVolt_1_5V__stop(void ){
#line 130
  unsigned char __nesc_result;
#line 130

#line 130
  __nesc_result = Msp430RefVoltGeneratorP__RefVolt_1_5V__stop();
#line 130

#line 130
  return __nesc_result;
#line 130
}
#line 130
# 91 "../../../tos/chips/msp430/adc12/Msp430RefVoltGeneratorP.nc"
static inline error_t Msp430RefVoltGeneratorP__RefVolt_2_5V__stop(void )
#line 91
{
  return Msp430RefVoltGeneratorP__stop(Msp430RefVoltGeneratorP__REFERENCE_2_5V_OFF_PENDING);
}

# 130 "../../../tos/interfaces/SplitControl.nc"
inline static error_t Msp430RefVoltArbiterImplP__RefVolt_2_5V__stop(void ){
#line 130
  unsigned char __nesc_result;
#line 130

#line 130
  __nesc_result = Msp430RefVoltGeneratorP__RefVolt_2_5V__stop();
#line 130

#line 130
  return __nesc_result;
#line 130
}
#line 130
# 141 "../../../tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static inline void Msp430RefVoltArbiterImplP__switchOff__runTask(void )
{
  error_t stopped;

  if (Msp430RefVoltArbiterImplP__syncOwner != Msp430RefVoltArbiterImplP__NO_OWNER) {
      if (Msp430RefVoltArbiterImplP__ref2_5v) {
        stopped = Msp430RefVoltArbiterImplP__RefVolt_2_5V__stop();
        }
      else {
#line 149
        stopped = Msp430RefVoltArbiterImplP__RefVolt_1_5V__stop();
        }
#line 150
      if (stopped == SUCCESS) {
        Msp430RefVoltArbiterImplP__syncOwner = Msp430RefVoltArbiterImplP__NO_OWNER;
        }
      else {
#line 153
        Msp430RefVoltArbiterImplP__switchOff__postTask();
        }
    }
}

# 164 "../../../tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].isrunning = FALSE;
}

# 78 "../../../tos/lib/timer/Timer.nc"
inline static void Msp430RefVoltGeneratorP__SwitchOnTimer__stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(0U);
#line 78
}
#line 78
# 158 "../../../tos/system/SimpleArbiterP.nc"
static inline void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__default__granted(uint8_t id)
#line 158
{
}

# 102 "../../../tos/interfaces/Resource.nc"
inline static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__granted(uint8_t arg_0x7fbff48de660){
#line 102
  switch (arg_0x7fbff48de660) {
#line 102
    case /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__0__ID:
#line 102
      Msp430RefVoltArbiterImplP__AdcResource__granted(/*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__0__ID);
#line 102
      break;
#line 102
    case /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__1__ID:
#line 102
      Msp430RefVoltArbiterImplP__AdcResource__granted(/*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__1__ID);
#line 102
      break;
#line 102
    case /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__2__ID:
#line 102
      Msp430RefVoltArbiterImplP__AdcResource__granted(/*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__2__ID);
#line 102
      break;
#line 102
    default:
#line 102
      /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__default__granted(arg_0x7fbff48de660);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 164 "../../../tos/system/SimpleArbiterP.nc"
static inline void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(uint8_t id)
#line 164
{
}

# 59 "../../../tos/interfaces/ResourceConfigure.nc"
inline static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(uint8_t arg_0x7fbff48db0d0){
#line 59
    /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(arg_0x7fbff48db0d0);
#line 59
}
#line 59
# 149 "../../../tos/system/SimpleArbiterP.nc"
static inline void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void )
#line 149
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 150
    {
      /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__RES_BUSY;
      /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(/*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__resId);
    }
#line 153
    __nesc_atomic_end(__nesc_atomic); }
  /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__granted(/*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__resId);
}

# 58 "../../../tos/interfaces/AdcConfigure.nc"
inline static /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__0__ConfUp__adc_config_t /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__0__ConfUp__getConfiguration(void ){
#line 58
  struct __nesc_unnamed4286 const *__nesc_result;
#line 58

#line 58
  __nesc_result = Msp430InternalVoltageP__AdcConfigure__getConfiguration();
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 47 "../../../tos/chips/msp430/adc12/Msp430Adc12ConfAlertC.nc"
static inline const msp430adc12_channel_config_t */*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__0__ConfSub__getConfiguration(void )
{
  return /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__0__ConfUp__getConfiguration();
}

# 58 "../../../tos/interfaces/AdcConfigure.nc"
inline static /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__1__ConfUp__adc_config_t /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__1__ConfUp__getConfiguration(void ){
#line 58
  struct __nesc_unnamed4286 const *__nesc_result;
#line 58

#line 58
  __nesc_result = Msp430InternalVoltageP__AdcConfigure__getConfiguration();
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 47 "../../../tos/chips/msp430/adc12/Msp430Adc12ConfAlertC.nc"
static inline const msp430adc12_channel_config_t */*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__1__ConfSub__getConfiguration(void )
{
  return /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__1__ConfUp__getConfiguration();
}

# 58 "../../../tos/interfaces/AdcConfigure.nc"
inline static /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__2__ConfUp__adc_config_t /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__2__ConfUp__getConfiguration(void ){
#line 58
  struct __nesc_unnamed4286 const *__nesc_result;
#line 58

#line 58
  __nesc_result = Msp430InternalVoltageP__AdcConfigure__getConfiguration();
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 47 "../../../tos/chips/msp430/adc12/Msp430Adc12ConfAlertC.nc"
static inline const msp430adc12_channel_config_t */*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__2__ConfSub__getConfiguration(void )
{
  return /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__2__ConfUp__getConfiguration();
}

# 182 "../../../tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static inline const msp430adc12_channel_config_t *
Msp430RefVoltArbiterImplP__Config__default__getConfiguration(uint8_t client)
{
  return &Msp430RefVoltArbiterImplP__defaultConfig;
}

# 58 "../../../tos/interfaces/AdcConfigure.nc"
inline static Msp430RefVoltArbiterImplP__Config__adc_config_t Msp430RefVoltArbiterImplP__Config__getConfiguration(uint8_t arg_0x7fbff481fd00){
#line 58
  struct __nesc_unnamed4286 const *__nesc_result;
#line 58

#line 58
  switch (arg_0x7fbff481fd00) {
#line 58
    case /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__0__ID:
#line 58
      __nesc_result = /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__0__ConfSub__getConfiguration();
#line 58
      break;
#line 58
    case /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__1__ID:
#line 58
      __nesc_result = /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__1__ConfSub__getConfiguration();
#line 58
      break;
#line 58
    case /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__2__ID:
#line 58
      __nesc_result = /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__2__ConfSub__getConfiguration();
#line 58
      break;
#line 58
    default:
#line 58
      __nesc_result = Msp430RefVoltArbiterImplP__Config__default__getConfiguration(arg_0x7fbff481fd00);
#line 58
      break;
#line 58
    }
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 79 "../../../tos/chips/msp430/adc12/Msp430RefVoltGeneratorP.nc"
static inline error_t Msp430RefVoltGeneratorP__RefVolt_1_5V__start(void )
#line 79
{
  return Msp430RefVoltGeneratorP__start(Msp430RefVoltGeneratorP__REFERENCE_1_5V_STABLE);
}

# 104 "../../../tos/interfaces/SplitControl.nc"
inline static error_t Msp430RefVoltArbiterImplP__RefVolt_1_5V__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = Msp430RefVoltGeneratorP__RefVolt_1_5V__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 73 "../../../tos/lib/timer/Timer.nc"
inline static void Msp430RefVoltGeneratorP__SwitchOnTimer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(0U, dt);
#line 73
}
#line 73
# 169 "../../../tos/lib/timer/VirtualizeTimerC.nc"
static inline bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(uint8_t num)
{
  return /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].isrunning;
}

# 92 "../../../tos/lib/timer/Timer.nc"
inline static bool Msp430RefVoltGeneratorP__SwitchOffSettleTimer__isRunning(void ){
#line 92
  unsigned char __nesc_result;
#line 92

#line 92
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(2U);
#line 92

#line 92
  return __nesc_result;
#line 92
}
#line 92
#line 78
inline static void Msp430RefVoltGeneratorP__SwitchOffSettleTimer__stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(2U);
#line 78
}
#line 78
inline static void Msp430RefVoltGeneratorP__SwitchOffTimer__stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(1U);
#line 78
}
#line 78
# 83 "../../../tos/chips/msp430/adc12/Msp430RefVoltGeneratorP.nc"
static inline error_t Msp430RefVoltGeneratorP__RefVolt_2_5V__start(void )
#line 83
{
  return Msp430RefVoltGeneratorP__start(Msp430RefVoltGeneratorP__REFERENCE_2_5V_STABLE);
}

# 104 "../../../tos/interfaces/SplitControl.nc"
inline static error_t Msp430RefVoltArbiterImplP__RefVolt_2_5V__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = Msp430RefVoltGeneratorP__RefVolt_2_5V__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 172 "../../../tos/chips/msp430/adc12/AdcP.nc"
static inline void AdcP__Read__default__readDone(uint8_t client, error_t result, uint16_t val)
#line 172
{
}

# 63 "../../../tos/interfaces/Read.nc"
inline static void AdcP__Read__readDone(uint8_t arg_0x7fbff4a9d1e0, error_t result, AdcP__Read__val_t val){
#line 63
  switch (arg_0x7fbff4a9d1e0) {
#line 63
    case /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadClientC*/AdcReadClientC__0__CLIENT:
#line 63
      TestPrintfC__Read__readDone(result, val);
#line 63
      break;
#line 63
    default:
#line 63
      AdcP__Read__default__readDone(arg_0x7fbff4a9d1e0, result, val);
#line 63
      break;
#line 63
    }
#line 63
}
#line 63
# 170 "../../../tos/chips/msp430/adc12/AdcP.nc"
static inline error_t AdcP__ResourceRead__default__release(uint8_t client)
#line 170
{
#line 170
  return FAIL;
}

# 120 "../../../tos/interfaces/Resource.nc"
inline static error_t AdcP__ResourceRead__release(uint8_t arg_0x7fbff4a971e0){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  switch (arg_0x7fbff4a971e0) {
#line 120
    case /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadClientC*/AdcReadClientC__0__CLIENT:
#line 120
      __nesc_result = Msp430RefVoltArbiterImplP__ClientResource__release(/*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__0__ID);
#line 120
      break;
#line 120
    default:
#line 120
      __nesc_result = AdcP__ResourceRead__default__release(arg_0x7fbff4a971e0);
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
# 136 "../../../tos/chips/msp430/adc12/AdcP.nc"
static inline void AdcP__readDone__runTask(void )
{
  AdcP__ResourceRead__release(AdcP__owner);
  AdcP__Read__readDone(AdcP__owner, SUCCESS, AdcP__value);
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
inline static void /*Msp430Uart0P.UartP*/Msp430UartP__0__Resource__granted(uint8_t arg_0x7fbff5122e10){
#line 102
  switch (arg_0x7fbff5122e10) {
#line 102
    case /*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID:
#line 102
      ShimmerSerialP__Resource__granted();
#line 102
      break;
#line 102
    default:
#line 102
      /*Msp430Uart0P.UartP*/Msp430UartP__0__Resource__default__granted(arg_0x7fbff5122e10);
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
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__granted(uint8_t arg_0x7fbff4cc5a50){
#line 102
  switch (arg_0x7fbff4cc5a50) {
#line 102
    case /*PlatformSerialC.UartC.UsartC*/Msp430Usart0C__0__CLIENT_ID:
#line 102
      /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__granted(/*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID);
#line 102
      break;
#line 102
    default:
#line 102
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__default__granted(arg_0x7fbff4cc5a50);
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
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__configure(uint8_t arg_0x7fbff4cc0240){
#line 59
  switch (arg_0x7fbff4cc0240) {
#line 59
    case /*PlatformSerialC.UartC.UsartC*/Msp430Usart0C__0__CLIENT_ID:
#line 59
      /*Msp430Uart0P.UartP*/Msp430UartP__0__ResourceConfigure__configure(/*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID);
#line 59
      break;
#line 59
    default:
#line 59
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(arg_0x7fbff4cc0240);
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
inline static msp430_uart_union_config_t */*Msp430Uart0P.UartP*/Msp430UartP__0__Msp430UartConfigure__getConfig(uint8_t arg_0x7fbff511a890){
#line 39
  union __nesc_unnamed4274 *__nesc_result;
#line 39

#line 39
  switch (arg_0x7fbff511a890) {
#line 39
    case /*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID:
#line 39
      __nesc_result = ShimmerSerialP__Msp430UartConfigure__getConfig();
#line 39
      break;
#line 39
    default:
#line 39
      __nesc_result = /*Msp430Uart0P.UartP*/Msp430UartP__0__Msp430UartConfigure__default__getConfig(arg_0x7fbff511a890);
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
inline static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(uint8_t arg_0x7fbff53d6cf0, message_t * msg, error_t error){
#line 100
  switch (arg_0x7fbff53d6cf0) {
#line 100
    case 0U:
#line 100
      /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(msg, error);
#line 100
      break;
#line 100
    default:
#line 100
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(arg_0x7fbff53d6cf0, msg, error);
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
inline static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(am_id_t arg_0x7fbff536c920, message_t * msg, error_t error){
#line 110
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(arg_0x7fbff536c920, msg, error);
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
inline static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(uart_id_t arg_0x7fbff522f110, message_t * msg, error_t error){
#line 100
  switch (arg_0x7fbff522f110) {
#line 100
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 100
      /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(msg, error);
#line 100
      break;
#line 100
    default:
#line 100
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(arg_0x7fbff522f110, msg, error);
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
inline static message_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(am_id_t arg_0x7fbff536bb00, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
    __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(arg_0x7fbff536bb00, msg, payload, len);
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
inline static message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(uart_id_t arg_0x7fbff5230570, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  switch (arg_0x7fbff5230570) {
#line 78
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 78
      __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(msg, payload, len);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(arg_0x7fbff5230570, msg, payload, len);
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
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(uart_id_t arg_0x7fbff522e4d0, message_t *msg, uint8_t dataLinkLen){
#line 31
  unsigned char __nesc_result;
#line 31

#line 31
  switch (arg_0x7fbff522e4d0) {
#line 31
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 31
      __nesc_result = SerialPacketInfoActiveMessageP__Info__upperLength(msg, dataLinkLen);
#line 31
      break;
#line 31
    default:
#line 31
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(arg_0x7fbff522e4d0, msg, dataLinkLen);
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
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(uint8_t arg_0x7fbff4cc0240){
#line 65
  switch (arg_0x7fbff4cc0240) {
#line 65
    case /*PlatformSerialC.UartC.UsartC*/Msp430Usart0C__0__CLIENT_ID:
#line 65
      /*Msp430Uart0P.UartP*/Msp430UartP__0__ResourceConfigure__unconfigure(/*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID);
#line 65
      break;
#line 65
    default:
#line 65
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(arg_0x7fbff4cc0240);
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
inline static error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__release(uint8_t arg_0x7fbff511c580){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  switch (arg_0x7fbff511c580) {
#line 120
    case /*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID:
#line 120
      __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__release(/*PlatformSerialC.UartC.UsartC*/Msp430Usart0C__0__CLIENT_ID);
#line 120
      break;
#line 120
    default:
#line 120
      __nesc_result = /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__default__release(arg_0x7fbff511c580);
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
inline static bool /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__isOwner(uint8_t arg_0x7fbff511c580){
#line 128
  unsigned char __nesc_result;
#line 128

#line 128
  switch (arg_0x7fbff511c580) {
#line 128
    case /*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID:
#line 128
      __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__isOwner(/*PlatformSerialC.UartC.UsartC*/Msp430Usart0C__0__CLIENT_ID);
#line 128
      break;
#line 128
    default:
#line 128
      __nesc_result = /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__default__isOwner(arg_0x7fbff511c580);
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
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__immediateRequested(uint8_t arg_0x7fbff4cc4cf0){
#line 61
    /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__immediateRequested(arg_0x7fbff4cc4cf0);
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
inline static error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__immediateRequest(uint8_t arg_0x7fbff511c580){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  switch (arg_0x7fbff511c580) {
#line 97
    case /*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID:
#line 97
      __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__immediateRequest(/*PlatformSerialC.UartC.UsartC*/Msp430Usart0C__0__CLIENT_ID);
#line 97
      break;
#line 97
    default:
#line 97
      __nesc_result = /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartResource__default__immediateRequest(arg_0x7fbff511c580);
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

# 95 "../../../tos/chips/msp430/adc12/HplAdc12P.nc"
static inline void HplAdc12P__HplAdc12__resetIFGs(void )
#line 95
{
  HplAdc12P__ADC12IV = 0;
  HplAdc12P__ADC12IFG = 0;
}

# 106 "../../../tos/chips/msp430/adc12/HplAdc12.nc"
inline static void Msp430Adc12ImplP__HplAdc12__resetIFGs(void ){
#line 106
  HplAdc12P__HplAdc12__resetIFGs();
#line 106
}
#line 106
#line 123
inline static void Msp430Adc12ImplP__HplAdc12__stopConversion(void ){
#line 123
  HplAdc12P__HplAdc12__stopConversion();
#line 123
}
#line 123
# 92 "../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline error_t Msp430Adc12ImplP__Init__init(void )
{
  adc12ctl0_t ctl0;

  /* atomic removed: atomic calls only */
#line 96
  {

    Msp430Adc12ImplP__HplAdc12__stopConversion();

    Msp430Adc12ImplP__HplAdc12__resetIFGs();
    ctl0 = Msp430Adc12ImplP__HplAdc12__getCtl0();
    ctl0.adc12tovie = 1;
    ctl0.adc12ovie = 1;
    Msp430Adc12ImplP__HplAdc12__setCtl0(ctl0);
  }
  return SUCCESS;
}

# 61 "../../../tos/system/RoundRobinResourceQueueC.nc"
static inline error_t /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__Init__init(void )
#line 61
{
  memset(/*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__resQ, 0, sizeof /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__resQ);
  return SUCCESS;
}

# 57 "../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__CC2int(/*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t x)
#line 57
{
#line 57
  union /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3____nesc_unnamed4368 {
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

# 83 "../../../tos/chips/msp430/adc12/AdcStreamP.nc"
static inline error_t AdcStreamP__Init__init(void )
#line 83
{
  uint8_t i;

  for (i = 0; i != AdcStreamP__NSTREAM; i++) 
    AdcStreamP__bufferQueueEnd[i] = &AdcStreamP__bufferQueue[i];

  return SUCCESS;
}

# 62 "../../../tos/interfaces/Init.nc"
inline static error_t RealMainP__SoftwareInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = AdcStreamP__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, Msp430Adc12ImplP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, PutcharP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, SerialP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, PrintfP__Init__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 154 "../../../tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, FALSE);
}

# 64 "../../../tos/lib/timer/Timer.nc"
inline static void TestPrintfC__Timer__startPeriodic(uint32_t dt){
#line 64
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(3U, dt);
#line 64
}
#line 64
# 63 "TestPrintfC.nc"
static inline void TestPrintfC__Boot__booted(void )
#line 63
{
  TestPrintfC__Timer__startPeriodic(1000);
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
  TestPrintfC__Boot__booted();
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
inline static void /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__receivedByte(uint8_t arg_0x7fbff511fe60, uint8_t byte){
#line 79
  switch (arg_0x7fbff511fe60) {
#line 79
    case /*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID:
#line 79
      HdlcTranslateC__UartStream__receivedByte(byte);
#line 79
      break;
#line 79
    default:
#line 79
      /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__default__receivedByte(arg_0x7fbff511fe60, byte);
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
inline static void /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__receiveDone(uint8_t arg_0x7fbff511fe60, uint8_t * buf, uint16_t len, error_t error){
#line 99
  switch (arg_0x7fbff511fe60) {
#line 99
    case /*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID:
#line 99
      HdlcTranslateC__UartStream__receiveDone(buf, len, error);
#line 99
      break;
#line 99
    default:
#line 99
      /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__default__receiveDone(arg_0x7fbff511fe60, buf, len, error);
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
inline static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__rxDone(uint8_t arg_0x7fbff4d04600, uint8_t data){
#line 54
  switch (arg_0x7fbff4d04600) {
#line 54
    case /*PlatformSerialC.UartC.UsartC*/Msp430Usart0C__0__CLIENT_ID:
#line 54
      /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartInterrupts__rxDone(/*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID, data);
#line 54
      break;
#line 54
    default:
#line 54
      /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__rxDone(arg_0x7fbff4d04600, data);
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
inline static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__I2CInterrupts__fired(uint8_t arg_0x7fbff4d034e0){
#line 39
    /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__I2CInterrupts__default__fired(arg_0x7fbff4d034e0);
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
inline static void /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__sendDone(uint8_t arg_0x7fbff511fe60, uint8_t * buf, uint16_t len, error_t error){
#line 57
  switch (arg_0x7fbff511fe60) {
#line 57
    case /*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID:
#line 57
      HdlcTranslateC__UartStream__sendDone(buf, len, error);
#line 57
      break;
#line 57
    default:
#line 57
      /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__default__sendDone(arg_0x7fbff511fe60, buf, len, error);
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
inline static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__txDone(uint8_t arg_0x7fbff4d04600){
#line 49
  switch (arg_0x7fbff4d04600) {
#line 49
    case /*PlatformSerialC.UartC.UsartC*/Msp430Usart0C__0__CLIENT_ID:
#line 49
      /*Msp430Uart0P.UartP*/Msp430UartP__0__UsartInterrupts__txDone(/*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID);
#line 49
      break;
#line 49
    default:
#line 49
      /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__txDone(arg_0x7fbff4d04600);
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
# 161 "../../../tos/chips/msp430/adc12/AdcP.nc"
static inline uint16_t *AdcP__SingleChannel__multipleDataReady(uint8_t client, 
uint16_t *buf, uint16_t numSamples)
{

  return 0;
}

# 656 "../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline uint16_t *Msp430Adc12ImplP__SingleChannel__default__multipleDataReady(uint8_t id, 
uint16_t *buf, uint16_t numSamples)
{
  return 0;
}

# 227 "../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
inline static uint16_t * Msp430Adc12ImplP__SingleChannel__multipleDataReady(uint8_t arg_0x7fbff4a1f1c0, uint16_t * buffer, uint16_t numSamples){
#line 227
  unsigned int *__nesc_result;
#line 227

#line 227
  switch (arg_0x7fbff4a1f1c0) {
#line 227
    case /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__0__ID:
#line 227
      __nesc_result = AdcP__SingleChannel__multipleDataReady(/*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadClientC*/AdcReadClientC__0__CLIENT, buffer, numSamples);
#line 227
      break;
#line 227
    case /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__1__ID:
#line 227
      __nesc_result = AdcStreamP__SingleChannel__multipleDataReady(/*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC*/AdcReadStreamClientC__0__RSCLIENT, buffer, numSamples);
#line 227
      break;
#line 227
    case /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__2__ID:
#line 227
      __nesc_result = AdcP__SingleChannel__multipleDataReady(/*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC*/AdcReadNowClientC__0__CLIENT, buffer, numSamples);
#line 227
      break;
#line 227
    default:
#line 227
      __nesc_result = Msp430Adc12ImplP__SingleChannel__default__multipleDataReady(arg_0x7fbff4a1f1c0, buffer, numSamples);
#line 227
      break;
#line 227
    }
#line 227

#line 227
  return __nesc_result;
#line 227
}
#line 227
# 88 "../../../tos/chips/msp430/adc12/HplAdc12P.nc"
static inline uint16_t HplAdc12P__HplAdc12__getMem(uint8_t i)
#line 88
{
  return ((volatile int *)0x0140)[i];
}

# 89 "../../../tos/chips/msp430/adc12/HplAdc12.nc"
inline static uint16_t Msp430Adc12ImplP__HplAdc12__getMem(uint8_t idx){
#line 89
  unsigned int __nesc_result;
#line 89

#line 89
  __nesc_result = HplAdc12P__HplAdc12__getMem(idx);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 62 "../../../tos/chips/msp430/adc12/HplAdc12P.nc"
static inline  adc12memctl_t HplAdc12P__int2adc12memctl(uint8_t x)
#line 62
{
#line 62
  union __nesc_unnamed4369 {
#line 62
    uint8_t f;
#line 62
    adc12memctl_t t;
  } 
#line 62
  c = { .f = x };

#line 62
  return c.t;
}

#line 84
static inline adc12memctl_t HplAdc12P__HplAdc12__getMCtl(uint8_t i)
#line 84
{
  return HplAdc12P__int2adc12memctl(((volatile char *)0x0080)[i]);
}

# 82 "../../../tos/chips/msp430/adc12/HplAdc12.nc"
inline static adc12memctl_t Msp430Adc12ImplP__HplAdc12__getMCtl(uint8_t idx){
#line 82
  struct __nesc_unnamed4287 __nesc_result;
#line 82

#line 82
  __nesc_result = HplAdc12P__HplAdc12__getMCtl(idx);
#line 82

#line 82
  return __nesc_result;
#line 82
}
#line 82
# 662 "../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline void Msp430Adc12ImplP__MultiChannel__default__dataReady(uint8_t id, uint16_t *buffer, uint16_t numSamples)
#line 662
{
}

# 107 "../../../tos/chips/msp430/adc12/Msp430Adc12MultiChannel.nc"
inline static void Msp430Adc12ImplP__MultiChannel__dataReady(uint8_t arg_0x7fbff4a1e940, uint16_t *buffer, uint16_t numSamples){
#line 107
    Msp430Adc12ImplP__MultiChannel__default__dataReady(arg_0x7fbff4a1e940, buffer, numSamples);
#line 107
}
#line 107
# 651 "../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline error_t Msp430Adc12ImplP__SingleChannel__default__singleDataReady(uint8_t id, uint16_t data)
{
  return FAIL;
}

# 206 "../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
inline static error_t Msp430Adc12ImplP__SingleChannel__singleDataReady(uint8_t arg_0x7fbff4a1f1c0, uint16_t data){
#line 206
  unsigned char __nesc_result;
#line 206

#line 206
  switch (arg_0x7fbff4a1f1c0) {
#line 206
    case /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__0__ID:
#line 206
      __nesc_result = AdcP__SingleChannel__singleDataReady(/*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadClientC*/AdcReadClientC__0__CLIENT, data);
#line 206
      break;
#line 206
    case /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__1__ID:
#line 206
      __nesc_result = AdcStreamP__SingleChannel__singleDataReady(/*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC*/AdcReadStreamClientC__0__RSCLIENT, data);
#line 206
      break;
#line 206
    case /*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__2__ID:
#line 206
      __nesc_result = AdcP__SingleChannel__singleDataReady(/*TestPrintfAppC.Sensor.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC*/AdcReadNowClientC__0__CLIENT, data);
#line 206
      break;
#line 206
    default:
#line 206
      __nesc_result = Msp430Adc12ImplP__SingleChannel__default__singleDataReady(arg_0x7fbff4a1f1c0, data);
#line 206
      break;
#line 206
    }
#line 206

#line 206
  return __nesc_result;
#line 206
}
#line 206
# 93 "../../../tos/chips/msp430/adc12/HplAdc12P.nc"
static inline uint16_t HplAdc12P__HplAdc12__getIEFlags(void )
#line 93
{
#line 93
  return HplAdc12P__ADC12IE;
}

# 101 "../../../tos/chips/msp430/adc12/HplAdc12.nc"
inline static uint16_t Msp430Adc12ImplP__HplAdc12__getIEFlags(void ){
#line 101
  unsigned int __nesc_result;
#line 101

#line 101
  __nesc_result = HplAdc12P__HplAdc12__getIEFlags();
#line 101

#line 101
  return __nesc_result;
#line 101
}
#line 101
# 665 "../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline void Msp430Adc12ImplP__Overflow__default__conversionTimeOverflow(uint8_t id)
#line 665
{
}

# 54 "../../../tos/chips/msp430/adc12/Msp430Adc12Overflow.nc"
inline static void Msp430Adc12ImplP__Overflow__conversionTimeOverflow(uint8_t arg_0x7fbff4a1c900){
#line 54
    Msp430Adc12ImplP__Overflow__default__conversionTimeOverflow(arg_0x7fbff4a1c900);
#line 54
}
#line 54
# 664 "../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline void Msp430Adc12ImplP__Overflow__default__memOverflow(uint8_t id)
#line 664
{
}

# 49 "../../../tos/chips/msp430/adc12/Msp430Adc12Overflow.nc"
inline static void Msp430Adc12ImplP__Overflow__memOverflow(uint8_t arg_0x7fbff4a1c900){
#line 49
    Msp430Adc12ImplP__Overflow__default__memOverflow(arg_0x7fbff4a1c900);
#line 49
}
#line 49
# 550 "../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline void Msp430Adc12ImplP__HplAdc12__conversionDone(uint16_t iv)
{
  bool overflow = FALSE;
  uint16_t *resultBuffer;

  if (iv <= 4) {
      if (iv == 2) {
        Msp430Adc12ImplP__Overflow__memOverflow(Msp430Adc12ImplP__clientID);
        }
      else {
#line 559
        Msp430Adc12ImplP__Overflow__conversionTimeOverflow(Msp430Adc12ImplP__clientID);
        }
      if (! Msp430Adc12ImplP__HplAdc12__getCtl0().msc) {
        overflow = TRUE;
        }
#line 563
      if (Msp430Adc12ImplP__HplAdc12__getIEFlags() == 0) {
        return;
        }
    }
#line 566
  switch (Msp430Adc12ImplP__state & Msp430Adc12ImplP__CONVERSION_MODE_MASK) 
    {
      case Msp430Adc12ImplP__SINGLE_DATA: 
        Msp430Adc12ImplP__stopConversion();
      Msp430Adc12ImplP__SingleChannel__singleDataReady(Msp430Adc12ImplP__clientID, Msp430Adc12ImplP__HplAdc12__getMem(0));
      break;
      case Msp430Adc12ImplP__SINGLE_DATA_REPEAT: 
        {
          error_t repeatContinue;

#line 575
          repeatContinue = Msp430Adc12ImplP__SingleChannel__singleDataReady(Msp430Adc12ImplP__clientID, 
          Msp430Adc12ImplP__HplAdc12__getMem(0));
          if (repeatContinue != SUCCESS) {
            Msp430Adc12ImplP__stopConversion();
            }
#line 579
          break;
        }

      case Msp430Adc12ImplP__MULTI_CHANNEL: 
        {
          uint16_t i = 0;
#line 584
          uint16_t k;

#line 585
          resultBuffer = Msp430Adc12ImplP__resultBufferStart + Msp430Adc12ImplP__resultBufferIndex;
          do {
              * resultBuffer++ = Msp430Adc12ImplP__HplAdc12__getMem(i);
            }
          while (
#line 588
          ++i < Msp430Adc12ImplP__numChannels);
          Msp430Adc12ImplP__resultBufferIndex += Msp430Adc12ImplP__numChannels;
          if (overflow || Msp430Adc12ImplP__resultBufferLength == Msp430Adc12ImplP__resultBufferIndex) {
              Msp430Adc12ImplP__stopConversion();
              resultBuffer -= Msp430Adc12ImplP__resultBufferIndex;
              k = Msp430Adc12ImplP__resultBufferIndex - Msp430Adc12ImplP__numChannels;
              Msp430Adc12ImplP__resultBufferIndex = 0;
              Msp430Adc12ImplP__MultiChannel__dataReady(Msp430Adc12ImplP__clientID, resultBuffer, 
              overflow ? k : Msp430Adc12ImplP__resultBufferLength);
            }
        }
      break;
      case Msp430Adc12ImplP__MULTIPLE_DATA: 
        {
          uint16_t i = 0;
#line 602
          uint16_t length;
#line 602
          uint16_t k;

#line 603
          resultBuffer = Msp430Adc12ImplP__resultBufferStart + Msp430Adc12ImplP__resultBufferIndex;
          if (Msp430Adc12ImplP__resultBufferLength - Msp430Adc12ImplP__resultBufferIndex > 16) {
            length = 16;
            }
          else {
#line 607
            length = Msp430Adc12ImplP__resultBufferLength - Msp430Adc12ImplP__resultBufferIndex;
            }
#line 608
          do {
              * resultBuffer++ = Msp430Adc12ImplP__HplAdc12__getMem(i);
            }
          while (
#line 610
          ++i < length);
          Msp430Adc12ImplP__resultBufferIndex += length;
          if (overflow || Msp430Adc12ImplP__resultBufferLength == Msp430Adc12ImplP__resultBufferIndex) {
              Msp430Adc12ImplP__stopConversion();
              resultBuffer -= Msp430Adc12ImplP__resultBufferIndex;
              k = Msp430Adc12ImplP__resultBufferIndex - length;
              Msp430Adc12ImplP__resultBufferIndex = 0;
              Msp430Adc12ImplP__SingleChannel__multipleDataReady(Msp430Adc12ImplP__clientID, resultBuffer, 
              overflow ? k : Msp430Adc12ImplP__resultBufferLength);
            }
          else {
#line 619
            if (Msp430Adc12ImplP__resultBufferLength - Msp430Adc12ImplP__resultBufferIndex > 15) {
              return;
              }
            else 
#line 621
              {

                adc12memctl_t memctl = Msp430Adc12ImplP__HplAdc12__getMCtl(0);

#line 624
                memctl.eos = 1;
                Msp430Adc12ImplP__HplAdc12__setMCtl(Msp430Adc12ImplP__resultBufferLength - Msp430Adc12ImplP__resultBufferIndex, memctl);
              }
            }
        }
#line 628
      break;
      case Msp430Adc12ImplP__MULTIPLE_DATA_REPEAT: 
        {
          uint8_t i = 0;

#line 632
          resultBuffer = Msp430Adc12ImplP__resultBufferStart;
          do {
              * resultBuffer++ = Msp430Adc12ImplP__HplAdc12__getMem(i);
            }
          while (
#line 635
          ++i < Msp430Adc12ImplP__resultBufferLength);

          Msp430Adc12ImplP__resultBufferStart = Msp430Adc12ImplP__SingleChannel__multipleDataReady(Msp430Adc12ImplP__clientID, 
          resultBuffer - Msp430Adc12ImplP__resultBufferLength, 
          overflow ? 0 : Msp430Adc12ImplP__resultBufferLength);
          if (!Msp430Adc12ImplP__resultBufferStart) {
            Msp430Adc12ImplP__stopConversion();
            }
#line 642
          break;
        }

      default: 
        Msp430Adc12ImplP__stopConversion();
      break;
    }
}

# 236 "../../../tos/chips/msp430/adc12/Msp430RefVoltGeneratorP.nc"
static inline void Msp430RefVoltGeneratorP__HplAdc12__conversionDone(uint16_t iv)
#line 236
{
}

# 112 "../../../tos/chips/msp430/adc12/HplAdc12.nc"
inline static void HplAdc12P__HplAdc12__conversionDone(uint16_t iv){
#line 112
  Msp430RefVoltGeneratorP__HplAdc12__conversionDone(iv);
#line 112
  Msp430Adc12ImplP__HplAdc12__conversionDone(iv);
#line 112
}
#line 112
# 67 "../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIOP__40__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )55U &= ~(0x01 << 0);
}

# 99 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port60__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIOP__40__IO__selectIOFunc();
#line 99
}
#line 99
# 67 "../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIOP__41__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )55U &= ~(0x01 << 1);
}

# 99 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port61__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIOP__41__IO__selectIOFunc();
#line 99
}
#line 99
# 67 "../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIOP__42__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )55U &= ~(0x01 << 2);
}

# 99 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port62__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIOP__42__IO__selectIOFunc();
#line 99
}
#line 99
# 67 "../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIOP__43__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )55U &= ~(0x01 << 3);
}

# 99 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port63__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIOP__43__IO__selectIOFunc();
#line 99
}
#line 99
# 67 "../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIOP__44__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )55U &= ~(0x01 << 4);
}

# 99 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port64__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIOP__44__IO__selectIOFunc();
#line 99
}
#line 99
# 67 "../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIOP__45__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )55U &= ~(0x01 << 5);
}

# 99 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port65__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIOP__45__IO__selectIOFunc();
#line 99
}
#line 99
# 67 "../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIOP__46__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )55U &= ~(0x01 << 6);
}

# 99 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port66__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIOP__46__IO__selectIOFunc();
#line 99
}
#line 99
# 67 "../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIOP__47__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )55U &= ~(0x01 << 7);
}

# 99 "../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port67__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIOP__47__IO__selectIOFunc();
#line 99
}
#line 99
# 67 "../../../tos/interfaces/TaskBasic.nc"
inline static error_t AdcP__readDone__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(AdcP__readDone);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 178 "../../../tos/chips/msp430/adc12/AdcP.nc"
static inline void AdcP__ReadNow__default__readDone(uint8_t client, error_t result, uint16_t val)
#line 178
{
}

# 66 "../../../tos/interfaces/ReadNow.nc"
inline static void AdcP__ReadNow__readDone(uint8_t arg_0x7fbff4a9b060, error_t result, AdcP__ReadNow__val_t val){
#line 66
    AdcP__ReadNow__default__readDone(arg_0x7fbff4a9b060, result, val);
#line 66
}
#line 66
# 67 "../../../tos/interfaces/TaskBasic.nc"
inline static error_t AdcStreamP__bufferDone__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(AdcStreamP__bufferDone);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
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
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__fired(uint8_t arg_0x7fbff553c8b0){
#line 39
  switch (arg_0x7fbff553c8b0) {
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
      /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__default__fired(arg_0x7fbff553c8b0);
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

# 400 "../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static error_t Msp430Adc12ImplP__SingleChannel__getData(uint8_t id)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 402
    {
      if (Msp430Adc12ImplP__ADCArbiterInfo__userId() == id) {
          if (Msp430Adc12ImplP__state & Msp430Adc12ImplP__MULTIPLE_DATA_REPEAT && !Msp430Adc12ImplP__resultBufferStart) 
            {
              unsigned char __nesc_temp = 
#line 405
              EINVAL;

              {
#line 405
                __nesc_atomic_end(__nesc_atomic); 
#line 405
                return __nesc_temp;
              }
            }
#line 406
          if (Msp430Adc12ImplP__state & Msp430Adc12ImplP__ADC_BUSY) 
            {
              unsigned char __nesc_temp = 
#line 407
              EBUSY;

              {
#line 407
                __nesc_atomic_end(__nesc_atomic); 
#line 407
                return __nesc_temp;
              }
            }
#line 408
          Msp430Adc12ImplP__state |= Msp430Adc12ImplP__ADC_BUSY;
          Msp430Adc12ImplP__clientID = id;
          Msp430Adc12ImplP__configureAdcPin(Msp430Adc12ImplP__HplAdc12__getMCtl(0).inch);
          Msp430Adc12ImplP__HplAdc12__startConversion();
          if (Msp430Adc12ImplP__state & Msp430Adc12ImplP__USE_TIMERA) {
            Msp430Adc12ImplP__startTimerA();
            }
#line 414
          {
            unsigned char __nesc_temp = 
#line 414
            SUCCESS;

            {
#line 414
              __nesc_atomic_end(__nesc_atomic); 
#line 414
              return __nesc_temp;
            }
          }
        }
    }
#line 418
    __nesc_atomic_end(__nesc_atomic); }
#line 417
  return FAIL;
}

# 131 "../../../tos/system/SimpleArbiterP.nc"
static uint8_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ArbiterInfo__userId(void )
#line 131
{
  /* atomic removed: atomic calls only */
#line 132
  {
    if (/*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__state != /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__RES_BUSY) 
      {
        unsigned char __nesc_temp = 
#line 134
        /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__NO_RES;

#line 134
        return __nesc_temp;
      }
#line 135
    {
      unsigned char __nesc_temp = 
#line 135
      /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__resId;

#line 135
      return __nesc_temp;
    }
  }
}

# 91 "../../../tos/chips/msp430/timer/Msp430TimerP.nc"
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__setMode(int mode)
{
  * (volatile uint16_t * )352U = (* (volatile uint16_t * )352U & ~(0x0020 | 0x0010)) | ((mode << 4) & (0x0020 | 0x0010));
}

# 107 "../../../tos/lib/timer/TransformAlarmC.nc"
static void /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__set_alarm(void )
{
  /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__to_size_type now = /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__Counter__get();
#line 109
  /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__to_size_type expires;
#line 109
  /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__to_size_type remaining;




  expires = /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__m_t0 + /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__m_dt;


  remaining = (/*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__to_size_type )(expires - now);


  if (/*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__m_t0 <= now) 
    {
      if (expires >= /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__m_t0 && 
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__m_t0 || 
      expires <= now) {
        remaining = 0;
        }
    }
#line 132
  if (remaining > /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__MAX_DELAY) 
    {
      /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__m_t0 = now + /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__MAX_DELAY;
      /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__m_dt = remaining - /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__MAX_DELAY;
      remaining = /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__MAX_DELAY;
    }
  else 
    {
      /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__m_t0 += /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__m_dt;
      /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__m_dt = 0;
    }
  /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__AlarmFrom__startAt((/*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__from_size_type )now << 5, 
  (/*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__1__from_size_type )remaining << 5);
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
static void SchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x7fbff56a09c0){
#line 75
  switch (arg_0x7fbff56a09c0) {
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
    case AdcP__readDone:
#line 75
      AdcP__readDone__runTask();
#line 75
      break;
#line 75
    case /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask:
#line 75
      /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__runTask();
#line 75
      break;
#line 75
    case Msp430RefVoltArbiterImplP__switchOff:
#line 75
      Msp430RefVoltArbiterImplP__switchOff__runTask();
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
    case AdcStreamP__readStreamDone:
#line 75
      AdcStreamP__readStreamDone__runTask();
#line 75
      break;
#line 75
    case AdcStreamP__readStreamFail:
#line 75
      AdcStreamP__readStreamFail__runTask();
#line 75
      break;
#line 75
    case AdcStreamP__bufferDone:
#line 75
      AdcStreamP__bufferDone__runTask();
#line 75
      break;
#line 75
    default:
#line 75
      SchedulerBasicP__TaskBasic__default__runTask(arg_0x7fbff56a09c0);
#line 75
      break;
#line 75
    }
#line 75
}
#line 75
# 121 "../../../tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static error_t Msp430RefVoltArbiterImplP__ClientResource__release(uint8_t client)
{
  error_t error;

#line 124
  if (Msp430RefVoltArbiterImplP__syncOwner == client) {
    Msp430RefVoltArbiterImplP__switchOff__postTask();
    }
#line 126
  error = Msp430RefVoltArbiterImplP__AdcResource__release(client);
#line 138
  return error;
}

# 96 "../../../tos/system/SimpleArbiterP.nc"
static error_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(uint8_t id)
#line 96
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 97
    {
      if (/*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__state == /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__RES_BUSY && /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__resId == id) {
          if (/*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__isEmpty() == FALSE) {
              /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__resId = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__dequeue();
              /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__RES_GRANTING;
              /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__postTask();
            }
          else {
              /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__resId = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__NO_RES;
              /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__RES_IDLE;
            }
          /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(id);
          {
            unsigned char __nesc_temp = 
#line 109
            SUCCESS;

            {
#line 109
              __nesc_atomic_end(__nesc_atomic); 
#line 109
              return __nesc_temp;
            }
          }
        }
    }
#line 113
    __nesc_atomic_end(__nesc_atomic); }
#line 112
  return FAIL;
}

# 75 "../../../tos/system/RoundRobinResourceQueueC.nc"
static bool /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(resource_client_id_t id)
#line 75
{
  return /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__resQ[id / 8] & (1 << id % 8);
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

# 70 "../../../tos/system/SimpleArbiterP.nc"
static error_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(uint8_t id)
#line 70
{
  /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(/*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 72
    {
      if (/*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__state == /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__RES_IDLE) {
          /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__RES_GRANTING;
          /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__resId = id;
          /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__postTask();
          {
            unsigned char __nesc_temp = 
#line 77
            SUCCESS;

            {
#line 77
              __nesc_atomic_end(__nesc_atomic); 
#line 77
              return __nesc_temp;
            }
          }
        }
#line 79
      {
        unsigned char __nesc_temp = 
#line 79
        /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__enqueue(id);

        {
#line 79
          __nesc_atomic_end(__nesc_atomic); 
#line 79
          return __nesc_temp;
        }
      }
    }
#line 82
    __nesc_atomic_end(__nesc_atomic); }
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

# 259 "../../../tos/chips/msp430/adc12/Msp430RefVoltGeneratorP.nc"
static error_t Msp430RefVoltGeneratorP__switchOff(void )
#line 259
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 260
    {
      if (Msp430RefVoltGeneratorP__HplAdc12__isBusy()) {
          {
            unsigned char __nesc_temp = 
#line 262
            EBUSY;

            {
#line 262
              __nesc_atomic_end(__nesc_atomic); 
#line 262
              return __nesc_temp;
            }
          }
        }
      else 
#line 264
        {
          adc12ctl0_t ctl0 = Msp430RefVoltGeneratorP__HplAdc12__getCtl0();

#line 266
          ctl0.enc = 0;
          Msp430RefVoltGeneratorP__HplAdc12__setCtl0(ctl0);
          ctl0.refon = 0;
          Msp430RefVoltGeneratorP__HplAdc12__setCtl0(ctl0);
          {
            unsigned char __nesc_temp = 
#line 270
            SUCCESS;

            {
#line 270
              __nesc_atomic_end(__nesc_atomic); 
#line 270
              return __nesc_temp;
            }
          }
        }
    }
#line 274
    __nesc_atomic_end(__nesc_atomic); }
}

# 159 "../../../tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, TRUE);
}

#line 144
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

# 98 "../../../tos/chips/msp430/adc12/AdcP.nc"
static void AdcP__SubResourceReadNow__granted(uint8_t nowClient)
{
  if (AdcP__configure(nowClient) == SUCCESS) {
    AdcP__state = AdcP__STATE_READNOW;
    }
  else {
#line 103
    AdcP__state = AdcP__STATE_READNOW_INVALID_CONFIG;
    }
#line 104
  AdcP__ResourceReadNow__granted(nowClient);
}

#line 65
static error_t AdcP__configure(uint8_t client)
{
  error_t result = EINVAL;
  const msp430adc12_channel_config_t * config;

#line 69
  config = AdcP__Config__getConfiguration(client);
  if (config->inch != INPUT_CHANNEL_NONE) {
    result = AdcP__SingleChannel__configureSingle(client, config);
    }
#line 72
  return result;
}

# 182 "../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static error_t Msp430Adc12ImplP__SingleChannel__configureSingle(uint8_t id, 
const msp430adc12_channel_config_t *config)
{
  error_t result = ERESERVE;

  if (!config) {
    return EINVAL;
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 190
    {
      if (Msp430Adc12ImplP__state & Msp430Adc12ImplP__ADC_BUSY) 
        {
          unsigned char __nesc_temp = 
#line 192
          EBUSY;

          {
#line 192
            __nesc_atomic_end(__nesc_atomic); 
#line 192
            return __nesc_temp;
          }
        }
#line 193
      if (Msp430Adc12ImplP__ADCArbiterInfo__userId() == id) {
          adc12ctl1_t ctl1 = { 
          .adc12busy = 0, 
          .conseq = 0, 
          .adc12ssel = config->adc12ssel, 
          .adc12div = config->adc12div, 
          .issh = 0, 
          .shp = 1, 
          .shs = 0, 
          .cstartadd = 0 };

          adc12memctl_t memctl = { 
          .inch = config->inch, 
          .sref = config->sref, 
          .eos = 1 };

          adc12ctl0_t ctl0 = Msp430Adc12ImplP__HplAdc12__getCtl0();

#line 210
          ctl0.msc = 1;
          ctl0.sht0 = config->sht;
          ctl0.sht1 = config->sht;

          Msp430Adc12ImplP__state = Msp430Adc12ImplP__SINGLE_DATA;
          Msp430Adc12ImplP__HplAdc12__setCtl0(ctl0);
          Msp430Adc12ImplP__HplAdc12__setCtl1(ctl1);
          Msp430Adc12ImplP__HplAdc12__setMCtl(0, memctl);
          Msp430Adc12ImplP__HplAdc12__setIEFlags(0x01);
          result = SUCCESS;
        }
    }
#line 221
    __nesc_atomic_end(__nesc_atomic); }
  return result;
}

# 219 "../../../tos/chips/msp430/adc12/AdcStreamP.nc"
static error_t AdcStreamP__ReadStream__read(uint8_t c, uint32_t usPeriod)
{
  if (usPeriod & 0xFFFF0000) {

      AdcStreamP__period = usPeriod / 1000;
      AdcStreamP__periodModified = TRUE;
      AdcStreamP__client = c;
      AdcStreamP__now = AdcStreamP__Alarm__getNow();
      AdcStreamP__SingleChannel__configureSingle(c, AdcStreamP__AdcConfigure__getConfiguration(c));
      if (AdcStreamP__nextBuffer(FALSE) == SUCCESS) {
        AdcStreamP__sampleSingle();
        }
    }
  else 
#line 230
    {
      AdcStreamP__period = usPeriod;
      AdcStreamP__periodModified = FALSE;
      AdcStreamP__client = c;
      AdcStreamP__nextMultiple(c);
    }
  return SUCCESS;
}

#line 177
static error_t AdcStreamP__nextBuffer(bool startNextAlarm)
#line 177
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      struct AdcStreamP__list_entry_t *entry = AdcStreamP__bufferQueue[AdcStreamP__client];

      if (!entry) 
        {

          AdcStreamP__bufferQueueEnd[AdcStreamP__client] = (void *)0;
          AdcStreamP__readStreamDone__postTask();
          {
            unsigned char __nesc_temp = 
#line 187
            FAIL;

            {
#line 187
              __nesc_atomic_end(__nesc_atomic); 
#line 187
              return __nesc_temp;
            }
          }
        }
      else 
#line 190
        {
          AdcStreamP__bufferQueue[AdcStreamP__client] = entry->next;
          if (!AdcStreamP__bufferQueue[AdcStreamP__client]) {
            AdcStreamP__bufferQueueEnd[AdcStreamP__client] = &AdcStreamP__bufferQueue[AdcStreamP__client];
            }
#line 194
          AdcStreamP__pos = AdcStreamP__buffer = (void *)0;
          AdcStreamP__count = entry->count;
          AdcStreamP__pos = AdcStreamP__buffer = (uint16_t * )entry;
          if (startNextAlarm) {
            AdcStreamP__nextAlarm();
            }
#line 199
          {
            unsigned char __nesc_temp = 
#line 199
            SUCCESS;

            {
#line 199
              __nesc_atomic_end(__nesc_atomic); 
#line 199
              return __nesc_temp;
            }
          }
        }
    }
#line 203
    __nesc_atomic_end(__nesc_atomic); }
}

#line 204
static void AdcStreamP__nextMultiple(uint8_t c)
{
  if (AdcStreamP__nextBuffer(FALSE) == SUCCESS) {
      msp430adc12_channel_config_t config = *AdcStreamP__AdcConfigure__getConfiguration(c);

#line 208
      config.sampcon_ssel = SAMPCON_SOURCE_SMCLK;
      config.sampcon_id = SAMPCON_CLOCK_DIV_1;
      if (AdcStreamP__SingleChannel__configureMultiple(c, &config, AdcStreamP__pos, AdcStreamP__count, AdcStreamP__period) == SUCCESS) {
        AdcStreamP__SingleChannel__getData(c);
        }
      else 
#line 212
        {
          AdcStreamP__postBuffer(c, AdcStreamP__pos, AdcStreamP__count);
          AdcStreamP__readStreamFail__postTask();
        }
    }
}

# 80 "../../../tos/chips/msp430/adc12/AdcP.nc"
static void AdcP__ResourceRead__granted(uint8_t client)
{

  error_t result = AdcP__configure(client);

#line 84
  if (result == SUCCESS) {
      AdcP__state = AdcP__STATE_READ;
      result = AdcP__SingleChannel__getData(client);
    }
  else 
#line 87
    {
      AdcP__ResourceRead__release(client);
      AdcP__Read__readDone(client, result, 0);
    }
}

# 97 "TestPrintfC.nc"
static void TestPrintfC__Read__readDone(error_t result, uint16_t data)
#line 97
{
  if (result == SUCCESS) {
    TestPrintfC__Leds__led1On();
    }
#line 100
  TestPrintfC__dummyVar2 = data;
  TestPrintfC__v0 = TestPrintfC__v1 = data;
}

# 112 "../../../tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static void Msp430RefVoltArbiterImplP__RefVolt_2_5V__startDone(error_t error)
{
  if (Msp430RefVoltArbiterImplP__syncOwner != Msp430RefVoltArbiterImplP__NO_OWNER) {


      Msp430RefVoltArbiterImplP__ClientResource__granted(Msp430RefVoltArbiterImplP__syncOwner);
    }
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

# 147 "../../../tos/chips/msp430/adc12/Msp430RefVoltGeneratorP.nc"
static error_t Msp430RefVoltGeneratorP__stop(Msp430RefVoltGeneratorP__state_t nextState)
#line 147
{
  error_t result;

  if (Msp430RefVoltGeneratorP__m_state == Msp430RefVoltGeneratorP__GENERATOR_OFF) {
    result = EALREADY;
    }
  else {
#line 152
    if (Msp430RefVoltGeneratorP__m_state == Msp430RefVoltGeneratorP__REFERENCE_1_5V_STABLE || Msp430RefVoltGeneratorP__m_state == Msp430RefVoltGeneratorP__REFERENCE_2_5V_STABLE) {
        result = SUCCESS;
        Msp430RefVoltGeneratorP__m_state = nextState;
        Msp430RefVoltGeneratorP__SwitchOffTimer__startOneShot(20);
      }
    else {
#line 156
      if (Msp430RefVoltGeneratorP__m_state == Msp430RefVoltGeneratorP__REFERENCE_1_5V_ON_PENDING || Msp430RefVoltGeneratorP__m_state == Msp430RefVoltGeneratorP__REFERENCE_2_5V_ON_PENDING) {
          if ((result = Msp430RefVoltGeneratorP__switchOff()) == SUCCESS) {

              Msp430RefVoltGeneratorP__state_t oldState = Msp430RefVoltGeneratorP__m_state;

#line 160
              Msp430RefVoltGeneratorP__SwitchOnTimer__stop();
              Msp430RefVoltGeneratorP__m_state = Msp430RefVoltGeneratorP__GENERATOR_OFF;
              Msp430RefVoltGeneratorP__signalStartDone(oldState, FAIL);
              Msp430RefVoltGeneratorP__signalStopDone(nextState, SUCCESS);
            }
        }
      else {
#line 165
        if (Msp430RefVoltGeneratorP__m_state == nextState) {
          result = SUCCESS;
          }
        else {
#line 168
          result = EBUSY;
          }
        }
      }
    }
#line 170
  return result;
}

static void Msp430RefVoltGeneratorP__signalStartDone(Msp430RefVoltGeneratorP__state_t state, error_t result)
#line 173
{
  if (state == Msp430RefVoltGeneratorP__REFERENCE_1_5V_STABLE || state == Msp430RefVoltGeneratorP__REFERENCE_1_5V_ON_PENDING) {
    Msp430RefVoltGeneratorP__RefVolt_1_5V__startDone(result);
    }
  else {
#line 177
    Msp430RefVoltGeneratorP__RefVolt_2_5V__startDone(result);
    }
}

#line 180
static void Msp430RefVoltGeneratorP__signalStopDone(Msp430RefVoltGeneratorP__state_t state, error_t result)
#line 180
{
  if (state == Msp430RefVoltGeneratorP__REFERENCE_1_5V_STABLE || state == Msp430RefVoltGeneratorP__REFERENCE_1_5V_OFF_PENDING) {
    Msp430RefVoltGeneratorP__RefVolt_1_5V__stopDone(result);
    }
  else {
#line 184
    Msp430RefVoltGeneratorP__RefVolt_2_5V__stopDone(result);
    }
}

# 71 "../../../tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static void Msp430RefVoltArbiterImplP__AdcResource__granted(uint8_t client)
{
  const msp430adc12_channel_config_t *settings = Msp430RefVoltArbiterImplP__Config__getConfiguration(client);

#line 74
  if (settings->sref == REFERENCE_VREFplus_AVss || 
  settings->sref == REFERENCE_VREFplus_VREFnegterm) {
      error_t started;

#line 77
      if (Msp430RefVoltArbiterImplP__syncOwner != Msp430RefVoltArbiterImplP__NO_OWNER) {



          Msp430RefVoltArbiterImplP__AdcResource__release(client);
          Msp430RefVoltArbiterImplP__AdcResource__request(client);
          return;
        }
      Msp430RefVoltArbiterImplP__syncOwner = client;
      if (settings->ref2_5v == REFVOLT_LEVEL_1_5) {
          Msp430RefVoltArbiterImplP__ref2_5v = FALSE;
          started = Msp430RefVoltArbiterImplP__RefVolt_1_5V__start();
        }
      else {
          Msp430RefVoltArbiterImplP__ref2_5v = TRUE;
          started = Msp430RefVoltArbiterImplP__RefVolt_2_5V__start();
        }
      if (started != SUCCESS) {
          Msp430RefVoltArbiterImplP__syncOwner = Msp430RefVoltArbiterImplP__NO_OWNER;
          Msp430RefVoltArbiterImplP__AdcResource__release(client);
          Msp430RefVoltArbiterImplP__AdcResource__request(client);
        }
    }
  else {
#line 100
    Msp430RefVoltArbiterImplP__ClientResource__granted(client);
    }
}

# 95 "../../../tos/chips/msp430/adc12/Msp430RefVoltGeneratorP.nc"
static error_t Msp430RefVoltGeneratorP__start(Msp430RefVoltGeneratorP__state_t targetState)
#line 95
{
  error_t result;

  if (Msp430RefVoltGeneratorP__m_state == Msp430RefVoltGeneratorP__REFERENCE_1_5V_STABLE || Msp430RefVoltGeneratorP__m_state == Msp430RefVoltGeneratorP__REFERENCE_2_5V_STABLE) {
      if (targetState == Msp430RefVoltGeneratorP__m_state) {
          result = EALREADY;
        }
      else {
#line 101
        if ((result = Msp430RefVoltGeneratorP__switchOn(targetState)) == SUCCESS) {
            if (Msp430RefVoltGeneratorP__m_state == Msp430RefVoltGeneratorP__REFERENCE_1_5V_STABLE) {
                Msp430RefVoltGeneratorP__m_state = Msp430RefVoltGeneratorP__REFERENCE_2_5V_ON_PENDING;
                Msp430RefVoltGeneratorP__SwitchOnTimer__startOneShot(17);
              }
            else 
#line 105
              {
                Msp430RefVoltGeneratorP__m_state = Msp430RefVoltGeneratorP__REFERENCE_1_5V_ON_PENDING;
                Msp430RefVoltGeneratorP__SwitchOnTimer__startOneShot(70);
              }
          }
        }
    }
  else {
#line 110
    if (Msp430RefVoltGeneratorP__m_state == Msp430RefVoltGeneratorP__GENERATOR_OFF) {
        if ((result = Msp430RefVoltGeneratorP__switchOn(targetState)) == SUCCESS) {
            if (targetState == Msp430RefVoltGeneratorP__REFERENCE_1_5V_STABLE && Msp430RefVoltGeneratorP__SwitchOffSettleTimer__isRunning()) {
                Msp430RefVoltGeneratorP__SwitchOnTimer__startOneShot(70);
              }
            else {
              Msp430RefVoltGeneratorP__SwitchOnTimer__startOneShot(17);
              }
#line 117
            Msp430RefVoltGeneratorP__SwitchOffSettleTimer__stop();
            Msp430RefVoltGeneratorP__m_state = targetState + 2;
          }
      }
    else {
#line 120
      if (Msp430RefVoltGeneratorP__m_state == Msp430RefVoltGeneratorP__REFERENCE_1_5V_OFF_PENDING || Msp430RefVoltGeneratorP__m_state == Msp430RefVoltGeneratorP__REFERENCE_2_5V_OFF_PENDING) {
          if ((result = Msp430RefVoltGeneratorP__switchOn(targetState)) == SUCCESS) {

              Msp430RefVoltGeneratorP__state_t oldState = Msp430RefVoltGeneratorP__m_state;

#line 124
              Msp430RefVoltGeneratorP__SwitchOffTimer__stop();
              Msp430RefVoltGeneratorP__signalStopDone(oldState, FAIL);
              if (targetState == Msp430RefVoltGeneratorP__m_state - 4) {
                  Msp430RefVoltGeneratorP__m_state = targetState;
                  Msp430RefVoltGeneratorP__signalStartDone(targetState, SUCCESS);
                }
              else {
#line 130
                if (Msp430RefVoltGeneratorP__m_state == Msp430RefVoltGeneratorP__REFERENCE_1_5V_OFF_PENDING) {
                    Msp430RefVoltGeneratorP__m_state = Msp430RefVoltGeneratorP__REFERENCE_2_5V_ON_PENDING;
                    Msp430RefVoltGeneratorP__SwitchOnTimer__startOneShot(17);
                  }
                else {
                    Msp430RefVoltGeneratorP__m_state = Msp430RefVoltGeneratorP__REFERENCE_1_5V_ON_PENDING;
                    Msp430RefVoltGeneratorP__SwitchOnTimer__startOneShot(70);
                  }
                }
            }
        }
      else {
#line 139
        if (Msp430RefVoltGeneratorP__m_state == targetState + 2) {
          result = SUCCESS;
          }
        else {
#line 142
          result = EBUSY;
          }
        }
      }
    }
#line 144
  return result;
}

#line 240
static error_t Msp430RefVoltGeneratorP__switchOn(uint8_t level)
#line 240
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 241
    {
      if (Msp430RefVoltGeneratorP__HplAdc12__isBusy()) {
          {
            unsigned char __nesc_temp = 
#line 243
            EBUSY;

            {
#line 243
              __nesc_atomic_end(__nesc_atomic); 
#line 243
              return __nesc_temp;
            }
          }
        }
      else 
#line 245
        {
          adc12ctl0_t ctl0 = Msp430RefVoltGeneratorP__HplAdc12__getCtl0();

#line 247
          ctl0.enc = 0;
          Msp430RefVoltGeneratorP__HplAdc12__setCtl0(ctl0);
          ctl0.refon = 1;


          ctl0.r2_5v = level - 1;
          Msp430RefVoltGeneratorP__HplAdc12__setCtl0(ctl0);
          {
            unsigned char __nesc_temp = 
#line 254
            SUCCESS;

            {
#line 254
              __nesc_atomic_end(__nesc_atomic); 
#line 254
              return __nesc_temp;
            }
          }
        }
    }
#line 258
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

# 105 "../../../tos/chips/msp430/adc12/HplAdc12P.nc"
static void HplAdc12P__HplAdc12__stopConversion(void )
#line 105
{

  uint16_t ctl1 = HplAdc12P__ADC12CTL1;

#line 108
  HplAdc12P__ADC12CTL1 &= ~(0x0002 | 0x0004);
  HplAdc12P__ADC12CTL0 &= ~(0x001 + 0x002);
  HplAdc12P__ADC12CTL0 &= ~0x010;
  HplAdc12P__ADC12CTL1 |= ctl1 & (0x0002 | 0x0004);
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

# 107 "../../../tos/lib/printf/PutcharP.nc"
__attribute((noinline))   int putchar(int c)
#line 107
{
#line 119
  return PutcharP__Putchar__putchar(c);
}

# 120 "../../../tos/chips/msp430/adc12/HplAdc12P.nc"
__attribute((wakeup)) __attribute((interrupt(0x000E)))  void sig_ADC12_VECTOR(void )
#line 120
{
  HplAdc12P__HplAdc12__conversionDone(HplAdc12P__ADC12IV);
}

# 509 "../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static void Msp430Adc12ImplP__stopConversion(void )
{
  uint8_t i;

  if (Msp430Adc12ImplP__state & Msp430Adc12ImplP__USE_TIMERA) {
    Msp430Adc12ImplP__TimerA__setMode(MSP430TIMER_STOP_MODE);
    }
  Msp430Adc12ImplP__resetAdcPin(Msp430Adc12ImplP__HplAdc12__getMCtl(0).inch);
  if (Msp430Adc12ImplP__state & Msp430Adc12ImplP__MULTI_CHANNEL) {
      for (i = 1; i < Msp430Adc12ImplP__numChannels; i++) 
        Msp430Adc12ImplP__resetAdcPin(Msp430Adc12ImplP__HplAdc12__getMCtl(i).inch);
    }
  /* atomic removed: atomic calls only */
#line 521
  {
    Msp430Adc12ImplP__HplAdc12__stopConversion();
    Msp430Adc12ImplP__HplAdc12__resetIFGs();
    Msp430Adc12ImplP__state &= ~Msp430Adc12ImplP__ADC_BUSY;
  }
}

#line 165
static void Msp430Adc12ImplP__resetAdcPin(uint8_t inch)
{

  switch (inch) 
    {
      case 0: Msp430Adc12ImplP__Port60__selectIOFunc();
#line 170
      break;
      case 1: Msp430Adc12ImplP__Port61__selectIOFunc();
#line 171
      break;
      case 2: Msp430Adc12ImplP__Port62__selectIOFunc();
#line 172
      break;
      case 3: Msp430Adc12ImplP__Port63__selectIOFunc();
#line 173
      break;
      case 4: Msp430Adc12ImplP__Port64__selectIOFunc();
#line 174
      break;
      case 5: Msp430Adc12ImplP__Port65__selectIOFunc();
#line 175
      break;
      case 6: Msp430Adc12ImplP__Port66__selectIOFunc();
#line 176
      break;
      case 7: Msp430Adc12ImplP__Port67__selectIOFunc();
#line 177
      break;
    }
}

# 142 "../../../tos/chips/msp430/adc12/AdcP.nc"
static error_t AdcP__SingleChannel__singleDataReady(uint8_t client, uint16_t data)
{
  switch (AdcP__state) 
    {
      case AdcP__STATE_READ: 
        AdcP__owner = client;
      AdcP__value = data;
      AdcP__readDone__postTask();
      break;
      case AdcP__STATE_READNOW: 
        AdcP__ReadNow__readDone(client, SUCCESS, data);
      break;
      default: 

        break;
    }
  return SUCCESS;
}

# 240 "../../../tos/chips/msp430/adc12/AdcStreamP.nc"
static error_t AdcStreamP__SingleChannel__singleDataReady(uint8_t streamClient, uint16_t data)
{
  if (AdcStreamP__client == AdcStreamP__NSTREAM) {
    return FAIL;
    }
  if (AdcStreamP__count == 0) 
    {
      AdcStreamP__now = AdcStreamP__Alarm__getNow();
      AdcStreamP__nextBuffer(TRUE);
    }
  else 
    {
      * AdcStreamP__pos++ = data;
      if (AdcStreamP__pos == AdcStreamP__buffer + AdcStreamP__count) 
        {
          /* atomic removed: atomic calls only */
          {
            if (AdcStreamP__lastBuffer) 
              {

                AdcStreamP__bufferQueueEnd[AdcStreamP__client] = (void *)0;
                AdcStreamP__readStreamFail__postTask();
                {
                  unsigned char __nesc_temp = 
#line 262
                  FAIL;

#line 262
                  return __nesc_temp;
                }
              }
            else {
                AdcStreamP__lastCount = AdcStreamP__count;
                AdcStreamP__lastBuffer = AdcStreamP__buffer;
              }
          }
          AdcStreamP__bufferDone__postTask();
          AdcStreamP__nextBuffer(TRUE);
        }
      else {
        AdcStreamP__nextAlarm();
        }
    }
#line 276
  return FAIL;
}

static uint16_t *AdcStreamP__SingleChannel__multipleDataReady(uint8_t streamClient, 
uint16_t *buf, uint16_t length)
{
  /* atomic removed: atomic calls only */
  {
    if (AdcStreamP__lastBuffer) 
      {

        AdcStreamP__bufferQueueEnd[AdcStreamP__client] = (void *)0;
        AdcStreamP__readStreamFail__postTask();
        {
          unsigned int *__nesc_temp = 
#line 289
          0;

#line 289
          return __nesc_temp;
        }
      }
    else {
        AdcStreamP__lastBuffer = AdcStreamP__buffer;
        AdcStreamP__lastCount = AdcStreamP__pos - AdcStreamP__buffer;
      }
  }
  AdcStreamP__bufferDone__postTask();
  AdcStreamP__nextMultiple(streamClient);
  return 0;
}

