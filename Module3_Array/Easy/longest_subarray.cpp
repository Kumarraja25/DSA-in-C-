#include <bits/stdc++.h>
using namespace std;

int subarray_sum(vector<int> &a, int k){
    map<long long,int> preSum;
    int maxlen=0;
    long long sum=0;
    for(int i=0;i<a.size();i++){
        sum+=a[i];
        if(sum==k){
            maxlen=max(maxlen,i+1);
        }
        long long rem=sum-k;
        if(preSum.find(rem)!=preSum.end()){
            int len=i-preSum[rem];
            maxlen=max(maxlen,len);
        }
        if(preSum.find(sum)==preSum.end()){
            preSum[sum]=i;
        }
    }
    return maxlen;
}
int subarray_sum_Positive(vector<int> &a, int k){
    long long sum=a[0];
    int maxlen=0;
    int left=0, right=0;
    int n=a.size();
    while(right<n){
        while(left<=right && sum>k){
            sum-=a[left];
            left++;
        }
        if(sum==k){
            maxlen=max(maxlen,right-left+1);
        }
        right++; 
        if(right<n) sum+=a[right];
    }
    return maxlen;
}

int main(){
    vector<int> v={1,2,3,1,1,1,1,3,3};
    cout<<"Length of longest subarray: ";
    cout<<subarray_sum_Positive(v,6);
    return 0;
}