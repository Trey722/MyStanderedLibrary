//
// Created by Trey Davidson on 11/7/23.
//

#include "medianOfMedians.h"

#include "../quickAlgos/quickSelect.c"

#include "../libraryimports.h"

//This returns three numbers
// array[0] = Error Codes or Size of array | array[1] and array[2] results
int * findMedianWithMaxSize5(int * array, int size)
{
    int * result = malloc(sizeof(int) * 3);

    if (result == NULL) return NULL;
    if (size > 5)
    {
        result[0] = UserError;
        return result;
    }

    else if (array == NULL)
    {
        result[0] = NULL_Pointer;
        return result;
    }

    if (size == 1)
    {
        result[0] = 1;
        return result;
    }

    else if (size == 2)
    {
        result[0] = 2;
        result[1] = array[0];
        result[2] = array[1];
        return result;
    }

    quickSort(array, 0, size - 1);

    if (size == 3)
    {
        result[0] = 1;
        result[1] = array[1];
    }

    else if (size == 4)
    {
        result[0] = 2;
        result[1] = array[1];
        result[2] =array[2];
        return result;

    }

    else if (size == 5)
    {
        result[0] = 1;
        result[1] = array[2];
        return result;
    }

    return result;
}


