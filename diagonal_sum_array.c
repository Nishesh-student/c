#include<stdio.h>
int main()
{
	int arr[3][3]={1,2,3,
				   4,5,6,
				   7,8,9},i,j;
	int sum=0,upper_triangular_sum=0,lower_triangular_sum=0;int a=0,m=3;int diagonal_sum;
	printf("\n The matrix is : \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf(" %d ",arr[i][j]);
		}
		printf("\n");
	}
	//diagonal sum
	for(i=0;i<3;i++){
		sum=sum+arr[i][i];
	}
	for(i=0;i<3;i++){
		a=a+arr[i][m-i-1];
	}
	diagonal_sum=sum+a;
	printf("\n The diagonal sum is %d",diagonal_sum);
	
	//upper triangular sum
	for(i=0;i<3;i++){
		for(j=2;j>=i;j--){
			upper_triangular_sum=upper_triangular_sum+arr[i][j];	
		}
	}
	printf("\n The upper triangular sum is %d",upper_triangular_sum);
	
	//lower triangular sum
	for(i=0;i<3;i++){
		for(j=0;j<=i;j++){
			lower_triangular_sum=lower_triangular_sum+arr[i][j];
		}
	}
	printf("\n The lower triangular sum is %d",lower_triangular_sum);
	return 0;
}
