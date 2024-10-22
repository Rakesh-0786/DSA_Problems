#include<bits/stdc++.h>
using namespace std;
vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    int n=a.size();
    int m=b.size();
    set<int>st;
    for(int i=0;i<n;i++){
        st.insert(a[i]);
    }
    for(int i=0;i<m;i++){
        st.insert(b[i]);
    }
    vector<int>temp;
    for(auto it:st){
        temp.push_back(it);
    }
    return temp;
}
int main() {
    // Example usage
    vector<int> a = {1, 3, 5, 7}; // Example array a
    vector<int> b = {2, 3, 6, 8}; // Example array b

    vector<int> result = sortedArray(a, b); // Call the sortedArray function

    // Print the result
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}