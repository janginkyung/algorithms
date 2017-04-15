#include<iostream>
#include<queue>
#include<functional>
using namespace std;
int main() {
	//우선순위 큐안에 파라미터로 들어간 3개의 값들을 연동콘테이너라고 한다
	//먼저 vector<int> 값의 저장방식이 vector와 같다는 것이고 원래 default로 지정되어있다.
	//greater<int>는 비교에 사용할 연산으로 functional 헤더안에 있고, 비교가 다르므로 가장 작은 값부터나온다. 
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