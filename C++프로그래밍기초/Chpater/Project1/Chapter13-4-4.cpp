
// Section_03
// ����ó��

// �ϳ��� try ��, �������� catch ��

#include <iostream>
using namespace std;

void func(int a)
{
	try
	{
		if (a == 0)
		{
			char str[10] = "0 �̴�";
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
		cout << ex << " ���ܹ߻�" << endl;
	}
	
}

void main()
{
	func(10);
	func(0);
	func(20);
}