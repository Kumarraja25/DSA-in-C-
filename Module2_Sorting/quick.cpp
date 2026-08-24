#include <bits/stdc++.h>
using namespace std;


int partition(vector<int> &a,int start,int end){
    int i=start;
    int j=end;
    int pivot=a[start];
    while(i<j){
        while(a[i]<=pivot && i<=end) i++;
        while(a[j]>pivot && j>=start) j--;
        if(i<j){
            swap(a[i],a[j]);
        }
    }
    swap(a[start],a[j]);
    return j;
}

void qSort(vector<int> &a,int start,int end){
    if(start>=end) return;
    int loc=partition(a,start,end);
    qSort(a,start,loc-1);
    qSort(a,loc+1,end);
}

int main(){
    int n;
    vector<int> vec;
    
    cout<<"Enter the size: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        vec.push_back(num);
    }
    qSort(vec,0,n-1);
    cout<<"After sorting: ";
    for(auto it:vec){
        cout<<it<<" ";
    }
    return 0;
}