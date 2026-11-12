#include<bits/stdc++.h>
using namespace std;
void intersectionarray(vector<int> &a,vector<int> &b,vector<int> &interarr,int n1,int n2){
int i=0;
int j=0;
while(i<n1 && j<n2){
if(a[i]<b[j]){
i++;
}
else{
if(b[j]<a[i]){
j++;
}
else{
interarr.push_back(a[i]);
i++;
j++;
}
}

}
}
int main(){
int n1;
int n2;
cin>>n1;
cin>>n2;
vector<int> a(n1);
vector<int> b(n2);
vector<int> interarr;
for(int i=0;i<n1;i++){
cin>>a[i];
}
for(int i=0;i<n2;i++){
cin>>b[i];
}
intersectionarray(a,b,interarr,n1,n2);
for(int i=0;i<interarr.size();i++){
cout<<interarr[i]<<" ";
}


return 0;
} 
