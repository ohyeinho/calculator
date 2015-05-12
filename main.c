#include <stdio.h>
 
int add(int, int);
int sub(int, int);

int div(int, int);
int multi(int, int);
int a;
int aaaa;
 
int main(int argc, char* argv[])
{
	int number1, number2, result;
	char operator;
// qwe2222
	
	printf("ohyeahye! Domino!");

	scanf("%d %c %d", &number1, &operator, &number2);
	
	switch (operator)
	{
		case '+':
			result = add(number1, number2);
			break;
		case '-':
			result = sub(number1, number2);
			break;
		case '*':
			result = multi(number1, number2);
			break;
		case '/':
			result = div(number1, number2);
			break;
	}
	
	printf("result is %d.\n", result);
	
	return 0;
}
 
int add(int number1, int number2)
{
	//TODO implementation
	return 0;
}
 
int sub(int number1, int number2)
{
	//TODO implementation
	return 0;
}
 
int multi(int number1, int number2)
{
	//TODO implementation
	return 0;
}
 
int div(int number1, int number2)
{
	//TODO implementation
	return 0;
}