#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int>&nums,int m, int maxallowedbooks){  // maxallowedbooks ==> mid
    int students =1, books=0;

    for(int i=0; i<nums.size(); i++){
        if(nums[i]>maxallowedbooks){
            return false;
        }
        if(books+nums[i]<=maxallowedbooks){
            books += nums[i];
        }
        else{
            students++;
            books = nums[i];
        }
    }
    return students> m ? false : true;
}

int BookAllocation(vector<int>&nums, int m){
    int n= nums.size();
    if(m>n){
        return -1;
    }
    int sum=0;
    for(int i =0; i<n; i++){
        sum += nums[i];
    }
    int st=0, end=sum, ans =-1;
    while(st<=end){
        int mid = st + (end-st)/2;
        if(isValid(nums, m, mid)){
            ans=mid;
            end = mid -1;
        } else{
            st = mid +1;
        }
    }
    return ans;
}

int main(){
    vector<int>arr= {7,2,5,10,8};
    int k = 2;
    int n = arr.size();

    cout<<BookAllocation(arr,k)<<endl;

    return 0;
}