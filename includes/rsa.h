#ifndef RSA_H
#define RSA_H


#include <stdlib.h>
#include <openssl/bn.h>



typedef struct _rsa_keypair {
    int key_bit_size;            // key size in bit : only 2048, 3072 and 8196 are accepted
    BIGNUM *public_modulus;      //n
    BIGNUM *public_exponent;     //e
    BIGNUM *private_exponent;    //d
    BIGNUM *dQ;                  //dQ
    BIGNUM *qI;                  //q Inverse
} Crypt_RSA;


Crypt_RSA *new_rsa();
void init_rsa(Crypt_RSA *key);
int set_public_mod(Crypt_RSA *key, BIGNUM *n);
int set_public_exp(Crypt_RSA *key, BIGNUM *e);
int set_private_exp(Crypt_RSA *key, BIGNUM *d);
int set_dQ(Crypt_RSA *key, BIGNUM *dQ);
int set_qI(Crypt_RSA *key, BIGNUM *qI);

Crypt_RSA *generate(int key_bit_size);
int encrypt(Crypt_RSA *key, const char *pt, const char *ct, size_t pt_size, size_t ct_size);
int decrypt(Crypt_RSA *key, const char *ct, const char *pt, size_t ct_size, size_t pt_size);




#endif