

#include "LL-node.h"


typedef struct {
	node_t * head;
	node_t * tail;
} LL_t;


// Creates and returns a new, empty list
LL_t * LLcreate();


// Adds a new element to the tail end of a list
void LLappend(LL_t * intlist, int value);


// Outputs the list elements in sequence from head to tail
void LLprint(LL_t * intlist);


// Return 1 iff target is in intlist; 0 otherwise.
int LLsearch(LL_t * intlist, int target);


// joins different L1, L2 such that L1 <- L1 + L2, frees L2
void LLcatenate(LL_t * L1, LL_t * L2);


// Pre/Post:  L's data are in sorted orde
void LLquickSort(LL_t * intlist);

// Pre/Post:  intlist is sorted; newNode contains data already
void LLinsertNode(LL_t * intlist, node_t * newNode);

// Pre: intlist not sorted
// Post:  values in intlist are in sorted order
void LLinsertionSort(LL_t * intlist);
