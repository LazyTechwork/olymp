#include <bits/stdc++.h>

using namespace std;

string findMax(vector<string> nums, bool inversed = false) {
    int maxlength = max_element(nums.begin(), nums.end(),
                                [](const string &a, const string &b) { return a.length() < b.length(); })->length();
    for (string &i : nums) {
        if (inversed)
            i.erase(0, 1);
        if (i.length() < maxlength)
            i.insert(0, '0', maxlength - i.length());
    }
    string result;
    if (inversed)
        result = *min_element(nums.begin(), nums.end());
    else result = *max_element(nums.begin(), nums.end());
    result.erase(0, result.find_first_not_of('0'));
    return result;
}

int main() {
    string s[3];
    cin >> s[0] >> s[1] >> s[2];
    vector<string> numbers;
    for (string &i : s) {
        if (i[0] != '-')
            numbers.push_back(i);
    }
    bool inversed = numbers.empty();
    if (inversed)
        numbers = {s[0], s[1], s[2]};
    cout << findMax(numbers, inversed) << endl;
    return 0;
}
