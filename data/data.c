#include <stdio.h>
#include <stdlib.h>
#include "../data/data.h"
typedef struct {
    int id;
    int type;
    float x;
    float y;
    float z;
} atom_t;
// int read_ atoms(const char *filename, atom_t **atoms) {
//    f = fopen(filename, "r");
// if (f == NULL) return -1;

