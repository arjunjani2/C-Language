#include<stdio.h>
#include<conio.h>
void main() {
       int a,b,add;
       float div;
       clrscr();
       printf("enter a & b");
       scanf("%d %d",&a,&b);
       add=a+b;
       printf("addition is %d\n",add);
       printf("subtraction is %d\n",a-b);
       printf("multiplication is %d\n", b*a);
       div =(float)b/a;
       printf("division is %f\n",div);
       printf("modulus is %d\n",b%a);
       getch();



}



