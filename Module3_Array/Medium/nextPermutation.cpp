#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int> &a){
    next_permutation(a.begin(),a.end());
}
vector<int> nextPermutation1(vector<int> &a){
    int n=a.size();
    int index=-1;
    for(int i=n-2;i>=0;i--){
        if(a[i]<a[i+1]){
            index=i;
            break;
        }
    }
    if(index==-1){
        reverse(a.begin(),a.end());
        return a;
    }
    for(int i=n-1;i>index;i--){
        if(a[i]>a[index]){
            swap(a[i],a[index] );
            break;
        }
    }
    reverse(a.begin()+index+1,a.end());
    return a;
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

    // nextPermutation(v);
    v=nextPermutation(v);
    for(auto it:v){
        cout<<it<<" ";
    }

    return 0;
}