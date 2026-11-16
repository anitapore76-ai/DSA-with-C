#include<bits/stdc++.h>
using namespace std;
void vowels_in_a_string(string s,int k){
int vowels=0;
int maxvowels=0;
for(int i=0;i<k;i++){
if(s[i]=='a' || s[i]=='e' || s[i]=='o'|| s[i]=='i'|| s[i]=='u'){
vowels++;
}
}
maxvowels=vowels;
for(int i=k;i<s.length();i++){
if(s[i-k]=='a' || s[i-k]=='e' || s[i-k]=='o'|| s[i-k]=='i'|| s[i-k]=='u'){
vowels--;
}
if(s[i]=='a' || s[i]=='e' || s[i]=='o'|| s[i]=='i'|| s[i]=='u'){
vowels++;

}

maxvowels=max(maxvowels,vowels);
}
cout<<maxvowels;

}
int main(){
int k;
cin>>k;
string s;
cin>>s;

vowels_in_a_string(s,k);

}







