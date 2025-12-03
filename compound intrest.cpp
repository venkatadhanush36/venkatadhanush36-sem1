#include<stdio.h>
int main()
{
	int p,t,r,ci;
	printf("enter the principle amount");
	scanf("%d",&p);
	printf("enter time");
	scanf("%d",&t);
	printf("enter the rate of intrest");
	scanf("%d",&r);
	ci=p*(pow(1+(r/100),t)-1);
	printf("compound intrest is:%d",ci);
	return 0;
}
