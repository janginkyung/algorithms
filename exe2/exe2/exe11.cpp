#include <iostream>
#include <iomanip>
using namespace std;
int main() {

	int n;
	cin >> n;
	for (int j = 1; j <= 2 * n; j++) {

		int m = 0;
		if (j > n)
		{
			m = 2 * n - j;
		}
		else
			m = j;

		cout << setw(n - m + 1);
		for (int i = 1; i <= 2 * m - 1; i++)
		{
			cout << '*';
		}
		cout << "\n";
	}
}