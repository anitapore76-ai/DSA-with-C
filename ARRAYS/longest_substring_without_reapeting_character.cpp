#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> mp;

    int left = 0, maxLen = 0;

    for(int right = 0; right < s.length(); right++) {
        mp[s[right]]++;

        while(mp[s[right]] > 1) {
            mp[s[left]]--;
            left++;
        }

        maxLen = max(maxLen, right - left + 1);
    }

    return maxLen;
}

int main() {
    string s;

    cout << "Enter string: ";
    cin >> s;

    cout << "Longest substring length: "
         << lengthOfLongestSubstring(s);

    return 0;
}
