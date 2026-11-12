#include<bits/stdc++.h>
using namespace std;
void rotatearray(vector<int> &arr,int n){
int temp;
int k;
cout<<"enter the rotation no";
cin>>k;
for(int r=0;r<k;r++){
temp=arr[0];
for(int i=0;i<n-1;i++){
arr[i]=arr[i+1];
}
arr[n-1]=temp;
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
for(int i=0;i<n;i++){
cout<<arr[i];
}


return 0;
}

/*another aproach optimal aproach*/

#include<bits/stdc++.h>
using namespace std;
void rotatearray(vector<int> &arr,int n){
int k;
cout<<"enter the rotation number";
cin>>k;
if(n==0){
return;
}
k=k%n;
reverse(arr.begin(),arr.begin()+(n-k));
reverse(arr.begin()+(n-k),arr.end());
reverse(arr.begin(),arr.end());
}
int main(){
int n;
cin>>n;
vector<int> arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}
rotatearray(arr,n);
for(int i=0;i<n;i++){
cout<<arr[i];
}


return 0;
}










