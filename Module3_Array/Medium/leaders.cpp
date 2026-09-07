#include <bits/stdc++.h>
using namespace std;

vector<int> leaders(vector<int> &a){
    int n=a.size();
    vector<int> result;
    for(int i=0;i<n;i++){
        int flag=true;
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j]){
                flag=false;
                break;
            }
        }
        if(flag==true){
            result.push_back(a[i]);
        }
    }
    return result;
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
    vector<int> l=leaders(v);
    cout<<"leaders: ";
    for(auto it:l){
        cout<<it<<" ";
    }
    return 0;
}