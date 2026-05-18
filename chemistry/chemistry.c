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

float angle(atom_t a, atom_t b, atom_t c)
{
    // wektor BA
    float bax = a.pos.x - b.pos.x;
    float bay = a.pos.y - b.pos.y;
    float baz = a.pos.z - b.pos.z;

    // wektor BC
    float bcx = c.pos.x - b.pos.x;
    float bcy = c.pos.y - b.pos.y;
    float bcz = c.pos.z - b.pos.z;

    // iloczyn skalarny
    float dot = bax * bcx + bay * bcy + baz * bcz;

    // długości wektorów
    float lenBA = sqrt(bax*bax + bay*bay + baz*baz);
    float lenBC = sqrt(bcx*bcx + bcy*bcy + bcz*bcz);

    if (lenBA == 0 || lenBC == 0)
        return 0;

    float cos_theta = dot / (lenBA * lenBC);

    // zabezpieczenie numeryczne
    if (cos_theta > 1) cos_theta = 1;
    if (cos_theta < -1) cos_theta = -1;

    return acos(cos_theta);
}

float bond_probability(atom_t a, atom_t b, float max_distance)
{
    float dist = distance(a, b);

    if (dist > max_distance)
        return 0.0f;

    return 1.0f - (dist / max_distance);
}