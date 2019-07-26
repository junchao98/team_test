#include <stdio.h>

int add(int a, int b)
{
	int c=0;
	c = a + b;
	printf("%d \n", c);
	return c;

}

int sub(int a, int b)
{
	int c=0;
	c = a - b;
	printf("%d \n", c);
	return c;

}

int mult(int a, int b)
{

	int c=0;
	c = a * b;
	printf("%d \n", c);
	return c;	
	
	
}

int main(void)
{
	add(12,11);
	sub(23, 10);

}
