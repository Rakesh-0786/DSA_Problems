#include<bits/stdc++.h>
using namespace std;
int findConsecutiveOnes(int arr[],int n){
    int maxi=0;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
            maxi=max(count,maxi);
        }else{
            count=0;
        }
    }
    return maxi;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=findConsecutiveOnes(arr,n);
    cout<<ans;
    return 0;
}