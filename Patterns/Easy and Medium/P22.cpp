// took reference


#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no:";
    cin>>n;
    int top,bottom,left,right,minDist;
    for(int i=0;i<n*2-1;i++){
        for(int j=0;j<n*2-1;j++){
            top=i;
            bottom=(2*n-2)-i;
            left=j;
            right=(2*n-2)-j;
            minDist=min(min(left,right),min(top,bottom));
            cout<<n-minDist;
        }
        cout<<endl;
    }
}