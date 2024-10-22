// #include<bits/stdc++.h>
// using namespace std;
// int count(int n){
//     int count=0;
//     while(n>0){
//         int lastDigit=n%10;
//         count++;
//         n=n/10;
//     }
//     return count;
// }
// int main(){
//     int n;
//     cin>>n;
//     int ans=count(n);
//     cout<<ans;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
    int  countNum(int n){
        int count=0;
        while(n>0){
                int lastDigit=n%10;
                count++;
                n=n/10;

        }
        return count;
    }

int main(){
    int n;
    cin>>n;
    int ans=countNum(n);
    cout<<ans;
    return 0;
}