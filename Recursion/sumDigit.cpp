#include<bits/stdc++.h>
using namespace std;
int findSum(int n){
    int sum=0;
    while(n>0){
        int ld=n%10;
        sum+=ld;
        n=n/10;
    }
return sum;
}
int main(){
    int n;
    cin>>n;
    int ans=findSum(n);
    cout<<ans;
    return 0;
}