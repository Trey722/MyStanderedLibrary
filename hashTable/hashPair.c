#include "hashPair.h"
#include "../libraryimports.h"

hashpair * createHashPair(char * key, int value)
{
    hashpair * pair = malloc(sizeof(hashpair));

    if (pair == NULL) return NULL;

    pair->key = key;
    pair->value = value;
    pair->next = NULL;

    return pair;
}

int insertHashPair(char * key, int value, hashpair * pair, int error)
{
    if (key == NULL) return NULL_Pointer;
    if (pair == NULL)
    {
        pair->key = key;
        pair->value = value;
        pair->next = NULL;
        return error;
    }

    else
    {
        insertHashPair(key, value, pair->next, 1);
    }
}

void freeHashPair(hashpair  * pair)
{
    free(pair->key);
    free(pair);
}