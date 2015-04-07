#include<conio.h>
#include<stdio.h>
#include<math.h>

int a,b,c,d;
float x1,x2;

int main()
{

printf("a*x*x + b*x + c\n");

printf("a:");
scanf("%d\n",&a);

printf("b:");
scanf("%d\n",&b);

printf("c:");
scanf("%d\n",&c);
d=b*b-4*a*c;
if(a==0)
	printf("\n ecuatie de gradul I");
	else
	{
	if(d<0 && a!=0)
		printf("\n solutii complexe");
	else
	{
		{x1=(-b-sqrt(d))/(2*a);
		x2=(-b+sqrt(d))/(2*a);
		}


printf("\n solutiile x1 sunt: %f",x1);
printf("\n solutiile x2 sunt: %f",x2);
}
}
getch();

}

