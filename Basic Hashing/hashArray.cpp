#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,query;
    cout<< "Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    // Precompute
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }



    // fetching
    cout<< "How many numbers you want to check: ";
    cin>>query;
    while(query--){
        int num;
        cin>>num;
        cout<<hash[num]<<" ";
    }


}