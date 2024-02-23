#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<double> mas = { 3, 2, 5, 9, 4, 5, 7 };
	vector<double>::iterator it;
	it = find(mas.begin(), mas.end(), 5);
	if (it != mas.end()) {
		it = find(it + 1, mas.end(), 5);
		if (it != mas.end()) {
			cout << it - mas.begin();
		}
		else {
			cout << "Error";
		}
	}
	else {
		cout << "Error";
	}
	return 0;
}

