#include <bits/stdc++.h>
using namespace std;

int Armstrong(int num){
    int count_digit=log10(num)+1;
    int last_digit,AS_num=0;
    while(num>0){
        last_digit=num%10;
        AS_num+=pow(last_digit,count_digit);
        num/=10;
    }
    return AS_num;
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if(n==Armstrong(n)){
        cout<<"Armstrong"<<endl;
    }
    else
        cout<<"Not Armstrong"<<endl;
    return 0;    
}