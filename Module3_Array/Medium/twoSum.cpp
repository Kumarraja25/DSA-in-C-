#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum1(vector<int> &a,int target){
    int n=a.size();
    vector<int> b;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==target){
                b.push_back(i);
                b.push_back(j);
                return b;
            }
        }
    }
    return b;
    
}

vector<int> twoSum2(vector<int> &a,int target){
    map<int,int> mpp;
    vector<int> b;

    for(int i=0;i<a.size();i++){
        int rem=target-a[i];
        if(mpp.find(rem)!=mpp.end()){
            b.push_back(mpp[rem]);
            b.push_back(i);
            return b;
        }
        mpp[a[i]]=i;
    }
    return b;
}
vector<int> twoSum(vector<int> &a,int target){
    vector<int> b;
    sort(a.begin(),a.end());
    int i=0;
    int j=a.size()-1;
    while(i<j){
        int sum=a[i]+a[j];
        if(sum>target) j--;
        else if(sum<target) i++;
        else{
            b.push_back(i);
            b.push_back(j);
            break;
        }
    }
    return b;
}


int main(){
    int n,k;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> vec;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        vec.push_back(num);
    }
    cout<<"Enter the sum to be searched: ";
    cin>>k;
    vector<int> sol=twoSum(vec,k);
    for(auto it:sol){
        cout<<it<<" ";
    }
    return 0;
}