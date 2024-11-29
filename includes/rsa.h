#ifndef RSA_H
#define RSA_H


#include <stdlib.h>
#include <openssl/bn.h>



typedef struct _rsa_keypair_context {
    int key_bit_size;            // key size in bit : only 2048, 3072 and 8196 are accepted
    BIGNUM *public_modulus;      //n
    BIGNUM *public_exponent;     //e
    BIGNUM *private_exponent;    //d
    BIGNUM *dQ;                  //dQ
    BIGNUM *qI;                  //q Inverse
} rsa_ctx;


rsa_ctx *new_rsa();
int init_rsa(rsa_ctx *key);
int set_public_mod(rsa_ctx *key, BIGNUM *n);
int set_public_exp(rsa_ctx *key, BIGNUM *e);
int set_private_exp(rsa_ctx *key, BIGNUM *d);
int set_dQ(rsa_ctx *key, BIGNUM *dQ);
int set_qI(rsa_ctx *key, BIGNUM *qI);

rsa_ctx *generate(int key_bit_size);
int verify_key_validity(rsa_ctx *key);

int encrypt(rsa_ctx *key, const char *pt, const char *ct, size_t pt_size, size_t ct_size);
int decrypt(rsa_ctx *key, const char *ct, const char *pt, size_t ct_size, size_t pt_size);



#endif