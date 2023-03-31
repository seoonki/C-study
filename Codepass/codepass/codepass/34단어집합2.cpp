#include <iostream>
#include <string>
#include <vector>

using namespace std;
vector <string> word;

void push(string str)
{
	for (string st : word)
		if (st == str)
			return;

	word.push_back(str);
}

void output()
{
	for (string st : word)
		cout << st << " ";
}

int main()
{
	string str;
	while (1)
	{
		getline(cin, str);
		if (str == "END")
			break;

		int i, k = 0;
		for (i = 0; i < str.size(); i++)
		{
			if (str[i] == ' ')
			{
				push(str.substr(k, i - k));
				k = i + 1;
			}
		}
		push(str.substr(k, i - k));
		output();
		printf("\n");
	}

	return 0;
}