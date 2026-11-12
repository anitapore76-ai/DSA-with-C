#include<bits/stdc++.h>
using namespace std;
void unionarray(vector<int> &a,vector<int> &b,vector<int> &unionarr,int n1,int n2){
int i=0;
int j=0;
while(i<n1 && j<n2){
if(a[i]<=b[j]){
if(unionarr.size()==0 || unionarr.back()!=a[i]){
unionarr.push_back(a[i]);
}
i++;
}
else{
if(unionarr.size()==0 || unionarr.back()!=b[j]){
unionarr.push_back(b[j]);
}
j++;
}
}
while(i<n1){
if(unionarr.size()==0 || unionarr.back()!=a[i]){
unionarr.push_back(a[i]);
}
i++;
}
while(j<n2){
if(unionarr.size()==0 || unionarr.back()!=b[j]){
unionarr.push_back(b[j]);
}
j++;
}


}
int main(){
int n1;
int n2;
cin>>n1;
cin>>n2;
vector<int> a(n1);
vector<int> b(n2);
vector<int> unionarr;
for(int i=0;i<n1;i++){
cin>>a[i];
}
for(int i=0;i<n2;i++){
cin>>b[i];
}
unionarray(a,b,unionarr,n1,n2);
for(int i=0;i<unionarr.size();i++){
cout<<unionarr[i]<<" ";
}


return 0;
}
 
