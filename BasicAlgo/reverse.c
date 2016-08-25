/* The reverse array off length len in place */
void reverse(int arr[], unsigned int len)
{
	int tmp=0;
  	int i=0;
  	for (i=0; i<len/2;i++) //swapping halfway down the array
	{
		tmp=arr[i];
		arr[i]=arr[len-1-i];
		arr[len-1-i]=tmp; 
	}		
}

  	
