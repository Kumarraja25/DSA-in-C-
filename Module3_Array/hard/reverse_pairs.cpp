#include <bits/stdc++.h>
using namespace std;

int revPairs(vector<int> &a){
    int n=a.size();
    int count=0;
    for(int i=0;i<n-1;i++ ){
        for(int j=i+1;j<n;j++){
            if(a[i]>2*a[j]) count++;
        }
    }
    return count;
}

void merge(vector<int>& a, int low, int mid, int high) {
    int n1 = mid - low + 1;
    int n2 = high - mid;

    vector<int> left(n1), right(n2);

    for(int k = 0; k < n1; k++)
        left[k] = a[low + k];

    for(int k = 0; k < n2; k++)
        right[k] = a[mid + 1 + k];

    int i = 0;
    int j = 0;
    int k = low;
    int count = 0;

    while(i < n1 && j < n2) {
        if(left[i] <= right[j]) {
            a[k] = left[i];
            i++;
        }
        else {
            a[k] = right[j];
            j++;
        }
        k++;
    }

    while(i < n1) {
        a[k] = left[i];
        i++;
        k++;
    }

    while(j < n2) {
        a[k] = right[j];
        j++;
        k++;
    }
}
int countPairs(vector<int> &a,int low, int mid, int high){
    int count=0;
    int j=mid+1;
    for(int i=low;i<=mid;i++){
        while(j<=high && a[i]>2*a[j]){
            j++;
        }
        count+=j-mid-1;
    }
    return count;
}

int ms(vector<int>& a, int low, int high){
    int cnt=0;
    if(low<high){
        int mid=(low+high)/2;
        cnt+=ms(a,low,mid);
        cnt+=ms(a,mid+1,high);
        cnt+=countPairs(a,low,mid,high);
        merge(a,low,mid,high);
    }
    return cnt;
}



int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> v;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        v.push_back(num);
    }
    cout<<"No of reverse pairs: "<< revPairs(v)<<"\n";
    cout<<"No of reverse pairs: "<< ms(v,0,n-1)<<"\n";
}
