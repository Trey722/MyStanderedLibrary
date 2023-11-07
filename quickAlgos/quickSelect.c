//
// Created by Trey Davidson on 11/5/23.
//

#include "quickSelect.h"

#include "../vector/intVector.c"

#include "../random/randomInt.c"


typedef dynamicArrayforInt intVector;

int arrayPartitation(int *array, int l, int h, int index) {
   intVector * lower = initIntVector();

   intVector * higher = initIntVector();

   int indexValue = array[index];

   int duplicate = 0;

   for (int i = l; i < h + 1; i++)
   {
       if (i == index && duplicate == 0) {
           duplicate = 1;
           continue;
       }

       if (array[i] < indexValue) pushIntVector(array[i], lower);

       else pushIntVector(array[i], higher);
   }

   int x = l;
   int curPop = 0;
   while (lower->size > 0)
   {
       curPop = popIntVector(lower);
       array[x] = curPop;
       x += 1;
   }
   int K = x;

   array[K] = indexValue;

   x += 1;

   while (higher->size > 0)
   {
       curPop = popIntVector(higher);
       array[x] = curPop;
       x += 1;
   }

   freeIntVector(lower);
   freeIntVector(higher);
   return K;

}


//H is the HIGHEST INDEX not the size
int quickSelect(int *array, int l, int h, int K) {
    int x = generateRandomNumberInt(l, h );

    int M = arrayPartitation(array, l, h, x);

    if (M == K) return array[M];

    if (M < K) return quickSelect(array, M, h, K);

    return quickSelect(array, l, M, K);
}

int checkSort(int * array, int l, int h)
{
    for (int i = l; i < h - 1; i++)
    {
        if (array[i] > array[i + 1]) return 1;
    }

    return 0;
}

void quickSort(int * array, int l, int h)
{
    if (l >= h) return;

    if (checkSort(array, l, h) == 0) return; //This allows to lower the amount of work.


    int K = arrayPartitation(array, l, h, l); // This sets the index to the zeorth.

    quickSort(array, l, K - 1);

    quickSort(array, K + 1, h);

    return;

}


int main(void)
{

    int array[] = {5, 4, 7, 6, 1, 9, 2, 0, 3};

    quickSort(array, 0, 8);

    printArray(array, 9);
}






