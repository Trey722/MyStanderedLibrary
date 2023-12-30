//
//
//

#ifndef MYSTANDEREDLIBRARY_MYLIB_H
#define MYSTANDEREDLIBRARY_MYLIB_H



#include "generalVector/generalPurposeDynamicArray.c"


#include "vector/intVector.c"


#include "generalArray/generalArray.c"

#include "genericKDTree/kdTree.c"


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



//This function frees and returns the data the vector holds
int * freeAndReturnVector(dynamicArrayforInt * vector);

/* This begins the section for Binary Trees */


Node *initTree(int K);

void insertTree(Point * A, Node *tree, int depth, void *data);

void printNode(Node *node);

void printTree(Node *tree);

void freeTree(Node *tree);

void printTree(Node *tree);


/*  This begins the quick algorithms */

#include "quickAlgos/quickSelect.c"


int arrayPartitation(int *array, int l, int h, int index);


int quickSelect(int *array, int l, int h, int K);

/* This begins the random section*/

//Section for Ints

int generateRandomNumberInt(int min, int max);

int * generateRandomArrayofInts(int min, int max, int size);

/* Efficent Stats finds */

#include "Stats/medianOfMedians.c"

int * findMedianWithMaxSize5(int * array, int size);


#endif //MYSTANDEREDLIBRARY_MYLIB_H
