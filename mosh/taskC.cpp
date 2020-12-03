#include <iostream>

using namespace std;

unsigned long long factorial(unsigned long long f) {
    if (f == 0)
        return 1;
    return (f * factorial(f - 1));
}

unsigned long long factorial(unsigned long long f, unsigned long long end) {
    if (f == end)
        return 1;
    return (f * factorial(f - 1, end));
}

unsigned long long catalan(unsigned long long n) {
    unsigned long long fact_n = factorial(n);
    return ((factorial(2 * n, n)) / (fact_n * (n + 1)));
}

int main() {
    unsigned long long n;
    cin >> n;
    cout << catalan(n / 2);
    return 0;
}
