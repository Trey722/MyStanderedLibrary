#ifndef MYSTANDEREDLIBRARY_BST_H
#define MYSTANDEREDLIBRARY_BST_H

#include "../libraryimports.h"


typedef struct BST{
    struct BST * left;
    struct BST * right;
    void * data;
    int key;
    int size;
} BST;


BST * initBST();






#endif //MYSTANDEREDLIBRARY_BST_H
