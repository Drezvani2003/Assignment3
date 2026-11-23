/*
* FILE          : A3.c
* PROJECT       : SENG1050 - Assignment 3
* PROGRAMMER    : Daniel Rezvani
* FIRST VERSION : 2026-11-22
* DESCRIPTION   : Compares searching a sorted linked list and a hash table.
*/

#pragma warning(disable:4996)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define HASH_TABLE_SIZE 127
#define MAX_NAME_LENGTH 30
#define INPUT_BUFFER_SIZE (MAX_NAME_LENGTH + 10)

struct linkedList {
    char* name;
    struct linkedList* next;
};

// Prototypes
struct linkedList* CreateNewNode(char* name);
void InsertSorted(struct linkedList** head, char* name);
struct linkedList* searchLinkedList(char* searchName, struct linkedList* linkedList, int* comparisonCount);
void searchForNameTwice(char* searchName, struct linkedList* hashTable[], struct linkedList* linkedList, int comparisonCount[2]);
int GenerateHash(char* name);
void RemoveNewLine(char* text);
void FreeList(struct linkedList* head);

int main(void) {
    return 0;
}