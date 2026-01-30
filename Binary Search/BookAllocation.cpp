#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

bool isValid(vector<int>&nums,int m, int maxallowedbooks){  // maxallowedbooks ==> mid
    int students =1, books=0;

    for(int i=0; i<nums.size(); i++){
        if(nums[i]>maxallowedbooks){          //edge case 
            return false;
        }
        if(books+nums[i]<=maxallowedbooks){    // checking if books can fit in to same student or Greedily assign as many books as possible to the current student without exceeding the assumed limit.
            books += nums[i];
        }
        else{
            students++;
            books = nums[i];
        }
    }
    return students> m ? false : true;    // m is allowedstudents 
}

int BookAllocation(vector<int>&nums, int m){
    int n= nums.size();
    if(m>n){              //edge case
        return -1;
    }
    int sum=0;                                          
    for(int i =0; i<n; i++){
        sum += nums[i];
    }                                                   // can also use st as max(nums) for range coz that will be the minimum starting range if a student got only one book
    int st=*max(nums.begin(),nums.end()), end=sum, ans;         // st from i of max ele to end = sum eg 10 (1-10)range of max subarray 
    while(st<=end){
        int mid = st + (end-st)/2;
        if(isValid(nums, m, mid)){
            ans=mid;
            end = mid -1;                                  //{1,2,3,4,5} mid is 3 we need smallest largest books in this so if mid is true(valid) then we need smaller than mid thats why going left mid -1
        } else{
            st = mid +1;
        }
    }
    return ans;
}

int main(){
    vector<int>arr= {40,30,10,20};
    int k = 2;
    int n = arr.size();

    cout<<BookAllocation(arr,k)<<endl;

    return 0;
}