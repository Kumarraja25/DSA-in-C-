#include <bits/stdc++.h>
using namespace std;

void iSort(int a[],int size){
    for(int i=0;i<size-1;i++){
        int j=i+1;
        while(j>0&&a[j-1]>a[j]){
                int temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
                j--;
        }
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
    iSort(array,n);
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    return 0;

}