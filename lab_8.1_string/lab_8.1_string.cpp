// lab_8.1_string.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int Count1(const string str, const char c)
{
	size_t comma = 0;
	int k = 0;
	while ((comma = str.find(c, comma)) != -1)
	{
		k++;
		comma++;
	}
	return k;
}
string Change(string& s)
{
	size_t comma = 0;
	while ((comma = s.find(',', comma)) != -1) {
		if (s[comma + 1] == ',') {
			s.replace(comma, 2, "**");
			comma += 2;
		}
		else comma += 1;
	}
	return s;
}
int main()
{
	string str;
	cout << "Enter string:" << endl;
	getline(cin, str);
	char c = ',';
	

	cout << "String contained " << Count1(str, c) << " symbols ',' " << endl;
	string dest = Change(str);
	cout << "Modified string (result): " << dest << endl;
	return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
