#include<bits/stdc++.h>
using namespace std;
void boyermooresalgo(vector<int> &arr,int n){
int candidate = 0;
int count = 0;
for(int i = 0;i < n;i++){
if(count == 0){
candidate = arr[i];
}
if(arr[i] == candidate){
count++;
}
else{
count--;
}
}
count=0;
for(int i = 0;i < n;i++){
if(arr[i] == candidate){
count++;
}
}

if(count>n/2)
{
cout<<candidate;
}
else{
cout<<"no majority elements";
}
}

int main(){
int n;
cin>>n;
vector<int> arr(n);
for(int i = 0;i < n;i++){
cin>>arr[i];
}
boyermooresalgo(arr,n);


return 0;

}
