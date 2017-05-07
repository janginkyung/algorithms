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
		else m[input] = 1;//배열처럼 값을 집어넣는것이 가능하다. 

	}
	for (map<char, int>::iterator iter = m.begin(); iter != m.end(); iter++) {
		cout << iter->first << " : " << iter->second<< endl;
	}
	//key값에 대해서 정렬되어서 저장되어있는 것을 알 수 있다. 
	return 1;
}