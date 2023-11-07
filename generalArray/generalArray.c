//
// Created by Trey Davidson on 11/4/23.
//

#include "generalArray.h"


int * createStanderedNumberArray(int size)
{
    int * array = malloc(sizeof(int) * size);

    if (array == NULL) return NULL;

    for (int i =0; i < size; i++)
    {
        array[i] = i;
    }
    return array;
}

void printArray(int * array, int size)
{
    for (int i =0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}