#include<iostream>
#include<queue>
#include<string>
#include<utility>
using namespace std;
int main() {
	typedef pair<int, string> intstringpair;
	priority_queue<intstringpair> pqueue;

	int n;
	string name;

	for (int i = 0; i < 5; i++) {
		cin >> n >> name;
		pqueue.push(intstringpair(n, name));

	}
	while (!pqueue.empty())
	{
		cout << pqueue.top().first << "¹ø ÀÌ¸§: " << pqueue.top().second << endl;
		pqueue.pop();
	}
	return 1;
}