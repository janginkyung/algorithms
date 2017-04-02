#include<iostream>
#include<vector>
using namespace std;
//벡터의 사용법에 대해 알아보기 위해서 연습한다
//벡터의 장점: 배열에 비해 크기가 유동적이기에 메모리 관리의 효율성 
int main() {
	vector<int> first;
	first.push_back(12);//뒤쪽에 값을 넣는다
	first.push_back(5);
	first.push_back(20);

	for (int i = 0; i < first.size(); i++) {
		cout << first.at(i) << ' ';
	}//at:특정칸의 요소 반환 또는 first.at[i]
	cout << endl;

	first.pop_back();
	first[1] = 21;
	for (int i = 0; i < first.size(); i++) {
		cout << first.at(i) << ' ';

	}
	if (first.empty())
		cout << "empty" << endl;
	else
		cout << "not empty" << endl;
	first.clear();
	if (first.empty())
		cout << "empty" << endl;
	else
		cout << "not empty" << endl;
	return 1;
}