# include <stdio.h>
#include <math.h>
#include "chemistry.h"
#include "../data/data.h"

double wynik;

double odleglosc(double x1, double y1, double z1,
                 double x2, double y2, double z2)
{
    double dx = x2 - x1 ;
    double dy = y2 - y1 ;
    double dz = z2 - z1;

    return wynik = sqrt(dx * dx + dy * dy + dz * dz);
}

