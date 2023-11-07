//
// Created by Trey Davidson on 11/5/23.
//

#include "quickSelect.h"

#include "../vector/intVector.c"


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

int generateRandomNumber(int min, int max) {
    if (min > max) {
        // Swap min and max if min is greater than max
        int temp = min;
        min = max;
        max = temp;
    }

    return min + rand() % (max - min + 1);
}
//H is the HIGHEST INDEX not the size
int quickSelect(int *array, int l, int h, int K) {
    int x = generateRandomNumber(l, h );

    int M = arrayPartitation(array, l, h, x);

    if (M == K) return array[M];

    if (M < K) return quickSelect(array, M, h, K);

    return quickSelect(array, l, M, K);
}





