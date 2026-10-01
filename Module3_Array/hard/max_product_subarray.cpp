#include <bits/stdc++.h>
using namespace std;

int maxprodSubarray1(vector<int> &a){
    int n=a.size();
    int maxprod=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int prod=1;
            for(int k=i;k<=j;k++){
                prod=prod*a[k];
            }
            maxprod=max(maxprod,prod);
        }
    }
    return maxprod;
}

int maxprodSubarray2(vector<int> &a){
    int n=a.size();
    int maxprod=INT_MIN;
    for(int i=0;i<n;i++){
        int prod=1;
        for(int j=i;j<n;j++){
            prod=prod*a[j];
            maxprod=max(maxprod,prod);
        }
    }
    return maxprod;
}
int maxprodSubarray(vector<int> &a){
    int n=a.size();
    int max_prefix=INT_MIN,preprod=1;
    int max_suffix=INT_MIN,sufprod=1;
    for(int i=0;i<n;i++){
        
        if(preprod==0) preprod=1;
        if(sufprod==0)  sufprod=1;
        preprod*=a[i];
        sufprod*=a[n-i-1];
        max_prefix=max(max_prefix,preprod);
        max_suffix=max(max_suffix,sufprod);
    }
    return max(max_prefix,max_suffix);
}




int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> v;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        v.push_back(num);
    }
    cout<<"Max product: "<< maxprodSubarray(v)<<"\n";
}
