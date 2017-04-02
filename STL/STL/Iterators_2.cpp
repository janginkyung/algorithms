#include<iostream>
using namespace std;
#include<vector>
//이터레이터의 2가지 종류에 대해서 알아본다. 
int main() {
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	vector<int>::const_iterator p;//벡터의 참조만 가능하고 값을 바꾸는 것은 불가능하다. 
	for (p = v.begin(); p != v.end(); p++) {
		cout << *p << ' ';
	}
	cout << endl;

	p = v.begin() + 1;
	//*p = 10; 값을 바꿀려 하므로 에러가 일어난다
	



	vector<int>::reverse_iterator invp;//벡터의 역방향 이터레이터이다. 
	for (invp = v.rbegin(); invp != v.rend(); invp++) {//++도 끝에서 앞으로 한칸(왼쪽방향)을 의미한다
		cout << *invp << ' ';
	}

	return 1;
}