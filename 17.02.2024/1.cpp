#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<double> mas = { 1,2,3,4,5 };
	vector<double> ::iterator i;

	for (i = mas.begin() + 1; i != mas.end(); i++) {
		i=mas.insert(i, (*i + *(i-1)) / 2);
		i++;
	}

	for (i = mas.begin(); i != mas.end(); i++)
		cout << *i << ' ';
	cout << endl;

	return 0;
}

