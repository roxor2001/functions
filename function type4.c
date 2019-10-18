 #include<stdio.h>
 int sum();
  main()
 {
 	int c;
 	
     c=sum();
     printf("result=%d",c);
}
   int sum()
  {
	int z,x,y;
	x=10,y=20;
	z=x+y;
	return(z);
  }
