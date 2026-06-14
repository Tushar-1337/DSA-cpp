#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int MaxSubArraySum(vector<int>nums){

    int currentSum =0, maxSum = INT_MIN;

    for(int x : nums){
        currentSum += x;
        maxSum = max(maxSum,currentSum);

        if(currentSum < 0){
            currentSum = 0;
        }
    }
    return maxSum;
}

int main(){

    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};

    cout<<MaxSubArraySum(arr);

    return  0;
}