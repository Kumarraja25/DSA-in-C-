#include <bits/stdc++.h>
using namespace std;

int maxprodSubarray(vector<int> &a){
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
