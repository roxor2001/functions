 #include<stdio.h>
  void sum(int x,int y);
   main()
 {
 	int a,b;
 	a=10,b=20;
    sum(a,b);
}
void sum(int x,int y)

  {
	int z;
	z=x+y;
	printf("result=%d",z);
  }
