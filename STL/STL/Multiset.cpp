#include<iostream>
#include<set>
#include<cctype>
//multiset�� ���ؼ� �˾ƺ��� �ߺ��� ����Ѵ�.
using namespace std;
int main() {
	multiset <int> s;
	s.insert(1);
	s.insert(2);
	s.insert(3);
	s.insert(4);
	s.insert(5);
	s.insert(5);
	s.insert(6);
	s.insert(7);
	s.insert(8);
	s.insert(9);
	s.insert(9);
	s.insert(10);

	s.erase(s.find(5));//1���� ���� �����ش�. 
	s.erase(9);//�ߺ��� ���� �ִ� ��� �� ����������. 
	for (multiset<int>::iterator iter = s.begin(); iter != s.end(); iter++) {
		cout << *iter << "\n";
	}


	multiset<char> ch;
	char input;
	while (1) {
		input = cin.get();
		if (!islower(input))break;
		ch.insert(input);
	}
	for (char c = 'a'; c <= 'z'; c++) {
		cout << c << " : " << ch.count(c) << "\n";
	}
	return 1;
}