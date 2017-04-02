#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector <int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	vector<int>::iterator p;
	//주의:end의 경우 벡터의 마지막 원소가 아닌 마지막원소보다
	//한칸 뒤의 위치를 return해준다. 
	for (p = v.begin(); p != v.end(); p++) {
		cout << *p << endl;
	}
	cout << endl;
	//벡터의 원하는 자리에 원소를 집어넣고 싶은 경우에는 begin, end
	//이용해서 집어넣어야한다. 
	v.insert(v.begin() + 1, 10);
	v.insert(v.begin() + 3, -8);
	v.insert(v.end(), 5);

	for (p = v.begin(); p != v.end(); p++) {
		cout << *p << endl;
	}
	cout << endl;
	v.erase(v.begin() + 3);

	for (p = v.begin(); p != v.end(); p++) {
		cout << *p << endl;
	}

	return 1;

}