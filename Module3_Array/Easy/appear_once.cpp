#include <bits/stdc++.h>
using namespace std;

// int appear_once_Brute(vector<int> &a){
//     for(int i=0;i<a.size();i++){
//         int count=0;
//         int num=a[i];
//         for(int j=0;j<a.size();j++){
//             if(a[j]==num) count++;
//         }
//         if(count==1) return a[i];
//     }
// }

// int appear_once_Better(vector<int> &a){
//     int max=a[0];
//     for(auto it:a){
//         if(it>max) max=it;
//     }
//     int hash[max+1]={0};
//     for(auto it:a){
//         hash[it]++;
//     }
//     for(int i=0;i<=max;i++)
//         if(hash[i]==1) return i;
//     return;
// }


// int appear_once_B(vector<int> &a){
//     int sum=0;
//     int n=(a.size()+1)/2;
//     for(auto it:a){
//         sum+=it;
//     }
   
//     return (n*(n+1))-sum;
// }

int appear_once(vector<int> &a){
    int num=0;
    for(int i=0;i<a.size();i++){
        num^=a[i];
    }
   
    return num;
}

int main(){
    vector<int> v={1,1,2,3,3,4,4};
    cout<<"Element appearing once is : "<<appear_once(v);
    return 0;
}