// print the number from 1 to N without using the loops;
#include<bits/stdc++.h>
using namespace std;
void printNos(int N){
    if(N>0){
        printNos(N-1);
        cout<<N<<" ";
    }
}
int main(){
    int N;
    cin>>N;
    printNos(N);
    return 0;
}