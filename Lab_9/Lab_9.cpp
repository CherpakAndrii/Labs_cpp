#include <iostream>
#include <string>
#include "Header1.h"

using namespace std;

int main() {
	int n = 0;
	string str;
	char c;
	cout << "Input a string: ";
	getline(cin, str);
	str += " ";
	cout << "\nInput the character:"; cin >> c;
	cout << endl;
	while (str.length() > 0) { str = get_word(str, c, n); }
	cout << "\nNumber of changes: " << n << endl;
}
