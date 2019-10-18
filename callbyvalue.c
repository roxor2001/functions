#include<stdio.h>
int swap (int x,int y)
{
	int t;
	printf("\nbefore swapping,x=%d,y=%d",x,y);
	t=x;
	x=y;
	y=t;
	printf("\nafter swapping,x=%d,y=%d",x,y);
}
void main()
{
	int a,b;
	printf("enter two values");
	scanf("%d%d",&a,&b);
		printf("\nbefore swapping,a=%d,b=%d",a,b);
	swap(a,b);
		printf("\nbefore swapping,a=%d,b=%d",a,b);
}
