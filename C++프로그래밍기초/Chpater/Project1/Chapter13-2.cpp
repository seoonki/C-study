
// Section_02
// Template Class

#include <iostream>
using namespace std;

template <typename T>
class Test              // �� class �̸��� Test �� �ƴ϶� Test<T> �̴�
{
	T value;
public:
	Test(T v);
	T GetValue();
};

template <typename T>
Test<T>::Test(T v)
{
	value = v;
}
template <typename T>
T Test<T>::GetValue()
{
	return value;
}


void main()
{
	Test<int> obj1(10);
	cout << obj1.GetValue() << endl;

	Test<double> obj2(5.7);
	cout << obj2.GetValue() << endl;

}
