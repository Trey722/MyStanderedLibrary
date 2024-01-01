//
// Created by Trey Davidson on 11/9/23.
//

#ifndef MYSTANDEREDLIBRARY_LINKEDLIST_H
#define MYSTANDEREDLIBRARY_LINKEDLIST_H

#include "../libraryimports.h"

typedef struct LinkedList {
    struct LL_Node * head;
    int size;
    int maxSize;
    struct LL_Node * tail;
} LinkedList;

typedef struct LL_Node
{
    struct LL_Node * next;
    void * data;
    int key;
} LL_Node;

LinkedList * initLinkedList();

int insertLinkedList(int key, void * data, LinkedList * list);

int popLinkedList(LinkedList * list);

void printListKeys(LinkedList * list);






#endif //MYSTANDEREDLIBRARY_LINKEDLIST_H
