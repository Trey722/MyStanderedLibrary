//
// Created by Trey Davidson on 11/4/23.
//

#include "generalPurposeDynamicArray.h"

#include "../libraryimports.h"

generalPurposeDynamicArray * initgpvector()
{
    generalPurposeDynamicArray * vector = malloc(sizeof(generalPurposeDynamicArray));

    if (vector == NULL) return NULL;

    void ** data = malloc(sizeof(void*) * 2);

    if (data == NULL)
    {
        free(vector);
        return NULL;
    }

    vector->data = data;
    vector->size = 0;
    vector->maxSize = 2;
    return vector;
}

int pushgpvector(void * data, generalPurposeDynamicArray * vector)
{
   if (vector == NULL) return NULL_Pointer;

    if (vector->size + 1 >= vector->maxSize)
    {
        void ** newdata = malloc(sizeof(void*) * vector->maxSize * 2);

        if (newdata == NULL) return MALLOC_Failed;

        for (int i = 0; i < vector->size; i++)
        {
            newdata[i] = vector->data[i];
        }

        vector->maxSize *= 2;
    }

    vector->data[vector->size] = data;
    vector->size += 1;
    return 0;
}

int popgpvector(generalPurposeDynamicArray * vector)
{

    if (vector == NULL) return NULL_Pointer;

    vector->size -= 1;
    return 0;
}

int dealtegpvector(int index, generalPurposeDynamicArray * vector)
{
    if (vector == NULL) return NULL_Pointer;

    if (index > vector->maxSize || index < 0) return UserError;

    vector->data[index] = vector->data[vector->size];

    return popgpvector(vector);
}

int freeVecotr(generalPurposeDynamicArray * vector)
{
    if (vector == NULL) return NULL_Pointer;

    free(vector->data);
    free(vector);
}