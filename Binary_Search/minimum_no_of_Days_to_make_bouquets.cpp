// You are given an integer array bloomDay, an integer m and an integer k.
// You want to make m bouquets. To make a bouquet, you need to use k adjacent flowers from the garden.
// The garden consists of n flowers, the ith flower will bloom in the bloomDay[i] and then can be used in exactly one bouquet.
// Return the minimum number of days you need to wait to be able to make m bouquets from the garden. If it is impossible to make m bouquets return -1.
// Example 1:
// Input: bloomDay = [1,10,3,10,2], m = 3, k = 1
// Output: 3

#include<bits/stdc++.h>
using namespace std;
int possible(vector<int>&bloomDay, int day, int m, int k){
    int n=bloomDay.size();
    int count=0;
    int noOfB=0;
    for(int i=0;i<n;i++){
        if(bloomDay[i]<=day){
            count++;
        }else{
            noOfB+=(count/k);
            count=0;
        }
    }
    noOfB+=(count/k);
    return noOfB>=m;
}

int findMinimumDays(vector<int>&bloomDay, int m, int k){
    int n=bloomDay.size();
    long long val=m*1LL*k*1LL;
    if(val>n){
        return -1;
    }
    int mini=INT_MAX;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        mini=min(mini,bloomDay[i]);
        maxi=max(maxi,bloomDay[i]);
    }
    int low=mini;
    int high=maxi;
    int ans=0;

    while(low<=high){
        int mid=low+(high-low)/2;
        if(possible(bloomDay,mid,m,k)){
            ans=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return ans;
}
int main(){
    // vector<int>bloomDay={7,7,7,7,7,13,11,12,7};
    vector<int>bloomDay={1,10,3,10,2};
    int m=3;
    int k=2;
    int result=findMinimumDays(bloomDay,m,k);
    cout<<result;
    return 0;
}