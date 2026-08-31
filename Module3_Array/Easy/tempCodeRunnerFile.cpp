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