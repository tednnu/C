#include <stdio.h>
#include <ctype.h>

void star(int n);

int main()
{
	const double yj = 2.05;
	const double tc = 1.15;
	const double hl = 1.09;
	char y='yj';
	char t='tc';
	char h='hlb';
	char q='q';
	char ch;
	double yn=0,tn=0,hn=0;
	double i;
	double tp=0;
	double zk=0,yf=0,zl=0;
	
	star(30);
	printf("What do you want to buy?\n");
	printf("(a)%-10c(b)%c\n",y,t);
	printf("(c)%-10c(q)%c\n",h,q);
	star(30);
	
	while((ch=getchar())!='q')
	{
		if(ch=='\n')
			continue;
		while (getchar() != '\n')
			continue; 
		switch (ch)
		{
			case 'a':
				printf("How many yangji do you want?\n");
				i = 0;
				scanf("%f",&i);
				yn = yn + i;
				break;
			case 'b':
				printf("How many tiancai do you want?\n");
				i = 0;
				scanf("%f",&i);
				tn = tn + i;
				break;
			case 'c':
				printf("How many huluobo do you want?\n");
				i = 0;
				scanf("%f",&i);
				hn = hn + i;
				break;
			default:
				printf("Wrong chice!\n");
		}
		printf("What else do you want to buy?\n");
	}
	
	zl = yn + tn + hn;
	tp = yn * yj + tn * tc + hn * hl;
	
	printf("%.2f\n",tp);
	
	if (tp>=100.0)
		tp=(100*0.95)*(tp/100)+(tp-100*(tp/100));
		 
	printf("%.2f\n",tp);
		
	zk = 0.05*(tp/100);
	
	printf("%.2f\n",tp);
	
	if (tp<=0)
		yf = 0;
	else if (tp<=5)
		yf = 6.5;
	else if (tp<=20)
		yf = 14;
	else
		yf = 14 + (zl-20)*0.5;
		
	printf("%.2f\n",tp);
	
	printf("You buy these:");
	printf("%.2f yangji,%.2f tiancai,%.2f huluobo.\n",yn,tn,hn);
	printf("%.2f\n",tp);
	printf("You should pay %.2f for the shucai.\n",tp);
	printf("You should pay %.2f for the yunfei.\n",yf);
	printf("You should pay %.2f in total.\n",tp+yf);	
}

void star(int n)
	{
		int i=0;
		for(i=0;i<n;i++)
			printf("*");
		printf("\n");
	}
