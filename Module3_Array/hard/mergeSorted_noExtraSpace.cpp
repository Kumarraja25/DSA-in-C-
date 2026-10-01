#include <bits/stdc++.h>
using namespace std;

void merge1(vector<int> &a,vector<int> &b){
    vector<int> c;
    int i=0,j=0;
    int n1=a.size(),n2=b.size();
    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            c.push_back(a[i]);
            i++;
        }
        else{
            c.push_back(b[j]);
            j++;
        }
    }
    while(i<n1){
        c.push_back(a[i]);
        i++;
    }
    while(j<n2){
        c.push_back(b[j]);
        j++;
    }
    for(int i=0;i<n1+n2;i++){
        if(i<n1){
            a[i]=c[i];
        }
        else{
            b[i-n1]=c[i];
        }
    }
}
void merge2(vector<int> &a,vector<int> &b){
    int n1=a.size(),n2=b.size();
    int i=n1-1;
    int j=0;
    while(i>=0 && j<n2){
        if(a[i]>=b[j]){
            swap(a[i],b[j]);
            i--;
            j++;
        }
        else break;
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
}
void merge(vector<int> &a,vector<int> &b){
    int n1=a.size(),n2=b.size();
    int len=a.size()+b.size();
    int gap=len/2+len%2;
    while(gap>0){
        int i=0;
        int j=i+gap;
        while(j<len){
            if(i<n1 && j>=n1){
                if(a[i]>b[j-n1]){
                    swap(a[i],b[j-n1]);
                } 
            }
            else if(i>=n1){
                if(b[i-n1]>b[j-n1]){
                    swap(b[i-n1],b[j-n1]);
                }
            }
            else{
                if(a[i]>a[j]){
                    swap(a[i],a[j]);

                }
            }
            i++;j++;
        }
        gap=(gap==1)?0:(gap/2)+(gap%2);
    }
}




int main(){
    int n1,n2;
    cout<<"Enter the size of array1 ans array2: ";
    cin>>n1;
    cin>>n2;
    vector<int> v1,v2;
    cout<<"Enter the elements of array 1: ";
    for(int i=0;i<n1;i++){
        int num;
        cin>>num;
        v1.push_back(num);
    }
    cout<<"\nEnter the elements of array 2: ";
    for(int i=0;i<n2;i++){
        int num;
        cin>>num;
        v2.push_back(num);
    }
    merge(v1,v2);
    for(auto it:v1){
        cout<<it<<" ";
    }
    cout<<"\n";
    for(auto it:v2){
        cout<<it<<" ";
    }
}
