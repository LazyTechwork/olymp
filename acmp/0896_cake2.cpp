#include <bits/stdc++.h>

using namespace std;

unsigned int gcd(unsigned int a, unsigned int b) {
    while (a != b) {
        if (a > b)
            swap(a, b);
        b = b - a;
    }
    return a;
}

int main() {
    unsigned int m, n;
    cin >> m >> n;
    cout << (m + n - gcd(m, n));
    return 0;
}
