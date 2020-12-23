#include "Header1.h"
#include <string>
#include <iostream>

using namespace std;

string get_word(string str, char c, int &count) {
	int n = str.find(" ");
	string s = str.substr(0, n);
	if (!str.length()) return "";
	check(s, c, count);
	str = str.erase(0, n + 1);
	return str;
}

void check(string s, char c, int& count) {
	int l = s.length();
	if (!(s[0] == c) && !(s[l - 1] == c)) cout << s;
	else count++;
}
