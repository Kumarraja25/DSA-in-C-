#include <bits/stdc++.h>
using namespace std;

void rotate_left(vector<int> &a,int size){
    int temp=a[0];
    for(int i=1;i<size;i++){
        a[i-1]=a[i];
    }
    a[size-1]=temp;
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
    rotate_left(v,n);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}