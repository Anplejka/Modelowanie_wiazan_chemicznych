#include <stdio.h>
#include "../data/data.h"
#include "simulation.h"
#include "../chemistry/chemistry.h"

// Variables
int count = 0;


// Function declarations
void simulate(atom_t *atoms, int n);



// Functions
void simulate(atom_t *atoms, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)                 // j = i + 1 zeby nie liczyc dwa razy tych samych par
        {
            float dist = distance(atoms[i], atoms[j]);
            float p = bond_probability(atoms[i], atoms[j], dist);

            if (p > 0.5)                                // jesli prawdopodobienstwo jest duze to jest wiazanie
            {
                count++;

                printf("Wiazanie: %d - %d  Dystans:%.2f  Prawdopodobienstwo:%.2f\n", atoms[i].id, atoms[j].id, dist, p);
            }
        }
    }

    printf("Liczba wiazan: %d\n", count);
}
