//program - 93
//liner search
#include<stdio.h>
int main(){
	int arr[50],i,n,val;
	printf("\n How many elements you want to enter : ");
	scanf("%d",&n);
	printf("\n Enter the elements of array :\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("\n Enter the element to be searched : ");
	scanf("%d",&val);
	for(i=0;i<n;i++){
		if(arr[i]==val){
			break;
		}
	}
	if(i<n){
		printf("\n Element found at index %d ",i);
	}
	else{
		printf("\n Element does not exist ");
	}
	return 0;
}
