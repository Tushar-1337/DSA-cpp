// You have a set of integers s, which originally contains all the numbers from 1 to n. 
//Unfortunately, due to some error, one of the numbers in s got duplicated to another number in the set, which results in repetition of one number and loss of another number.

// You are given an integer array nums representing the data status of this set after the error.

// Find the number that occurs twice and the number that is missing and return them in the form of an array.

#include<iostream>
#include<vector>
using namespace std;

vector<int> SetMissmatch(vector<int>&nums){
    int duplicate=-1, missing =-1;          //the logic here is that nums [i] are in pattern with index (array ==> 1,2,3,4 ) (idx==> 0,1,2,3) idx are nums[i]-1;

    for(int i=0; i<nums.size();i++){
        int idx= abs(nums[i])-1;     // abs is absolute value (positive value);

        if(nums[idx]>0){
            nums[idx]=-nums[idx];     // filping the sign of array {-1,-2,2,-3};     *IMP if number is negative it is visited 
        }
        else{
            duplicate = abs(nums[i]);  
        }
    }
    //missing
    int i=0;
    while(i<nums.size()){
        if(nums[i]>0){
            missing = i+1;     // *IMP relation nums are in relation with i as que said nums are [1 n] so they are nums[i] - 1 on i ==> nums[0]-1 ==> 1-1=0  got idx 0  so i+1 is 1
            break;
        }
        i++;
    }
    return {duplicate, missing};
}

int main(){
    return 0;
}