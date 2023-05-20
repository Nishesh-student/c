
#include<stdio.h>
#include<windows.h>
int main(){
	int i;
	system("color 04");
	for(i=5;i>=0;i--){
		system("color 02");
		printf("%d",i);
		Beep(1500,2000);
		sleep(0.5);
		system("cls");
	}
	printf("\n BOOM");
}
