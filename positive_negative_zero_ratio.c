//positive_negative_zero_ratio
#include<stdio.h>
int main()
{
	int arr[5]={1,1,0,-1,-1};int i;
	float count_positive=0,count_negative=0,count_zero=0;
	float positive_ratio,negative_ratio,zero_ratio;
	for(i=0;i<5;i++){
		if(arr[i]>0){
			count_positive++;
		}
		else if(arr[i]<0){
			count_negative++;
		}
		else if(arr[i]==0){
			count_zero++;
		}
	}
	positive_ratio=count_positive/5;
	negative_ratio=count_negative/5;
	zero_ratio=count_zero/5;
	printf("\n The total number of positive number is : %0.0f",count_positive);
	printf("\n The total number of negative number is : %0.0f",count_negative);
	printf("\n The total number of zero number is : %0.0f",count_zero);
	printf("\n The ratio of positive number is %0.5f",positive_ratio);
	printf("\n The ratio of negative number is %0.5f",negative_ratio);
	printf("\n The ratio of zero number is %0.5f",zero_ratio);
	return 0;
}
