// Section_01
// 객체 포인터
// 객체(class)의 주소를 가르키는 포인터
// Complex x;
// Complex* pCom;
// pCom = &x;
// x.ShowComplex();
// pCom-->ShowComplex();

// 일반 자료형의 포인터 변수가 주소값만 4byte로 저장하듯이 객체 포인터 변수도 주소값을 4byte로 저장

// x.ShowComplex();
// y.ShowComplex();
// 객체 x, y는 멤버함수 ShowComplex를 공유하여 사용한다.
// ShowComplex 입장에서는 어떤 객체가 자기를 호출했는지 어떻게 구분할까
// 멤버 함수 내에서 객체 포인터 this가 이를 구분해준다.
// void Complex::ShowComplex()                                 ----------- Compile -------------->        void Complex::ShowComplex( Complex* this )
// {    cout << real << " + " << image << "i" << endl;   }                                                {    cout << this->real << " + " << this->image << "i" << endl;   }




// Section_02
// 다른 자료형들 처럼 객체도 
// 똑같이 함수의 매개변수로 쓰일 수 있고
// call by value, pointer, reference 로 똑같이 전달된다.




// Section_03
// static 멤버변수는 모든 객체에 의해 공유된다. (저장/유지 원리가 전역변수와 동일함)

#include<iostream>
using namespace std;

class StaticTest
{
private:
	static int a;  // static 멤버변수
	int b;
public:
	StaticTest();
	static void SetA(int new_a);  // static 멤버변수(a)를 private으로 선언하면, 이 변수를 사용하기 위한 static 멤버함수가 별도로 필요함.
	static int GetA();
};

int StaticTest::a = 10;  // 꼭 class 밖에서 별도로 초기화되어야함.

StaticTest::StaticTest()
{
	b = 20;
}
void StaticTest::SetA(int new_a)  // static 멤버함수에서는 this 를 사용할 수 없다.
{                                 // static 멤버함수에서는 instance 변수(b)를 사용할 수 없다.
	a = new_a;                    // static 멤버함수는 오버라이딩 되지 않는다.
}
int StaticTest::GetA()
{
	return a;
}

void main()
{
	cout << StaticTest::GetA() << endl;

	StaticTest s1, s2;

	s1.SetA(10000);

	cout << s1.GetA() << endl;
	cout << s2.GetA() << endl;
}




// Section_04
// 객체를 배열로도 사용할 수 있다.




// Section_05
// friend 함수
// 일반 함수에서는 private 멤버를 사용할 수 없지만
// 굳이 사용하고자 하면 friend 를 붙여주면 됨.
// friend 함수도 일반함수지만 class내에서 선언해줘야함.