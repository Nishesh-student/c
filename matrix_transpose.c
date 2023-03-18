#include<stdio.h>
int main(){
	int arr[50][50],i,j,row,col;
	printf("\n Enter the number of rows : ");
	scanf("%d",&row);
	printf("\n Enter the number of column : ");
	scanf("%d",&col);
	printf("\n Enter the elements of array here : \n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("\narr[%d][%d]=",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\n\tThe array before transpose : \n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("\t%d",arr[i][j]);
		}
		printf("\n\n");
	}
	//transposing
	printf("\n\tThe array after transpose : \n");
	for(i=0;i<col;i++){
		for(j=0;j<row;j++){
			printf("\t%d",arr[j][i]);
		}
		printf("\n\n");
	}
	return 0;
}
