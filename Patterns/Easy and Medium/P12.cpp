#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no of rows:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n*2;j++){
            if(j<=i){
                cout<<j;
            }
            else if(j>=n*2-i+1){
                cout<<n*2-j+1;
            }
            else
                cout<<" ";
        }
        cout<<endl;
    }

}