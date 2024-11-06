// Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone and will come back in h hours.
// Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile of bananas and eats k bananas from that pile. If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.
// Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.
// Return the minimum integer k such that she can eat all the bananas within h hours.
// Example 1:
// Input: piles = [3,6,7,11], h = 8
// Output: 4
#include<bits/stdc++.h>
using namespace std;
int findMaxi(vector<int>&piles){
    int maxi=INT_MIN;
    int n=piles.size();
    for(int i=0;i<n;i++){
        maxi=max(maxi,piles[i]);
    }
    return maxi;
}
int calculateTotalHours(vector<int>&piles, int hourly){
    int TotalH=0;
    int n=piles.size();
    for(int i=0;i<n;i++){
        TotalH+=ceil(piles[i]+hourly-1)/hourly;
    }
    return TotalH;
}
int findMiniEatBananas(vector<int>piles,int h){
    int low=0;
    int high=findMaxi(piles);
    int ans=INT_MAX;
    while(low<=high){
        int mid=low+(high-low)/2;
        int totalHr=calculateTotalHours(piles, mid);
        if(totalHr<=h){
            ans=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return ans;
}
int main(){
    vector<int>piles={3,6,7,11};
    int h=8;
    int result=findMiniEatBananas(piles,h);
    cout<<result;
    return 0;
}