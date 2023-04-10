
// Section_03
// Pure Virtual function 과 Abstract Class
//
// Pure Virtual function   :   함수의 정의 없이 함수의 유형만 기반클래스에 제시한 것 ( ex, virtual void Prn() = 0;)
// Abstract Class          :   1개 이상의 Pure Virtual function 을 가진 Class, 객체 생성 불가능
//                             무조건 상속을 위한 기반클래스로 쓰임
//                             파생클래스는 Pure Virtual function 을 반드시 구현하도록 강제성을 부여받음
// 

#include <iostream>
using namespace std;


class Shape                              // Abstract class, 기반클래스
{
protected:
	double area;
public:
	virtual void Draw() = 0;             // Pure Virtual function
	virtual double GetSize() = 0;        // Pure Virtual function
};


class Rect : public Shape
{
protected:
	int width;
	int height;
public:
	Rect(int w = 0, int h = 0);
	void Draw();                      // Overiding
	double GetSize();                 // Overiding
};
Rect::Rect(int w, int h)
{
	width = w;
	height = h;
}
void Rect::Draw()
{
	cout << "사각형을 그린다" << endl;
}
double Rect::GetSize()
{
	area = width * height;
	return area;
}


class Circle : public Shape
{
protected:
	int radius;
public:
	Circle(int r = 0);
	void Draw();                      // Overiding
	double GetSize();                 // Overiding
};
Circle::Circle(int r)
{
	radius = r;
}
void Circle::Draw()
{
	cout << "원을 그린다" << endl;
}
double Circle::GetSize()
{
	area = radius * radius * 3.14;
	return area;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void CommonPrn(Shape* ptr) // 파생클래스 포인터가 기반클래스 포인터로 UpCasting
{
	ptr->Draw();  // Draw 는 Virtual fuction 이기 때문에 UpCasting 되더라도 객체의 자료형에 의해 호출될 함수 결정 (Dynamic binding)
}
// 다형성은 동일한 인터페이스로 접근하지만 구체적으로 수행되는 기능이 다른 것으로, 추상클래스와 완전가상함수로 객체지향 프로그래밍의 다형성이 현실화된다


void main()
{
	Rect recObj(8, 10);
	// recObj.Draw();
	CommonPrn(new Rect);
	cout << "사각형의 면적 : " << recObj.GetSize() << endl;

	Circle cirObj(5);
	// cirObj.Draw();
	CommonPrn(new Circle);
	cout << "원의 면적 : " << cirObj.GetSize() << endl;
}