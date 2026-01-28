#include<iostream>
#include<vector>
using namespace std;

// vector<int> porductOfArray(vector<int>nums){
//     vector<int>ans(nums.size(), 1);            // create array ans with size of num vector of all 1s

//     for(int i=0; i<nums.size(); i++){
//         for(int j=0; j<nums.size(); j++)
//         if(i != j){                            
//         ans[i] *=  nums[j];
//     }
//     }
//     return ans;
// }

// OPTIMIZED CODE 0(n) SPACE COMP O(1)
vector<int> productOfArray(vector<int> nums){
int n = nums.size();
    vector<int> ans (n,1);
    
    //prefix
    for(int i=1; i<n; i++){
        ans[i]= ans[i-1]* nums[i-1];
    }
    //suffix
    int suffix = 1;
    for (int i=n-2; i>=0; i--){
        suffix *= nums[i+1];
        ans[i] *= suffix;
    }
    return ans;
}
int main(){
    vector<int> nums = {1,2,3,4};
    vector <int> ans = productOfArray(nums);

    for(int x : ans){
        cout<<x<<" ";
    }
    return 0;
}