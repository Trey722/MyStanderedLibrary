//
// Created by Trey Davidson on 11/8/23.
//


#include "errorCodes.h"

#include "stdlib.h"

int safe_int_derefecing(int * ptr)
{
    if (ptr == NULL) return NULL_Pointer;

    else return *ptr;
}