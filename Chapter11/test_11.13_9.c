#include <stdio.h>
#include <string.h>

void string_in();

int main(void)
{
	string_in();
	return 0;
}

void string_in()
{
	char ch;
	int i=0,n=0;
	char s[10];
	while((ch=getchar()) != '\n')
		s[i++] = ch;
	n = strlen(s);
	for (i=0;i<n-1;i++)
		printf("%c",s[i]);
	printf("\n");
	printf("%d\n",n);
	for(i=0;i<n/2;i++)
	{
		ch = s[i];
		s[i]=s[n-i-1];
		s[n-i-1]=ch;
	}
	printf("%d\n",strlen(s));
	for (i=1;i<n;i++)
		printf("%c",s[i]);
	printf("\n");
}