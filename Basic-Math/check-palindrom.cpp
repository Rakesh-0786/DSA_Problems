#include<bits/stdc++.h>
using namespace std;
bool checkPalindrom(int n){
    int reverseNum=0;
    int OriginalNum=n;
    while(n>0){
        int ld=n%10;
        reverseNum=reverseNum*10+ld;
        n=n/10;
    }
    if(reverseNum==OriginalNum){
        return true;
    } else{
        return false;
    }
}
int main(){
    int n;
    cin>>n;
    bool ans=checkPalindrom(n);
    if(ans){
        cout<<"It is a Palindrom num";
    } else{
        cout<<"It is not a Palindrome num";
    }
    return 0;
}