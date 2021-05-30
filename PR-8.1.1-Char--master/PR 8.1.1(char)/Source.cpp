#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int Count(int t, const char* rstr, const char* str, int k, int j)
{
	int pos = 0;

	char* s{};
	while (rstr[t] != '\0')
	{
		(rstr[k] == str[j] && rstr[k] != '\0');
		pos = str - s + 1;
		if (s[pos + 1] != '\0')
			k++;
	}
	return k;
}


int main()
{
	char* pdest;
	int result;

	char rstr[] = "abc";
	char str[101] = "Repeat abc";

	cout << "String to be searched:" << endl << " " << str << endl;
	pdest = strstr(str, rstr);
	result = (int)(pdest - str + 1);
	char* dest = new char[151];
	if (pdest != NULL)
		cout << rstr << " found at position " << result << endl;
	else
		cout << rstr << " not found" << endl;
	return 0;
}