#include <bits/stdc++.h>
using namespace std;

void F(int i,int j){
   if(i<1) return;
   cout<<i<<" ";
   F(i-1,j);
}

int main(){
    int n;
    cout<<"Enter the no of iteration: ";
    cin>>n;
    F(n,n);
    return 0;
}