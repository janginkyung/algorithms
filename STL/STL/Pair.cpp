//#include <iostream>
//#include<utility>
//#include<queue>
//#include<string>
//using namespace std;
////pair 다른 자료형 2개를 한꺼번에 저장한다.
//int main() {
//	pair <int, char> p(15, 'H');
//	cout << p.first << " " << p.second << endl;
//
//	p.first = 40;
//	p.second = ' ';
//
//	cout << p.first << ' ' << p.second << endl;
//
//
//	pair<int, int> a1(15, 7), a2(20,8), a3(15,20);
//	cout << (a1 < a2) << endl;
//	cout << (a2 < a3) << endl;
//	cout << (a3 < a1) << endl;
//
//	priority_queue<pair<int, string>> pqueue;
//	int number;
//	string name;
//
//	for(int i=0 ; i<(5);i++) {
//		cin >> number>> name;
//		pqueue.push(pair<int,string>(number, name));
//
//	}
//	while (!pqueue.empty())
//	{
//		cout << pqueue.top().first << "번 쨰 이름은: " << pqueue.top().second << endl;
//		pqueue.pop();
//	}
//	return 1;
//}