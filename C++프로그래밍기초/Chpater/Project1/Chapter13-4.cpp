
// Section_03
// ����ó��

#include <iostream>
using namespace std;

void main()
{
	int a, b, c, d;

	cout << "ù��° �Է� : " << endl;
	cin >> a;

	cout << "�ι�° �Է� : " << endl;
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
		cout << ex << "�� ���� �� ���� (���ܹ߻�)" << endl;
	}

	cout << "���α׷� ���� ����" << endl;
}