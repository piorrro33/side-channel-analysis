#include "crypto_decode_1013xint32.h"


void PQCLEAN_SNTRUP1013_AVX2_crypto_decode_1013xint32(void *v, const unsigned char *s) {
    uint32_t *x = v;
    int i;

    for (i = 0; i < 1013; ++i) {
        uint32_t u0 = s[0];
        uint32_t u1 = s[1];
        uint32_t u2 = s[2];
        uint32_t u3 = s[3];
        u1 <<= 8;
        u2 <<= 16;
        u3 <<= 24;
        *x = u0 | u1 | u2 | u3;
        x += 1;
        s += 4;
    }
}
