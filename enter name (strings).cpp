#include<stdio.h>
int main()
{
	char name[10], full_name[20], address[30];
	
	printf("enter your name: ");
	scanf("%s",name);
	printf("%s\n",name);
	
	getchar();
	
	printf("enter your full name: ");
	scanf(" %[^\n]",full_name);
	printf("\n%s",full_name);
	return 0;
}
