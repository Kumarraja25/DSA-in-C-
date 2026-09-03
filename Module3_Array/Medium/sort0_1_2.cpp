#include <bits/stdc++.h>
using namespace std;


void sort1(vector<int> &a){
    sort(a.begin(),a.end());
}
void sort2(vector<int> &a){
    int count0=0;
    int count1=0;
    int count2=0;
    for(int i=0;i<a.size();i++){
        if(a[i]==0) count0++;
        else if(a[i]==1) count1++;
        else count2++;
    }
    for(int i=0;i<count0;i++){
        a[i]=0;
    }
    for(int i=count0;i<count0+count1;i++){
        a[i]=1;
    }
    for(int i=count0+count1;i<a.size();i++){
        a[i]=2;
    }

}
void sort(vector<int> &a){
    int i=0;
    int j=a.size()-1;
    int k=0;
    while(k<=j){
        if(a[k]==0){
            swap(a[i],a[k]);
            i++;
            k++;
        }
        else if(a[k]==1){
            k++;
        }
        else{
            swap(a[j],a[k]);
            j--;
        }
    }
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
    sort(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}