
// Section_03
// 예외처리

#include <iostream>
using namespace std;

void main()
{
	int a, b, c, d;

	cout << "첫번째 입력 : " << endl;
	cin >> a;

	cout << "두번째 입력 : " << endl;
	cin >> b;

	try
	{
		if (b == 0)
			throw b;

		c = a / b;
		d = a % b;

		cout << c << "\t" << d << endl;
	}
	catch (int ex)
	{
		cout << ex << "로 나눌 수 없음 (예외발생)" << endl;
	}

	cout << "프로그램 정상 종료" << endl;
}