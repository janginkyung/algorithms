#include<iostream>
#include<queue>
#include<functional>
using namespace std;
int main() {
	//�켱���� ť�ȿ� �Ķ���ͷ� �� 3���� ������ ���������̳ʶ�� �Ѵ�
	//���� vector<int> ���� �������� vector�� ���ٴ� ���̰� ���� default�� �����Ǿ��ִ�.
	//greater<int>�� �񱳿� ����� �������� functional ����ȿ� �ְ�, �񱳰� �ٸ��Ƿ� ���� ���� �����ͳ��´�. 
	priority_queue<int, vector<int>, greater<int>> pqueue;
	pqueue.push(7);
	pqueue.push(4);
	pqueue.push(2);
	pqueue.push(11);
	pqueue.push(14);
	pqueue.push(5);

	while (!pqueue.empty()) {
		cout << pqueue.top() << "\n";
		pqueue.pop();

	}

	return 1;
}