#ifndef MAGO_H
#define MAGO_H

#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int recu_binary_search(int *array, size_t left, size_t right, int value);

#endif
