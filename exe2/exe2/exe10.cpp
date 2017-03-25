#include <iostream>
#include <iomanip>
using namespace std;
int main() {

	int n;
	cin >> n;
	for (int j = 1; j <= n; j++) {
		cout << setw(j+1);
		for (int i = 1; i <2*j-1; i++)
		{
			cout << '*';
		}
		cout << "\n";
	}
}