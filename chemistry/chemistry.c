# include <stdio.h>
#include <math.h>
#include "chemistry.h"
#include "../data/data.h"


float distance(atom_t a, atom_t b)
{
    float dx = a.x - b.x;
    float dy = a.y - b.y;
    float dz = a.z - b.z;

    return sqrt(dx * dx + dy * dy + dz * dz);
}

