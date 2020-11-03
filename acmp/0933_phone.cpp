#include <bits/stdc++.h>

using namespace std;

int main() {
    unsigned int a, b, c, t;
    cin >> a >> b >> c >> t;
    unsigned int cost = 0;
    if (t <= a) {
        cost += t * b;
        cout << cost;
    } else {
        cost += a * b;
        t -= a;
        cost += t * c;
        cout << cost;
    }
    return 0;
}
