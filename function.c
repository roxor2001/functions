 #include<stdio.h>
 int sum(int x,int y);
  main()
 {
 	int a,b,c;
 	a=10,b=20;
     c=	sum(a,b);
     printf("result=%d",c);
}
   int sum(int x,int y)
  {
	int z;
	z=x+y;
	return(z);
  }
