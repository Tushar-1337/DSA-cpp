#include <iostream>
#include <vector>
using namespace std;

int singlenumber(vector<int> &nums){

    int ans = 0;

    for( int x : nums){
        ans ^= x ;
    }
    return ans;
} 

int main(){
    vector<int> nums = {4,1,2,1,2};

    cout<< singlenumber(nums);
}