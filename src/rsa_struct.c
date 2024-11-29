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
    if (key == NULL)
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

int destroy_key(rsa_ctx *key) {
    if (key == NULL)
        return 0;

    BN_clear(key->public_modulus);
    BN_clear(key->public_exponent);
    BN_clear(key->private_exponent);
    BN_clear(key->dQ);
    BN_clear(key->qI);
    BN_free(key->public_modulus);
    BN_free(key->public_exponent);
    BN_free(key->private_exponent);
    BN_free(key->dQ);
    BN_free(key->qI);
    free(key);
}

int set_public_mod(rsa_ctx *key, BIGNUM *n) {
    int bit_size = sizeof(n)/8;
    if (key == NULL || bit_size <= 2048 || bit_size > 8196)
        return 0;
    
    key->key_bit_size = bit_size;
    return 1;
}

int set_public_exp(rsa_ctx *key, BIGNUM *e) {
    if (key == NULL)
        return 0;
}

int set_private_exp(rsa_ctx *key, BIGNUM *d) {
    if (key == NULL)
        return 0;
}

int set_dQ(rsa_ctx *key, BIGNUM *dQ) {
    if (key == NULL)
        return 0;
}

int set_qI(rsa_ctx *key, BIGNUM *qI) {
    if (key == NULL)
        return 0;
}