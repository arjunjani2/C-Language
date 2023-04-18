#include<stdio.h>
#include<conio.h>
void main()
{
int a;
int b;
int c;
printf("Before Swapping\n");
printf("Enter the value of a:\n");
scanf("%d",&a);
printf("Enter the value of b:\n");
scanf("%d",&b);
printf("After Swapping\n");
c=a;
a=b;
b=c;
printf("Value of a after swapping\n",a);
printf("Value of b after swapping\n",b);
getch();
}