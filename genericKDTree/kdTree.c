#include <stdio.h>
#include <stdlib.h>
#include "kdTree.h" // Include your header file where Point and struct Node are defined.

Node *initTree(int K)
{
    Node *tree = (Node *)malloc(sizeof(Node));

    if (tree == NULL) return NULL;

    tree->data = NULL;
    tree->left = NULL;
    tree->right = NULL;
    tree->size = -1;
    tree->K = K;
    tree->key = malloc(sizeof(Point));
    return tree;
}


void insertTree(Point * A, Node *tree, int depth, void *data)
{
    if (tree->size == -1)
    {
        tree->left = initTree(tree->K);
        tree->right = initTree(tree->K);
        tree->key = A;
        tree->size = 0;
        tree->data = data;
    }

    else {
        tree->size += 1;
        int d = depth % tree->K;

        if (A->cordinates[d] < tree->key->cordinates[d])
        {
            insertTree(A, tree->left, depth + 1, data);
        }

        else
        {
            insertTree(A, tree->right, depth + 1, data);
        }

    }
}
void printNode(Node *node)
{
    if (node->size == -1) return;

    printNode(node->left);
    printf("(");
    for (int i = 0; i < node->K; i++)
    {
        printf("%lf ", node->key->cordinates[i]);
    }
    printf(")");
    printNode(node->right);
}

void printTree(Node *tree)
{
    printNode(tree);
}

void freeTree(Node *tree)
{
    if (tree->size == -1) return;

    freeTree(tree->left);
    freeTree(tree->right);
    free(tree->data);
    free(tree);
}


