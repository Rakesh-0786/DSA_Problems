/*The function max_element(nums.begin(), nums.end()) is part of the C++ Standard Library and is used to find the maximum element in a range (like an array or vector). It returns an iterator to the maximum element, and *max_element(...) dereferences it to give the actual value of the maximum element.*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums={3,5,2,9,4};
    int maxi=*max_element(nums.begin(),nums.end());
    cout<<maxi;
    return 0;
}