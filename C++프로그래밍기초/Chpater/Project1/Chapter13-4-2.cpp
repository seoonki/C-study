
// Section_03
// ����ó��

// ����ó�� ����� ũ�� 2����
// 1. ���ܰ� �߻��� �Լ��� ȣ���� �Լ��� ����
// 2. ���ܰ� �߻��� �Լ� ������ ���� try �������� ó��

#include <iostream>
using namespace std;

// 1. ���ܰ� �߻��� �Լ����� ȣ���� �Լ��� ���� ����(throw)

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
		cout << ex << "�� ���� �� ���� (���ܹ߻�)" << endl;
	}

	cout << "���α׷� ���� ����" << endl;
}