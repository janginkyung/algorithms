#include<iostream>
#include<set>
#include<cctype>
using namespace std; 
//set: ���� ���� ���θ��� �� �� �ִ�.
//���� ������ ��� ������ ������ �ȴ�/ �켱���� ť:top���ִ� �ָ� �����̵ȴ�.
int main() {
	set<int> s;
	s.insert(1);
	s.insert(2);
	s.insert(3);
	s.insert(4);
	s.insert(5);
	s.insert(6);
	s.insert(7);
	s.insert(8);
	
	s.erase(s.find(4));//���ͷ������� ������ �Ѱ��ش�. 
	//���� ������ ���ͷ������� ���� �Ѱ��ָ� ��Ÿ�ӿ���
	s.erase(5);
	for (int i = 1; i <= 8; i++) {
		if (s.find(i) != s.end())//find�� ��� ���ϰ��� ���ͷ������̴�. 
			cout << i << "�� �����մϴ�." << "\n";
		else
			cout << i << "�� �������� �ʽ��ϴ�." << "\n";
	}

	//set�� ��� ������� ��� ���� �� ��ȸ�ϴ� ����� iterator�ۿ� ����. 
	for (set<int>::iterator iter = s.begin(); iter != s.end(); iter++) {
		cout << *iter << "\n";
	}

	set<char>ch;
	char input;

	while (1) {
		input = cin.get();
		if (!islower(input))break;//�ҹ��� ���ĺ��϶��� true
		if (ch.count(input)) ch.erase(input);//��ǲ�� ���θ� ���� �� �� �ִ�. 
		else ch.insert(input);
	}

	for (set<char>::iterator iter = ch.begin(); iter != ch.end(); iter++) {
		cout << *iter << "\n";
	}


	return 1;
}