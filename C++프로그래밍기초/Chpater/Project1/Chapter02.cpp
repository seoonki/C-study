// int�� 4bytes (-21�� ~ +21��)

#include <iostream>
#include <cstring>


void main()
{
	// std::cout << "�����" << 10 << "��";

	/*int num;
	std::cin >> num;
	std::cout << num << '\n';*/

	// std::cout << sizeof(int) << "\n" << sizeof(long) << "\n\n\n";

	// int�� �ý����� �ڿ������� ũ�⸦ �������� �����ϰ� �ִ�.
	// �ڿ������� ũ��� �ý��ۿ��� �ѹ��� ó���� �� �ִ� ũ�⸦ ���ϴµ�, �Ϲ����� �������� ȯ�濡���� 4byte(32bit)�� �ڿ������� ũ���.
	// (64��Ʈ �ü�������� int�� ũ��� 4byte�̴�.long�� ��� 32��Ʈ �ü�������� 4byte(32bit), 64��Ʈ �ü�������� 8byte(64bit)�ε�, �������� 64��Ʈ �ü�������� long�� 4byte�̴�.)

	char flower1[5] = "rose";
	char flower2[6] = {'l', 'i', 'l', 'a', 'c', '\0'};
	char flower3[] = "tulip";

	std::cout << strlen(flower1) << " " << sizeof(flower1) << std::endl; // 5
	std::cout << strlen(flower2) << " " << sizeof(flower2) << std::endl; // 6
	std::cout << strlen(flower3) << " " << sizeof(flower3) << std::endl; // 6
}
