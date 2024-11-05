#include<bits/stdc++.h>
using namespace std;
int findPeakEle(vector<int>arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        if((i==0 || arr[i]>arr[i-1]) && i==n-1 || (arr[i]>arr[i+1])){
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int>arr={1,2,1,3,5,6,4};
    int ans=findPeakEle(arr);
    cout<<ans;
    return 0;
}