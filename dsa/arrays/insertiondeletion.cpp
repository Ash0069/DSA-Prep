#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // int x;
    // cin>>x;
    int pos;
    cin>>pos;
    // arr.insert(arr.begin()+pos,x);
    arr.erase(arr.begin()+pos);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}