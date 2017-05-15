#include <stdio.h>
#include <string.h>

int main()
{
	char word[40];
	int i;
	
	printf("Plaese input a word:\n");
	scanf("%s",word);
	for(i=strlen(word)-1;i>=0;i--)
		printf("%c",word[i]);
	printf("\n");
	
	return 0;
}
