#include<stdio.h>
#include<stdlib.h>

int main()
{
	char a1;
	char a2[20];
	
	a1=getchar();
	scanf("%1c%19s",a1,a2);
	putchar(a1);
	printf("the rest are %19s\n",a2);
	
	system("pause");
	return 0;
}
