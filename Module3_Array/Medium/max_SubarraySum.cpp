#include <bits/stdc++.h>
using namespace std;


int maxSum_Subarray1(vector<int> &a){
    int maxSum=INT_MIN;
    int n=a.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=a[k];
            }
            maxSum=max(maxSum,sum);
        }
    }
    return maxSum;
}
int maxSum_Subarray2(vector<int> &a){
    int maxSum=INT_MIN;
    int n=a.size();
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=a[j];
            maxSum=max(maxSum,sum);
        }
    }
    return maxSum;
}
int maxSum_Subarray(vector<int> &a){
    int maxSum=INT_MIN;
    int n=a.size();
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(sum>maxSum) maxSum=sum;
        if(sum<0){
            sum=0;
        }
    }
    return maxSum;
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
    cout<<"Max Sum: "<<maxSum_Subarray(v);
    return 0;
}