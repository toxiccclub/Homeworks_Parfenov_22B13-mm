#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void bounds(const vector<double>& vec1, double x,int &i,int &j) {
    auto it = vec1.begin();
    it = find(it, vec1.end(), x);
    if (it != vec1.end()) {
        i = it - vec1.begin();
        j = i;
    }
    else {
        it = upper_bound(vec1.begin(), vec1.end(), x);
        j = it - vec1.begin();
        i = j - 1;
    }

}

int main() {
    vector<double> mas = { 1.251, 4.32, 7.314, 10.5, 15.8,15.8, 19.21, 23.5, 28.34 };
    int i = 0, j = 0;
    bounds(mas, 12.6, i, j);
    cout << i << " " << j << endl;
    return 0;
}