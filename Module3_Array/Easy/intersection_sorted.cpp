#include <bits/stdc++.h>
using namespace std;

vector<int> intersection;

void intersec(int a[],int n1, int b[],int n2){
    int i=0;
    int j=0;
    while(i<n1 && j<n2){
        if(a[i]<b[j]) i++;
        else if(a[i]>b[j]) j++;
        else{
            intersection.push_back(a[i]);
            i++;
            j++;
        }
    }
}

int main(){
    int a1[]={1,1,2,3,4,5,7};
    int a2[]={2,3,4,4,5,6};
    int size1=sizeof(a1)/sizeof(a1[0]);
    int size2=sizeof(a2)/sizeof(a2[0]);
    intersec(a1,size1,a2,size2);
    for(auto it:intersection){
        cout<<it<<" ";
    }
    return 0;
}