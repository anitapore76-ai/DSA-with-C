#include <bits/stdc++.h>
using namespace std;

void maxWindow(vector<int>& arr, int k)
{
    deque<int> dq;

    for(int i = 0; i < arr.size(); i++)
    {
        // Step 1: Remove expired indices
        while(!dq.empty() && dq.front() <= i-k)
        {
            dq.pop_front();
        }

        // Step 2: Remove smaller elements
        while(!dq.empty() && arr[dq.back()] <= arr[i])
        {
            dq.pop_back();
        }

        // Step 3: Insert current index
        dq.push_back(i);

        // Step 4: Print maximum
        if(i >= k-1)
        {
            cout << arr[dq.front()] << " ";
        }
    }
}

int main()
{
    int n, k;

    cout << "Enter array size: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter window size: ";
    cin >> k;

    if(k <= 0 || k > n)
    {
        cout << "Invalid window size";
        return 0;
    }

    cout << "Maximum elements: ";
    maxWindow(arr, k);

    return 0;
}
