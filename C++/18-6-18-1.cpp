#include<stdio.h>
#include<stdlib.h>

int main()
{
	char str[20];
	
	printf("Please type a number:");
	gets(str);
	
	printf("%s%%\n",str);
	
	system("pause") ;
	return 0;
 } 
