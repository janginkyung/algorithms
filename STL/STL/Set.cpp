#include<iostream>
#include<set>
#include<cctype>
using namespace std; 
//set: 값의 존재 여부만을 알 수 있다.
//값을 넣으면 모든 값들이 정렬이 된다/ 우선순위 큐:top에있는 애만 정렬이된다.
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
	
	s.erase(s.find(4));//이터레이터의 값으로 넘겨준다. 
	//없는 숫자의 이터레이터의 값을 넘겨주면 런타임에러
	s.erase(5);
	for (int i = 1; i <= 8; i++) {
		if (s.find(i) != s.end())//find의 경우 리턴값이 이터레이터이다. 
			cout << i << "는 존재합니다." << "\n";
		else
			cout << i << "는 존재하지 않습니다." << "\n";
	}

	//set의 경우 순서대로 모든 값을 다 순회하는 방법이 iterator밖에 없다. 
	for (set<int>::iterator iter = s.begin(); iter != s.end(); iter++) {
		cout << *iter << "\n";
	}

	set<char>ch;
	char input;

	while (1) {
		input = cin.get();
		if (!islower(input))break;//소문자 알파벳일때만 true
		if (ch.count(input)) ch.erase(input);//인풋의 여부를 쉽게 알 수 있다. 
		else ch.insert(input);
	}

	for (set<char>::iterator iter = ch.begin(); iter != ch.end(); iter++) {
		cout << *iter << "\n";
	}


	return 1;
}