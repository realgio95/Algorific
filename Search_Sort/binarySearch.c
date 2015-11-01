#include <stdio.h>
/*
Giovanni HoSang
301295511
Assignment 2 - Question 3
*/


// initially called with low = 0, high = len - 1
//Pre Condition: Array is sorted in ascending order from position 0 to len-1
// Post:  Returns 1 iff target is in arr[0..len-1], 0 otherwise.  
int BinarySearchRecA(int arr[],int first, int last, int target) 
{ 
	int mid = (first+last)/2;  
	
	if (last <= first) 
	{         
			//assert: last<=first
			if (target == arr[mid])
			{	
				return 0;      
			}
			if ( target < arr[mid] )  
			{
				return BinarySearchRecA( arr, first, mid, target );
			}
			else
			{
				return BinarySearchRecA( arr, mid+1, last-1, target );
			}
			return 1;
	}
}    
	    
	      
//-----------------------------------------------------------------------------------
/*
*Assignment #2
*Part B
*/
// initially called with low = 0, high = N - 1
//Pre Condition: Array is sorted in ascending order from position first to last
//Post: Returns mid if the target is found, -1 if not
int BinarySearchRecB(int arr[], int target, int first, int last) 
{ 
	int mid = (first+last)/2;  
	if (last < first) 
	{   
		return -1;
	}
	if (arr[mid] == target)
	{
		return mid;
	}       
	if (arr[mid] > target)
	{  
		return BinarySearchRecB (arr, target, first, mid-1);      
	}else if (arr[mid]<target)
	{
		return BinarySearchRecB(arr, target, mid+1,last); 
	}  
}

//------------------------------------------------------------------------------------
/*
*Assignment #2
*Part C
*/

//Pre Condition: Array is sorted in ascending order from position 0 to len-1
//Post: Returns 1 if the target is found, -1 if not
int BinarySearchC(int arr[], int len, int target)
{
	int first = 0;
    int last= len-1;
   	while (first < last) 
	{
		//Assert: if a[i]==val for any i, then first <= i && i <= upper */ 
       	int mid = (first + (last - first) / 2);

      	 if (target <=  arr[mid])
		{
           last = mid;
		}
       	else
		{
           
            first = mid+1;
		}

	}
   //This condition is outside of the for loop
   if ((first < len) && (arr[first] == target))
	{
       return 1;
	}
   else
	{
       return -1;
	}
}
//------------------------------------------------------------------------

int main()
{
	int len =8;
	int target= 44;
	int first = 0;
	int last=len;
	int arr[] = {2,3,4,5,8,10,44,99};
	int a = BinarySearchRecA(arr,0,len,target) ;
	int b = BinarySearchRecB(arr, target, first,len) ;
	int c = BinarySearchC(arr, len,target) ;
	printf("\nThe values in the array are:");
	for (int i=0; i<len;i++){
		printf(" %d ",arr[i]);
	}
	printf("\nThe target is : %d\n", target);
	printf("Binary Search Recursive A(0 or 1)      : Found Value = %d \n",a);
	printf("Binary Search Recursive B(index or -1) : Found at index %d \n",b);
	printf("Binary Search Iterative C (1 or -1)    : Found Value = %d \n\n",c);
	return 0;
}


//------------------------------------------------------
/*
*Assignment #2
*#3 - PartE

1. Initialization: first initialized to 0 and last = length -1
   The assertions are: if a[i]==val for any i, then first <= i && i <= upper 
2. Maintenance : while target was not found  

3.Target found || first>last

*/