#include<stdio.h>
int abc(int n1, int n2)
{
	int i,gcd;
	for(i=1;i<=n1&&i<=n2;i++)
	{
		if(n1%i==0&&n2%i==0)
		gcd=i;
	}
    printf("GCD=%d",gcd);
	return(gcd);
}
int main()
{
	int n1,n2;
	printf("Enter the numbers");
	scanf("%d%d",&n1,&n2);
	abc(n1,n2);
}
