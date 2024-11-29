#include "rsa.h"



int verify_key_validity(rsa_ctx *key) {
    return 1;
}

int encrypt(rsa_ctx *key, const char *pt, const char *ct, size_t pt_size, size_t ct_size) {
    return 1;
}

int decrypt(rsa_ctx *key, const char *ct, const char *pt, size_t ct_size, size_t pt_size) {
    return 1;
}

rsa_ctx *generate(int key_bit_size) {
    if (verify_key_validity(key_bit_size) == 0)
        return;

}