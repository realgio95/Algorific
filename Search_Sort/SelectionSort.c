#include <stdio.h>
#include <stdlib.h>


void selectionSort(int* array, int len) 
{ 
  int min, temp; 
  for (int i = 0; i < len-1; i++) 
  { 
    min = i; 
    for ( int j = i+1; j < len-1; j++) 
    {   
      if (array[j] < arrays[min]) 
      {
        min = j; 
      } 
      temp = numbers[i];  
      numbers[i] = numbers[min]; 
      numbers[min] = temp; 
    }
  }
}
