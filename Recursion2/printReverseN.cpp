#include<bits/stdc++.h>
using namespace std;
void printReverseN(int i,int n){
    if(i<1){
        return ;
    }
            cout<<i<<endl;
        printReverseN(i-1,n);


}
int main(){
    int n;
    cin>>n;
    printReverseN(n,n);
    return 0;
}