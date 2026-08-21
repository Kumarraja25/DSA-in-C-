#include <bits/stdc++.h>
using namespace std;

int main(){
    char ch='A';
    int n;
    cout<<"Enter the no of rows:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<(char)(ch+j-1);
        }
        cout<<endl;
    }

}