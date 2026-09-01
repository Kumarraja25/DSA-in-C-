#include <bits/stdc++.h>
using namespace std;

int count_consecutive(vector<int> &nums){
    int max=0,count=0;
    for(auto it:nums){
        if(it!=1){
            if(count>max) max=count;
            count=0;
        }
        else{
            count++;
        }
    }
    if(count>max) return count;
    return max;
}

int main(){
    vector<int> vec={1,1,0,1,1,1,0,1,1,1,1,0,1,1};
    cout<<"No of ones: "<<count_consecutive(vec);
    return 0;
}