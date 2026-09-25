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

pair<int,int> misrep2(vector<int> &a,int size){
    pair<int,int> sol;
    int arr[size]={0};
    for(int i=0;i<size;i++){
        arr[a[i]]++;
    }
    for(int i=1;i<=size;i++){
        if(arr[i]==2){
            sol.first=i;
        }
        else if(arr[i]==0){
            sol.second=i;
        }
    }
    return sol;
}

pair<int,int> misrep3(vector<int> &a,int size){
    pair<int,int> sol;
    int val1=0,val2=0;
    for(int i=0;i<size;i++){
        val1+=a[i];
        val2+=a[i]*a[i];
    }
    val1=val1-(size*(size+1))/2;
    val2=val2-(size*(size+1)*(2*size+1))/6;

    val2=val2/val1;
    sol.first=(val1+val2)/2;
    sol.second=(val2-val1)/2;
    return sol;
}

pair<int,int> misrep(vector<int> &a,int size){
    int xr=0;
    for(int i=0;i<size;i++){
        xr=xr^a[i];
        xr=xr^(i+1);
    }
    int bitno=0;
    while(1){
        if((xr & (1<<bitno))!=0){
            break;
        }
        bitno++;
    }
    int zero=0;
    int one=0;
    for(int i=0;i<size;i++){
        if((a[i] & (1<<bitno))==0){
            zero=zero^a[i];
        }
        else{
            one=one^a[i];
        }
    }
    for(int i=1;i<=size;i++){
        if((i & (1<<bitno))==0){
            zero=zero^i;
        }
        else{
            one=one^i;
        }
    }
    int count=0;
    for(int i=0;i<size;i++){
        if(a[i]==zero) count++;
    }
    if(count==0) return {one,zero};
    return {zero,one};
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