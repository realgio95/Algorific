#include <stdio.h>
#include <time.h>


/*Bubble Sort Test && Inswertion Sort Test
*Giovanni Hosang
*301295511
*/

void bubbleSort(int array[],len)
{
	int i,j,temp;
	for (unsigned int i= len-2; i>=0;i--)
	{
		for (unsigned int j=0; j<=len-1;j++)
		{
			if (array[j]>array[j+1]){
				temp=array[j];
				array[j] = array[j+1];
				array[j+1]=temp;
			}
		}
	}
	return ;
}

void insertionSort(int array[], int len)
{
	int x;
	for (int i=1; i<=len-1;i++)
	{
		x=array[i];
		int j=i;
		while (j>0) && (array[j-i] >x)
		{
			array[j]=array[j-1];
			j=j-1;
		}
		array[j]=x;
	}
	return;
}

void selectionSort2 ( int arr[], int length ) {
    int maxIndex = 0, temp = 0, index = 0;
    for (i = maxIndex;index<size;index=0)
    {
    	if (array[i]>array[maxIndex])
    		{maxIndex=i}
    }
    swap(&array[i],&array[min]);
    if ( size > 1 ) {
        sortAscending ( arr, --size ) ;
    }
}


void selectionSort(int array[], int length)
{
		int i, j;
		int min, temp;
		for (i = 0; i < length; i++)
			{
				min = i;
				for (j = i+1; j < length; j++) {
					if (array[j] < array[min])
						min = j;
				}

				swap(&array[i],&array[min]);
			}
}


int findiMin()
{
	int i;
	int (index == 0){

	}

	for ( i = 0; index < ; index++ ) {
    	    if ( arr[index] > arr[maxIndex] ) {
        	    maxIndex = index;
        }
    }
}

