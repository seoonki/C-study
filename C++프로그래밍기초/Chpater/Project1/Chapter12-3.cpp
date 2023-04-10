
// 기반클래스 소멸자를 virtual function 으로 해야함
// 
// virtual function 이어야만  UpCasting 되더라도 (포인터 변수의 자료형이 아닌) 객체의 자료형에 의해 호출될 함수 결정하는데,
// 소멸자 또한 마찬가지이다


#include <iostream>
using namespace std;


class Base
{
public:
	Base();
	// ~Base();
	virtual ~Base();
};
Base::Base()
{
	cout << "기반 클래스의 생성자" << endl;
}
Base::~Base()
{
	cout << "기반 클래스의 소멸자" << endl;
}


class Derived : public Base
{
public:
	Derived();
	~Derived();
};
Derived::Derived()
{
	cout << "파생 클래스의 생성자" << endl;
}
Derived::~Derived()
{
	cout << "파생 클래스의 소멸자" << endl;
}



void main()
{
	Base* BasePtr = new Derived;
	delete BasePtr;
}