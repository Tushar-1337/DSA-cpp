#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2){
    vector<int>ans = nums1;

    ans.insert(ans.end(),nums2.begin(),nums2.end());
    sort(ans.begin(),ans.end());
    int n = ans.size();

    double median =0;
    //for odd
    if(n%2==1){
        median = ans[n/2];
        return median;
    }
    else{ // for even 1,2,3,4    for even median is avg of two middle nos.
        median = (ans[n/2-1]+ans[n/2])/2.0;   // (n/2)-1 ==> thi opperation will done by precedence // dividin by 2.0 so it wont do integer div ==> int answer
        return median;
    }
    
}

// Time Complexity ==> insert O(m+n) m is size of nums1 n is size of nums2 sorting O(log m+n) total [(m+n) log m+n ]

//Optimal Solution==> O(log m+n) by Binary Search
