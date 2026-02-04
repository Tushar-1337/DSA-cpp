// You have a set of integers s, which originally contains all the numbers from 1 to n. 
//Unfortunately, due to some error, one of the numbers in s got duplicated to another number in the set, which results in repetition of one number and loss of another number.

// You are given an integer array nums representing the data status of this set after the error.

// Find the number that occurs twice and the number that is missing and return them in the form of an array.

#include<iostream>
#include<vector>
using namespace std;

vector<int> SetMissmatch(vector<int>&nums){
    int duplicate=-1, missing =-1;

    for(int i=0; i<nums.size();i++){
        int idx= abs(nums[i])-1;

        if(nums[idx]>0){
            nums[idx]=-nums[idx];
        }
        else{
            duplicate = abs(nums[i]);
        }
    }
    //missing
    int i=0;
    while(i<nums.size()){
        if(nums[i]>0){
            missing = i+1;
            break;
        }
        i++;
    }
    return {duplicate, missing};
}

int main(){
    return 0;
}