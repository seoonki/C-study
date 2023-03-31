#include <iostream>

using namespace std;

static int b = 20;  // static, 해당 source에서만 접근 가능
void sub2()
{
	b += 100;
	cout << "\n sub2의 b (file3.cpp) -->" << b;
}
