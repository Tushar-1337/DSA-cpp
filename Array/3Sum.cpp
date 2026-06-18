#include<iostream>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;

vector<vector<int>> threeSum (vector<int> nums){
    int n= nums.size();

    set<vector<int>> s;
    
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){                                    // TC = O (n^3 log unique triplets)  // insert TC -> log n
                int sum = nums[i]+nums[j]+nums[k];

                if(sum==0){
                    vector<int> temp = {nums[i],nums[j],nums[k]};
                    sort(temp.begin(),temp.end());                       //cannot sort a set (already sorted) so sorting before inserting
                    s.insert(temp);
                }
            }
        }
    }
    vector<vector<int>> ans(s.begin(), s.end());                        // space complexity = O(unique triplets)
    return ans;
}

int main(){
    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    vector<vector<int>> ans = threeSum(nums);

    for(auto row : ans){
        for( auto x : row){
            cout<< x << " ";
        }
        cout<<endl;
    }

    return 0;
}