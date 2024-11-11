/*Given an array arr of positive integers sorted in a strictly increasing order, and an integer k.

Return the kth positive integer that is missing from this array.

  */

 #include<bits/stdc++.h>
 using namespace std;
 int findKMissing(vector<int>arr, int k){
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]<=k){
            k++;
        }else{
            break;
        }
    }
    return k;
 }
 int main(){
    vector<int>arr={2,3,4,7,11};
    int k=5;
    int ans=findKMissing(arr,k);
    cout<<ans;
    return 0;
 }