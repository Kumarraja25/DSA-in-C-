#include <bits/stdc++.h>
using namespace std;

void moveZero_Brute(vector<int> &a,int size){
    int index=0;
    for(int i=0;i<size;i++){
        if(a[i]!=0){
            a[index]=a[i];
            index++;
        }
    }
    
    for(int i=index;i<size;i++){
        a[i]=0;
    }
    
}
void moveZero(vector<int> &a,int size){
    int i=0;
    int j=1 
    
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
    moveZero(v,n);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}