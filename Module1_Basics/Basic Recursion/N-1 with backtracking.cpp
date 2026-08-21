#include <bits/stdc++.h>
using namespace std;

void F(int i,int j){
   if(i>j) return;
   F(i+1,j);
   cout<<i<<" ";
}

int main(){
    int n;
    cout<<"Enter the no of iteration: ";
    cin>>n;
    F(1,n);
    return 0;
}