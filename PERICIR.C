#include<stdio.h>
#include<conio.h>
void main()
	{
	int p,q,r,s;
	clrscr();
	scanf("%d%d%d%d",&p,&q,&r,&s);
	(p>q && p>r && p>s)?printf("P is max.")
			   :(q>r && q>s)?printf("Q is max")
			   :(r>s)?printf("R is max")
			   :printf("S is max");
	getch();
	}