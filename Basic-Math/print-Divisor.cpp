#include<bits/stdc++.h>
using namespace std;
void printDivisor(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
}
int main(){
    int n;
    cin>>n;
    printDivisor(n);
    return 0;
}