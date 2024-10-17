#include "rsa.h"



Crypt_RSA *new_rsa() {
    Crypt_RSA *new_key = (*Crypt_RSA)malloc(sizeof(*Crypt_RSA));
    
    new_key->key_bit_size = 0;
    new_key->public_modulus = BN_new();
    new_key->public_exponent = BN_new();
    new_key->private_exponent = BN_new();
    new_key->dQ = BN_new();
    new_key->qI = BN_new();

    return new_key;
}

void init_rsa(Crypt_RSA *key) {
    key = (*Crypt_RSA)malloc(sizeof(*Crypt_RSA));
    key->key_bit_size = 0;
    key->public_modulus = BN_new();
    key->public_exponent = BN_new();
    key->private_exponent = BN_new();
    key->dQ = BN_new();
    key->qI = BN_new();
}

int set_public_mod(Crypt_RSA *key, BIGNUM *n) {
    int bit_size = sizeof(n)/8;
    if (key == NULL || bit_size <= 2048 || bit_size > 8196)
        return -1;
    
    key->key_bit_size = bit_size;
    return 1;
}

int set_public_exp(Crypt_RSA *key, BIGNUM *e) {
    return 1;
}

int set_private_exp(Crypt_RSA *key, BIGNUM *d) {

}

int set_dQ(Crypt_RSA *key, BIGNUM *dQ) {

}

int set_qI(Crypt_RSA *key, BIGNUM *qI) {

}