#include <stdio.h>
#include <stdlib.h>

//Function scrambled sees compares to arrays to see if they are if the same value in any order
int scrambled(unsigned int a[], unsigned int b[],unsigned int len){
	int count[100];
	int is_scrambled;
    int val;
	unsigned int i;


	if (len==0){
		return 1;
	}

	//initialize all count indexes to 0
	for (i=0;i<100;i++){

		count[i]=0;

	}


	//check all indexes in array 1.... if its equal to some value then count++
	for (i=0;i<len;i++)
   	{

		val=a[i];
		count[val]++;

	}

	//check all indexes in array 2... if its equal then count --
	for (i=0;i<len;i++){
		val=b[i];
		count[val]--;
	}



	//check all count indexes to see if they equal to 0
	for (i=0;i<100;i++)
	{
		if (count[i]!=0)
		{
			return 0;
		}
	}
	return 1;
}
