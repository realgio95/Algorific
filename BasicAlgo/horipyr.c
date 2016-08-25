#include <stdio.h>
#include <stdlib.h>


int main (){
	unsigned int xDim,yDim,zDim;
	scanf("%u %u %u",&xDim,&yDim,&zDim);	
	for (int i=0;i<yDim;i++)
	{
		if (i==0 || i == yDim-1)
		{	
			for (int j=0;j<xDim;j++)
			{ 		
				printf("#");
			}
		}
		else if (i!=0 |i!=yDim-1)
		{
		//print first hash then zDim hash then the last hash
			for (int j=0;j<xDim;j++){
				if ((j!=0) && (j!=xDim-1)){				
					printf(".");
				}else{
					printf("#");
				}
			}
		}
		printf("\n");
		
	} 



}

