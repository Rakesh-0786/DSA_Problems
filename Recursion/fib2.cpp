#include<bits/stdc++.h>
using namespace std;
int f(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    // if(n==0 || n==1){
        // return n;
    // }
    int ans=f(n-1)+f(n-2);
    return ans;
    }
int main(){
    int n;
    cin>>n;
    int result=f(n);
    cout<<result;
    return 0;
}