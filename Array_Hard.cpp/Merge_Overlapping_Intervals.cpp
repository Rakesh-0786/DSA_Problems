#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>mergeOverLappingIntervals(vector<vector<int>>&arr){
    int n=arr.size();
    sort(arr.begin(),arr.end());
    vector<vector<int>>ans;
    for(int i=0;i<n;i++){
        int start=arr[i][0];
        int end=arr[i][1];
        if(!ans.empty() && end<=ans.back()[1]){
            continue;
        }
        for(int j=i+1;j<n;j++){
            if(arr[j][0]<=end){
                end=max(end,arr[j][1]);
            }else{
                break;
            }
            ans.push_back({start,end});
        }
    }
    return ans;
}
int main(){
    // Example usage
    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    vector<vector<int>> merged = mergeOverLappingIntervals(intervals);

    cout << "Merged Intervals:\n";
    for(auto &interval : merged){
        cout << "[" << interval[0] << ", " << interval[1] << "] ";
    }
    return 0;
}