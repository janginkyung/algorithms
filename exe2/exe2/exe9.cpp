#include <iostream>
#include <iomanip>
using namespace std;
int main() {

	int n;
	cin >> n;
	for (int j = 0; j < n; j++) {
		cout << setw(j + 1);
		for (int i = n; i >j; i--)
		{
			cout << '*';
		}
		cout << "\n";
	}
}