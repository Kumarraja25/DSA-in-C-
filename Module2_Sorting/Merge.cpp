#include <bits/stdc++.h>
using namespace std;



void merge(vector<int> &a,int start,int mid,int end){
    int i=start;
    int j=mid+1;
    vector<int> temp;
    while(i<=mid && j<=end){
       if(a[i]<=a[j]){
            temp.push_back(a[i]);
            i++;
       }
       else{
            temp.push_back(a[j]);
            j++;
       }
    }
    while(j<=end){
        temp.push_back(a[j]);
        j++;
    }
    while(i<=mid){
        temp.push_back(a[i]);
        i++;
    }

    for(int i=start;i<=end;i++){
        a[i]=temp[i-start];
    }
}


void mSort(vector<int> &a,int start, int end){
    if(start >= end) return;
    int mid=(start+end)/2;
    mSort(a,start,mid);
    mSort(a,mid+1,end);
    merge(a,start,mid,end);
}

int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    vector<int> array;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        array.push_back(element);
    }
    mSort(array,0,n-1);
    cout<<"Array after sorting: ";
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    return 0;
    
}