#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<double> mas = { 1,2,3,3,3,4,4,5,5,5,5,9,9,9,10,10 };
	vector<double>::iterator it;
	it = upper_bound(mas.begin(), mas.end(), 5);
	cout << it - mas.begin() - 1;
	return 0;
}