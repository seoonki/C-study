// Section_02
// ��� Ŭ������ �����ڴ� �Ļ� Ŭ������ ��ӵ��� �ʴ´�.
// �Ļ� Ŭ������ ��ü�� �����ϸ�, (default �δ�)
// ��� Ŭ������ default ������ (�Ű����� ���� ������) ���� ȣ���ϰ�,
// �Ļ� Ŭ������ �����ڸ� ȣ���Ѵ�.

// �� ��, ��� Ŭ�������� default �ƴ� ������ ������ ����,
//                        default ������ ���� ���� ���س����� error ! (�Ļ�Ŭ�������� default ������ ȣ���ϱ� ����)
// 
// ��� Ŭ������ default ������ ���� �����س��ų�
// ��� Ŭ������ default �ƴ� ������ �����ϰų�
// �Ļ� Ŭ�������� default �ƴ� ��� Ŭ���� ������ ��������� ȣ���ϰų� �ؼ� ������ �ذ��� �� �ִ�.




// Section_03
// ��� Ŭ������ ����Լ��� �Ļ� Ŭ�������� overrriding (������) �� �� �ִ�.
// �� ��, ��� Ŭ������ ���ǵǾ� �ִ� ������ ������ ���·� �����ؾ� �Ѵ�. (����Լ��� ��ȯ��, �Ű������� �ڷ����� ���� �����ϰ�)

#include <iostream>
using namespace std;

class Calc
{
protected:
	int a;
	int b;

public:
	Calc();
	Calc(int new_A, int new_B);
	void Prn();
};

Calc::Calc()
{
	a = 0;
	b = 0;
}
Calc::Calc(int new_A, int new_B)
{
	a = new_A;
	b = new_B;
}
void Calc::Prn()
{
	cout << a << "\t" << b << endl;
}

class Add : public Calc
{
protected:
	int c;
public:
	Add();
	Add(int new_A, int new_B);
	void Sum();
	void Prn();  // overriding
};
Add::Add() : Calc()  // �Ļ� Ŭ���� �����ڿ��� ��� Ŭ���� ������ ȣ���Ͽ� �ʱ�ȭ (default�ε� ����� ȣ����)
{

}
Add::Add(int new_A, int new_B) : Calc(new_A, new_B)
{
	a = new_A;
	b = new_B;
	c = 0;
}
void Add::Sum()
{
	c = a + b;
}
void Add::Prn()  // overriding
{
	cout << a << " + " << b << " = " << c << endl;
}

class Mul : public Calc
{
protected:
	int c;
public:
	Mul();
	Mul(int new_A, int new_B);
	void Gob();
	void Prn();  // overriding
};
Mul::Mul() : Calc()
{

}
Mul::Mul(int new_A, int new_B) : Calc(new_A, new_B)
{
	a = new_A;
	b = new_B;
	c = 0;
}
void Mul::Gob()
{
	c = a * b;
}
void Mul::Prn()  // overriding
{
	cout << a << " * " << b << " = " << c << endl;
}

void main()
{
	Calc x(3, 5);
	x.Prn();

	Add y(3, 5);
	y.Sum();
	y.Prn();

	Mul z(3, 5);
	z.Gob();
	z.Prn();
}