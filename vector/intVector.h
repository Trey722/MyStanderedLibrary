//
// Created by Trey Davidson on 11/4/23.
//

#ifndef MYSTANDEREDLIBRARY_INTVECTOR_H
#define MYSTANDEREDLIBRARY_INTVECTOR_H

#include "stdlib.h"
#include "../libraryimports.h"


typedef struct dynamicArrayforInt{

    int * data;
    int size;
    int maxSize;

} dynamicArrayforInt;


dynamicArrayforInt * initIntVector();

int pushIntVector(int data, dynamicArrayforInt * vector);

int popIntVector(dynamicArrayforInt * vector);

int dealteIntVector(int index, dynamicArrayforInt * vector);

int freeIntVector(dynamicArrayforInt * vector);

#endif //MYSTANDEREDLIBRARY_INTVECTOR_H
