#include<bits/stdc++.h>
using namespace std;
bool checkP(int i, string &s){
    if(i>=s.size()/2) return true;
    if(s[i]!=s[s.size()-i-1]) return false;
    return checkP(i+1, s);
}
int main(){
    string s="madamm";
    cout<<checkP(0,s);
    return 0;
}