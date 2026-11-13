#include <bits/stdc++.h>
using namespace std;

int firstNonRepeating(vector<int>& arr) {
    unordered_map<int, int> freq;

    for (int i = 0; i < arr.size(); i++) {
        freq[arr[i]]++;
    }

    for (int i = 0; i < arr.size(); i++) {
        if (freq[arr[i]] == 1) {
            return arr[i];
        }
    }

    return -1;
}

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = firstNonRepeating(arr);

    if (ans == -1) {
        cout << "No non-repeating element found";
    }
    else {
        cout << "First non-repeating element: " << ans;
    }

    return 0;
}
