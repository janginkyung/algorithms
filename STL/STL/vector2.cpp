#include<iostream>
#include<vector>
using namespace std;
//capacity �� ����� �׿� ���õ� �Լ��鿡 ���ؼ� �����Ѵ�. 
int main() {
	vector<int> v, v1(5),v2(5,2);
	v.reserve(100);//capacity�� ���� Ȯ���ϴ� �Լ��� �ȴ�. 
	
	int capacity = v.capacity();
	for (int i = 0; i < 200; i++) {
		v.push_back(i);
		if (capacity != v.capacity())
		{
			capacity = v.capacity();
			cout << "�뷮�� ��ȭ  size:  "<<v.size()
				<< ", capacity:" << v.capacity() << endl;
		}
	}
	v.shrink_to_fit();//�뷮�� �������� ������ �°� ���δ�. 
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