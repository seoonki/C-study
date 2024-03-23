
// Section_03
// 예외처리

// 예외처리 방법은 크게 2가지
// 1. 예외가 발생한 함수를 호출한 함수로 전달
// 2. 예외가 발생한 함수 내에서 직접 try 구문으로 처리

#include <iostream>
using namespace std;

// 1. 예외가 발생한 함수에서 호출한 함수로 예외 전달(throw)

void divide(int a, int b)
{
	int c, d;

	if (b == 0)
		throw b;
	c = a / b;
	d = a % b;
	
	cout << c << "\t" << d << endl;
}

void main()
{
	try
	{
		divide(10, 2);
		divide(10, 0);
		divide(10, 4);
	}
	catch (int ex)
	{
		cout << ex << "로 나눌 수 없음 (예외발생)" << endl;
	}

	cout << "프로그램 정상 종료" << endl;
}