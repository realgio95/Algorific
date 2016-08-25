#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

/*
int Partition(int *Arr, int start, int end) {
	int pivot = Arr[end];
	int partitionIndex = start; //set partition index as start initially
	int i;
	for(i = start; i<end; i++) {
		if (Arr[i]<=pivot) {
			swap(Arr[i], Arr[partitionIndex]); // swap if element is lesser than pivot.
			partitionIndex++;	
		}
	}
	swap(Arr[partitionIndex], Arr[end]); //swap pivot with element at partition index
	return partitionIndex;	
}
*/

int Partition(int arr[], int first, int last) {
	int partitionIndex = first;
	int pivot = arr[first];
	int sweep;
	for (sweep = first+1; sweep <= last; sweep++) {
	// Assertion: . . .
		if (arr[sweep] < pivot) {
			int tmp = arr[sweep];
			arr[sweep] = arr[partitionIndex+1];
			arr[partitionIndex+1] = tmp;
			partitionIndex++;
		}
	}

// Post: . . .
arr[first] = arr[partitionIndex];
arr[partitionIndex] = pivot;
return partitionIndex;
}

void QuickSort(int *Arr, int start, int end) {
	if(start<end) {
		int partitionIndex=Partition(Arr,start,end); // calling partition
		QuickSort(Arr,start, partitionIndex-1);
		QuickSort(Arr, partitionIndex+1, end);
	}
}

int main() {

	int Arr[8] = {7,6,5,4,3,1,0,2};
	QuickSort(Arr,0,7);
	int i;
	for (i=0; i<8; i++) {
		printf("%d ", Arr[i]);
	}
	printf("\n");

	return 0;
}
