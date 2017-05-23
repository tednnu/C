#include <stdio.h>
#include <ctype.h>

int main()
{
	int ch=0,ci=0,cj=0,ck=0;
	
	while((ch=getchar())!=EOF)
	{
		putchar(ch);
		if(ch!='\n')
			printf(":%d ",ch);	
		if(ch!='\n')
			ci++; 
		if(islower(ch))
			cj++;
		if(isupper(ch))
			ck++;
		if(ci%10==0)
			printf("\n");
	}
	printf("There are %d letters in total: %d BIG and %d SMALL.\n",ci,ck,cj);
	
	return 0;
}
