//
// Created by Trey Davidson on 11/6/23.
//

#include "randomInt.h"

#include "../libraryimports.h"


int generateRandomNumberInt(int min, int max) {
    if (min > max) {
        // Swap min and max if min is greater than max
        int temp = min;
        min = max;
        max = temp;
    }

    return min + rand() % (max - min + 1);
}

int * generateRandomArrayofInts(int min, int max, int size)
{
    int * array = malloc(sizeof(int) * size);

    if (array == NULL) return NULL;

    for (int i =0; i < size; i++)
    {
        array[i] = generateRandomNumberInt(min, max);
    }

    return array;
}