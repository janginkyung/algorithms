#include <iostream>
#include <iomanip>
using namespace std;
int main() {

	int n;
	cin >> n;
	for (int j = 0; j < n; j++) {
		cout << setw(n - j);
		for (int i = 0; i <=j; i++)
		{
			cout << '*';
		}
		cout << "\n";
	}
}