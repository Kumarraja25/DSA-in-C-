#include <bits/stdc++.h>
using namespace std;


int majorityBrute(vector<int> &a){
    for(int i=0;i<a.size();i++){
        int count=0;
        for(int j=0;j<a.size();j++){
            if(a[j]==a[i]) count++;
        }
        if(count>(a.size()/2)){
            return a[i];
        }

    }
    return -1;
        
}
int majorityBetter(vector<int> &a){
    map<int,int> mpp;
    for(int i=0;i<a.size();i++){
        mpp[a[i]]++;
    }
    for(auto it:mpp){
        if(it.second>a.size()/2) return it.first;
    }
    return -1;
        
}

//moore voting algo
int majority(vector<int> &a){
    int element;
    int count=0;
    for(int i=0;i<a.size();i++){
        if(count==0){
            element=a[i];
            count++;
        }
        else if(element==a[i]) count++;
        else count--;
    }
    int countEle=0;
    for(int i=0;i<a.size();i++){
        if(a[i]==element) countEle++;
    }
    if(countEle>a.size()/2){
        return element;
    }
    return -1;
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
    cout<<"Majority element: "<<majority(v);
    return 0;
}