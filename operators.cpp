#include<stdio.h>
int main()
{
	char opt;
	double first,second;
	printf("enter an operator(+,-,*,/) : ");
	scanf("&c",&opt);
	printf("enter two operators : ");
	scanf("%d%d",&a,&b);
	switch(opt){
		case'+':
		printf("%d+%d=%d",a,b,a+b);
		break;
		case'-':
		printf("%d-%d=%d",a,b,a-b);
		break;
		case'*':
		printf("%d*%d=%d",a,b,a*b);
		break;
		case'/':
		printf("%d/%d=%d",a,b,a/b);
		break;
		//operator doesn't match any case constant
		deafult;
		printf("error! operator is not correct");
		return 0;
	}
}
