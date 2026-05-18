# include <stdio.h>
#include <math.h>
#include "chemistry.h"
#include "../data/data.h"

float wynik;

double distance(float x1, float y1, float z1, float x2, float y2, float z2)
{
    float dx = x2 - x1 ;
    float dy = y2 - y1 ;
    float dz = z2 - z1;

    return wynik = sqrt(dx * dx + dy * dy + dz * dz);
}

