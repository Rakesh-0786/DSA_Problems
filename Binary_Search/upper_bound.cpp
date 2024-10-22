// implement upper_bound
// upper_bound=smallest index such that arr[i]>n
// Problem statement:- You are given a sorted array ‘arr’ containing ‘n’ integers and an integer ‘x’.Implement the ‘upper bound’ function to find the index of the upper bound of 'x' in the array.

#include<bits/stdc++.h>
using namespace std;
int findUpperBound(vector<int>arr, int x){
    int n=arr.size();
    int low =0;
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]>x){
            ans=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return ans;
}
int main(){
    vector<int>arr={2,3,6,7,8,8,9,9,9,11,11,11,12};
    int x=6;
    int result=findUpperBound(arr, x);
    cout<<result;
    return 0;
}

