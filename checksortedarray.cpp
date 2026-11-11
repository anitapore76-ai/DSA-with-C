#include<bits/stdc++.h>
using namespace std;
void sorted(vector<int> &arr,int n)
{
 for(int i=0;i<n-1;i++){
 if(arr[i]<=arr[i+1]){
 continue;
}
else{
cout<<"not sorted";
return;
}
}
cout<<"sorted";
}


int main(){
int n;
cin>>n;
vector<int> arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}
sorted(arr,n);
return 0;

}
