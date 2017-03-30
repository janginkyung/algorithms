#include<iostream>
#include <string>
using namespace std;
int main() {
	int num[26];
	string str;
	cin >> str;
	int i = 0;
	int length = str.length();
	for (i = 0; i < 26; i++) {
		num[i] = -1;
	}
	for (i = 0; i < length; i++) {
		int m = (int)str[i] - 97;
		if (num[m] == -1)
			num[m] = i;

	}
	return 1;
}