#include <iostream>
#include <test.h>

int showBit()
{
	int a = 1;
	return a;
}

void sayYo()
{
	cout << "Yo";
}

int main()
{
	cout << "Hello";
	cout << " world";
	
	cout << showBit();
	bool c, d;
	c = true;
	d = false;

	cout << someFunction1();
	sayYo();
	
	return 0;
}