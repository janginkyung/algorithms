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
		if (s2.count(*iter)) {//s1 s2에 같은 값이 있는 경우 지워주는 역할을 한다.
			temp = iter;
			temp++;
			s2.erase(*iter);
			s1.erase(*iter);
			//s2를 지우고 s1을 지워야한다. 순서가 바뀌면 큰일남 ! 왜일까
			//s1의 iterator라는 점을 기억해야한다. 

			iter = temp;//iter에 증가된 값을 넣어준다. 
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