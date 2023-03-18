#include<stdio.h>
int main(){
	int i,j,count,arr[8]={1,2,3,4,1,2,3,3};
	for(i=0;i<8;i++){
		for(j=i+1;j<8;j++){
			if(arr[i]==arr[j]){
				count++;
				break;
			}
		}
	}
	printf("\n The no.of duplicate elements is %d",count);
	return 0;
}
