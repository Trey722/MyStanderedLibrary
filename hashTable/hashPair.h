//
// Created by Trey Davidson on 12/30/23.
//

#ifndef MYSTANDEREDLIBRARY_HASHPAIR_H
#define MYSTANDEREDLIBRARY_HASHPAIR_H

typedef struct hashpair
{
    char * key;
    int value;
    void * next;

} hashpair;

hashpair * createHashPair();


//Error needs to be 0
int insertHashPair(char * key, int value, hashpair * pair, int error);

void freeHashPair(hashpair  * pair);

#endif //MYSTANDEREDLIBRARY_HASHPAIR_H
