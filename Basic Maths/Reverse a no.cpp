#include <bits/stdc++.h>
using namespace std;

int reverse(int num){
    int ulta_num=0,last_digit;
    while(num>0){
        last_digit=num%10;
        ulta_num=ulta_num*10+last_digit;
        num/=10;
    }
    return ulta_num;
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Reverse of the number is: "<<reverse(n)<<endl;
}