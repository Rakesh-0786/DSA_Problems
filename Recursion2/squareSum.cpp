#include<bits/stdc++.h>
using namespace std;
int findSquareSum(int n){
    if(n==1){
        return 1;
    }
    return n*n+findSquareSum(n-1);
}
int main(){
    int n;
    cin>>n;
    int ans=findSquareSum(n);
    cout<<ans;
    return 0;
}