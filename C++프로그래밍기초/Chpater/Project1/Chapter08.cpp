// Ŭ������ ��ü

// ���� ������ ( private  protected  public )
// ���� private �� �������
//      public  �� ����Լ�
// private �� default

#include <iostream>
using namespace std;

class Complex
{
private:
	int real;
	int image;

public:
	void SetComplex();
	void ShowComplex() const;  // �̷��� const�� ������ �� ����Լ������� ��� ��������� ������ �� ����.
	void SetReal(int r);
	void SetImage(int i);

	/*void SetComplex()   // �̷��� ���� class ���ο� ���ǵ� �Լ��� �ڵ����� inline �Լ��� ó���ȴ�.
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
