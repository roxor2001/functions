#include<stdio.h>
int main()
{
	int *a,*b;
	int x=10,y=20;
	swap (*a,*b);
}
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("%d %d",*a,*b);
}
