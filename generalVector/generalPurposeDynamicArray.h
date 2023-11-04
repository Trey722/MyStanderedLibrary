//
// Created by Trey Davidson on 11/4/23.
//

#ifndef MYSTANDEREDLIBRARY_GENERALPURPOSEDYNAMICARRAY_H
#define MYSTANDEREDLIBRARY_GENERALPURPOSEDYNAMICARRAY_H

typedef struct generalPurposeDynamicArray{

    void ** data;
    int size;
    int maxSize;

}generalPurposeDynamicArray;

generalPurposeDynamicArray * initgpvector();

int pushgpvector(void * data, generalPurposeDynamicArray * vector);

int popgpvector(generalPurposeDynamicArray * vector);

int dealtegpvector(int index, generalPurposeDynamicArray * vector);

int freeVecotr(generalPurposeDynamicArray * vector);

#endif //MYSTANDEREDLIBRARY_GENERALPURPOSEDYNAMICARRAY_H
