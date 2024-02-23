#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<double> mas2 = { 1,2,3 };
	vector<double> mas_i;
	vector<double>::iterator it;
	for (int i = 0; i < n; i++) {
		mas_i.insert(mas_i.begin(), mas2.begin(), mas2.end());
	}
	for (it = mas_i.begin(); it != mas_i.end(); it++)
		cout << *it << ' ';
	cout << endl;

	return 0;
}

