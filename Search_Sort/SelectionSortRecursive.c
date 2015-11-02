/*
Giovanni HoSang
301295511
Assignment 2 - Question 2
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void swap(int* a,int* b);
void selectionSort ( int array[], int length ) ;
int findIMax (int array[],int length);
int findMax(int arr[], int length);
void print_array(int array[],int len);
void fill_array(int arr[],int len);

int main()   
  {   
  		
       
      srand(time(NULL));
      int i;
  	  int len = 10;
  	  int arr[len];

	  fill_array(arr,len); 
      print_array(arr,len);
  	  selectionSort(arr,len);
      print_array(arr,len);
  	  return 0;
 } 


void swap (int* a, int*b)
	{
		int temp=*a;
		*a=*b;
		*b=temp;
	}

//this functions prints out an array
void print_array(int array[],int len)
{
	  for(int i=0;i<=len-1;i++)   
      {
       		printf(" %d ",array[i]);  
      } printf("\n");
}

void fill_array(int array[],int len)
{
	for(int i=0;i<=len-1;i++)   
      {
       		array[i]=rand()%100;  
      }
}


//this function returns max element of an array
int findMax(int array[], int length)
{
	int i = length-1;
	if (length==1)
	{
		return array[0];
	}

	int iMax = array[i];

	int jMax = findMax(array, length-1);

	if (jMax < iMax)
	{
		iMax = array[i];
		return iMax;	
	}
}

//this function returns the index of the maximum value in an array
//this function also calls the max() function
int findIMax(int array[], int length)
{
	int iMax = findMax(array, length);
	if (array[length-1]==iMax)
	{
		int iMax = length-1;
		return iMax;
	}
	return findIMax(array, length-1);
}

//this function sorts and an arr array of length length
void selectionSort(int array[], int length)
{
	if (length==1)
	{
		return;
	}	
	else
	{
		int iMax = findIMax(array, length);
		if (array[length-1]<array[iMax])
		{
			swap(&array[length-1],&array[iMax]);
		}
		return selectionSort(array, length-1);
	}
}

void selectionSort2 ( int arr[], int length ) 
{
    int maxIndex = 0, temp = 0, index = 0;
    for (i = maxIndex;index<size;index=0)
    {
    	if (array[i]>array[maxIndex])
    	{
    		maxIndex=i;
	}
    	swap(&array[i],&array[min]);
    	if ( size > 1 ) 	
    	{
        	selectionSort2 ( arr, --size ) ;
	}
    }
}
