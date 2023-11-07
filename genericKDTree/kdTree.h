//
// Created by Trey Davidson on 11/4/23.
//

#ifndef MYSTANDEREDLIBRARY_KDTREE_H
#define MYSTANDEREDLIBRARY_KDTREE_H

typedef struct Point {
    double * cordinates;
    int length;
} Point;


typedef struct Node
{
    struct Node * right;
    struct Node * left;
    Point * key;
    void * data;
    int K;
    int size;
} Node;

Node * initTree(int K);

void insertTree(Point *, Node * tree, int depth, void * data);

void printTree(Node * tree);

void freeTree(Node * tree);



#endif //MYSTANDEREDLIBRARY_KDTREE_H
