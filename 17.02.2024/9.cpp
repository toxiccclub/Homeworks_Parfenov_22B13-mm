#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<double> mas = { 1,2,3,3,3,4,4,5,5,5,5,9,9,9,10,10 };
	vector<double>::iterator ita,itb;
	ita = upper_bound(mas.begin(), mas.end(), 5);
	itb = lower_bound(mas.begin(), mas.end(), 5);
	if (itb != ita) {
		cout << ita - mas.begin() - 1;
	}
	else {
		cout << "Error" << endl;
	}
	return 0;
}
