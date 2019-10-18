#include<stdio.h>
int factorial(int n)
{
	int i, product=1;
	for(i=1;i<=n;i++)
	product=product*i;
	return(product);
}
int main()
{
	int n,r,ncr;
	printf("Enter n value");
	scanf("%d",&n);
	printf("Enter r value");
	scanf("%d",&r);
	ncr=factorial(n)/(factorial(r)*factorial(n-r));
	printf("ncr=%d",ncr);
	return(0);
}
