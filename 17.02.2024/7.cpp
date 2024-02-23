#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<double> mas = { 3, 2, 5, 9, 4, 5, 7, 1, 5, 8 };
	vector<double>::reverse_iterator it;
	it = find(mas.rbegin(), mas.rend(), 5);
	cout<<it.base()-mas.begin()-1;
	return 0;
}

