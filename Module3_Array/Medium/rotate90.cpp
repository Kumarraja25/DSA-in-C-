#include <bits/stdc++.h>
using namespace std;

void rotate(int* a,int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            int temp=a[i*size+j];
            a[i*size+j]=a[j*size+size-i-1];
            a[j*size+size-i-1]=temp;
        }
    }
}

int main(){
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    int array[n][n];
    
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        cin>>array[i][j];
      }   
      cout<<"/n";
    }
    rotate(array,n);
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        cout<<array[i][j]<<" ";
      }   
      cout<<"/n";
    }
    

    return 0;
}