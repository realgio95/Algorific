#include <stdio.h>
#include <stdlib.h>

void printArr(int *arr, int len)
{	
	int i;
	for( i= 0; i<len; i++)
		printf("%d ", arr[i]); 

	printf("\n"); 
}

// Pre: arr[first..mid] and arr[mid+1.. last] are sorted
// Post: arr[first..last] are sorted
void merge(int arr[], int first, int mid, int last)
{
	int size = last - first + 1; 
	int leftPos = first; 
	int rightPos = mid+1; 
	int newPos = 0; 
	int *newArr = (int *) malloc(size*sizeof(int)); 
	while(leftPos<=mid && rightPos<=last)
	{
		if(arr[leftPos]<arr[rightPos])
		{
			newArr[newPos] = arr[leftPos]; 
			newPos++; 
			leftPos++;
		}
		else
		{
			newArr[newPos] = arr[rightPos]; 
			newPos++; 
			rightPos++;
		}
	}

	while(leftPos<=mid)
	{
		newArr[newPos] = arr[leftPos]; 
		newPos++; 
		leftPos++;
	}
	while(rightPos <= last)
	{
		newArr[newPos] = arr[rightPos]; 
		newPos++; 
		rightPos++;
	}
	int i;
	for(i = 0; i<size; i++)
		arr[first+i] = newArr[i]; 

	free(newArr); 
	return; 
}

// Post: arr[fist..last] are sorted
void mergeSort(int arr[], int first, int last)
{
	if(first>=last) return; 

	int mid = (first + last)/2; 
	// sort left half
	mergeSort(arr,first,mid); 

	// sort right half
	mergeSort(arr,mid+1, last);

	// merge
	merge(arr,first,mid,last);  
	return; 
}

int main()
{
	int arr[8] = {18,26,32,6,43,15,9,1}; 
	int size = sizeof(arr)/sizeof(int); 
	mergeSort(arr, 0, size-1); 
	printArr(arr,size); 
	
	return 0; 
}