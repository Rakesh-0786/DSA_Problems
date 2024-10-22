#include<bits/stdc++.h>
using namespace std;
int findLargest(int arr[],int n){
    int largest=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=findLargest(arr,n);
    cout<<ans;
    return 0;
}