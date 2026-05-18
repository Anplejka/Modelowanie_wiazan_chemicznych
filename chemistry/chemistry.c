# include <stdio.h>
#include <math.h>
#include "chemistry.h"
#include "../data/data.h"


float distance(atom_t a, atom_t b)
{
    float dx = a.pos.x - b.pos.x;
    float dy = a.pos.y - b.pos.y;
    float dz = a.pos.z - b.pos.z;

    return sqrt(dx * dx + dy * dy + dz * dz);
}

float angle(atom_t a, atom_t b)
{
    // iloczyn skalarny
    float dot = a.pos.x * b.pos.x + a.pos.y * b.pos.y + a.pos.z * b.pos.z;

    float len = distance(atom_t a, atom_t b;
    float cos_theta = dot / (len * len);

    // zabezpieczenie przed błędem numerycznym
    if (cos_theta > 1) cos_theta = 1;
    if (cos_theta < -1) cos_theta = -1;

    return acos(cos_theta); // wynik w radianach
}
