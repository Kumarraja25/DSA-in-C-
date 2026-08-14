#include <bits/stdc++.h>
using namespace std;

int Fact(int x){
    if(x==0) return 1;
    return x*Fact(x-1);
}

int main(){
    int n;
    cout<<"Enter the no:";
    cin>>n;
    cout<<"Factorial of "<<n<<" is : "<<Fact(n);
    return 0;
}