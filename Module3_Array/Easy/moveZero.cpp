#include <bits/stdc++.h>
using namespace std;

void moveZero_Brute(vector<int> &a,int size){
    vector <int> b;
    for(int i=0;i<size;i++){
        if(a[i]!=0){
            b.push_back(a[i]);
        }
    }
    for(int i=0;i<b.size();i++){
        a[i]=b[i];
    }
    for(int i=b.size();i<size;i++){
        a[i]=0;
    }
    
}
void moveZero(vector<int> &a,int size){
    int j=0;
    for(int i=0;i<size;i++){
        if(a[i]!=0){
            swap(a[i],a[j]);
            j++;
        }
    }
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
    moveZero(v,n);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}