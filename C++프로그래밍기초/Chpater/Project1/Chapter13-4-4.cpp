
// Section_03
// 예외처리

// 하나의 try 문, 여러개의 catch 문

#include <iostream>
using namespace std;

void func(int a)
{
	try
	{
		if (a == 0)
		{
			char str[10] = "0 이다";
			throw str;
		}
		else
			throw a;
	}
	catch (char* str)
	{
		cout << str << endl;
	}
	catch (int ex)
	{
		cout << ex << " 예외발생" << endl;
	}
	
}

void main()
{
	func(10);
	func(0);
	func(20);
}