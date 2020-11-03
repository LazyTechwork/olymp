#include <bits/stdc++.h>

using namespace std;

int main() {
    unsigned long long int c, h, o;
    cin >> c >> h >> o;
    cout << min(c / 2, min(h / 6, o));
    return 0;
}
