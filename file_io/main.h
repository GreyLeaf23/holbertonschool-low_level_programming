#ifndef main_h
#define main_h
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

/*Function Prototypes.*/

ssize_t read_textfile(const char *filename, size_t letters);

#endif
