#include<iostream>
#include <queue>
using namespace std;
int main() {

	int n, m, input, temp;
	priority_queue <int> heapsort;

	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		heapsort.push(input);
	}
	for (int i = 0; i < m; i++)
	{
		temp=heapsort.top();
		cout << temp << "\n";
		heapsort.pop();
	}

	return 1;
}