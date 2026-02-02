#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

void nextPermutation(vector<int>&nums){
    int n= nums.size();

    //pivot ==> a[i]<a[i+1]
    int pivot =-1;
    for(int i=n-2;i>=0;i--){            // we find from n-2 coz if i is n-1 it has no i+1
        if(nums[i]<nums[i+1]){
            pivot = i;
            break; // break it to stop search otherwise it 1,2,3,6,5,4 ==> 3
        }
    }
    //if array is sorted in descending oreder 5,4,3,2,1 pivot = -1
    if(pivot==-1){
        reverse(nums.begin(),nums.end());
        return;
    }
    //find rightmost number which is just next to pivot we know just next to pivot elements are sorted in descending order 6,5,4 
    for(int i=n-1; i>=pivot+1 ; i--){
        if(nums[pivot]<nums[i]){
            swap(nums[pivot],nums[i]);
            break;
        }
    }
    //now to revrse the array it is now 1,2,4,6,5,3 ==> we need 1,2,4,3,5,6 revrse from pivot +1 to n-1
    int i=pivot+1, j=n-1;
    while(i<=j){
        swap(nums[i],nums[j]);
        i++;j--;
    }
}
int main(){
    vector<int>nums = {1,2,3,6,5,4};
    nextPermutation(nums);

    for(int x : nums){
        cout << x << " ";
    }
    return 0;
}