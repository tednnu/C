#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
	int i;
	char ch;
	FILE *fp;
	char words[41], wordy[20];
	
	printf("Please input the name of file:");
	scanf("%s", &wordy);
	
	fp = fopen(wordy, "r");
	fscanf(fp, "%s", words);
	puts(words);
	printf("Done!\n");
	
	for(i=0;i<strlen(words);i++)
	{
		if(islower(words[i]))
			words[i] = toupper(words[i]);
		else
			words[i] = tolower(words[i]);
	}
		
	fp = fopen(wordy, "w");
	fprintf(fp, "%s", words);
	rewind(fp);
	fscanf(fp, "%s", words);
	puts(words);
	printf("Done!\n");
	fclose(fp);
	
	return 0;
}