//
// Created by Trey Davidson on 11/9/23.
//

#include "linkedList.h"


LinkedList * initLinkedList()
{
    LinkedList * newList = malloc(sizeof(LinkedList));

    if (newList == NULL) return NULL;

    LL_Node * newNode = malloc(sizeof(LL_Node));

    if (newNode == NULL)
    {
        free(newList);
        return NULL;
    }

    newNode->next = NULL;
    newNode->key = INT_MIN;
    newNode->data = NULL;

    newList->size = 0;
    newList->maxSize = 1;
    newList->size = 0;
    newList->tail = newNode;
    newList->head = newNode;
    return newList;
}


// 0 repersents succues
int insertLinkedList(int key, void * data, LinkedList * list)
{

    if (list == NULL) return NULL_Pointer;



    if (list->size + 1 > list->maxSize)
    {
        LL_Node * newNode = malloc(sizeof(LL_Node));

        if (newNode == NULL) return MALLOC_Failed;

        newNode->next = NULL;
        newNode->key = key;
        newNode->data = data;

        list->size += 1;

        list->tail->next = newNode;
        list->tail = newNode;

        return 0;
    }
    //Sets the Tail to the thing after the poointer
    list->tail->data = data;
    list->tail->key = key;
    list->tail = list->tail->next;

    list->size += 1;

    return 0;
}

int popLinkedList(LinkedList * list)
{
    list->size -= 1;
    return 0;
}

void printListKeys(LinkedList * list)
{

    if (list == NULL) return;

    int size = list->size - 1;

    LL_Node * curNode = list->head;

    while (size != 0)
    {
        printf("%d ", curNode->key);

        curNode = curNode->next;
        size -= 2;
    }
}

int main(void)
{
    LinkedList * list = initLinkedList();

    insertLinkedList(10, NULL, list);

    insertLinkedList(5, NULL, list);

    insertLinkedList(50, NULL, list);

    insertLinkedList(60, NULL, list);

    insertLinkedList(70, NULL, list);

    insertLinkedList(3, NULL, list);

    insertLinkedList(2, NULL, list);

    printListKeys(list);
}