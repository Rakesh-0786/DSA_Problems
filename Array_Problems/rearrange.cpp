// rearrange the ele if both are equal num

#include<bits/stdc++.h>
using namespace std;
vector<int>alternate(vector<int>&a){
           int n=nums.size();
        vector<int>ans(n,0);
        int posIndex=0,negIndex=1;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                ans[negIndex]=nums[i];
                negIndex+=2;
            }else{
                ans[posIndex]=nums[i];
                posIndex+=2;
            }
        }
        return ans;

}
int main(){
    return 0;
}