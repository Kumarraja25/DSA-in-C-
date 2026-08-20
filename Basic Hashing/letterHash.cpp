#include <bits/stdc++.h>
using namespace std;

int main(){
    // int n;
    // cout<<"Enter the input array size: ";
    // cin>>n;
    // char arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    string s;
    cout<<"Enter the string : ";
    cin>>s;
    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-97]++;
    }
    
    int num;
    cout<<"Enter the no of letters you want to check : ";
    cin>>num;
    while(num--){
        char alpha;
        cin>>alpha;
        cout<<hash[alpha-97]<<" ";
    }
    return 0;
}