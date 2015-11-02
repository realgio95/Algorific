#include <stdio.h>
#include <stdlib.h>

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
	  return ;
}
