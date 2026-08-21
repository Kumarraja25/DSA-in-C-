#include <bits/stdc++.h>
using namespace std;

// int count(int num){
//     int flag=0;
//     while(num>0){
//         flag++;
//         num/=10;
//     }
//     return flag;
// }

int count(int num){
    return log10(num)+1;
}

int main(){
    int n;
    cout<<"Enter a no: ";
    cin>>n;
    cout<<"The no of digit(s): "<<count(n)<<endl;
}