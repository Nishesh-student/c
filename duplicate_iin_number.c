#include<stdio.h>
int main(){
	int num,i=0,arr[50],count=0,j,dup=0;
	printf("\n Enter a number : ");
	scanf("%d",&num);
	while(num){
		arr[i]=num%10;
		num=num/10;
		count++;
		i++;
	}
	printf("\n The number of elements in the number is : %d",count);
	printf("\n\n");
	for(i=0;i<count;i++){
		for(j=i+1;j<count;j++){
			if(arr[i]==arr[j]){
				dup++;
			}
		}
	}
	printf("\n\n The number of duplicate elements in the number is : %d",dup);
	return 0;
}
