#include<iostream>
#include<vector>
using namespace std;

// for understating here we have two arrays need to merge them 
// nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
// idx = m+n-1 will be 3+3-1

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        m = nums1.size()-n ; n = nums2.size();
        int idx=m+n-1, i = m-1, j=n-1;             
        while(j>=0 && i>=0){
            if(nums1[i]<=nums2[j]){     
                nums1[idx]=nums2[j]; 
                j--; 
                idx--;
            } else {
                nums1[idx]=nums1[i];
                i--;
                idx--;
            }
        }
        while(j>=0){
            nums1[idx]=nums2[j];
            j--; idx--;
        }
    }

int main(){
    vector<int> nums1={1,2,3,0,0,0};
    int m= 6;
    vector<int> nums2={2,5,6};
    int n=3;

    merge(nums1,m,nums2,n);
    for(int x : nums1){
        cout<<x<< " ";
    }
    return 0;
}