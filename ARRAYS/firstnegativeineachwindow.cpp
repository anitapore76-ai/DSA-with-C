#include <bits/stdc++.h>
using namespace std;

void firstNegative(vector<int>& arr, int k)
{
    deque<int> dq;
    int n = arr.size();

    for(int i = 0; i < n; i++)
    {
        // Remove indices outside the current window
        while(!dq.empty() && dq.front() <= i-k)
        {
            dq.pop_front();
        }

        // Store indices of negative numbers
        if(arr[i] < 0)
        {
            dq.push_back(i);
        }

        // Print answer when window is complete
        if(i >= k-1)
        {
            if(!dq.empty())
                cout << arr[dq.front()] << " ";
            else
                cout << "0 ";
        }
    }
}

int main()
{
    int n, k;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> k;

    firstNegative(arr, k);

    return 0;
}
