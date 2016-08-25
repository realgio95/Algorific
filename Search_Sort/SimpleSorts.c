<<<<<<< HEAD

#include <stdio.h>
#include <stdlib.h>

//Iterative Version of Selection Sort
void swap (int* a, int* b);
void selectionSort(int* array, int len) 
{ 
  int min, temp; 
  for (int i = 0; i < len; i++) 
  { 
    	min = i; 
    	for ( int j = i+1; j < len; j++) 
    	{   
      		if (array[j] < array[min]) 
      		{
        		min = j; 
		} 
		swap (&array[i],&array[min])
		//temp = array[i];  
      		//array[i] = array[min]; 
        	//array[min] = temp; 
    	}
  }
}

//Iterative Version of Insertion Sort
void InsertionSort(int arr[],int len)
{
	for (int i=0;i<len;i++)
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

//Iterative Version of  Bubble Sort
void bubbleSort(int array[],int len)
{
	int temp;
	for (int i= len-2; i>=0;i--)
	{
		for (int j=0; j<=len-1;j++)
		{
			if (array[j]>array[j+1])
			{
				swap(&array[j],&(array[j+1]));
			}
		}
	}
	return;
}

void swap (int* a, int* b)
	{
		int temp=*a;
		*a=*b;
		*b=temp;
	}
	

=======

#include <stdio.h>
#include <stdlib.h>

//Iterative Version of Selection Sort
void swap (int* a, int* b);
void selectionSort(int* array, int len) 
{ 
  int min, temp; 
  for (int i = 0; i < len; i++) 
  { 
    	min = i; 
    	for ( int j = i+1; j < len; j++) 
    	{   
      		if (array[j] < array[min]) 
      		{
        		min = j; 
		} 
    	}
	swap (&array[i],&array[min])
	//temp = array[i];  
      	//array[i] = array[min]; 
        //array[min] = temp; 
    	
  }
}

//Iterative Version of Insertion Sort
void InsertionSort(int arr[],int len)
{
	for (int i=0;i<len;i++)
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

//Iterative Version of  Bubble Sort
void bubbleSort(int array[],int len)
{
	int temp;
	for (int i= len-2; i>=0;i--)
	{
		for (int j=0; j<=len-1;j++)
		{
			if (array[j]>array[j+1])
			{
				swap(&array[j],&(array[j+1]));
			}
		}
	}
	return;
}

void swap (int* a, int* b)
	{
		int temp=*a;
		*a=*b;
		*b=temp;
	}
	

>>>>>>> 44a401b225d48712e9fc8f810f04eab4b28e17ac
