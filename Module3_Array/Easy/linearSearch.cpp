#include <bits/stdc++.h>
using namespace std;

void linearSearch(int arr[],int x,int size){
    for(int i=0;i<size;i++ ){
        if(arr[i]==x){
            cout<<"Found at index: "<<i;
            return;
        }
    }
    cout<<"Not Found.";

}

int main(){
    int n,key;
    cout<<"Enter the size: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the key to search: ";
    cin>>key;
    linearSearch(arr,key,n);
    return 0;
}