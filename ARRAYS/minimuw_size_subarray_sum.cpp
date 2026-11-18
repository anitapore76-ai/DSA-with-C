#include <bits/stdc++.h>
using namespace std;

void minimuw_size_subarray_sum(vector<int>& arr,int n,int k)
{
     int i=0;
     int sum=0;
     int ans=INT_MAX;

    for(int j = 0; j < n; j++)
    {
      sum = sum + arr[j];
      while(sum >= k){
       sum = sum - arr[i];
       ans = min(ans,j-i+1);
       i++;
}
    }
if(ans==INT_MAX)
cout<<-1;
else
cout<<ans;
}

int main()
{
    int n,k;
    cin >> n;
    cin >> k;
    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
}
minimuw_size_subarray_sum(arr,n,k);
return 0;
}
