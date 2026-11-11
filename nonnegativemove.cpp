#include<bits/stdc++.h>
using namespace std;
void nonnegativemove(vector<int> &arr,int n){
int i=0;
int temp;
int j=n-1;
while(i<j){
if(arr[i]<0){
i++;
}
else if(arr[j]>=0){
j--;
}
else{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
int main(){
int n;
cin>>n;
vector<int> arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}
nonnegativemove(arr,n);
for(int i=0;i<n;i++){
cout<<arr[i];
}
return 0;
}
