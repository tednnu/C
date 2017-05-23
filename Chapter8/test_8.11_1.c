#include <stdio.h>

int main()
{
	int ch,ci=0;
	
	while((ch=getchar())!=EOF)
	{
		putchar(ch);
		if(ch!='\n')
			ci++; 
	}
	printf("There are %d words in total.\n",ci);
	
	return 0;
}
