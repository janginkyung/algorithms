#include<iostream>
#include <map>
using namespace std;
int main() {
	map<char, int> m;
	char input;
	
	while (1) {
		input = cin.get();
		if (!islower(input))break;
		if (m.count(input))m[input]++;
		else m[input] = 1;//�迭ó�� ���� ����ִ°��� �����ϴ�. 

	}
	for (map<char, int>::iterator iter = m.begin(); iter != m.end(); iter++) {
		cout << iter->first << " : " << iter->second<< endl;
	}
	//key���� ���ؼ� ���ĵǾ ����Ǿ��ִ� ���� �� �� �ִ�. 
	return 1;
}