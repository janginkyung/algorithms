#include<iostream>
#include<vector>
using namespace std;
//capacity 의 개념과 그에 관련된 함수들에 대해서 공부한다. 
int main() {
	vector<int> v, v1(5),v2(5,2);
	v.reserve(100);//capacity를 먼저 확보하는 함수가 된다. 
	
	int capacity = v.capacity();
	for (int i = 0; i < 200; i++) {
		v.push_back(i);
		if (capacity != v.capacity())
		{
			capacity = v.capacity();
			cout << "용량의 변화  size:  "<<v.size()
				<< ", capacity:" << v.capacity() << endl;
		}
	}
	v.shrink_to_fit();//용량을 사이즈의 갯수에 맞게 줄인다. 
	cout <<  "after shrink_to_fit capacity:" << v.capacity() << endl;
	
	for (int i = 0; i < v1.size(); i++) {
		cout << v1[i] << ' ';
	}
	cout << endl;
	v1.resize(3);
	cout << "after resize(3) :";
	for (int i = 0; i < v1.size(); i++) {
		cout << v1[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < v2.size(); i++) {
		cout << v2[i] << ' ';
	}
	v2.resize(8,7);
	cout << endl;
	cout << "after resize(8,7) :";
	for (int i = 0; i < v2.size(); i++) {
		cout << v2[i] << ' ';
	}
	return 1;
}