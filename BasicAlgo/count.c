#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  long int charcount =0 ;
  long int wordcount =0; 
  long int linecount =0;
  char input = NULL;
  int oldWord = 0;
  int curCheck = 0;

  while( (input = getchar()) != EOF) 
  {
	
  	charcount++;
  	curCheck = 0;
  	if((input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z') || (input == '\'')){
  		curCheck =1;
  	}
  	if((oldWord==1) && (curCheck==0)){
  		wordcount++;
  	}
  	if(input=='\n'){
  		linecount++;
  	}
  	oldWord = curCheck;

  }
  printf( "%lu %lu %lu\n", charcount, wordcount, linecount );
  return 0;
}

