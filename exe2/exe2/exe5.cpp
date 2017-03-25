#include <iostream>
using namespace std;
int main() {
	long num;
	cin >> num;
	int i, max, min;
	i = 0,max=0 ,min=0;
	int* number = new int [num];
	while (num != 0) {
		cin >> number[i];
		
		if (max < number[i])
			max = number[i];
		else if (min > number[i])
			min = number[i];

		if (i == 0)
		{
			max = number[i];
			min = number[i];
		}

		  i++, num--;
	}
	cout << min << ' ' << max << "\n";

	return 1;
	
}