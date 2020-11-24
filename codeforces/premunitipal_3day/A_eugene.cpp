#include <bits/stdc++.h>

using namespace std;

int main() {

    unsigned int n, m;
    cin >> n >> m;

    unsigned int durations[n];

    for (int i = 0; i < n; ++i) {
        unsigned int cnt, dur;
        cin >> cnt >> dur;
        if (i == 0)
            durations[i] = cnt * dur;
        else
            durations[i] = durations[i - 1] + cnt * dur;

    }

    for (int i = 0; i < m; ++i) {
        unsigned int moment, l = 0, r = n - 1, c = r / 2;
        cin >> moment;
        if (moment <= durations[0])
            cout << 1 << endl;
        else if (n > 2 && moment > durations[n - 2])
            cout << n << endl;
        else {
            while (!(moment <= durations[c] && moment > durations[c - 1])) {
                if (moment > durations[c])
                    l = c;
                else
                    r = c;
                c = (l + r) / 2;
            }
            cout << c + 1 << endl;
        }
    }

    return 0;
}