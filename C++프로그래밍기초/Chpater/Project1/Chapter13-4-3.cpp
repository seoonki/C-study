
// Section_03
// ����ó��

// ����ó�� ����� ũ�� 2����
// 1. ���ܰ� �߻��� �Լ��� ȣ���� �Լ��� ����
// 2. ���ܰ� �߻��� �Լ� ������ ���� try �������� ó��

#include <iostream>
using namespace std;

// 2. ���ܰ� �߻��� �Լ� ������ ���� try �������� ó��

void divide(int a, int b)
{
	int c, d;

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
		cout << ex << "�� ���� �� ���� (���ܹ߻�)" << endl;
	}
}

void main()
{

	divide(10, 2);
	divide(10, 0);
	divide(10, 4);

	cout << "���α׷� ���� ����" << endl;
}