/*Giovanni HoSang
*301295511
*Assignment 1 Question 1 sorts
*/

void swap (int* a, int* b);
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

void insertionSort(int arr[], int len) 
{ 
	for (int i = 1; i < len; i++) { 
	// At the start of this iteration 
	// arr[0..i-1] are in sorted order 
	int newElement = arr[i]; 
	int j = i; 
	while (j > 0 && newElement < arr[j-1]) { 
		arr[j] = arr[j-1]; 
		j--; 
	} 
	arr[j] = newElement; 
	} 
} 

void swap (int* a, int* b)
	{
		int temp=*a;
		*a=*b;
		*b=temp;
	}
