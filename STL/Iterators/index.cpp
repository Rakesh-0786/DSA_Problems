#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40};  // Declare and initialize the vector
    vector<int>::iterator it = v.begin();  // Create an iterator pointing to the first element
    it++;  // Move the iterator to the next element (second element)

    cout << *(it) << " ";  // Dereference the iterator to get the value and print it (should print 20)

    it=it+2;
    cout<<*(it)<<" ";

    vector<int>::iterator it=v.end();
    vector<int>::iterator it=v.rend();
    vector<int>::iterator it=v.rbegin();

    cout<<v[0]<<" "<<v.at(0);
    cout<<v.back()<<" ";

    return 0;
}
