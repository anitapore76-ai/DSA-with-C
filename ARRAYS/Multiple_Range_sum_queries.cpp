#include<bits/stdc++.h>
using namespace std;
void Multiple_Range_query_sum(vector<int> &arr,int n,int choice){
int prefix[n];
prefix[0] = arr[0];
for(int i = 1 ; i <n ; i++){
prefix[i] = prefix[i-1] + arr[i];
}
while(choice--){
int L;
int R;
cin>>L;
cin>>R;

int sum = 0;
if(L==0){
sum = prefix[R];
}
else{
sum = prefix[R] - prefix[L-1];
}

cout<<sum;
}
}
int main(){
int n;
cin>>n;

int choice;
cin>>choice;

vector<int> arr(n);
for(int i = 0 ; i < n ;i++){
cin>> arr[i];
}

Multiple_Range_query_sum(arr,n,choice);
return 0;
}
