#include <iostream>

using namespace std;
void sub();

void main()
{
	for (int i = 0; i <= 5; i++)
	{
		cout << i << "==================\n";
		sub();
	}
}

void sub()
{
	int a = 0;
	static int b = 0;  // 함수 안에 static, 소멸하지 않고 계속 살아있고 함수 내에서만 접근 가능

	a += 100;
	b += 100;

	cout << "   auto a = " << a << endl;
	cout << "   static b = " << b << endl;
}