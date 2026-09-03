#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &a,int target){
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