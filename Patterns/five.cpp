#include<bits/stdc++.h>
using namespace std;
void printPatterns(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    printPatterns(n);
    return 0;
}