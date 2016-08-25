#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int xDim,yDim,zDim,i,j;
	// find x-coordinates of pyramid edges on the j'th row
	// where x is the pyramid width, z is the pyramid height,
	
	//unsigned int xDim,yDim,zDim;
	scanf("%d %d %d",&xDim,&yDim,&zDim);
	//create for loop for zdim	
	for(i = zDim-1; i >= 0; i--)
	{
		for (j= 0; j <= xDim-1; j++)
		{
			int left = floor(i * (xDim/(2.0*zDim)) );
			int right = ceil( (xDim-1)-i * (xDim/(2.0*zDim)) );
			if (i<=0 || (j == left || j==right))
			{
				printf("#");
			}
			else 
			{
				if (j < left)
				{
					printf(" ");
				}
				else
				{
					if (i == zDim-1 && (j<right))
					{
						printf("#");
					}
					else
					{
						if ((j>left) && (j<right))
						{
							printf(".");
						}
					}
				}
			}
		}
		printf("\n");
	}			
	return 0; 
}


