/*Given an array of integers nums and an integer threshold, we will choose a positive integer divisor, divide all the array by it, and sum the division's result. Find the smallest divisor such that the result mentioned above is less than or equal to threshold.

Each result of the division is rounded to the nearest integer greater than or equal to that element. (For example: 7/3 = 3 and 10/2 = 5).

The test cases are generated so that there will be an answer.*/

#include<bits/stdc++.h>
using namespace std;
int findSmallestD(vector<int>&arr, int threshold){
    int n=arr.size();
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
    }
    for(int d=1;d<=maxi;d++){
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=ceil((double)arr[i]/d);
        }
        if(sum<=threshold){
            return d;
        }
    }
    return -1;
}
int main(){
    vector<int>arr={1,2,5,9};
    int threshold=6;
    int ans=findSmallestD(arr,threshold);
    cout<<ans;
    return 0;
}


/*
#include<bits/stdc++.h>
using namespace std;
int findSmallestDiv(vector<int>arr, int threshold){
int n=arr.size();
int maxi=INT_MIN;
for(int i=0;i<n;i++){
// maxi=*max_element(arr.begin(),arr.end();
maxi=max(maxi, arr[i]);
}
for(int d=1;d<=maxi;d++){
int sum=0;
for(int i=0;i<n;i++){
sum+=ceil((double)arr[i]/d);
}
if(sum<=threshold){
return d;
}
}
return -1;
}
int main(){
return 0;
}
*/