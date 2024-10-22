#include<bits/stdc++.h>
using namespace std;
int findSum(int n){
    if(n<=0){
        return n;
    }
    return n+findSum(n-1);
}
int main(){
    int n;
    cin>>n;
    int ans=findSum(n);
    cout<<ans;
    return 0;
}