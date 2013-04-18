#ifndef crypto_onetimeauth_poly1305_ref_H
#define crypto_onetimeauth_poly1305_ref_H

#include "crypto_onetimeauth_poly1305.h"

#ifdef __cplusplus
extern "C" {
#endif

struct crypto_onetimeauth_poly1305_implementation
       crypto_onetimeauth_poly1305_ref_implementation(void);

const char *crypto_onetimeauth_poly1305_ref_implementation_name(void);
    
int crypto_onetimeauth_poly1305_ref(unsigned char *out,
                                    const unsigned char *in,
                                    unsigned long long inlen,
                                    const unsigned char *k);

int crypto_onetimeauth_poly1305_ref_verify(const unsigned char *h,
                                           const unsigned char *in,
                                           unsigned long long inlen,
                                           const unsigned char *k);

#ifdef __cplusplus
}
#endif

#endif
