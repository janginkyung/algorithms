

#include<iostream>
#include <string>
using namespace std;

class Queue {
private:
	int array[10000];
	int begin;
	int end;
public:
	Queue();
	void push(int x);
	int pop();
	int size();
	int empty();
	int front();
	int back();
};
Queue::Queue() {
	begin = 0;
	end = 0;
}
void Queue::push(int x) {
	array[end] = x;
	end++;

}

int Queue::pop() {
	if (empty() == 1)
		return -1;
	else {
		begin++;
		return array[begin - 1];
	}
}

int Queue::size() {
	return(end - begin);
}

int Queue::empty() {
	if (size() == 0)
		return 1;
	else
		return 0;
}

int Queue::front() {
	if (empty() == 1)
		return -1;
	else {
		return array[begin];
	}
}

int Queue::back() {
	if (empty() == 1)
		return -1;
	else {
		return array[end - 1];
	}
}

int main() {
	Queue que;
	int n;
	cin >> n;

	while (n > 0) {
		string command;
		cin >> command;
		if (command == "push") {
			int x;
			cin >> x;
			que.push(x);
		}
		else if (command == "pop") {
			cout<<que.pop()<<"\n";
		}
		else if (command == "size") {
			cout << que.size() << "\n";

		}
		else if (command == "empty") {
			cout << que.empty() << "\n";

		}
		else if (command == "front") {
			cout << que.front() << "\n";

		}
		else{
			cout << que.back() << "\n";
		}
		n--;
	}
	return 1;
}
