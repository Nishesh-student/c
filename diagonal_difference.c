//diagonal difference 
#include<stdio.h>
int main()
{
	int sum1=0,sum2=0,i,j,m=3;
	int arr[3][3]={1,2,3,
	               4,5,6,
				   9,8,9};
	printf("\n The matrix is : \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf(" % d ",arr[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++){
		sum1=sum1+arr[i][i];
		sum2=sum2+arr[i][m-i-1];
	}
	if(sum1>sum2){
		printf("The difference is %d",sum1-sum2);
	}
	else{
		printf("\n The difference is %d",sum2-sum1);
	}
	
	return 0;
}
