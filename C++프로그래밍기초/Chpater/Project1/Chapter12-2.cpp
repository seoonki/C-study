
// Section_03
// Pure Virtual function �� Abstract Class
//
// Pure Virtual function   :   �Լ��� ���� ���� �Լ��� ������ ���Ŭ������ ������ �� ( ex, virtual void Prn() = 0;)
// Abstract Class          :   1�� �̻��� Pure Virtual function �� ���� Class, ��ü ���� �Ұ���
//                             ������ ����� ���� ���Ŭ������ ����
//                             �Ļ�Ŭ������ Pure Virtual function �� �ݵ�� �����ϵ��� �������� �ο�����
// 

#include <iostream>
using namespace std;


class Shape                              // Abstract class, ���Ŭ����
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
	cout << "�簢���� �׸���" << endl;
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
	cout << "���� �׸���" << endl;
}
double Circle::GetSize()
{
	area = radius * radius * 3.14;
	return area;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void CommonPrn(Shape* ptr) // �Ļ�Ŭ���� �����Ͱ� ���Ŭ���� �����ͷ� UpCasting
{
	ptr->Draw();  // Draw �� Virtual fuction �̱� ������ UpCasting �Ǵ��� ��ü�� �ڷ����� ���� ȣ��� �Լ� ���� (Dynamic binding)
}
// �������� ������ �������̽��� ���������� ��ü������ ����Ǵ� ����� �ٸ� ������, �߻�Ŭ������ ���������Լ��� ��ü���� ���α׷����� �������� ����ȭ�ȴ�


void main()
{
	Rect recObj(8, 10);
	// recObj.Draw();
	CommonPrn(new Rect);
	cout << "�簢���� ���� : " << recObj.GetSize() << endl;

	Circle cirObj(5);
	// cirObj.Draw();
	CommonPrn(new Circle);
	cout << "���� ���� : " << cirObj.GetSize() << endl;
}