#include<stdio.h>
void perfect_no(int n){
	int i,j=0,sum=0,arr[50];
	for(i=1;i<=n/2;i++){
		if(n%i==0){
			arr[j]=i;
			j++;
		}
	}
	for(i=0;i<j;i++){
		sum=sum+arr[i];
	}
	if(sum==n){
		printf("\n The given number is a perfect number !!!");
	}
	else{
		printf("\n The given number is not a perfect number !!!");
	}
}
int main(){
	int a;
	printf("\n Enter a number : ");
	scanf("%d",&a);
	perfect_no(a);
	return 0;	
}
