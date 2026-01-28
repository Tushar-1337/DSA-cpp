#include <iostream>
#include <vector>

using namespace std;

// int MaxArea(vector<int> height){
//     int n = height.size() , MaxWater = 0;

//     for(int i= 0; i<n-1; i++){
//         for (int j = i+1 ; j<n ; j++){
//             int ht = min(height[i],height[j]);
//             int width = j-i;
//             int Area = width * ht ;
//             MaxWater= max(Area,MaxWater);
//         }
//     }
//     return MaxWater;
// }


// optimised approach Two Pointer

int maxArea(vector<int>& height) {
int MaxWater=0, lp=0, rp=height.size()-1;

        while(lp<rp){
            int ht = min(height[lp],height[rp]);
            int w = rp - lp;
            int WaterArea = w * ht;

            MaxWater = max(WaterArea , MaxWater);
            if(height[lp]<height[rp]){
                lp++;
            }else{
                rp--;
            }
        }
        return MaxWater;
    }

int main (){
    vector<int> Height = {1,8,6,2,5,4,8,3,7};

    cout<<maxArea(Height)<<endl;
    return 0;
}