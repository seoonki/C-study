// int는 4bytes (-21억 ~ +21억)

#include <iostream>
#include <cstring>


void main()
{
	// std::cout << "사과가" << 10 << "개";

	/*int num;
	std::cin >> num;
	std::cout << num << '\n';*/

	// std::cout << sizeof(int) << "\n" << sizeof(long) << "\n\n\n";

	// int는 시스템의 자연스러운 크기를 따르도록 규정하고 있다.
	// 자연스러운 크기란 시스템에서 한번에 처리할 수 있는 크기를 말하는데, 일반적인 윈도우즈 환경에서는 4byte(32bit)가 자연스러운 크기다.
	// (64비트 운영체제에서도 int의 크기는 4byte이다.long의 경우 32비트 운영체제에서는 4byte(32bit), 64비트 운영체제에서는 8byte(64bit)인데, 윈도우즈 64비트 운영체제에서는 long도 4byte이다.)

	char flower1[5] = "rose";
	char flower2[6] = {'l', 'i', 'l', 'a', 'c', '\0'};
	char flower3[] = "tulip";

	std::cout << strlen(flower1) << " " << sizeof(flower1) << std::endl; // 5
	std::cout << strlen(flower2) << " " << sizeof(flower2) << std::endl; // 6
	std::cout << strlen(flower3) << " " << sizeof(flower3) << std::endl; // 6
}
