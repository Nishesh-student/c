
#include<stdio.h>
int main(){
	int i;
	system("color 04");
	for(i=5;i>=0;i--){
		system("color 02");
		printf("%d",i);
		sleep(1);
		system("cls");
	}
	printf("\n BOOM");
}
