#include <bits/stdc++.h>
using namespace std;

void longest_substring(string s, int k)
{
    int i = 0;
    int ans = 0;

    unordered_map<char, int> hash;

    for(int j = 0; j < s.size(); j++)
    {
        hash[s[j]]++;

        while(hash.size() > k)
        {
            hash[s[i]]--;

            if(hash[s[i]] == 0)
            {
                hash.erase(s[i]);
            }

            i++;
        }

        ans = max(ans, j - i + 1);
    }

    cout << ans;
}

int main()
{
    string s;
    int k;

    cin >> s;
    cin >> k;

    longest_substring(s, k);

    return 0;
}
