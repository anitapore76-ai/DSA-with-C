#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& arr, int n)
{
    int ans = 0;

    for(int i = 1; i <= n+1; i++)
    {
        ans = ans ^ i;
    }

    for(int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }

    return ans;
}

int main()
{
    int n;

    cout << "Enter size: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = missingNumber(arr, n);

    cout << "Missing number is: " << ans;

    return 0;
}
