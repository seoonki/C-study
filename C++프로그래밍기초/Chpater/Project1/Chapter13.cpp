
// Section_01
// Template

// T에는 기본 자료형 뿐만 아니라 사용자 정의한 구조체, 클래스도 적용된다.

#include <iostream>
using namespace std;

template <typename T>
T abs(T num)
{
	if (num < 0)
		num = -num;
	return num;
}

void main()
{
	int a = -10;
	double b = -3.4;
	long int c = -20L;

	cout << a << "\t" << abs(a) << endl;
	cout << b << "\t" << abs(b) << endl;
	cout << c << "\t" << abs(c) << endl;
}


