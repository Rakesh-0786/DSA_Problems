#include<bits/stdc++.h>
using namespace std;
int findFact(int n){
    // base case
    if(n==1){
        return 1;
    }
    int ans=n*findFact(n-1);
    return ans;
}
int main(){
    int n;
    cin>>n;
    int result=findFact(n);
    cout<<result;
    return 0;
}