#include <bits/stdc++.h>
using namespace std;

int largest(vector<int> &a,int size){
    int large=a[0];
    for(int i=1;i<size;i++){
        if(a[i]>large) large=a[i];
    }
    return large;
}

int main(){
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        v.push_back(num);
    }
    cout<<"Largest element: "<<largest(v,n);
}