#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> _3Sum1(vector<int> &a){
    int n=a.size();
    set<vector<int>> s;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(a[i]+a[j]+a[k]==0){
                    vector<int> temp={a[i],a[j],a[k]};
                    sort(temp.begin(),temp.end());
                    s.insert(temp);
                }
            }
        }
    }
    vector<vector<int>> ans(s.begin(),s.end());
    return ans;
}
vector<vector<int>> _3Sum2(vector<int> &a){
    int n=a.size();
    set<vector<int>> s;
    for(int i=0;i<n;i++){
        set<int> hashset;
        for(int j=i+1;j<n;j++){
            int third=-(a[i]+a[j]);
            if(hashset.find(third)!=hashset.end()){
                vector<int> temp={a[i],a[j],third};
                sort(temp.begin(),temp.end());
                s.insert(temp);
            }
            hashset.insert(a[j]);
        }
    }
    vector<vector<int>> ans(s.begin(),s.end());
    return ans;
}
vector<vector<int>> _3Sum(vector<int> &a){
    int n=a.size();
    sort(a.begin(),a.end());
    vector<vector<int>> ans;
    for(int i=0;i<n;i++){
        if(i>0 && a[i]==a[i-1]) continue;
        int j=i+1;
        int k=n-1;
        while(j<k){
            int sum=a[i]+a[j]+a[k];
            if(sum<0){
                j++;
            }
            else if(sum>0){
                k--;
            }
            else{
                vector<int> temp={a[i],a[j],a[k]};
                ans.push_back(temp);
                j++;
                k--;
                while(j<k && a[j]==a[j-1]) j++;
                while(j<k && a[k]==a[k+1]) k--;

            }
        }
    }
    return ans;
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
    vector<vector<int>> threeSum= _3Sum(v);
    for(auto it:threeSum){
        for(auto it2:it){
            cout<<it2<<" ";
        }
        cout<<endl;
    }
}