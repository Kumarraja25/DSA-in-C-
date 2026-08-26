#include <bits/stdc++.h>
using namespace std;

void check_sorted(vector<int> &a,int size){
    int i=0;
    while(i<size-1){
        if(a[i]>a[i+1]){
            cout<<"Not sorted.";
            return;
        }
        i++;
    }
    cout<<"Sorted.";
}

int main(){
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    vector<int> vec;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        vec.push_back(num);
    }
    check_sorted(vec,n);
    return 0;
}