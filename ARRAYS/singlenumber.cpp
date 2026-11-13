#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& arr) {
    int ans = 0;

    for (int i = 0; i < arr.size(); i++) {
        ans = ans ^ arr[i];
    }

    return ans;
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

    cout << "Single number: " << singleNumber(arr);

    return 0;
}
