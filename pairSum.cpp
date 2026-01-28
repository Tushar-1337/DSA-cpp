// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> PairSum(vector<int> nums, int target){
//     vector<int> ans;
//     for(int st=0; st<nums.size(); st++){
//         for(int end=st+1;end<nums.size(); end++){
//             if(nums[st]+nums[end]==target){
//                 ans.push_back(st);
//                 ans.push_back(end);
//                 return ans;
//             }
//         }
//     }
//     return ans;
// }

// int main(){
//     vector<int>arr={2,3,4,44,5,17};
//     int target=48;

//     vector<int> ans = PairSum(arr, target);
//     cout<<ans[0]<<" "<<ans[1]<<endl;
    
//     for(int val: PairSum(arr,target)){
//         cout<<arr[val]<<" ";
//     }
    
 
//     return 0;

// }


#include<iostream>
#include<vector>
using namespace std;

vector<int> PairSum(vector<int>nums, int target){
    int n=nums.size();
    int i=0,j=n-1;
    vector<int>ans;

    while(i<j){
        int PS = nums[i]+nums[j];
        if(PS>target){
            j--;
        }
        else if(PS<target){
            i++;
            ans = {nums[i],nums[j]};
        } else{
            return ans;
        }
    }
}

int main(){

    vector<int> arr={1,2,3,4,5};
    int target=9;

    vector<int>ans=PairSum(arr,target);
    for(int x : ans){
        cout<<x<<" ";
    }
    return 0;

}
