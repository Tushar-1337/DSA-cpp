#include<iostream>
#include<vector>
using namespace std;

int BinarySearch(vector<int>nums,int tar){
    int st=0, end=nums.size()-1;

    while(st <= end){
        int mid = st + (end-st)/2;
        
        if(tar>nums[mid]){
            st = mid+1;
        }
        else if(tar<nums[mid]){
            end = mid-1;
        }
        else{
            return mid;
        }
        }
        return -1;
    }
    



int main(){
    vector<int> arr= {1,2,3,4,5,6};
    int tar= 2;

    cout<<BinarySearch(arr,tar);
    
    return 0;
}