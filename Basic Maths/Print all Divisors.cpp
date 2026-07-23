#include <bits/stdc++.h>
using namespace std;

// Brute Force
void factors1(int num){
    for(int i=1;i<=num;i++){
        if(num%i==0){
            cout<<i<<endl;
        }
    }
}


// optimise but random ordered
void factors2(int num){
    for(int i=1;i<=sqrt(num);i++){
        if(num%i==0){
            cout<<i<<endl<<num/i<<endl;
        }
    }
}

//optimize with ordered
void factors3(int num){
    vector<int> lf;            // list of factors  
    for(int i=1;i<=sqrt(num);i++){
        if(num%i==0){
            lf.push_back(i);
            if(num/i!=i){
                lf.emplace_back(num/i);
            }
            
        }
    }
    sort(lf.begin(),lf.end());
    for(auto it : lf)cout<<it<<" ";
}

int main(){
    int n;
    cout<<"Enter the no: ";
    cin>>n;
    // factors(n);
    factors3(n);
}