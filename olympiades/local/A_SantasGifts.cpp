#include <bits/stdc++.h>

using namespace std;

int main() {
    int input[3];
    cin >> input[0] >> input[1] >> input[2];
    int n = sizeof(input) / sizeof(input[0]);
    int a = *min_element(input, input + n),
            c = *max_element(input, input + n),
            b = accumulate(input, input + n, 0) - a - c;
    int answer = 0;

    if (abs(b - c) > a) {
        answer = a + b;
    } else {
        answer += c - b;
        a -= c - b;
        if (a % 2 == 0)
            answer += a + b - int(round(a / 2));
        else
            answer += a + b - int(round((a + 1) / 2));
    }
    cout << answer;
}