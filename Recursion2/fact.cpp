#include<bits/stdc++.h>
using namespace std;
int findFact(int n){
    if(n==1){
        return n;
    }
    return n*findFact(n-1);
}
int main(){
    int n;
    cin>>n;
    int ans=findFact(n);
    cout<<ans;

    return 0;
}