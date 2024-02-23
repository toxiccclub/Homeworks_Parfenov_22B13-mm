#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<double> mas = { 7,90,2,4,19,6 };
	double arr[6];
	copy(mas.begin(), mas.end(), begin(arr));
	for (auto x : arr) {
		cout << x << ' ';
	}
	cout << endl;

	return 0;
}

