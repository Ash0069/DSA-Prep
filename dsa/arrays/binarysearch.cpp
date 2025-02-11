#include<iostream>
#include<vector>
using namespace std;

int bs(int low, int high, int x, vector<int> &arr){
    if(low>high){
        return -1;
    }
    int mid=(low+high)/2;
    if(arr[mid]==x){
        return mid;
    }
    else if(arr[mid]>x){
        return bs(low, mid-1, x, arr);
    }
    else{
        return bs(mid+1, high, x, arr);
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    cout<<bs(0 ,arr.size()-1, x, arr);
    return 0;
}