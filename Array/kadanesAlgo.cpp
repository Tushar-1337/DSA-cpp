#include <iostream>
#include<climits>
using namespace std;

int MaxSum= INT_MIN;
void Subarray(int arr[], int size){

    for(int st=0; st<size; st++){
        int currentSum=0;
        for(int end=st; end<size; end++){ 
            
            currentSum += arr[end];
            MaxSum= max(MaxSum,currentSum);
            // for(int i=st; i<=end; i++){
            //     cout<<arr[i];
            // }
            // cout<<" ";
        // }
        // cout<<endl;
    }
}}
int main(){
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int size=5;
Subarray(arr,size);

cout<<"maxsum = "<<MaxSum<<endl;

    return 0;
}