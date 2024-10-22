#include<bits/stdc++.h>
using namespace std;
void printName(int couter,int n){
    if(couter>n){
        return;
    }
    cout<<"Rakesh"<<endl;
    printName(couter+1,n);
}
int main(){
    int n;
    cin>>n;
    printName(1,n);
    return 0;
}