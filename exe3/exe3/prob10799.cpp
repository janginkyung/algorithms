
#include<iostream>
#include <stack>
#include <string>
using namespace std;

enum{L ,D, B, P};
int main() {
	stack<char> first, second;
	int i = 0;

	string s;
	cin >> s;

	for ( i = 0; i < s.size(); i++) {
		first.push(s[i]);
	}

	int num;
	char read;
	cin >> num;
	while (num > 0) {
		cin >> read;
		switch (read) {
		case L :
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
		default :
			cin >> read;
			first.push(read);
			break;
		}
		num--;
	}
	cout << "³¡" << endl;
	int length_f=first.size(), lenght_s=second.size();
	char* str = new char[length_f + lenght_s];
	for ( i = length_f; i>0; i--)
	{
		str[i - 1] = first.top();
		first.pop();
	}
	for (i = lenght_s+ length_f; i>length_f; i--)
	{
		str[i - 1] = second.top();
		second.pop();
	}
	cout << str << endl;
	return 1;
}



//#include<iostream>
//#include <string>
//#include <stack>
//using namespace std;
//int main() {
//	int sum = 0;
//	int i = 0,length=0; 
//	string  s;
//	cin >> s;
//	stack<char> stick;
//	length = s.length();
//	while (length>i) {
//		if (s[i] == '(')
//			stick.push(s[i]);
//		else
//		{
//			stick.pop();
//			if (s[i - 1] == '(')
//			{
//				if (stick.size() == 0)
//					;
//				else
//					sum = sum + stick.size();
//			}
//				
//			else				
//				sum = sum + 1;
//
//			
//		}
//
//		i++;
//	}
//	cout << sum << endl;
//
//	return 1;
//}