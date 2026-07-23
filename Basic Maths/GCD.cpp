#include <bits/stdc++.h>
using namespace std;

// Both below Algo take O(min(a,b)) in worst
int GCD1(int a,int b){
    int hcf;
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0 && b%i==0)
            hcf=i;
    }
    return hcf;
}
int GCD2(int a,int b){
    int hcf;
    for(int i=min(a,b);i>0;i--){
        if(a%i==0 && b%i==0)
            hcf=i;
    }
    return hcf;
}

// Euclidean Algo (Sometime it takes more time than above)
// GCD(a,b)=GCD(a-b,b)  if a>b
int GCD3(int a,int b){
    if(a==0)return b;
    if(b==0)return a;
    return GCD3(max(a,b)-min(a,b),min(a,b));
}

// Optimised
int GCD4(int a,int b){
    while(a>0 && b>0){
        if(a>b) a=a%b;
        else b=b%a;
    }
    if(a==0) return b;
    return a;
}

int main(){
    int x,y;
    cout<<"Enter two numbers: ";
    cin>>x>>y;
    cout<<"GCD of "<<x<<" and "<<y<<" is :"<<GCD3(x,y)<<endl;
    return 0;
}