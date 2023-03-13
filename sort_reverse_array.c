//program - 84
//sort in ascending and descending then
//reverse an array
#include<stdio.h>
int main(){
	int i,j,arr[50],n,temp;
	printf("\n How many elements you want to enter in array : ");
	scanf("%d",&n);
	printf("\n enter %d elements here  : \n",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	//array display
	printf("\n The elements of array is                     : ");
	for(i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n\n\n");
	//array display in reverse
	printf("\n The elements of array in reverse order is    : ");
	for(i=n-1;i>=0;i--){
		printf("%d\t",arr[i]);
	}
	printf("\n\n\n");
	//ascending order code
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	//ascending order 
	printf("\n The array in ascending order is              : ");
	for(i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n\n\n");
	//descending order
	printf("\n The array in descending order is             : ");
	for(i=n-1;i>=0;i--){
		printf("%d\t",arr[i]);
	}
	return 0;
}
