#include <bits/stdc++.h>

using namespace std;

int main() {
    long aa, bb, cc;
    cin >> aa >> bb >> cc;
    long a = min(aa, min(bb, cc)),
            c = max(aa, max(bb, cc)),
            b = aa + bb + cc - a - c;
    long answer = 0;

    if (abs(b - c) > a) {
        answer = a + b;
        cout << answer;
    } else {
        answer += c - b;
        if (a % 2 == 0)
            cout << (answer + a + b - a / 2);
        else
            cout << (answer + a + b - (a + 1) / 2);
    }
}