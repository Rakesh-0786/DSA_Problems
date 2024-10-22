#include<bits/stdc++.h>
using namespace std;
bool isArmstrong(int n){
    int duplicateN=n;
    int sum=0;
    while(n>0){
        int ld=n%10;
        sum=sum+(ld*ld*ld);
        n=n/10;
    }
    if(duplicateN==sum){
        return true;
    } else{
        return false;
    }
}
int main(){
    int n;
    cin>>n;
    bool ans=isArmstrong(n);
    if(ans){
        cout<<"It is An Armstrong Number"<<endl;
    }else{
        cout<<"It is not an Armstrong Number"<<endl;
    }
    return 0;

}