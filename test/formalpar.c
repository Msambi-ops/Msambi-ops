#include <stdio.h>
//function declaration
int sum (int a, int b);
//declare global variable
int a = 20;

int main ()
{
//declare local variables
	int a = 10;
	int b = 20;
	int c = 0;

printf("The value of a in main () is %d\n", a);
c = sum(a, b);
printf("The sum of a and b in main() is %d\n", c);

return 0;
}

//function sum
int sum (int a, int b)
{
int result;

printf("The value of a in sum is %d\n", a);
printf("The value of b in sum is %d\n", b);
result = a + b;
return result;
}
