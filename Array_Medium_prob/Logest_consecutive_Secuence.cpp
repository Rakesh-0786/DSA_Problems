#include<bits/stdc++.h>
using namespace std;
int longestS(vector<int>arr,int n){
    if(arr.size()==0){
        return 0;
    }
    sort(arr.begin(),arr.end());
    int count=0;
    int lastSmaller=INT_MIN;
    int largest=1;
    for(int i=0;i<n;i++){
        if(arr[i]-1==lastSmaller){
            count++;
            lastSmaller=arr[i];
        } else if(arr[i]!=lastSmaller){
            count=1;
            lastSmaller=arr[i];
        }
        largest=max(largest,count);
    }
    return largest;
}
int main(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=longestS(arr,n);
    cout<<ans;
    return 0;
}