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
void pascalsTriangleRow(int r){
    for(int i=1;i<=r;i++){
        cout<<nCr(r-1,i-1)<<" ";
    }
}
void pascalsTriangle(int r,int c){
    
}

int main(){
    int row,col;
    cout<<"Enter the position of element you want\n"<<"Row: ";
    cin>>row;
    cout<<"Column: ";
    cin>>col;
    pascalsTriangleElement(row,col);
    cout<<"\ntell the row to print: ";
    cin>>row;
    pascalsTriangleRow(row);
    cout<<"Enter details for triangle\n"<<"Row: ";
    cin>>row;
    cout<<"Column: ";
    cin>>col;
    pascalsTriangle(row,col);

}