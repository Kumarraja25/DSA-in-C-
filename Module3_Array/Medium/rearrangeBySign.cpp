#include <bits/stdc++.h>
using namespace std;

vector<int> rearrange(vector<int> &a){
    int n=a.size();
    vector<int> pos;
    vector<int> neg;
    int j=0,k=1;
    for(int i=0;i<n;i++){
        if(a[i]>0) pos.push_back(a[i]);
        else neg.push_back(a[i]);
    }
    for(int i=0;i<n/2;i++){
        a[2*i]=pos[i];
        a[2*i+1]=neg[i];
    }
    return a;
    
}
vector<int> rearrange1(vector<int> &a){
    int j=0;
    int k=1;
    vector<int> ans(a.size(),0);
    for(int i=0;i<a.size();i++){
        if(a[i]>0){
            ans[j]=a[i];
            j+=2;
        }  
        else{
            ans[k]=a[i];
            k+=2;
        } 
    }
    return ans;
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
    vector<int> result=rearrange(v);
    cout<<"After rearrangement :";

    for(int i=0;i<n;i++){
        cout<<result[i]<<" ";
    }

    return 0;
}