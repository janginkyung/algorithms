#include<iostream>
#include<set>
using namespace std;
int main() {
	set<int> s1, s2;
	int n1, n2, input;

	cin >> n1 >> n2;
	for (int i = 0; i < n1; i++) {
		cin >> input;
		s1.insert(input);
	}
	for (int i = 0; i < n2; i++)
	{
		cin >> input;
		s2.insert(input);
	}

	typedef set<int>::iterator setiter;
	setiter temp;
	for (setiter iter = s1.begin(); iter != s1.end();) {
		if (s2.count(*iter)) {//s1 s2�� ���� ���� �ִ� ��� �����ִ� ������ �Ѵ�.
			temp = iter;
			temp++;
			s2.erase(*iter);
			s1.erase(*iter);
			//s2�� ����� s1�� �������Ѵ�. ������ �ٲ�� ū�ϳ� ! ���ϱ�
			//s1�� iterator��� ���� ����ؾ��Ѵ�. 

			iter = temp;//iter�� ������ ���� �־��ش�. 
		}
		else
			iter++;
	}
	cout << "\n";
	for (setiter iter = s1.begin(); iter != s1.end(); iter++) {
		cout << *iter << ' ';

	}
	cout << endl;

	for (int current :s2) {
		cout << current << ' ';

	}
	cout << endl;
	return 1;
}