//
// Created by Trey Davidson on 11/4/23.
//

#include "intVector.h"

#include "../generalArray/generalArray.c"


dynamicArrayforInt * initIntVector()
{
    dynamicArrayforInt * vector = malloc(sizeof(dynamicArrayforInt));

    if (vector == NULL) return NULL;

    int * data = malloc(sizeof(int) * 2);

    if (data == NULL) {
        free(vector);
        return NULL;
    }

    vector->data = data;
    vector->size = 0;
    vector->maxSize = 2;

    return vector;

}

int pushIntVector(int data, dynamicArrayforInt * vector)
{
    if (vector == NULL) return NULL_Pointer;

    if (vector->size + 1 > vector->maxSize)
    {
        int * newData = malloc(sizeof(int) * vector->maxSize * 2);
        if (newData == NULL) return MALLOC_Failed;
        for (int i =0; i < vector->size; i++)
        {
            newData[i] = vector->data[i];
        }

        free(vector->data);
        vector->data = newData;
        vector->maxSize *= 2;
    }
    vector->data[vector->size] = data;
    vector->size += 1;
    return 0;

}

int popIntVector(dynamicArrayforInt * vector)
{
    if (vector == NULL) return NULL_Pointer;
    vector->size -= 1;
    return vector->data[vector->size];
}

int dealteIntVector(int index, dynamicArrayforInt * vector)
{
    if (vector == NULL) return NULL_Pointer;
    if (index > vector->size || index < 0) return UserError;

    vector->data[index] = vector->data[vector->size];

    return 0;

}
//This function frees and returns the data the vector holds
int * freeAndReturnVector(dynamicArrayforInt * vector)
{
    int * data = vector->data;
    free(vector);
    return data;
}

int freeIntVector(dynamicArrayforInt * vector)
{
    if (vector == NULL) return NULL_Pointer;
    free(vector->data);
    free(vector);
    return 0;
}

void printVector(dynamicArrayforInt * vector)
{
    printArray(vector->data, vector->size);
}