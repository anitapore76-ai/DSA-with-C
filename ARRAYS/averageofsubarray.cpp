#include<bits/stdc++.h>
using namespace std;
void average_of_every_subarray(vector<int> &arr,int n){
int k = 3;
double average;
int sum = 0;


for(int i = 0;i < k;i++){
sum = sum+arr[i];
}
cout<<(double)sum/k<<" ";
for(int j = k;j < n;j++){
sum=sum-arr[j-k]+arr[j];
average=(double) sum/k;

cout<<average<<" ";
}

}

int main(){
int n;
cin>>n;
vector<int> arr(n);
for(int i = 0;i < n;i++){
cin>>arr[i];
}
average_of_every_subarray(arr,n);


return 0;
}
