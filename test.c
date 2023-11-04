//
// Created by Trey Davidson on 11/4/23.
//

#include "MyLib.h"

int main(void)
{
    int * array = createStanderedNumberArray(10);
    if (array == NULL) return 1;
    printArray(array, 10);
    return 0;
}