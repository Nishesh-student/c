#include<stdio.h>
int main()
{
	int i,j,k,space,row;
	printf("\n Enter number of row : ");
	scanf("%d",&row);
	space = row-1;
	for(i=1;i<=row;i++)
	{
		for(j=row-1;j>=i;j--)
		{
			printf(" ");
		}
		for(k=1;k<=2*i-1;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=1;i<=row-1;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		for(k=2*space-1;k>=1;k--)
		{
			printf("*");
		}
		space--;
		printf("\n");
	}
	return 0;
}
