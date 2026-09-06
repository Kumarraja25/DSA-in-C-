#include <bits/stdc++.h>
using namespace std;

int checkStock(vector<int> &a){
    int mini=a[0];
    int profit=0;
    for(int i=1;i<a.size();i++){
        int cost=a[i]-mini;
        profit=max(cost,profit);
        mini=min(a[i],mini);
    }
    return profit;
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
    cout<<"Profit made: "<<checkStock(v);

    return 0;
}