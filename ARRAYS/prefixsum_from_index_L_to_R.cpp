#include<bits/stdc++.h>
using namespace std;
void prefixsum(vector<int> &arr,int n,int R,int L){
int prefix[n];
prefix[0] = arr[0];
for(int i = 0 ; i <n ; i++){
prefix[i] = prefix[i-1] + arr[i];
}
int sum = 0;
if(L==0){
sum = prefix[R];
}
else{
sum = prefix[R] - prefix[L-1];
}
cout<<sum;
}
int main(){
int n;
cin>>n;
int L;
cin>>L;
int R;
cin>>R;
vector<int> arr(n);
for(int i = 0 ; i < n ;i++){
cin>> arr[i];
}
prefixsum(arr,n,R,L);

}
