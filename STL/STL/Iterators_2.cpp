#include<iostream>
using namespace std;
#include<vector>
//���ͷ������� 2���� ������ ���ؼ� �˾ƺ���. 
int main() {
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	vector<int>::const_iterator p;//������ ������ �����ϰ� ���� �ٲٴ� ���� �Ұ����ϴ�. 
	for (p = v.begin(); p != v.end(); p++) {
		cout << *p << ' ';
	}
	cout << endl;

	p = v.begin() + 1;
	//*p = 10; ���� �ٲܷ� �ϹǷ� ������ �Ͼ��
	



	vector<int>::reverse_iterator invp;//������ ������ ���ͷ������̴�. 
	for (invp = v.rbegin(); invp != v.rend(); invp++) {//++�� ������ ������ ��ĭ(���ʹ���)�� �ǹ��Ѵ�
		cout << *invp << ' ';
	}

	return 1;
}