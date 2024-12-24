#include <stdio.h>
int main(){
	double  num1 , num2, result ;
	char operation ;
	result = 0 ;
	printf("*****Simple Calculator*****\n");
	printf("Enter Number 1 : ");
	scanf("%lf",&num1);
	getchar();
	printf("Please enter the arithmetic operation(+,-,/,*) : ");
        scanf("%c",&operation);
	printf("Enter number 2 : ");
	scanf("%lf",&num2);

	switch (operation){
		case '+' : 
			result = num1 + num2 ; 
			break;
		case '-' : 
			result = num1 - num2 ;
			break;
		case '*' : 
			result = num1 * num2 ;
			break; 
		case '/' : 
			if ( num2 != 0 ){
				result = num1 / num2 ; 
			}
			else {
				printf("Division by 0 is not allowed!");
				return 1 ;
			}
			break;
		default : 
			printf("Invalid operation");
			return 1;		
	}
	printf("The result is : %.2lf",result);
	return 0;
}
