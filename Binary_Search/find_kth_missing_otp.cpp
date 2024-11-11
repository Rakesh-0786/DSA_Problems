#include<bits/stdc++.h>
using namespace std;
int missingK(vector<int>vec, int k){
    int n=vec.size();
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        int missing=vec[mid]-(mid+1);
        if(missing<k){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return k+high+1;
}
int main(){
    vector<int>vec={2,3,4,7,11};
    int k=5;
    int ans=missingK(vec,k);
    cout<<ans;
    return 0;
}