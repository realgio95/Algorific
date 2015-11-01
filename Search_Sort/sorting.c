
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


void swap (int* a, int* b);
void SelectionSort(int arr[],int len) {

		int i,j, temp;
		for(i=0;i<len-1;i++) {
			//assertion:arr[0...i-1] is sorted
			int smallest=i;
			for (j=i+1;j<len;j++) {
				if(arr[smallest]>arr[j]) {
					smallest=j;

				}
			}
		temp = arr[i];
		arr[i]=arr[smallest];
		arr[smallest] = temp;
		}
		return;
}

void InsertionSort(int arr[],int len)
{
	int i=0;
	for (i;i<len;i++)
	{
		//Assertion: At the start of the iteration arr[0...i-1] are
		// in sorted order
		int newElement = arr[i];
		int j=i;
		while (j>0 && newElement<arr[j-1]) {
			arr[j]=arr[j-1];
		    j--;
		}
		arr[j]=newElement;
	}
	return ;

}

void bubbleSort(int array[],int len)
{
    int temp;
	for (int i= len-2; i>=0;i--)
	{
		for (int j=0; j<=len-1;j++)
		{
			if (array[j]>array[j+1]){
				swap(&array[j],&(array[j+1]));
			}
		}
	}
	return ;
}

void swap (int* a, int* b)
	{
		int temp=*a;
		*a=*b;
		*b=temp;
	}
