#include <bits/stdc++.h>
using namespace std;

//prime number is a number which is only divisible by 1 and itself (incorrect)
//prime number is a number which has only 2 factors 1 and itself  (correct)
void Prime(int num){
    int count=0;
    for(int i=1;i*i<num;i++){
        if(num%i==0){
            count++;
            if(i!=num/i)
                count++;
        }
    }
    if(count==2){
        cout<<num<<" is a prime number"<<endl;
    }
    else{
        cout<<num<<" is not a prime number"<<endl;

    }   
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    Prime(n);
    return 0;
}