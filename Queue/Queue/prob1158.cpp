#include<iostream>
#include <queue>
using namespace std;
/*
������ Ȯ���غ��ϱ� ���� second��� ť�� ���� �ʿ䰡 ������.
������ ���� ���� � ���� ��� ������ ��Ȯ�ϰ� �� �ʿ䰡 �ִ�.
�� ��쿡�� ť���� ���� �ֵ��� ������ָ� �Ǵ� ���̹Ƿ� 
���� ������ ���ʿ䰡 ����. 
*/
int main() {
	queue<int> first, second;
	int n, m, i;
	cin >> n;
	cin >> m;

	for (i = 1;i <= n; i++) {
		first.push(i);
	}
	int del = 0;
	i = 1;
	while (first.empty() == false) {
		if (del + m == i)
		{
			second.push(first.front());
			first.pop();
			del += m;
		}
		else
		{
			first.push(first.front());
			first.pop();
		}
		i++;
	}
	cout << "<";
	for (i = 0; i < n; i++) {
		
		if (i == n - 1) {
			cout << second.front() << ">" << "\n";
		}
		else
		{
			cout << second.front() << ", ";
			second.pop();
		}
	}
	return 1;
}