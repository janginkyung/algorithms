#include<iostream>
#include<vector>
using namespace std;
//������ ������ ���� �˾ƺ��� ���ؼ� �����Ѵ�
//������ ����: �迭�� ���� ũ�Ⱑ �������̱⿡ �޸� ������ ȿ���� 
int main() {
	vector<int> first;
	first.push_back(12);//���ʿ� ���� �ִ´�
	first.push_back(5);
	first.push_back(20);

	for (int i = 0; i < first.size(); i++) {
		cout << first.at(i) << ' ';
	}//at:Ư��ĭ�� ��� ��ȯ �Ǵ� first.at[i]
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