#include<bits/stdc++.h>
using namespace std;
void explainSet(){
    set<int>st;
    st.insert(1);
    st.insert(2);
    st.insert(1);
    st.insert(4);
    st.insert(1);

for(auto it:st){
cout<<it<<endl;
}


}
int main(){
    explainSet();
    return 0;
}