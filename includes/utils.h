#ifndef UTILS_H
#define UTILS_H


#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>



static int getentropy_urandom(void *buf, size_t len);



#endif