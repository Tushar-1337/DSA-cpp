class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxA = 0;
        int i=0, j=height.size()-1; 

        while(i<j){
            int width = j-i;
            int CurrentmaxA = width * min(height[i],height[j]);
            maxA = max(maxA , CurrentmaxA);

            if (height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }    
        return maxA;  
    }
};

// where i got stuck : small mistake didnt write widht in loop i wirte it outside