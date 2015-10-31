#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>

void bubbleSort(int array[], int len);
//insertionSort(int array[], int len);

int main()
{

    int a[100]={123,14,21,4,2,4,8,19,38,44,28,99,47,47,76,30,84,74,28,48,45,39,9,84};
    //int b[100];
    int length;
    //This one is for the bubble sort
    printf("Enter the number of items to be entered: ");
  //  int length=scanf("%d" ,&len);
  //  srand((unsigned)time(&t));
    //scanf("(%d)\n",&length );

    for (int i=0;i<=length-1;i++)
    {
        printf(" %d ", a[i]);
    }

    bubbleSort(a,length);
/*
    for (int i=0;i<=length-1;i++)
    {
        printf(" %d ", a[i]);
    }
*/
/*
    printf("The sorted array after the bubble sort is done is. \n");
    for (unsigned int i=0; i<=len;i++)
    {
    	printf(" %d ",a[i]);
    }


/*
    //Now this one will be for the insertion sort

    //This one is for the bubble sort
    printf("Enter the number of items to be entered: ");
    scanf("%d" ,&len);
    srand((unsigned)time(&t));
    for (int i=0;i<=len-1;i++)
    {
       // rand(a[i] % 1 == 0) ;
        printf("%d\n", rand() % 1);
    }


    //insertionSort(a,len);
    printf("The sorted array after the insertion sort is done is. \n");
    for (unsigned int i=0; i<=len;i++)
    {
    	printf(" %d ",a[i]);
    }
*/


    return 0;
}
