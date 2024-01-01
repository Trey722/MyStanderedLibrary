
#ifndef MYSTANDEREDLIBRARY_DICT_H
#define MYSTANDEREDLIBRARY_DICT_H

#include "../libraryimports.h"
#include "hashPair.h"

typedef struct hashTable
{
    hashpair ** hashtable;
    int size;
    int maxSize; // maxSize is used to keep track of collisons
} hashTable;


//WIll return NULL upond fialured
hashTable  * initHashTable(int table_size);


typedef unsigned int (*HashFunction)(char*);

//WIll return 0 for no collision and 1 for collison
//WIll return erorr codes
int insert(char* key, int value, HashFunction hashFunc,  hashTable * table);

int get(char* key, HashFunction hashFunc, hashTable * table);

int freeTable(hashTable * table);

#endif //MYSTANDEREDLIBRARY_DICT_H
