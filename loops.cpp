#include<iostream>
 using namespace std;

 int main() {
    // int n=50, sum=0;
    // cout<< "enter n";
    // cin>>n;

    // for(int i=1;i<=n;i++){
    //     sum+=i;
    // }
    // cout<<sum<<endl;

    //Prime numbers

    int n=5;
    bool isPrime=true;  // gives true false values

    for(int i=2 ; i*i<=n; i++){   //1,n => prime toh 2 se leakr n se ek piche number tak loop n-1 ; condn=>i*i<=n (root n*root n) b lesakte iski maka
        if(i%n==0){               // ex => 2modulo 5 = 4 !=0 toh 5 prime hai bc
            isPrime=false;
            break;
        }

    }
    if(isPrime=true){
        cout<<"prime"<<endl;
    } else{
        cout<<"notPrime"<<endl;

    }
    return 0;
 }
