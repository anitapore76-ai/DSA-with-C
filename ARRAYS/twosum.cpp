
#include<bits/stdc++.h>
using namespace std;
void rotatearray(vector<int> &arr,int n){
int target;
cout<<"enter the target";
cin>>target;
int i=0;
int j=n-1;
while(i<j){
if(arr[i]+arr[j]==target){
cout<<arr[i]<<" "<<arr[j]<<endl;
i++;
j--;
}
else if(arr[i]+arr[j]>target){
j--;
}
else{
i++;
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
rotatearray(arr,n);



return 0;
}

