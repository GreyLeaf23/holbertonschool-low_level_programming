#ifndef search_algos_h
#define search_algos_h
#include <stdio.h>
#include <stdlib.h>

/*Function Prototypes*/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, int left, int right);

#endif
