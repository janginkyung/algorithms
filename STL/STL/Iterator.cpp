#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector <int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	vector<int>::iterator p;
	//����:end�� ��� ������ ������ ���Ұ� �ƴ� ���������Һ���
	//��ĭ ���� ��ġ�� return���ش�. 
	for (p = v.begin(); p != v.end(); p++) {
		cout << *p << endl;
	}
	cout << endl;
	//������ ���ϴ� �ڸ��� ���Ҹ� ����ְ� ���� ��쿡�� begin, end
	//�̿��ؼ� ����־���Ѵ�. 
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