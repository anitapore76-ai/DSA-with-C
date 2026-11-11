#include<bits/stdc++.h>
using namespace std;
void sep012(vector<int> &arr,int n){
int i=0;
int temp;
int j=n-1;
int mid=0;
while(mid<=j){
if(arr[mid]==0){
temp=arr[i];
arr[i]=arr[mid];
arr[mid]=temp;
i++;
mid++;
}
else if(arr[mid]==1){
mid++;
}
else{
temp=arr[mid];
arr[mid]=arr[j];
arr[j]=temp;
j--;
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
sep012(arr,n);
for(int i=0;i<n;i++){
cout<<arr[i];
}
return 0;
}
