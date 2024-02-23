#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<double> mas1 = { 7,90,2,4,19,6 };
	vector<double> mas2 = { 1,2,3 };
	vector<double> mas_i;
	vector<double>::iterator it;
	mas_i.insert(mas_i.begin(), mas1.begin(), mas1.end());
	mas_i.insert(mas_i.end(), mas2.begin(), mas2.end());

	for (it = mas_i.begin(); it != mas_i.end(); it++)
		cout << *it << ' ';
	cout << endl;

	return 0;
}

