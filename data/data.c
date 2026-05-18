#include <stdio.h>
#include <stdlib.h>
#include "../data/data.h"
int read_atoms(const char *filename, atom_t **atoms) {
    FILE *f = fopen(filename, "r");
    //sprawdzenie, czy plik istnieje
    if (f == NULL) {
        printf("Blad otwierania pliku\n");
        return -1;
    }
    //liczba atomów
    int n;

    //wczytanie liczby atomów, zabezpieczenie
    if (fscanf(f, "%d", &n) != 1) {
        printf("Blad wczytania n\n");
        fclose(f);
        return -1;
    }
    //sprawdza, czy liczba atomów jest większa niż 0
    if (n<=0) {
        printf("Blad: nieprawidlowa liczba atomow\n");
        fclose(f);
        return -1;
    }

    //alokacja pamięci
    *atoms = malloc(n * sizeof(atom_t));

    //sprawdzenie malloc
    if (*atoms == NULL)
    {
        printf("Blad malloc\n");
        fclose(f);
        return -1;
    }
    //pętla wczytująca atomy

    for (int i = 0; i < n; i++) {
        if (fscanf(f, "%d %f %f %f",
            &(*atoms)[i].type,
            &(*atoms)[i].pos.x,
            &(*atoms)[i].pos.y,
            &(*atoms)[i].pos.z) != 4)
        {
            printf("Blad atomu %d\n", i);
            fclose(f);
            return -1;
        }
        (*atoms)[i].id = i;
    }
    fclose(f);
    return n;
    /xdddddddd
}