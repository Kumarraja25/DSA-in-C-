#include <bits/stdc++.h>
using namespace std;

void rotate1(vector<vector<int>> &a,int size){
    int newArray[size][size];
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            newArray[j][size-i-1]=a[i][j];
        }
    }
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            a[i][j]=newArray[i][j];
        }
    }
}
void rotate(vector<vector<int>> &a,int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<=i;j++){
            swap(a[i][j],a[j][i]);
        }
    }
    for(int i=0;i<size;i++){
        reverse(a[i].begin(),a[i].end());
    }
}

int main(){
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    vector<vector<int>> v(n);
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        int num;
        cin>>num;
        v[i].push_back(num);
      }   
    }
    rotate(v,n);
    cout<<"After rotation: \n";
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        cout<<v[i][j]<<"  ";
      }   
      cout<<"\n";
    }
    

    return 0;
}