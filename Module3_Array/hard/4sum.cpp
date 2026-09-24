#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> _4Sum1(vector<int> &a,int target){
    int n=a.size();
    set<vector<int>> s;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                for(int l=k+1;l<n;l++){
                    int sum=a[i]+a[j];
                    sum+=a[k];
                    sum+=a[l];
                    if(sum==target){
                        vector<int> temp={a[i],a[j],a[k],a[l]};
                        sort(temp.begin(),temp.end());
                        s.insert(temp);
                    }
                }
            }
        }
    }
    vector<vector<int>> ans(s.begin(),s.end());
    return ans;
}
vector<vector<int>> _4Sum2(vector<int> &a,int target){
    int n=a.size();
    set<vector<int>> s;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            set<int> hashset;
            for(int k=j+1;k<n;k++){
                int four=target-(a[i]+a[j]+a[k]);
                if(hashset.find(four)!=hashset.end()){
                    vector<int> temp={a[i],a[j],a[k],four};
                    sort(temp.begin(),temp.end());
                    s.insert(temp);
                }
                hashset.insert(a[k]);
            }
        }
    }
    vector<vector<int>> ans(s.begin(),s.end());
    return ans;
}
vector<vector<int>> _4Sum(vector<int> &a,int target){
    int n=a.size();
    sort(a.begin(),a.end());
    vector<vector<int>> ans;
    for(int i=0;i<n;i++){
        if(i>0 && a[i]==a[i-1]) continue;
        for(int j=i+1;j<n;j++){
            if(j>i+1 && a[j]==a[j-1]) continue;
            int k=j+1;
            int l=n-1;
            while(k<l){
                long long sum=a[i];
                sum+=a[j];
                sum+=a[k];
                sum+=a[l];
                if(sum<0) k++;
                else if(sum>0) l--;
                else{
                    vector<int> temp={a[i],a[j],a[k],a[l]};
                    ans.push_back(temp);
                    k++;
                    l--;
                    while(k<l && a[k]==a[k-1]) k++;
                    while(k<l && a[l]==a[l+1]) l--;
                }
            }
        }
    }
    return ans;
}


int main(){
    int n,t;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> v;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        v.push_back(num);
    }
    cout<<"Enter the target: ";
    cin>>t;
    vector<vector<int>> fourSum= _4Sum(v,t);
    for(auto it:fourSum){
        for(auto it2:it){
            cout<<it2<<" ";
        }
        cout<<endl;
    }
}