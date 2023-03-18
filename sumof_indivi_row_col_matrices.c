#include<stdio.h>
int main()
{
	int arr[50][50],i,j,sumr,sumc,row,col;
	printf("\n Enter the number of rows : ");
	scanf("%d",&row);
	printf("\n Enter the number of columns : ");
	scanf("%d",&col);
	printf("\n Enter the elements of array here : \n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("\n arr[%d][%d]=",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\n\tThe matrix is : \n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("\t%d",arr[i][j]);
		}
		printf("\n\n");
	}
	printf("\n The sum of rows is : \n");
	for(i=0;i<row;i++){
		sumr=0;
		for(j=0;j<col;j++) {
			sumr=sumr+arr[i][j];
		}
		printf("\n The sum of %d row is : %d",i+1,sumr);
	}
	printf("\n\n The sum of columns is : \n");
	for(i=0;i<col;i++){
		sumc=0;
		for(j=0;j<row;j++){
			sumc=sumc+arr[j][i];
		}
		printf("\n The sum of %d column is %d",i+1,sumc);
	}
	return 0;
}
