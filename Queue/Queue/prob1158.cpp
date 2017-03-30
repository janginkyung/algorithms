#include<iostream>
#include <queue>
using namespace std;
/*
정답을 확인해보니까 굳이 second라는 큐를 만들 필요가 없었다.
변수를 잡을 때에 어떤 때에 잡는 것인지 명확하게 할 필요가 있다.
이 경우에는 큐에서 빼낸 애들을 출력해주면 되는 것이므로 
따로 저장을 할필요가 없다. 
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