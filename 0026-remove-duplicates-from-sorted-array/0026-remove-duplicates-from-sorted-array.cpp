class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int i=0 , j =1;

        while(j<nums.size()){
            if(nums[i] == nums[j]){
                j++;
            }
            else{
                i++;
                nums[i]=nums[j];
                j++;
            }
        }
        return i+1;
    }
};

//where i got stuck: in example given numbers and indices i was questioning my self how we getting last element as answer and didnot j++ in else 