#include<bits/stdc++.h>
using namespace std;
int f(int n){
    if(n>=0 && n<=9){
        return n;
    }
    int anss= f(n/10)+(n%10);
    return anss;
}
int main(){
    int n;
    cin>>n;
    int ans=f(n);
    cout<<ans;
    return 0;
}