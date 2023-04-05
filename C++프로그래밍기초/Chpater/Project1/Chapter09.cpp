// Section_01
// ��ü ������
// ��ü(class)�� �ּҸ� ����Ű�� ������
// Complex x;
// Complex* pCom;
// pCom = &x;
// x.ShowComplex();
// pCom-->ShowComplex();

// �Ϲ� �ڷ����� ������ ������ �ּҰ��� 4byte�� �����ϵ��� ��ü ������ ������ �ּҰ��� 4byte�� ����

// x.ShowComplex();
// y.ShowComplex();
// ��ü x, y�� ����Լ� ShowComplex�� �����Ͽ� ����Ѵ�.
// ShowComplex ���忡���� � ��ü�� �ڱ⸦ ȣ���ߴ��� ��� �����ұ�
// ��� �Լ� ������ ��ü ������ this�� �̸� �������ش�.
// void Complex::ShowComplex()                                 ----------- Compile -------------->        void Complex::ShowComplex( Complex* this )
// {    cout << real << " + " << image << "i" << endl;   }                                                {    cout << this->real << " + " << this->image << "i" << endl;   }




// Section_02
// �ٸ� �ڷ����� ó�� ��ü�� 
// �Ȱ��� �Լ��� �Ű������� ���� �� �ְ�
// call by value, pointer, reference �� �Ȱ��� ���޵ȴ�.




// Section_03
// static ��������� ��� ��ü�� ���� �����ȴ�. (����/���� ������ ���������� ������)

#include<iostream>
using namespace std;

class StaticTest
{
private:
	static int a;  // static �������
	int b;
public:
	StaticTest();
	static void SetA(int new_a);  // static �������(a)�� private���� �����ϸ�, �� ������ ����ϱ� ���� static ����Լ��� ������ �ʿ���.
	static int GetA();
};

int StaticTest::a = 10;  // �� class �ۿ��� ������ �ʱ�ȭ�Ǿ����.

StaticTest::StaticTest()
{
	b = 20;
}
void StaticTest::SetA(int new_a)  // static ����Լ������� this �� ����� �� ����.
{                                 // static ����Լ������� instance ����(b)�� ����� �� ����.
	a = new_a;                    // static ����Լ��� �������̵� ���� �ʴ´�.
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
// ��ü�� �迭�ε� ����� �� �ִ�.




// Section_05
// friend �Լ�
// �Ϲ� �Լ������� private ����� ����� �� ������
// ���� ����ϰ��� �ϸ� friend �� �ٿ��ָ� ��.
// friend �Լ��� �Ϲ��Լ����� class������ �����������.