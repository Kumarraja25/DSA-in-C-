#include <bits/stdc++.h>
using namespace std;

void Rev(vector<int>:: iterator x,vector<int>:: iterator y){
    if(x>=y) return;
    int temp=*x;
    *x=*y;
    *y=temp;
    return Rev(x+1,y-1);
}

int main(){
    vector<int> v;
    int n,p;
    cout<<"Total elements : ";
    cin>>n;
    cout<<"Enter the elements :";
    while(n--){
        cin>>p;
        v.emplace_back(p);
    }
    Rev(v.begin(),v.end()-1);
    cout<<"Reverse of Vector is : ";
    for(auto it: v){
        cout<<it<<" ";
    }
}