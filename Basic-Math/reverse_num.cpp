// #include<bits/stdc++.h>
// using namespace std;
// int revereseNumber(int n){
//     int reverseNum=0;
//     while(n>0){
//         int lastDigit=n%10;
//         reverseNum=(reverseNum*10)+lastDigit;
//         n=n/10;
//     }
//     return reverseNum;
// }
// int main(){
//     int n;
//     cin>>n;
//     int ans=revereseNumber(n);
//     cout<<ans;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
    int countReverse(int n){
        int reverseCount=0;
        while(n>0){
            int lastDigit=n%10;
            reverseCount=reverseCount*10+lastDigit;
            n=n/10;
        }
        return reverseCount;
    }

int main(){
    int n;
    cin>>n;
    int ans=countReverse(n);
    cout<<ans;
    return 0;
}