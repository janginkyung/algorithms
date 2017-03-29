
#include<iostream>
#include <stack>
#include <string>
using namespace std;
enum { L, D, B, P };
int main() {
	stack<char> first, second;
	int i = 0;

	string s;
	cin >> s;
	int n = s.length();
	for (i = 0; i <n; i++) {
		first.push(s[i]);
	}

	int num;
	cin >> num;
	while (num > 0) {
		char what;
		scanf("%c", &what);
		switch (what) {
		case L:
			if (first.size() != 0)
				second.push(first.top());
			first.pop();
			break;
		case D:
			if (second.size() != 0)
			{
				first.push(second.top());
				second.pop();
			}
			break;
		case B:
			if (first.size() != 0)
				first.pop();
			break;
		case P:
			if (first.size() != 0) {
				char ch;
				scanf("%c", &ch);
				first.push(ch);
			}
		}
		num--;
	}

	int length_f = first.size();
	while (first.empty()) {
		second.push(first.top());
		first.pop();
	}
	while (second.empty()) {
		cout << second.top();
		second.pop();
	}
	return 1;
}