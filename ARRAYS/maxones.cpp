#include <bits/stdc++.h>
using namespace std;

int maxOnes(vector<int>& arr) {
    int count = 0;
    int maxi = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 1) {
            count++;
            maxi = max(maxi, count);
        }
        else {
            count = 0;
        }
    }

    return maxi;
}

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Maximum consecutive ones: " << maxOnes(arr);

    return 0;
}
