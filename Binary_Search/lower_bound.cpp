// Implement lower bound
// lower_bound=smallest index such that arr[i]>=n
// Problem statement:- You are given an array 'arr' sorted in non-decreasing order and a number 'x'. You must return the index of the lower bound of 'x'.



#include<bits/stdc++.h>
using namespace std;
int lowerBound(vector<int>arr, int x){
    int n=arr.size();
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]>=x){
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
    int x=5;
    int res=lowerBound(arr,x);
    cout<<res;
    return 0;
}