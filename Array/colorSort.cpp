#include<iostream>
#include<vector>
using namespace std;

//Dutch National Flag Algorithm

void SortColors(vector<int>&nums){
    int n = nums.size();
    int mid =0, high=n-1, low=0;                // mid to high is our unsorted array

    while(mid<=high){
        if(nums[mid]==0){       // for zeros range
            swap(nums[mid],nums[low]);      // if mid is zero we swap mid and low coz lows range is for 1s low to mid -1
            mid++; low++;
        } else if(nums[mid]==1){          //for 1s range 
            mid++;
        } else{        // nums[mid]==2
            swap(nums[mid],nums[high]);        //mid can be a random value here 
            high--;
        }
    }
}


int main(){

    vector<int>nums= {2,0,2,1,1,0};

    SortColors(nums);

    for(int x : nums){
        cout<<x<<" ";
    }
    return 0;
}