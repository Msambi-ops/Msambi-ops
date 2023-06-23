#include <stdio.h>
//function declaration
int max(int num1, int num2);

int main()
{
//define local variables
	int a = 200;
	int b = 300;
	int ret;

//call the function to get maximum value
	ret = max(a, b);
	printf("The max value of a and b is %d\n", ret);

	return 0;
}

// function returning the maximum between the two numbers
int max(int num1, int num2)
{
//declare a local variable - computation
	int result;
	if (num1 > num2)
	result = num1;
	else
	result = num2;
	return result;
}
