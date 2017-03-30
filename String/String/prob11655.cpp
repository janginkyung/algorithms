#include<iostream>
#include <string>
using namespace std;
int main() {
	string str;
	getline(cin, str);
	int length = str.size();
	int m = 0;
	for (int i = 0; i < length; i++) {
		if ((int)str[i] < 40)
			cout << ' ';
		else if ((int)str[i] > 60 && (int)str[i] < 95)
		{
			m = ((int)str[i] - 65 + 13) % 26 + 65;
			char a = m;
			cout << a ;
		}
		else if ((int)str[i] > 95 && (int)str[i] < 125)
		{
			m = ((int)str[i] - 97 + 13) % 26 + 97;
			char a = m;
			cout << a ;
		}

		else
			cout << str[i] ;
	}
	return 1;
}