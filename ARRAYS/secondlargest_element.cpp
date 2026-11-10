#include<bits/stdc++.h>
using namespace std;
int secondlargest(vector<int> &arr,int n){
int largest=arr[0];
int seclargest=-1;
for(int i=0;i<n;i++){
if(arr[i]>largest){
seclargest=largest;
largest=arr[i];
}
else if(arr[i]<largest && arr[i]!=largest && arr[i]>seclargest){
seclargest=arr[i];
}
}
return seclargest;
}
int main(){
int n;
cin>>n;
vector<int> arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}
cout<<"the secondlargest element is:"<<secondlargest(arr,n);
return 0;

}
