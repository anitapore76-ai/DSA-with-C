#include<bits/stdc++.h>
using namespace std;
int largest_number(vector<int> &arr,int n){
int largest=arr[0];
for(int i=0;i<n;i++){
if(arr[i]>largest){
largest=arr[i];
}
}
return largest;
}

int main()
{
int n;
cin>>n;
vector<int> arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}
cout<<"largest number is: "<<largest_number(arr,n);

return 0;

}
