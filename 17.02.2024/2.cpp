#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<double> mas = { 7,90,2,4,19,6};
	vector<double> ::iterator i;

	for (i = mas.begin(); i != mas.end(); i++) {

		i = mas.erase(i);

		if (i == mas.end()) {
			break;
		}
	}

	for (i = mas.begin(); i != mas.end(); i++)
		cout << *i << ' ';
	cout << endl;

	return 0;
}

