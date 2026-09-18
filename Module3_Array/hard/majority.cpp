#include <bits/stdc++.h>
using namespace std;

vector<int> majority1(vector<int> &a){
    int n=a.size();
    vector<int> ls;
    for(int i=0;i<n;i++){
        if(ls.size()==0 || ls[0]!=a[i]){
            int count=0;
            for(int j=0;j<n;j++){
                if(a[j]==a[i]) count++;
            }
            if(count>n/3){
                ls.push_back(a[i]);
            }
        }
        if(ls.size()==2) break;
    }
    return ls;
}
vector<int> majority2(vector<int> &a){
    int n=a.size();
    vector<int> ls;
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[a[i]]++;
        if(mpp[a[i]]==(n/3)+1) ls.push_back(a[i]);
    }
    return ls;
}
vector<int> majority(vector<int> &a){
    int n=a.size();
    vector<int> ls;
    int ele1,ele2;
    int count1=0,count2=0;
    for(int i=0;i<n;i++){
        if(count1==0 && a[i]!=ele2){
            ele1=a[i];
            count1=1;
        }
        if(count2==0 && a[i]!=ele1){
            ele2=a[i];
            count2=1;
        }
        else if(ele1==a[i]) count1++;
        else if(ele2==a[i]) count2++;
        else{
            count1--;
            count2--;
        }
    }
    count1=0,count2=0;
    for(int i=0;i<n;i++){
        if(a[i]==ele1) count1++;
        if(a[i]==ele2) count2++;
    }
    if(count1>=(n/3)+1) ls.push_back(ele1);
    if(count2>=(n/3)+1) ls.push_back(ele2);
    return ls;
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
    vector<int> ans= majority(v);
    for(auto it:ans){
        cout<<it<<" ";
    }
}
