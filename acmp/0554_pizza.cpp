#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> slices = {0, 1, 4};
    unsigned int n;
    cin >> n;
    if (n == 1 || n == 2)
        cout << slices[n];
    else {
        for (int i = 3; i <= n; ++i)
            slices.push_back(slices[i - 1] + i);
        cout << slices[n];
    }
    return 0;
}
