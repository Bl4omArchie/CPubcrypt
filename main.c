#include <stdio.h>
#include <stdlib.h>

#include "includes/rsa.h"



int main() {

    rsa_ctx *key = new_rsa();

    destroy_key(key);

    return 0;
}