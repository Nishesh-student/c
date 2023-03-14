//program - 88
//wap to insert an array element in an sorted array list
#include<stdio.h>
int main(){
	int arr[50];
	int i,j,n,val;
	printf("\n How many element you want to enter in array : ");
	scanf("%d",&n);
	printf("\n Enter %d elements here \n",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	//display array before 
	printf("\n Array before insertion :");
	for(i=0;i<n;i++){
		printf("\t%d",arr[i]);
	}
	printf("\n\n\n");
	printf("\n enter the value you want to insert : ");
	scanf("%d",&val);
	i=n-1;
	while(val<arr[i]&&i>=0)
	{
		arr[i+1]=arr[i];
		i--;
	}
	arr[i+1]=val;
	n++;
	
	printf("\n Array after insertion : ");
	for(i=0;i<n;i++){
		printf("\t%d",arr[i]);
	}
	return 0;
}
