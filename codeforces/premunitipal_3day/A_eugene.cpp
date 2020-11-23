#include <bits/stdc++.h>

using namespace std;

int main() {
    unsigned int n, m;
    cin >> n >> m;
    unsigned int durations[n];
    unsigned int cache[n];
    unsigned int results[m];
    for (int i = 0; i < n; ++i) {
        unsigned int cnt, dur;
        cin >> cnt >> dur;
        durations[i] = cnt * dur;
    }
    cache[0] = durations[0];
    for (int i = 1; i < n; ++i)
        cache[i] = cache[i - 1] + durations[i];


    for (int i = 0; i < m; ++i) {
        unsigned int moment, l = 0, r = n - 1, c = r / 2;
        cin >> moment;
        if (moment <= cache[0])
            results[i] = 1;
        else if (n > 2 && moment > cache[n - 2])
            results[i] = n;
        else {
            while (!(moment <= cache[c] && moment > cache[c - 1])) {
                if (moment > cache[c])
                    l = c;
                else
                    r = c;
                c = (l + r) / 2;
            }
            results[i] = c + 1;
        }
    }

    for (int i = 0; i < m; ++i) {
        cout << results[i] << endl;
    }

    return 0;
}