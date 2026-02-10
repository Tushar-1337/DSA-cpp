//Find First and Last Position of Element in Sorted Array

#include<iostream>
#include<vector>
using namespace std;

int findfirst(vector<int>&nums, int target){
        int st=0, end = nums.size()-1, ans=-1;
        while(st<=end){
            int mid = st + (end-st)/2; 

            if(nums[mid]==target){
                ans=mid;
                end=mid-1; // going left to check if its the first or not
            }
            else if(nums[mid]<target){
                st=mid+1;
            }else{
                end=mid-1;
            }
        }
        return ans;
    }

    int findlast(vector<int>& nums, int target){
        int st=0, end = nums.size()-1, ans=-1;
        while(st<=end){
            int mid = st + (end-st)/2; 

            if(nums[mid]==target){
                ans=mid;
                st=mid+1; // going right to check if its the last or not
            }
            else if(nums[mid]<target){
                st=mid+1;
            }else{
                end=mid-1;
            }
        }
        return ans;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.empty()) return {-1,-1};
        return {findfirst(nums,target), findlast(nums,target)};
    }

int main(){
    vector<int>nums= {5,7,7,8,8,10};
    int target=8;

    vector<int>ans= searchRange(nums,target);
    cout<<ans[0]<<" "<<ans[1];
    return 0;
}
