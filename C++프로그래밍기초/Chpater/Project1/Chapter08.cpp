// 클래스와 객체

// 접근 지정자 ( private  protected  public )
// 보통 private 에 멤버변수
//      public  에 멤버함수
// private 이 default

#include <iostream>
using namespace std;

class Complex
{
private:
	int real;
	int image;

public:
	void SetComplex();
	void ShowComplex() const;  // 이렇게 const가 붙으면 이 멤버함수에서는 어떠한 멤버변수도 변경할 수 없다.
	void SetReal(int r);
	void SetImage(int i);

	/*void SetComplex()   // 이렇게 만약 class 내부에 정의된 함수는 자동으로 inline 함수로 처리된다.
	{
		real = 2;
		image = 5;
	}*/
};

void Complex::SetComplex()
{
	real = 2;
	image = 5;
}
void Complex::ShowComplex() const  
{
	cout << real << " + " << image << "i" << endl;
}
void Complex::SetReal(int r)
{
	real = r;
}
void Complex::SetImage(int i)
{
	image = i;
}

void main()
{
	Complex x;
	x.SetReal(5);
	x.SetImage(10);
	x.ShowComplex();
}
