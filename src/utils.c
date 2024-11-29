#include "utils.h"




// Source : https://github.com/veorq/cryptocoding?tab=readme-ov-file#use-strong-randomness
static int getentropy_urandom(void *buf, size_t len) {
    int randint;
    int bytes_read;
    int fd = open("/dev/urandom", O_RDONLY);
    
    if (fd != -1) {
        bytes_read = read(fd, &randint, sizeof(randint));
        if (bytes_read != sizeof(randint)) {
        fprintf(stderr, "read() failed (%d bytes read)\n", bytes_read);
        return -1;
        }
    }
    
    else {
        fprintf(stderr, "open() failed\n");
        return -2;
    }
    printf("%08x\n", randint); /* assumes sizeof(int) <= 4 */
    close(fd);
    return 0;
}