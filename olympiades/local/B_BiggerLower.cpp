#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a;

    for (int i = 0; i < n + 1; ++i) {
        int item;
        cin >> item;
        a.push_back(item);
    }

    sort(a.begin(), a.end());
    string s;
    cin >> s;
    vector<int> answer;

    for (char i : s)
        if (i == '<') {
            answer.push_back(a[0]);
            a.erase(a.begin(), a.begin() + 1);
        } else {
            answer.push_back(a.back());
            a.pop_back();
        }

    for (int i : answer)
        cout << i << " ";
    cout << a[0];
    return 0;
}