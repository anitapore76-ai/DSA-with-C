#include <bits/stdc++.h>
using namespace std;

void countNegative(int arr[], int n, int k) {

    int count = 0;

    // Calculate first window
    for(int i = 0; i < k; i++) {
        if(arr[i] < 0) {
            count++;
        }
    }

    cout << count << " ";

    // Slide the window
    for(int i = k; i < n; i++) {

        // Remove outgoing element
        if(arr[i-k] < 0) {
            count--;
        }

        // Add incoming element
        if(arr[i] < 0) {
            count++;
        }

        cout << count << " ";
    }
}

int main() {

    int n, k;

    cout << "Enter array size: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter window size: ";
    cin >> k;

    if(k <= 0 || k > n) {
        cout << "Invalid window size";
        return 0;
    }

    countNegative(arr, n, k);

    return 0;
}
