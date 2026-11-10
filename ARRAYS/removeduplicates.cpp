#include<bits/stdc++.h>
using namespace std;
void removeduplicates(vector<int> &arr,int n){
int i=0;
for(int j=0;j<n;j++){
if(arr[j]!=arr[i]){
arr[i+1]=arr[j];
i++;
}
}
cout<<"array after remove the duplicates";
for(int k=0;k<=i;k++){
cout<<arr[k];
}
}
int main(){
int n;
cin>>n;
vector<int> arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}
removeduplicates(arr,n);



return 0;

}
