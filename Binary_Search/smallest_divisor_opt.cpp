#include<bits/stdc++.h>
using namespace std;
int findSumOfDivisor(vector<int>&arr, int div){
    int n=arr.size();
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=ceil((double)arr[i]/div);
    }
    return sum;
}
int findSmallestDivisor(vector<int>arr, int threshold){
int n=arr.size();
// int maxi=*max_element(arr.begin(),arr.end());
int maxi=INT_MAX;
for(int i=0;i<n;i++){
    maxi=max(maxi,arr[i]);
}
int low=1;
int high=maxi;
int ans=-1;
while(low<=high){
    int mid=low+(high-low)/2;
    if(findSumOfDivisor(arr,mid)<=threshold){
        ans=mid;
        high=mid-1;
    }else{
        low=mid+1;
    }
}
return ans;
}
int main(){
    vector<int>arr={1,2,5,9};
    int threshold=7;
    int result=findSmallestDivisor(arr,threshold);
    cout<<result;
        return 0;
}