// Map is always a sorted STL
#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cout<<"Enter the no of inputs : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    for( auto i:mpp){
        cout<<i.first<<"->"<<i.second<<endl;
    }

    unordered_map<int,int> mpp1;
    for(int i=0;i<n;i++){
        mpp1[arr[i]]++;
    }

    for( auto i:mpp1){
        cout<<i.first<<"->"<<i.second<<endl;
    }

    int q;
    cout<<"Enter total numbers to check : ";
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        cout<<mpp[num]<<" ";
    }
    return 0;
}