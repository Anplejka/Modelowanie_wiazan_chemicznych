#include <stdio.h>
#include <stdlib.h>
#include "../data/data.h"
typedef struct {
    float x;
    float y;
    float z;
} position_t;
typedef struct {
    int id;
    int type;
    position_t pos;
} atom_t;
int read_atoms(const char *filename, atom_t **atoms) {
    FILE *f;

    //otwieranie pliku
    f = fopen(filename, "r");
    //sprawdzenie, czy plik istnieje
    if (f == NULL) {
        printf("Blad otwierania pliku\n");
        return -1;
    }
    //liczba atomów
int n;
    //wczytanie liczby atomów
    fscanf(f, "%d", &n);

    //zmienne na rozmiar pudla
    float boxx, boxy, boxz;

    //wczytanie rozmiaru
    fscanf(f, "%f %f %f", &boxx, &boxy, &boxz);
    printf("Rozmiar pudla: %f %f %f\n",
        boxx, boxy, boxz);
    //alokacja pamięci
    *atoms = malloc(n * sizeof(atom_t));

    //sprawdzenie malloc
    if (*atoms == NULL);
{
    printf("Blad malloc\n");
    fclose(f);
    return -1;
}
        //pętla wczytująca atomy
        for (int i = 0; i < n; i++) {

        }