#include<bits/stdc++.h>
using namespace std;
void maxsumsubarray(vector<int> &arr,int n){
int k = 3;
int maxsum;
int sum = 0;
int i;
for(int i = 0;i < k;i++){
sum = sum+arr[i];
}
maxsum = sum;
for(int j = k;j < n;j++){
sum=sum-arr[j-k]+arr[j];
maxsum = max(maxsum,sum);
}
cout<<maxsum;

}

int main(){
int n;
cin>>n;
vector<int> arr(n);
for(int i = 0;i < n;i++){
cin>>arr[i];
}
maxsumsubarray(arr,n);


return 0;
}
