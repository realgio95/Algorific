#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main(void){
	int len = 0;
	char input = NULL;
	float frequency = 0;
	float count = 0;
	float cnts[26] = {0};
	char lets[26]= {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u','v', 'w', 'x', 'y', 'z'};

	while ((input = getchar()) != EOF){
		if((input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z')){
  			for(len =0; len < 26; len++){
  				if(lets[len] == tolower(input)){
  					cnts[len]++;
  					count++;
  				}
  			}
  		}

	}
	for (len=0; len <26; len++){
		if(cnts[len] != 0){
			frequency = cnts[len] / count;
			printf("%c %.4f\n", lets[len], frequency);
		}
	}

	return 0;
}
