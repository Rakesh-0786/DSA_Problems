// // pass by reference
// #include<bits/stdc++.h>
// using namespace std;
// void doSomething(string &s){
//     s[0]='rak';
//     cout<<s<<endl;
// }
// int main(){
//     string s="rakesh";
//     doSomething(s);
//     cout<<s<<endl;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
void doSomething(int &num){
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
}

int main(){
    int num=10;
    doSomething(num);
    cout<<num<<endl;
    return 0;
}

