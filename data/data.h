//
// Created by 501541 on 18.05.2026.
//

#ifndef MODELOWANIE_WIAZAN_CHEMICZNYCH_DATA_H
#define MODELOWANIE_WIAZAN_CHEMICZNYCH_DATA_H
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
int read_at
#endif //MODELOWANIE_WIAZAN_CHEMICZNYCH_DATA_H