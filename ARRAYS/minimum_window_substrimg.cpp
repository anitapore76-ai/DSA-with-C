#include <bits/stdc++.h>
using namespace std;

string minWindow(string s, string t) {
    unordered_map<char, int> mp;

    for(char ch : t) {
        mp[ch]++;
    }

    int left = 0;
    int cnt = t.length();
    int minLen = INT_MAX;
    int start = 0;

    for(int right = 0; right < s.length(); right++) {

        if(mp[s[right]] > 0) {
            cnt--;
        }

        mp[s[right]]--;

        while(cnt == 0) {

            if(right - left + 1 < minLen) {
                minLen = right - left + 1;
                start = left;
            }

            mp[s[left]]++;

            if(mp[s[left]] > 0) {
                cnt++;
            }

            left++;
        }
    }

    if(minLen == INT_MAX) {
        return "";
    }

    return s.substr(start, minLen);
}

int main() {
    string s, t;

    cout << "Enter main string: ";
    cin >> s;

    cout << "Enter target string: ";
    cin >> t;

    cout << "Minimum window: " << minWindow(s, t);

    return 0;
}
