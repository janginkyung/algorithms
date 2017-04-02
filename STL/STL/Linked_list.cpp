#include<iostream>
#include<list>
//linked list에 대해서 알아보았다
//STL에 포함된 연결리스트는 doubly linked list로 앞과 뒤에서 둘다 접근이 가능하다. 
using namespace std;
int main() {
	list<int> List;
	List.push_back(3);
	List.push_back(4);
	List.push_back(5);
	List.push_front(2);
	List.push_front(1);

	list<int>::iterator iter;
	for (iter = List.begin(); iter != List.end(); iter++) {
		cout << *iter << ' ';
	}
	cout << endl;

	iter--;
	iter--;

	List.insert(iter, 6);
	List.pop_back();
	List.pop_front();

	for (iter = List.begin(); iter != List.end(); iter++) {
		cout << *iter << ' ';
	}
	return 1;
}