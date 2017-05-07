#include<iostream>
#include<map>
#include<string>
using namespace std;
int main() {
	map<string, int> m ;
	string input;
	int n, score;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> input >> score;
		m[input] = score;
	}
	for (map<string, int>::iterator iter = m.begin(); iter != m.end(); iter++) {
		cout << iter->first << " : " << iter->second << endl;

	}
	cout << endl;
	cout << "current 사용" << endl;
	for (pair<string, int> current: m) {
		cout <<current.first << " : " << current.second << endl;

	}
	cout << endl;
	cout << "auto 사용" << endl;
	for (auto current:m ) {
		cout << current.first << " : " << current.second << endl;

	}
	return  1;
}