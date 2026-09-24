#include <bits/stdc++.h>
using namespace std;

pair<int,int> misrep1(vector<int> &a,int size){
    pair<int,int> sol;
    for(int i=1;i<=size;i++){
        int count=0;
        for(int j=0;j<size;j++){
            if(a[j]==i) count++;
        }
        if(count==2) sol.first=i;
        else if(count==0) sol.second=i;
    }
    return sol;
}
pair<int,int> misrep(vector<int> &a,int size){
    pair<int,int> sol;
    int arr[size]={0};
    for(int i=0;i<size;i++){
        arr[a[i]]++;
    }
    for(int i=0;i<size;i++){
        if(arr[i]==2){
            sol.first=i;
        }
        else if(arr[i]==0){
            sol.second=i;
        }
    }
    return sol;
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
    pair<int,int> p=misrep(v,n);
    cout<<"Repeated element: "<<p.first;
    cout<<"\nMissed element: "<<p.second;

}