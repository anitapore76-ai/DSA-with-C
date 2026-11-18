#include <bits/stdc++.h>
using namespace std;

void max_sum_greater_equals_to_target(vector<int>& arr,int n, int k)
{
     int i=0;
     int sum=0;
     int ans=0;

    for(int j = 0; j < n; j++)
    {
      sum = sum + arr[j];
      while(sum > k){
       sum = sum - arr[i];
       i++;
} 
ans = max(ans,j-i+1);
    }
cout<<ans;
}

int main()
{
    int n, k;
    cin >> n;
    cin >> k;
    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
}
max_sum_greater_equals_to_target(arr,n,k);
return 0;
}
