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
    unsigned int a, b, c, d;
    cin >> a >> b >> c >> d;
    unsigned int lcm = (b * d) / gcd(b, d);
    unsigned int result = (a * (lcm / b)) + (c * (lcm / d));
    unsigned int divider = gcd(result, lcm);
    cout << (result / divider) << " " << (lcm / divider);
}