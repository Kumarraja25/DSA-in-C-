#include <bits/stdc++.h>
using namespace std;

int nCr(int n,int r){
    int res=1;
    for(int i=0;i<r;i++){
        res*=(n-i);
        res/=(i+1);
    }
    return res;
}

void pascalsTriangleElement(int r,int c){
    cout<<nCr(r-1,c-1);
}
void pascalsTriangleRow1(int r){
    for(int i=1;i<=r;i++){
        cout<<nCr(r-1,i-1)<<" ";
    }
}
void pascalsTriangleRow(int r){
    int ans=1;
    cout<<ans<<" ";
    for(int i=1;i<r;i++){
        ans*=(r-i);
        ans/=i;
        cout<<ans<<" ";
    }
}
vector<vector<int>> pascalsTriangle(int r,int c){
    vector<vector<int>> ans;
    for(int i=1;i<=r;i++){
        vector<int> temp;
        for(int j=1;j<=c;j++){
            cout<<nCr(r-1,c-1)<<" ";
        }
        cout<<"\n";
    }
}

int main(){
    int row,col;
    // cout<<"Enter the position of element you want\n"<<"Row: ";
    // cin>>row;
    // cout<<"Column: ";
    // cin>>col;
    // pascalsTriangleElement(row,col);
    cout<<"\ntell the row to print: ";
    cin>>row;
    pascalsTriangleRow(row);
    // cout<<"Enter details for triangle\n"<<"Row: ";
    // cin>>row;
    // cout<<"Column: ";
    // cin>>col;
    // pascalsTriangle(row,col);

}