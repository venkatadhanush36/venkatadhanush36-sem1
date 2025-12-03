#include<stdio.h>
int main()
{
	float a,t,u,d;
	printf("enter the accleration value:");
	scanf("%f",&a);
	
	printf("enter the time:");
	scanf("%f",&t);
	
	printf("enter intial velocity value:");
	scanf("%f",&u);
	d=u*t+(a*t*t)/2;
	printf("\n total distance : %f",d);
	return 0;
}
