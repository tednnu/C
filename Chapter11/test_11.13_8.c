#include <stdio.h>
#include <string.h>
#define LEN 20

char * string_in(char * s1,char * s2);

int main(void)
{
	char orig[LEN] = "transportation";
	char * find;
	int i;
	puts(orig);
	string_in(orig, "port");
	if (orig)
		printf("%p\n",orig);
	else
		puts("Not found");
	find = string_in(orig, "part");
	if (find)
		puts(find);
	else
		puts("Not found");
	return 0;
}

char * string_in(char * s1,char * s2)
{
	int l2 = strlen(s2);
	int tries;
	int nomatch;
	tries = strlen(s1) + 1 - l2;
	if (tries > 0)
		while (( nomatch = strncmp(s1, s2, l2)) && tries--)
			s1++;
	if (nomatch)
		return NULL;
	else
		return s1;
}