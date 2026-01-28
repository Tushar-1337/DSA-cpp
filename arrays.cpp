// #include<iostream>
// #include<climits>
// using namespace std;

// int main(){
//     int marks[]={1,101,15,20,-3,-35};
//     int size=6;
//     int smallest= INT_MAX;  // to compare we need a max no. infinity(int_max) 
//     int largest= INT_MIN;  
//     int smallestIndex=-1; // -1 safest dummy value for index
//     int largestIndex=-1; 

//     for(int i=0;i<size; i++){  // i is index(position) of array.
//         if (marks[i]<smallest){
//             smallest=marks[i];
//             smallestIndex=i;
//         }
//         if (marks[i]>largest){
//             largest=marks[i];
//             largestIndex=i;
//         }
//         // smallest = min(marks[i], smallest);
       
//         // largest = max ( marks[i], largest);
        

//     }cout<<"smallest = "<< smallest <<" at index "<<smallestIndex <<endl;
//     cout<<"largest = " <<largest << " at index "<< largestIndex<< endl;;

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int sum=0; 
// int Sum(int arr[], int size){
//     for(int i=0; i<size; i++){
//         sum=sum+arr[i];
//         } 
//     return sum;
// }
// int product= 1;
// int Product(int arr[], int size){
//         for(int i=0; i<size; i++){
//         product=product*arr[i];
//     } 
//     return product;
// }
// int main(){
//     int arr[]={1,2,3,4,5};
//     int size=5;

//     cout<<Sum(arr, size )<<endl<<Product(arr, size);

//     return 0;
// }


// swapping of maximum and minimum number
// #include<iostream>
// #include<climits>
// using namespace std;

// int Max(int arr[], int size){
//     int largest=INT_MIN;
//     int largeIdx=0;
//     for(int i=0; i<size; i++){
//         if(arr[i]>largest){
//             largest=arr[i];
//             largeIdx=i;
//         }      
//     }
//     cout<<largest<<endl;
//     return largeIdx;
// }
// int Min(int arr[], int size){
//     int smallest=INT_MAX;
//     int smallIdx=0;
//     for(int i=0; i<size; i++){
//         if(arr[i]<smallest){
//             smallest=arr[i];
//             smallIdx=i;
//         }
        
//     }
//     cout<<smallest<<endl;
//     return smallIdx;
// }
// void SwapMaxMin(int &a, int &b){  // & ==> pass by reference without & pass by value
//     int temp=a;
//     a=b;
//     b= temp;
// }

// int main(){
//     int arr[]={1,2,3,4,5};
//     int size=5;

//     int MaxIdx= Max(arr,size);
//     int MInIdx= Min(arr, size);

//     SwapMaxMin(arr[MaxIdx],arr[MInIdx]);

//     // cout<<"maxIdx= "<<Max(arr,size) << " minIdx = "<<Min(arr,size)<< endl;
//     for (int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//to print unique values

// #include<iostream>
// using namespace std;

// void Unique(int arr[],int size){
//     for (int i=0; i<size; i++){
//         int count=0;                     // used a variable =0 as on i = 0 loop of j runs checks all ele and if ele same arri==arrj count++ it resets after inner looop 

//         for(int j=0; j<size; j++){
//             if(arr[i]==arr[j]){
//                 count++;
//             }
//         }
//         if (count==1){
//             cout<<arr[i]<<" ";
//         }
//     } 
// }
// int main(){
//     int arr[]={1,2,2,3,3,5,4,5};
//     int size=8;

//     Unique(arr,size);
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){

//     int arr1[]={1,2,3,4,5};
//     int arr2[]={3,4,7,8,1};
//     int size=5;
//     for (int i=0; i<size; i++){
//         int count=0;                     // used a variable =0 as on i = 0 loop of j runs checks all ele and if ele same arri==arrj count++ it resets after inner looop 

//         for(int j=0; j<size; j++){     //inner loop running 1==3 1==4 1==7 1==8 1==1 
//             if(arr1[i]==arr2[j]){
//                 count++;
//             }
//         }
//         if (count>0){                 // count will be always >0 because of condition
//             cout<<arr1[i]<<" ";
//         }
//     } 

    
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// // void linearSearch(int vec, int size, int target){
    
// int main(){
// vector <int> vec= {2,2,3,4,5,6};
// int target=4;
//     for(int i=0; i<vec.size(); i++){
//         if(vec[i]==target){
//             cout<<i<<endl;
//         }
//     }

//     return 0;
// }


#include<iostream>
#include<vector>
using namespace std;

void myswap(int &a, int &b){
            int temp=a;
            a=b;
            b=temp;
        }

vector<int> ReverseArr(vector <int>vec){
    int start=0; 
    int end= vec.size()-1;
    
    while(start<end){
        myswap(vec[start],vec[end]);
        start++; end--;
    }
    return vec;
}

int main(){
    vector <int> vec ={1,2,3,4,5};

    vector<int> Rv= ReverseArr(vec);

    for(int elements : Rv){
        cout<<elements<<" ";
    }
// cout<< ReverseArr(vec) a fin can return vector but cannot cout vector directly

    return 0;
}