#include <bits/stdc++.h>
using namespace std;

pair<int,int> maxSum_Subarray(vector<int> &a){
    int maxSum=INT_MIN;
    int n=a.size();
    int sum=0;
    int ansStart=-1,ansEnd=-1,start=-1;
    for(int i=0;i<n;i++){
        if(sum==0) start=i;
        sum+=a[i];
        if(sum>maxSum){
            maxSum=sum;
            ansStart=start;
            ansEnd=i;
        }    
        if(sum<0){
            sum=0;
        }
    }
    return {ansStart,ansEnd};
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
    pair<int,int> p=maxSum_Subarray(v);
    cout<<p.first<<" "<<p.second;

    return 0;
}