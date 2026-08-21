#include <bits/stdc++.h>
using namespace std;

int Sum(int x, int s){
    if(x<1) return s;
    return Sum(x-1,s+x);
}

int main(){
    int n;
    cout<<"Enter the no:";
    cin>>n;
    cout<<"Sum upto "<<n<<" is : "<<Sum(n,0);
    return 0;
}