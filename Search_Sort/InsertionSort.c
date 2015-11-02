#include <stdio.h>
#insclude <stdlib.h>

void insertionSort(int arr[], int len) 
{ 
	for (int i = 1; i < len; i++) 
	{ 
	    // At the start of this iteration 
	    // arr[0..i-1] are in sorted order 
	    int newElement = arr[i]; 
	    int j = i; 
	    while (j > 0 && newElement < arr[j-1]) 
	    { 
		    arr[j] = arr[j-1]; 
		    j--; 
	    } 
	    arr[j] = newElement; 
	 } 
} 
