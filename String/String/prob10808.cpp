

#include<iostream>
#include <string>
using namespace std;
int main() {
	string str;
	cin >> str;
	int i = 0;
	int length = str.length();
	int arr[26];
	for (i = 0; i < 26; i++) {
		arr[i] = 0;
	}

	for (i = 0; i < length; i++) {
		int m = ((int)str[i]) - 97;
		arr[m]+=1;
	}



	for (i = 0; i < 26; i++) {
		cout<<arr[i] <<' ';
	}

	return 1;
}