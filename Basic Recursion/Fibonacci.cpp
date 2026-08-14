#include <bits/stdc++.h>
using namespace std;

int Fibo(int x){
    if(x==0||x==1) return x;
    return Fibo(x-1)+Fibo(x-2);
}

int main(){
    int n;
    cout<<"Enter a no: ";
    cin>>n;
    cout<<"The corresponding fibonacci number is: "<<Fibo(n);
    return 0;

}