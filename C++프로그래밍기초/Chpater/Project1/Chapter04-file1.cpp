#include <iostream>

using namespace std;

int a = 20;
int b = 30;
void sub1();
void sub2();

void main()
{
	cout << "\n mainÀÇ a (file1.cpp) -->" << a;
	sub1();
	sub2();
	cout << "\n mainÀÇ a (file1.cpp) -->" << a;
	cout << "\n mainÀÇ b (file1.cpp) -->" << b << endl;
}
