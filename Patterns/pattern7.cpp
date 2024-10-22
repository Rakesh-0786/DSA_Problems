#include<bits/stdc++.h>
using namespace std;
void printPatterns(int n){
    for(int i=0;i<n;i++){
        // space
        for(int j=0;j<n-i-1;j++){
         cout<<" ";

        }
        // start
        for(int k=0;k<2*i-1;k++){
            cout<<"*";
        }
        // space
            for(int j=0;j<n-i-1;j++){
              cout<<" ";
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