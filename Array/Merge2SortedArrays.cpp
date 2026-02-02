class Solution {
public:
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
};