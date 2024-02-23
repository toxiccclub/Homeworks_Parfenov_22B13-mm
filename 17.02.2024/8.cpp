#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool subseq(const vector<int>& vec1, const vector<int>& vec2) {
    auto it = vec1.begin();

    for (int num : vec2) {
        it = find(it, vec1.end(), num);
        if (it == vec1.end()) {
            return false;
        }
        ++it;
    }

    return true;
}

int main() {
    vector<int> vec1 = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    vector<int> vec2 = { 3, 5, 7, 8 };

    if (subseq(vec1, vec2)) {
        cout << "True"<<endl;
    }
    else {
        cout << "False"<<endl;
    }

    return 0;
}
