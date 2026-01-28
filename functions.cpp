// #include <iostream>
// using namespace std;

//n factorial

// void factorialN( int n){
//     int fact=1;
//     for(int i=1; i<=n; i++){
//         fact *= i;
//     } cout<< fact<< endl;
// }

// int main(){
 
//     factorialN(4);


//     // sum of numbers from 1 to n

//     return 0;
// }


// #include <iostream>
// using namespace std;

// sum of numbers from 1 to n

// int sumN(int n){
//     int sum=0;

//     for(int i=1; i<=n; i++){
//         sum += i;
//     }return sum;

// }
// int main(){

//     sumN(15);

//     return 0;
// }

//sum of digits of a number

// #include<iostream>
// using namespace std;

// int sumOfDigits(int num){
//    int Digsum=0;
    
//     while(num>0){
//         int lastdig=num%10;
//         num/=10;
//         Digsum+=lastdig;
//     }
//     return Digsum;
// }

// int main(){
//     cout<<sumOfDigits(123);

//     return 0;
// }

#include<iostream>
using namespace std;

// int DeciToBinary(int decimalN){
//     int ans=0;
//     int pow=1;

//     while(decimalN>0){
//         int rem= decimalN%2;
//         decimalN/=2;
//         ans=ans+(rem*pow);
//         pow=pow*10;
//     }
//     return ans;
// }
// int main(){
//     for(int i=1; i<=10;i++){
//         cout<<DeciToBinary(i)<<endl;
//     }
// return 0;
// }
    
// #include<iostream>
// using namespace std;

// int BinaryToDeci(int BinaryN){
//     int ans=0, pow=1;

//     while(BinaryN>0){
//         int rem= BinaryN%10;
//         BinaryN/=10;
//         ans=ans+(rem*pow);
//         pow*=2;
//     }
//     return ans;
// }

// int main(){
//     cout<<BinaryToDeci(1010)<<endl;
// }
// #include<iostream>
// using namespace std;

// int reverseN(int num){
//     int rev=0;
//     while(num>0){
//         int rem = num % 10;
//         rev= rev*10+rem;
//         num= num/10;
//     }
//     return rev;
// }

// int main(){
//     cout<<reverseN(125)<<endl;
//     return 0;
// }

#include <iostream> 
using namespace std;

int main(){
    int n;
    cin>>n;

    if(n>0 && (n & (n-1))==0){         // logic is that in binary all power of two 1 2 4 6 16 have only 1 one so if we minus binary no. by one it will give all opposite no. only one 0 all other 1 for ex==> 4==> 100 so minus it by 1 ==> 011  so if we bitwise& it 000 condn satisfied
        cout<<"Power of two"<<endl;
    } else{
        cout<<"not power of two";
    }

    return 0;

}
