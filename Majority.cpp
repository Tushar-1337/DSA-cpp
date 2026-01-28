#include <iostream>
#include<vector>
using namespace std;

//PROGRAM FOR TO FIND MAJORITY ELEMENT (MOORE'S ALGORITHM)

int majorele(vector<int>nums){
    int n = nums.size();
    int freq=0 , ans = 0;

    for(int i=0; i< n; i++){
        if (freq==0){
            ans= nums[i];
        }
        if (ans==nums[i]){
            freq++;
        } else { 
            freq--;
        }
    }
    int count = 0;
    for(int val : nums){
        if(ans==val){
            count++;
        }
    }
    if (count>n/2){
        return ans;
    } else {
        return -1;
    }
   
}

int main(){
    vector<int> nums = {1,1,2,2,3,3,3,3,4,1,4};
    cout<<majorele(nums)<<endl;
    return 0;
}

// #include<iostream>
// #include<vector>
// using namespace std;

// int MaxEle(vector<int> nums){

//     int n = nums.size();
   
//     for(int val : nums){
//       int freq = 0;
//         for(int ele : nums){
//             if (ele==val){
//                 freq++;
//             }
//         }
//         if (freq>n/2){
//             return val;
//         }
//     }
//     return -1;
// }

// int main(){
//     vector<int> nums ={1,1,2,3,3,1,1};

//     cout<<MaxEle(nums);

//     return 0;
// }


// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int MajorEle(vector<int>nums){
//     int n = nums.size();
//     int ans= nums[0];
//     int freq=1;

//     //sort
//     sort(nums.begin(), nums.end());

//     for(int i=1; i<n; i++){
       
//         if(nums[i]==nums[i-1]){
//             freq++;
//         } else {
//             freq = 1;
//             ans = nums[i];
//         }
//         if(freq>n/2){
//             return ans;
//         }
//     }
//     return -1;
// }

// int main(){

//     vector<int> nums = {1,2,3,3,2,3,4,3,3,3};

//     cout<<MajorEle(nums)<<endl;
//     return 0;
// }