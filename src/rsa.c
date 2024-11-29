#include "rsa.h"



rsa_ctx *new_rsa() {
    rsa_ctx *new_key = (rsa_ctx*)malloc(sizeof(rsa_ctx));
    
    new_key->key_bit_size = 0;
    new_key->public_modulus = BN_new();
    new_key->public_exponent = BN_new();
    new_key->private_exponent = BN_new();
    new_key->dQ = BN_new();
    new_key->qI = BN_new();

    return new_key;
}

int init_rsa(rsa_ctx *key) {
    if (key != NULL)
        return 0;

    key = (rsa_ctx*)malloc(sizeof(rsa_ctx));
    key->key_bit_size = 0;
    key->public_modulus = BN_new();
    key->public_exponent = BN_new();
    key->private_exponent = BN_new();
    key->dQ = BN_new();
    key->qI = BN_new();

    return 1;
}

int set_public_mod(rsa_ctx *key, BIGNUM *n) {
    int bit_size = sizeof(n)/8;
    if (key == NULL || bit_size <= 2048 || bit_size > 8196)
        return -1;
    
    key->key_bit_size = bit_size;
    return 1;
}

int set_public_exp(rsa_ctx *key, BIGNUM *e) {
    return 1;
}

int set_private_exp(rsa_ctx *key, BIGNUM *d) {

}

int set_dQ(rsa_ctx *key, BIGNUM *dQ) {

}

int set_qI(rsa_ctx *key, BIGNUM *qI) {

}

int verify_key_validity(rsa_ctx *key) {

}

int encrypt(rsa_ctx *key, const char *pt, const char *ct, size_t pt_size, size_t ct_size) {

}

int decrypt(rsa_ctx *key, const char *ct, const char *pt, size_t ct_size, size_t pt_size) {

}

rsa_ctx *generate(int key_bit_size) {

}