#include <bits/stdc++.h>

using namespace std;

int main() {
    unsigned int n, q, flag = 0;
    cin >> n >> q;
    vector<vector<unsigned int>> array(n, vector<unsigned int>());
    for (int i = 0; i < n - 1; ++i) {
        unsigned int b, c;
        cin >> b >> c;
        if (flag == 0) {
            array[0].push_back(b);
            flag = 1;
        }
        for (int j = 0; j < n; ++j)
            if (find(array[j].begin(), array[j].end(), b) != array[j].end())
                array[j + 1].push_back(c);
    }

    for (int i = 0; i < q; ++i) {
        unsigned int a;
        cin >> a;
        for (vector<unsigned int> j : array)
            if (find(j.begin(), j.end(), a) != j.end()) {
                cout << j.size() << endl;
                break;
            }
    }
}
