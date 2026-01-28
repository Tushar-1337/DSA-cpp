#include<iostream>
#include<vector>
using namespace std;

int SingleNonDuplicate(vector<int>&nums){
    int n= nums.size(), st= 0, end= n-1;

    if (n==1) return nums[0];
    while(st<=end){
        int mid = st + (end-st)/2;

        if(mid==0) return nums[mid];
        if(mid==n-1) return nums[mid];

        if (nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]){   
            return nums[mid];
        }   
        if(mid %2 == 0){                          // if mid is even then both sides of mid have even elements
            if(nums[mid]==nums[mid-1]){        
                end = mid - 1;
            }else {
                st = mid +1;
            }
        } else {
            if(nums[mid]==nums[mid-1]){
                st = mid +1;
            }else {
                end = mid -1;
            }
        }
    }
    return -1;
}

int main(){

    vector<int> arr = {1,1,2,3,3,4,4,5,5};

    cout<<SingleNonDuplicate(arr);
    return 0;
}