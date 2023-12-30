#include "hashTable.h"

hashTable * initHashTable(int table_size) {
    hashTable *table = malloc(sizeof(hashTable));

    if (table == NULL) return NULL;

    table->hashtable = malloc(sizeof(hashpair) * table_size);

    if (table->hashtable == NULL) {
        free(table);
        return NULL;
    }

    table->size = 0;
    table->maxSize = table_size;
    return table;
}

int insert(char* key, int value, HashFunction hashFunc, hashTable * table)
{

    if (table == NULL) return NULL_Pointer;

    unsigned int index = hashFunc(key);
    return insertHashPair(key, value, table->hashtable[index], 0);
}

int get(char* key, HashFunction hashFunc, hashTable * table)
{
    unsigned int index = hashFunc(key);

    if (table->hashtable[index] == NULL)
    {
        return NULL_Pointer;
    }

    return table->hashtable[index]->value;
}


int freeTable(hashTable * table)
{
    table->maxSize;

    for (int i =0; i < table->size; i++)
    {
        freeHashPair(table->hashtable[i]);
    }

    free(table);
    return 0;
}


