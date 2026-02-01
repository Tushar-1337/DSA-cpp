#include<iostream>
#include<vector>
using namespace std;

//Dutch National Flag Algorithm

void SortColors(vector<int>&nums){
    int n = nums.size();
    int mid =0, high=n-1, low=0;                // mid to high is our unsorted array

    while(mid<=high){
        if(nums[mid]==0){
            swap(nums[mid],nums[low]);
            mid++; low++;
        } else if(nums[mid]==1){
            mid++;
        } else{
            swap(nums[mid],nums[high]);
            high--;
        }
    }
}


int main(){
    return 0;
}