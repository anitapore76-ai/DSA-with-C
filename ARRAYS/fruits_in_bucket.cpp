#include <bits/stdc++.h>
using namespace std;

int totalFruit(vector<int>& fruits) {
    unordered_map<int, int> mp;

    int left = 0, maxFruit = 0;

    for(int right = 0; right < fruits.size(); right++) {
        mp[fruits[right]]++;

        while(mp.size() > 2) {
            mp[fruits[left]]--;

            if(mp[fruits[left]] == 0) {
                mp.erase(fruits[left]);
            }

            left++;
        }

        maxFruit = max(maxFruit, right - left + 1);
    }

    return maxFruit;
}

int main() {
    int n;

    cout << "Enter number of fruits: ";
    cin >> n;

    vector<int> fruits(n);

    cout << "Enter fruit types: ";
    for(int i = 0; i < n; i++) {
        cin >> fruits[i];
    }

    cout << "Maximum fruits: " << totalFruit(fruits);

    return 0;
}
