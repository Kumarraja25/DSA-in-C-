#include <bits/stdc++.h>
using namespace std;

vector<int> unionArray;

void unionSorted_Brute(int arr1[],int n1, int arr2[],int n2){
    set<int> s;
    for(int i=0;i<n1;i++){
        s.insert(arr1[i]);
    }
    for(int i=0;i<n2;i++){
        s.insert(arr2[i]);
    }
    
    for(auto it:s){
        unionArray.push_back(it);
    }
}
void unionSorted(int arr1[],int n1, int arr2[],int n2){
    int i=0;
    int j=0;
    while(i<n1 && j<n2){
        if(arr1[i]<=arr2[j]){
            if(unionArray.size()==0 || arr1[i]!=unionArray.back()){
                unionArray.push_back(arr1[i]);
            }
            i++;
        }
        else{ 
            if(unionArray.size()==0 || arr2[j]!=unionArray.back()){
                unionArray.push_back(arr2[j]);
            }
            j++;
        }
    }
    while(i<n1){
        if(unionArray.size()==0 ||arr1[i]!=unionArray.back()){
            unionArray.push_back(arr1[i]);
        }
        i++;
    }
    while(j<n2){
        if(unionArray.size()==0 ||arr2[j]!=unionArray.back()){
            unionArray.push_back(arr2[j]);
        }
        j++;
    }
}

int main(){
    int a1[]={1,1,2,3,4,5};
    int a2[]={2,3,4,4,5,6};
    int size1=sizeof(a1)/sizeof(a1[0]);
    int size2=sizeof(a2)/sizeof(a2[0]);
    unionSorted(a1,size1,a2,size2);
    for(auto it:unionArray){
        cout<<it<<" ";
    }
    return 0;
}