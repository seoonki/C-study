#include <iostream>

using namespace std;

extern int a;  // extern, �ٸ� source file�� ���������� ����
void sub1()
{
	a += 100;
	cout << "\n sub1�� a (file2.cpp) -->" << a;
}
