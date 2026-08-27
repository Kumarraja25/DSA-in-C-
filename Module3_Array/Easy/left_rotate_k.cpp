#include <bits/stdc++.h>
using namespace std;

void rotate_left_brute(vector<int> &a,int size,int d){
    vector<int> temp;
    for(int i=0;i<d;i++){
        temp.push_back(a[i]);
    }
    for(int i=d;i<size;i++){
        a[i-d]=a[i];
    }
    for(int i=size-d;i<size;i++){
        a[i]=temp[i-size+d];
    }
    
}
void reverse(vector<int> &a, int start,int end){
    int i=start;
    int j=end-1;
    while(i<j){
        swap(a[i++],a[j--]);
    }
}

void rotate_left(vector<int> &a,int size,int d){
    reverse(a,0,d);
    reverse(a,d,size);
    reverse(a,0,size);
}

int main(){
    int n,k;
    cout<<"Enter the size: ";
    cin>>n;
    cout<<"Enter the no of places to rotate: ";
    cin>>k;
    vector<int> v;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        v.push_back(num);
    }
    rotate_left(v,n,k);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}