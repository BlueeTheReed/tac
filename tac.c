#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(){
	char s[256];
	int i, backspace;

	//Reading the file will get messy without it
	backspace =  isatty(STDOUT_FILENO);

	while(fgets(s,256,stdin)){

		if(backspace){
			printf("\033[A"); //GOTO previous line
			printf("\33[2K"); //Erase current line
		}

		for(i=strlen(s) - 2; i>=0; i--)
			printf("%c", s[i]);
		printf("\n");
	}

	return 0;
}

