// 선행처리 (source file을 compile 하기 전에)
// 1. 매크로 상수 ( #define PI 3.14 )
// 2. const 상수 ( const int true = 1; )
// 3. 매크로 함수 ( #define max(x,y) (x)>(y) ? (x) : (y);)
// 4. inline 함수 ( inline int add(int a, int b){ ... })
//    inline 함수는 매크로 함수가 제공하지 못하는 안정성을 보장해줌
// 5. #include 문 
//    외부파일을 현재 진행중인 파일에 덧붙여 놓는 역할


// Section_04 기억클래스류
// [기억클래스] 자료형 변수명;
// 이렇게 변수를 선언한다.
// int a;
// 이렇게 할때도 사실 auto 가 생략된 것. // 음,, auto는 바뀐듯?

// [기억클래스]에는 auto, extern, static, register 가 있다
// register는 일반변수(auto)와 같으나 빠른 메모리 접근 위해 사용

#include <iostream>

using namespace std;
int a;  // 전역변수, 소멸하지 않고 프로그램 끝날 때까지 살아있음
void func();

void main()
{
	int a = 20;
	cout << "\n main a " << a;

	func();
	cout << "\n main a " << a;

}

void func()
{
	cout << "\n func a " << a;
	a = a + 100;
	cout << "\n func a " << a;
}