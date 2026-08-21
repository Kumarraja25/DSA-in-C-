#include <bits/stdc++.h>
using namespace std;

void sSort(int *a,int size){
    for(int i=0;i<size-1;i++){
        int min=i;
        for(int j=i+1;j<size;j++){
            if(a[j]<a[min]5){
               min=j;
            }
        }
        int temp=a[i];
        a[i]=a[min];
        a[min]=temp;

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
    sSort(array,n);
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    return 0;

}