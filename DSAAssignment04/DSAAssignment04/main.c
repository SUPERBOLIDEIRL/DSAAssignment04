#include <stdio.h>
#include "hash.h"

#define M 11

int main()
{
    int i;
	int input[] = {764, 35954, 8683, 41, 11004, 1362, 77, 1, 448, 118, 5507};  
	int R = 7;
    int hashTable[M];

    hashInit(hashTable, input, M, R); //function is called

 
    printf("The table with elements after collision handling:\n"); //printing out the table
    for (i = 0; i < M; i++) {
        printf("%d: %d\n", i, hashTable[i]);
    }

}