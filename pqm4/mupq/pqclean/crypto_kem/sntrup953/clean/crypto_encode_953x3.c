#include "crypto_encode_953x3.h"

#define uint8 uint8_t

#define p 953

void PQCLEAN_SNTRUP953_CLEAN_crypto_encode_953x3(unsigned char *s, const void *v) {
    const uint8 *f = v;
    uint8 x;
    int i;

    for (i = 0; i < p / 4; ++i) {
        x = *f++ + 1;
        x += (*f++ + 1) << 2;
        x += (*f++ + 1) << 4;
        x += (*f++ + 1) << 6;
        *s++ = x;
    }
    x = *f++ + 1;
    *s++ = x;
}
