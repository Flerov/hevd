#define DRIVER_PATH "\\\\.\\HackSysExtremeVulnerableDriver"

/**
 * IOCTL code for HEVD 1.20
 */
#define IOCTL_HEVD_TYPE_CONFUSION       0x222023
#define IOCTL_HEVD_INTEGER_OVERFLOW     0x222027
#define IOCTL_HEVD_NULL_POINTER         0x22202b
#define IOCTL_HEVD_UNITIALIZED_STACK    0x22202f
#define IOCTL_HEVD_UNITIALIZED_HEAP     0x222033
#define IOCTL_HEVD_DOUBLE_FETCH         0x222037 // done win8
#define IOCTL_HEVD_STACK_OVERFLOW       0x222003 // done win8
#define IOCTL_HEVD_STACK_OVERFLOW_GS    0x221fff
#define IOCTL_HEVD_ARBITRARY_OVERWRITE  0x221ffb // done win8
#define IOCTL_HEVD_ALLOCATE_UAF         0x221ff7
#define IOCTL_HEVD_FREE_UAF             0x221ff3
#define IOCTL_HEVD_USE_UAF              0x221fef