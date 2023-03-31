// ����ó�� (source file�� compile �ϱ� ����)
// 1. ��ũ�� ��� ( #define PI 3.14 )
// 2. const ��� ( const int true = 1; )
// 3. ��ũ�� �Լ� ( #define max(x,y) (x)>(y) ? (x) : (y);)
// 4. inline �Լ� ( inline int add(int a, int b){ ... })
//    inline �Լ��� ��ũ�� �Լ��� �������� ���ϴ� �������� ��������
// 5. #include �� 
//    �ܺ������� ���� �������� ���Ͽ� ���ٿ� ���� ����


// Section_04 ���Ŭ������
// [���Ŭ����] �ڷ��� ������;
// �̷��� ������ �����Ѵ�.
// int a;
// �̷��� �Ҷ��� ��� auto �� ������ ��. // ��,, auto�� �ٲ��?

// [���Ŭ����]���� auto, extern, static, register �� �ִ�
// register�� �Ϲݺ���(auto)�� ������ ���� �޸� ���� ���� ���

#include <iostream>

using namespace std;
int a;  // ��������, �Ҹ����� �ʰ� ���α׷� ���� ������ �������
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