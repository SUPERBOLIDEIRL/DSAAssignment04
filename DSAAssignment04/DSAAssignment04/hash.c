#include <stdio.h>
#include "hash.h"

hashInit(int* hashTable, int* input, int M, int R)
{
    int i, j, k, h1, h2, h; //initialize needed variables

    for (i = 0; i < M; i++) //initialize hash table, set all elements to -1 to show that they are empty
    {
        hashTable[i] = -1;
    }

    for (j = 0; j < M; j++) //loop for each element of input array
    {
        k = input[j]; //putting each element of the input array into k
        h1 = k % M; //first hash function
        h2 = R - (k % R); //second hash function

        for (i = 0; i < M; i++) //loop for hadnling collisions and finding spots in the hash array to input elments
        {
            h = (h1 + h2 * i) % M; //final hash function
            if (hashTable[h] == -1) //if an element of hash array is empty
            {
                hashTable[h] = k; //set element in the hash table to value k
                break;  //breaks the loop if element has been succesfully inserted
            } //if the elment hasnt been inserted because slot is already used go back to the loop to find next spot
        }
    }
}