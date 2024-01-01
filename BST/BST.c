
#include "BST.h"



BST * initBST()
{
    BST * newRoot = malloc(sizeof(BST));

    newRoot->left = NULL;
    newRoot->right = NULL;
    newRoot->size = -1;
    return newRoot;
}

int insertBST(int key, void * data, BST * root)
{
    if (root->size == -1)
    {
        root->left = initBST();
        root->right = initBST();
        root->data = data;
        root->size = 0;
        root->key = key;
        return Succues;
    }


    root->key += 1;

    if (root->key < key)
    {

        insertBST(key, data, root->left);
    }


    insertBST(key, data, root->right);
}

void freeBST(BST * root)
{
    if (root->size == -1) {
        return;
    }
    freeBST((root->left));
    freeBST((root->right));
    free(root->data);
    free(root);
}



