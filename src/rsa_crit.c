#include "rsa.h"



int is_valid_mod(BIGNUM *n) {
    return 1;
}

int is_valid_pubexp(BIGNUM *e) {
    return 1;
}

int is_valid_pvexp(BIGNUM *d) {
    return 1;
}

int is_valid_key_size(int key_size) {
    return key_size >= 2048 && key_size <= 8192;
}