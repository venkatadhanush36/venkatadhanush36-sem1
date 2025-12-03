#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,discriminant,root1,root2,realpart,imagpart;
	printf("enter the coefficients a,b,c");
	scanf("%1f %2f %3f",&a,&b,&c);
	discriminant = b*b-4*a*c;
	if (discriminant > 0){
		root1 = (-b+ sqrt(discriminant)) / (2 *a);
		root1 = (-b- sqrt(discriminant)) / (2 *a);
		printf("root1 = %.21f and root2 = %.21f,root1,root2");
}
	else if (discriminant == 0) {
		root1 = root2 = -b / (2 * a);
		printf("root1 = root2 = %.21f",root1);
}	
	else{
		realpart = -b /(2 * a);
		imagpart = sqrt(-discriminant) / (2 * a);
		printf("root=%.21f+&.21fi and root2=%.21f-%.21fi,realpart,imagpart");
}
	return 0;
}
