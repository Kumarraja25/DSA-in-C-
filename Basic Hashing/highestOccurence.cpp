#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no of inputs: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    int large_key;
    int large_val=mpp.begin()->second;
    for(auto it:mpp){
        if(it.second>large_val) large_key=it.first;
        cout<<it.first<<"->"<<it.second<<endl;
    }
    cout<<"Most occuring key is: "<<large_key;
    return 0;
}