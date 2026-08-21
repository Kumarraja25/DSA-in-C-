#include <bits/stdc++.h>
using namespace std;

int Sum(int x){
    if(x==0) return 0;
    return x+Sum(x-1);
}

int main(){
    int n;
    cout<<"Enter the no:";
    cin>>n;
    cout<<"Sum upto "<<n<<" is : "<<Sum(n);
    return 0;
}