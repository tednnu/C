#include<stdio.h>
#include <string.h>

void cop(char *ch);

int main()
{
	char *ch;
	cop(ch);
	fputs(ch,stdout);
}

void cop(char *ch)
{
	int i=0;
	while((*ch++=getchar())!=EOF)
		continue;
}