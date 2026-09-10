#include <bits/stdc++.h>
using namespace std;

bool linearSearch(vector<int> &arr,int key){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==key) return true;
    }
    return false;
}

int lc1(vector<int> &a){
    int n=a.size();
    if(n==0) return 0;
    int len=INT_MIN;
    for(int i=0;i<n;i++){
        int num=a[i];
        int count=1;
        while(linearSearch(a,num+1)){
            count++;
            num=num+1;
        }
        len=max(count,len);
    }
    return len;
}
int lc2(vector<int> &a){
    int n=a.size();
    if(n==0) return 0;
    int len=0;
    sort(a.begin(),a.end());
    int lastSmallest=INT_MIN;
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]-1==lastSmallest){
            count++;
            lastSmallest=a[i];
        }
        else if(a[i]!=lastSmallest){
            count=1;
            lastSmallest=a[i];
        }
        len=max(len,count);
    }
    
    return len;
}
int lc(vector<int> &a){
    int n=a.size();
    if(n==0) return 0;
    unordered_set<int> s;
    int len=1;
    for(auto it:a){
        s.insert(it);
    }
    for(auto it:s){
        int count=1;
        if(s.find(it-1)==s.end()){
            int x=it;
            while(s.find(x+1)!=s.end()){
                x++;
                count++;
            }
            len=max(count,len);
        }
    }
    return len;
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
    cout<<"length of longest consequtive: "<<lc(v);
    return 0;
}