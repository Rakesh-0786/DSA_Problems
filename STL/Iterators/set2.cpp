#include<bits/stdc++.h>
using namespace std;
// by default set prints in ascending order but if we want to print in descending order then we can do this
void explainSet(){
    set<int, greater<int>>s;
    s.insert(10);
    s.insert(20);
    s.insert(10);
    s.insert(12);
    s.insert(11);
    s.insert(19);
    for(auto it:s){
        cout<<it<<endl;
    }



}
int main(){
    explainSet();
    return 0;
}