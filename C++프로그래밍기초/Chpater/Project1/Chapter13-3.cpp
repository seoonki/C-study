
// Section_02
// Template Class
// 2개의 자료형

#include <iostream>
using namespace std;

template <typename T, typename T_ref>
class Data
{
private:
	T value;
public:
	Data(T v);
	void CopyData(const T_ref v);
	T GetData();
};
template <typename T, typename T_ref>
Data<T, T_ref>::Data(T v)
{
	value = v;
}
template <typename T, typename T_ref>
void Data<T, T_ref>::CopyData(const T_ref v)
{
	value = v;
}
template <typename T, typename T_ref>
T Data<T, T_ref>::GetData()
{
	return value;
}


void main()
{
	int a = 15;
	Data<int, int&> obj1(10);
	cout << obj1.GetData() << endl;
	obj1.CopyData(a);
	cout << obj1.GetData() << endl;

	double b = 3.4;
	Data<double, double&> obj2(1.5);
	cout << obj2.GetData() << endl;
	obj2.CopyData(b);
	cout << obj2.GetData() << endl;
}