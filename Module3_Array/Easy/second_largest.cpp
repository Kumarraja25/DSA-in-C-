#include <bits/stdc++.h>
using namespace std;

int second_largest(vector<int> &a,int size){
    int large1=a[0];
    int large2=-1;
    for(int i=0;i<size;i++){
        if(a[i]>large1){
            large2=large1;
            large1=a[i];
        }
        else if(a[i]<large1 && a[i]>large2){
            large2=a[i];
        }
    }
    return large2;
    
}
int second_smallest(vector<int> &a,int size){
    int small1=a[0];
    int small2=INT_MAX;
    for(int i=0;i<size;i++){
        if(a[i]<small1){
            small2=small1;
            small1=a[i];
        }
        else if(a[i]>small1 && a[i]<small2){
            small2=a[i];
        }
    }
    return small2;
}
vector<int> second_ordered_element(vector<int> &a,int size){
    int sLarge=second_largest(a,size);
    int sSmall=second_smallest(a,size);
    return {sLarge,sSmall};
}


int main(){
    int n;
    cout<<"Enter the no of inputs: ";
    cin>>n;
    vector<int> vec;
    cout<<"Enter the inputs: ";
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        vec.push_back(num);
    }
    vector<int> result=second_ordered_element(vec,n);
    cout<<"Second largest is : "<<result[0]<<endl;
    cout<<"Second smallest is : "<<result[1]<<endl;
    return 0;

}