



#include<iostream>
#include <string>
#include <stack>
using namespace std;
int main() {
	int sum = 0;
	int i = 0,length=0; 
	string  s;
	cin >> s;
	stack<char> stick;
	length = s.length();
	while (length>i) {
		if (s[i] == '(')
			stick.push(s[i]);
		else
		{
			stick.pop();
			if (s[i - 1] == '(')
			{
				if (stick.size() == 0)
					;
				else
					sum = sum + stick.size();
			}
				
			else				
				sum = sum + 1;

			
		}

		i++;
	}
	cout << sum << endl;

	return 1;
}