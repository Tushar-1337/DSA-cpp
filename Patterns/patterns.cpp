#include<iostream>
using namespace std;

int main(){ //pattern ==> nested loop(LOOP ke andar LOOP)

// int n=5;
// char ch= '*';
//     for(int i=0; i<n; i++){ //outer loop
        
//         for(int j=0; j<n; j++){ // inner loop
//             cout<<'*'<< " ";

//         }cout<<" "<<endl;
//     }

    // pattern for aphabets ABCD
    // int n=5;
    // for (int i=0; i<=n-1; i++){
    //     char ch= 'A';    // for increment of char A ; if we write in outer loop it will reset and start from same char in next line 
    //     for(int j=0; j<=n-1; j++){
    //         cout<<ch<<" "; // for space between two characters
    //         ch=ch+1;
    //     }
    //     cout<<endl; // i is defing the no. of rows so to print next char in next rows 
    // }

    //  PATTERN FOR INCREASING NUMBER PATERN 123 456 ...
//    int n=5;
//     int num=1; // written before loops so it wont reset and it wont start form same starting char or number
//     for (int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cout<<num<<" "; 
//             num++;
//         }
//         cout<<" "<<endl;

//     }
    

    // PATTERN FOR TRIANGLE
//     int n=5;
// char ch='*';
//     for(int i=0; i<n; i++ ){
//         for(int j=0; j<i+1; j++){
//             cout<<ch<<" ";
//         }cout<<endl;
//     } 

// PATTERN 

// int n=5;

// for (int i=0; i<n; i++){
//     int num= 1;                    
//     for (int j=0; j<=i; j++){       // can also write  a same code without num for that simply start j=1 j<=i+1 j++ and cout j.
//         cout<<num<<" ";
//         num=num+1;
//     }
//     cout<<endl;
// } 

/* PATTERN FOR REVERSE LOOP*/
// int n=5;
// for (int i=0; i<n; i++ ){  // outer loop is only to determine the number of rows i=0(row 1) it will continue after inner loop then end of line upto i<5 ==> (row4)
//     for(int j=i+1; j>0; j--){  // i+1 is used here so j can change the with value of i by +1 until J>0
//         cout<< j << " ";
//     }
//     cout<<endl;
// }

// FLOYD'S TRIANGLE
// int n=5;
// int num=1;
// for(int i=0; i<n; i++){         // i tells the number of rows .. created once so value of will not remain zero 
//     for(int j=0; j<i+1; j++){  // j tells how many nos are printed in one row .. re created every time inner loop starts so value of j will start form zero
//         cout<< num <<" ";
//         num=num+1;
//     }cout<< endl;
// }

// int n=4;
// int num=1;
// for (int i=0; i<n; i++){
//     for(int j=0; j<i+1; j++){
//         cout<<num<<" ";  
//         num++;
//     } cout<<endl;
    
// }

int n=4;

for(int i=0; i<n; i++){
 // pattern 
 for(int j=0;j<i+1; j++){
 cout<<"*";}

 // spaces
 for(int j=0; j<n-i-1; j++){
  cout<<" ";
 }
 // spaces
 for(int j=0;j<n-i-1; j++){
 cout<<" ";}
 // pattern
 for(int j=0; j<i+1; j++){
    cout<<"*";
 }cout<<endl;
}
return 0;
}