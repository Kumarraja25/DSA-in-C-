#include <bits/stdc++.h>
using namespace std;

vector<int> spiral(vector<vector<int>> &a){
    int m=a.size();
    int n=a[0].size();
    vector<int> ans;
    int left=0,right=n-1;
    int top=0,bottom=m-1;
    while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++){
            ans.push_back(a[top][i]);
        }
        top++;
        for(int i=top;i<=bottom;i++){
            ans.push_back(a[i][right]);
        }
        right--;
        if(top<=bottom){
            for(int i=right;i>=left;i--){
                ans.push_back(a[bottom][i]);
            }
            bottom--;
        }    
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                ans.push_back(a[i][left]);
            }
            left++;
        }
    }
    return ans;
}


int main(){
    int r,c;
    cout<<"Enter the no of rows: ";
    cin>>r;
    cout<<"Enter the no of cols: ";
    cin>>c;
    vector<vector<int>> v(r);
    for(int i=0;i<r;i++){
        cout<<"Row"<<i+1<<" elements: ";
        for(int j=0;j<c;j++){
            int num;
            cin>>num;
            v[i].push_back(num);
        }
    }
    vector<int> result=spiral(v);
    cout<<"After spiral: \n";
    for(int i=0;i<r*c;i++){
        cout<<result[i]<<" ";
        if((i+1)%c==0) cout<<"\n";

    }
    
    return 0;
}