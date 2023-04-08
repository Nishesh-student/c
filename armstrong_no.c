#include<stdio.h>
void armstrog_no(int n){
	int arr[50],i=0,count=0,sum=0,pow,j,m=n;
	while(n){
		arr[i]=n%10;
		n/=10;
		i++;
		count++;
	}
	for(i=0;i<count;i++){
		pow=1;
		for(j=0;j<count;j++){
			pow=pow*arr[i];
		}
		sum=sum+pow;
	}
	if(sum==m){
		printf("\n The given number is armstrong number ");
	}
	else{
		printf("\n The given number is not armstrong number ");
	}
}
int main(){
	int a;
	printf("\n Enter a number : ");
	scanf("%d",&a);
	armstrog_no(a);
	return 0;
}
