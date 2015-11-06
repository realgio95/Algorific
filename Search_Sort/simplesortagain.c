//bbubble


/**
@Returns void
@param
This function swaps N times after every iteration N-1 times
*/
void bubble_sort(int *arr, int N)
{
	for (int i=0;i<N-1;i++)
	{
		for (int j=i;i<N;j++)
		{
			
			if (arr[j]<arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp; 
			}
		}
	}
	return;
}

/**
*
*/
void insertion_sort(int* arr, int N)
{
	int x;
	for (int i=0; i<len;i++)\
	{
		x = arr[i];
		j= i;
		while (j>0 && x < arr[j-1]
		{
			arr[j-1] = arr[j];
			j--;
		}
		arr[j] = x;
	}

}

void selsectionSOrt(int *array, int N )
{
	int temp,min;
	for (int i=0; i<N;i++)
	{
		min= i;
		for (int j=i+1;j<i;j++)
		{
			if (array[min]> array[j])
			{
				temp = array[min];
				array[j+1]
			}
		
		}	
	}



}