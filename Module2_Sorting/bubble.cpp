#include <bits/stdc++.h>
using namespace std;

void bSort(int a[],int size){
    for(int i=0;i<size;i++){
        int flag=0;
        for(int j=0;j<size-i-1;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;

            }
        }
        if(flag==0) break;
        
    }
}

int main(){
    int n;
    cout<<"Enter the size of array to be sorted: ";
    cin>>n;
    int array[n];
    cout<<"Enter the elments: ";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<"Array after sorted: ";
    bSort(array,n);
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    return 0;

}