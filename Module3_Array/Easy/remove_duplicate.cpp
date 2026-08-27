#include <bits/stdc++.h>
using namespace std;

void remove_duplicate(vector<int> &a, int size){
    set<int> s;
    for(auto it:a){
        s.insert(it);
    }
    int index=0;
    for(auto it:s){
        a[index]=it;
        index++;
    }
    for(int i=0;i<index;i++){
        cout<<a[i]<<" ";
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
    remove_duplicate(v,n);
}