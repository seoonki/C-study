// Section_02
// ������ ������
// �׳� ������(+, -, ...)�� ���� �Լ���
// �⺻ �ڷ������� ���ǵǾ� �־
// ������� class�� ���ؼ��� ������(overloading) ���ִ� ��


#include <iostream>

using namespace std;

class Complex
{
private:
	int real;
	int image;

public:
	Complex(int r = 0, int i = 0);
	void ShowComplex();
	
	Complex operator+(const Complex& rightHand) const;
	Complex operator-(const Complex& rightHand) const;
	Complex operator-() const;
};


Complex::Complex(int r, int i)
{
	real = r;
	image = i;
}

void Complex::ShowComplex()
{
	if (image > 0)
		cout << real << "+" << image << "i" << endl;
	else if (image < 0)
		cout << real << image << "i" << endl;
	else
		cout << real << endl;
}

Complex Complex::operator+(const Complex& rightHand) const
{
	Complex res;
	res.real = this->real + rightHand.real;
	res.image = this->image + rightHand.image;
	
	return res;
}

Complex Complex::operator-(const Complex &rightHand) const
{
	Complex res;
	res.real = this->real - rightHand.real;
	res.image = this->image - rightHand.image;

	return res;
}

Complex Complex::operator-() const
{
	Complex res;
	res.real = -(this->real);
	res.image = -(this->image);

	return res;
}

void main()
{
	Complex x(10, 20);
	Complex y(20, 40);
	Complex z;

	cout << "\n---------------------------------------\n";
	z = x + y;
	x.ShowComplex();
	y.ShowComplex();
	z.ShowComplex();

	cout << "\n---------------------------------------\n";
	z = x - y;
	x.ShowComplex();
	y.ShowComplex();
	z.ShowComplex();
	
	cout << "\n---------------------------------------\n";
	z = - x;
	x.ShowComplex();
	y.ShowComplex();
	z.ShowComplex();

}