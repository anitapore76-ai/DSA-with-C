#include<bits/stdc++.h>
using namespace std;
void sepzeroandone(vector<int> &arr,int n){
int i=0;
int j=n-1;
int temp;
while(i<j){
if(arr[i]==0){
i++;
}
else if(arr[j]==1){
j--;

}
else{
temp=arr[i];
arr[i]=arr[j];
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
sepzeroandone(arr,n);
for(int i=0;i<n;i++){
cout<<arr[i];
}
return 0;
}
