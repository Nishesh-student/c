#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,root_part,root1,root2,denom;
	printf("\n Enter the value of a b and c : ");
	scanf("%f%f%f",&a,&b,&c);
	root_part=sqrt(b*b-4*a*c);
	denom=2*a;
	root1=(-b+root_part)/denom;
	root2=(-b-root_part)/denom;
	printf("\n root1 = %f \n root2 = %f",root1,root2);
	return 0;
}
