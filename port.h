#include <stdint.h>

typedef unsigned char BOOL;

typedef unsigned char UCHAR;
typedef char    CHAR;

typedef unsigned int USHORT;
typedef int     SHORT;

typedef unsigned long ULONG;
typedef long    LONG;

typedef union {
    struct {
		uint8_t high;
        uint8_t low;
    } bytes;
    uint16_t value;
} CRC_t, MbDataField; 

