#include <iostream>

using namespace std;

extern int a;  // extern, 다른 source file의 전역변수에 접근
void sub1()
{
	a += 100;
	cout << "\n sub1의 a (file2.cpp) -->" << a;
}
