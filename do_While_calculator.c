#include<stdio.h>
int main()
{
	int num1,num2,choice;
	do{		
		printf("\n\n\n");
		printf("\n\t\t\t\t********Welcome to calculator********\n\n");
		printf("\n\t\t\t\t---------------MENU------------------");
		printf("\n\t\t\t\t*************************************");
		printf("\n\t\t\t\t* 1 -> Addition                     *");
		printf("\n\t\t\t\t* 2 -> Subtraction                  *");
		printf("\n\t\t\t\t* 3 -> Multiplication               *");
		printf("\n\t\t\t\t* 4 -> Division                     *");
		printf("\n\t\t\t\t* 0 -> Exit                         *");
		printf("\n\t\t\t\t*************************************");
		printf("\n\n");
		printf("\n\t\t\t\t Enter your choice : ");
		scanf("%d",&choice);
		while(choice>0&&choice<=4){
			printf("\n\t\t\t\t Enter num1 : ");
			scanf("%d",&num1);
			printf("\n\t\t\t\t Enter num2 : ");
			scanf("%d",&num2);
			if(choice==1){
				printf("\n\t\t\t\t-----------------");
				printf("\n\t\t\t\t| Addition = %d |",num1+num2);
				printf("\n\t\t\t\t-----------------");
			}
			else if(choice==2){
				printf("\n\t\t\t\t--------------------");
				printf("\n\t\t\t\t| Subtraction = %d |",num1-num2);
				printf("\n\t\t\t\t--------------------");
			}
			else if(choice==3){
				printf("\n\t\t\t\t-----------------------");
				printf("\n\t\t\t\t| Multiplication = %d |",num1*num2);
				printf("\n\t\t\t\t-----------------------");
			}
			else if(choice==4){
				printf("\n\t\t\t\t-----------------");
				printf("\n\t\t\t\t| Division = %d |",num1/num2);
				printf("\n\t\t\t\t-----------------");
			}
			break;
		}
	}while(choice!=0);
	
	return 0;
}
