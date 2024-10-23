// Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
// You must write an algorithm with O(log n) runtime complexity.
#include<bits/stdc++.h>
using namespace std;
int searchInsert(vector<int>&arr, int target){
    int n=arr.size();
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]>=target){
            ans=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return ans;
}
int main(){
    vector<int>arr={1,2,3,4,7,8,9,9,9};
    int target=5;
    int res=searchInsert(arr,target);
    cout<<res;
    return 0;
}