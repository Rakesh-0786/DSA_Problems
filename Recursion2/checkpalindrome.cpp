#include<bits/stdc++.h>
using namespace std;
bool checkPalindrome(int n){
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
    bool ans=checkPalindrome(n);
    if(ans){
        cout<<"Yes it a palindrome";
    }else{
        cout<<"No it is not A Palindrome";
    }
    return 0;
}