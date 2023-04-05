// Section_02
// 기반 클래스의 생성자는 파생 클래스로 상속되지 않는다.
// 파생 클래스의 객체를 생성하면, (default 로는)
// 기반 클래스의 default 생성자 (매개변수 없는 생성자) 먼저 호출하고,
// 파생 클래스의 생성자를 호출한다.

// 이 때, 기반 클래스에서 default 아닌 생성자 정의해 놓고,
//                        default 생성자 따로 정의 안해놓으면 error ! (파생클래스에서 default 생성자 호출하기 때문)
// 
// 기반 클래스에 default 생성자 따로 정의해놓거나
// 기반 클래스에 default 아닌 생성자 제거하거나
// 파생 클래스에서 default 아닌 기반 클래스 생성자 명시적으로 호출하거나 해서 문제를 해결할 순 있다.




// Section_03
// 기반 클래스의 멤버함수를 파생 클래스에서 overrriding (재정의) 할 수 있다.
// 이 때, 기반 클래스에 정의되어 있는 원형과 동일한 현태로 정의해야 한다. (멤버함수의 반환값, 매개변수의 자료형과 개수 동일하게)

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
Add::Add() : Calc()  // 파생 클래스 생성자에서 기반 클래스 생성자 호출하여 초기화 (default인데 명시적 호출임)
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