#include <bits/stdc++.h>
using namespace std;

int main(){
    char ch='A';
    int n,m;
    cout<<"Enter the no of rows:";
    cin>>n;
    for(int i=1;i<=n;i++){
        m=n-i;
        for(int j=1;j<=i;j++){
            cout<<(char)(ch+m);
            m++;
        }
        cout<<endl;
    }

}