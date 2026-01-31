#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isValid(vector<int>&nums, int minAllowedDist, int c){   //minAllowedDist ==> mid.
    int LastPossiblePosi=nums[0], cows=1;

    for(int i=1;i<nums.size();i++){
        if(nums[i]-LastPossiblePosi>=minAllowedDist){      //Assume a minimum distance = mid , Ask: Can I place all cows with at least this distance?
        cows++;
        LastPossiblePosi = nums[i];
        }
        }
        return cows>=c ? true : false;
}
    
int AggressiveCows(vector<int>&nums, int c, int N){
    if(N<c){
        return -1;
    }
    sort(nums.begin(),nums.end());

    int st= 1; // dist range cannot start form zero min dist between 2 cow should be 1
    int n= nums.size();
    
    int end= nums[n-1]-nums[0];

    int ans= -1;

    while(st<=end){
        int mid= st+ (end-st)/2;

        if(isValid(nums, mid, c)){
            ans=mid;
            st = mid+1;
        } else{
            end = mid-1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr= {1,2,8,4,9};
    int cows = 3, Stalls= 5;

    cout<<AggressiveCows(arr,cows,Stalls)<<endl;

    return 0;
}