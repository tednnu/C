#include <stdio.h>
#define LEN 80

char * getword(char * str, int n);

int main(void)
{
	char input[LEN];
	int n = 10;
	while (getword(input,n) != NULL)
		puts(input);
	puts("Done.\n");
	return 0;
}

#include <ctype.h>

char * getword(char * str, int n)
{
	int ch,i;
	while ((ch = getchar()) != EOF && isspace(ch))
		continue;
	if (ch == EOF)
		return NULL;
	else
		*str++ = ch;
	while ((ch = getchar()) != EOF && !isspace(ch))
	{
		*str++ = ch;
		if((i=strlen(str))>n+2)
			break;
	}
	*str = '\0';
}