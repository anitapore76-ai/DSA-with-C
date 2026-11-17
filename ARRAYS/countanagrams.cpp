#include <bits/stdc++.h>
using namespace std;

int countAnagrams(string s, string p)
{
    int n = s.size();
    int k = p.size();

    if(k > n)
        return 0;

    int freqP[26] = {0};
    int freqS[26] = {0};

    int ans = 0;

    // Count pattern frequency
    for(int i = 0; i < k; i++)
    {
        freqP[p[i] - 'a']++;
        freqS[s[i] - 'a']++;
    }

    // Check first window
    if(equal(freqP, freqP + 26, freqS))
        ans++;

    // Slide the window
    for(int i = k; i < n; i++)
    {
        // Remove outgoing character
        freqS[s[i-k] - 'a']--;

        // Add incoming character
        freqS[s[i] - 'a']++;

        // Compare frequencies
        if(equal(freqP, freqP + 26, freqS))
            ans++;
    }

    return ans;
}

int main()
{
    string s;
    string p;
    cin>>s;
    cin>>p;
    cout << countAnagrams(s, p);

    return 0;
}
