#include <stdio.h>
#include <string.h>

int main()
{
	char word[40];
	int i=0;
	
	printf("Plaese input a word:\n");
	scanf("%c",word);
	while(i++<strlen(word))
	{
		printf("%c",word[i]);
	}
	printf("\n");
	
	return 0;
}
