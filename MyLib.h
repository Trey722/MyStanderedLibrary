//
// Created by Trey Davidson on 11/4/23.
//

#ifndef MYSTANDEREDLIBRARY_MYLIB_H
#define MYSTANDEREDLIBRARY_MYLIB_H



#include "generalVector/generalPurposeDynamicArray.c"
#include "vector/intVector.c"
#include "generalArray/generalArray.c"

/*  Section for standered Array*/

int * createStanderedNumberArray(int size);

void printArray(int * array, int size);


/* Section for dynamic arrays*/

generalPurposeDynamicArray * initgpvector();

int pushgpvector(void * data, generalPurposeDynamicArray * vector);

int popgpvector(generalPurposeDynamicArray * vector);

int dealtegpvector(int index, generalPurposeDynamicArray * vector);

int freeVecotr(generalPurposeDynamicArray * vector);

// This begins the dynamicArray for ints portion


dynamicArrayforInt * initIntVector();

int pushIntVector(int data, dynamicArrayforInt * vector);

int popIntVector(dynamicArrayforInt * vector);

int dealteIntVector(int index, dynamicArrayforInt * vector);

int freeIntVector(dynamicArrayforInt * vector);

/* This begins the section for Binary Trees */

//Binary Search Tree



#endif //MYSTANDEREDLIBRARY_MYLIB_H
