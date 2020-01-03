#include<stdio.h>
int main()
{
int a,b,r=0,m,n;
printf("enter 2 numbers");
scanf("%d%d",&a,&b);
m=a;
n=b;
while(n>0)
{
if(n%2!=0)
{
	r+=m;
	
}
m*=2;
n/=2;
}
printf("%d*%d=%d",a,b,r);
return 0;
}
		
