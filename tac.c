#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char s[256];
	int i;

	while(fgets(s,256,stdin)){

		printf("\033[A"); //GOTO previous line
		printf("\33[2K"); //Erase current line

		for(i=strlen(s) - 2; i>=0; i--)
			printf("%c", s[i]);
		printf("\n");
	}

	return 0;
}

