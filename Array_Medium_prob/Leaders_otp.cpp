#include<bits/stdc++.h>
using namespace std;
int findLeader(int arr[],int n){
    int maxi=INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>maxi){
            maxi=arr[i];
            maxi=max(max,arr[i]);
            i--;
        }
    }
    return maxi;
}
int main(){
    return 0;
}