// Call by value         // address --> value
// Call by address     
// Call by reference

#include <iostream>

using namespace std;

void swap(int& a, int& b);

void main()
{
	int x = 10, y = 20;
	cout << " x " << x << endl;
	cout << " y " << y << endl;
	swap(x, y);
	cout << " x " << x << endl;
	cout << " y " << y << endl;
}

void swap(int& a, int& b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}

