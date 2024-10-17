#include <stdio.h>
#include <stdlib.h>


#include "includes/rsa.h"

int main() {

    BIGNUM *test;
    BN_init(test);
    BN_free(test);
    return 0;
}