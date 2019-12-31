#include<stdio.h>
int main()
{
	char  name[30];
	printf("enter your name");
	scanf("%[^\n]s",name);
	printf("your name is %s",name);
}
