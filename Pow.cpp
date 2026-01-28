#include <iostream>
using namespace std;

double Pow_x(double x, int n){

    double ans=1;                    // -2^31 to 2^31-1 constraints for n  
    long long BinaryForm = n;        // 2^31 is higher than the limit of int when we convert it into positive so we use long long with diff variable for n and operated with that

    if(BinaryForm<0){
        x = 1/x;
        BinaryForm = -BinaryForm;     // when -n value be +ve it will be a way bigger value so use long long data type for n
    }
    while(BinaryForm>0){
        if(BinaryForm%2==1) {
            ans *= x;
        }
        x *= x;
        BinaryForm /= 2;
    }
    return ans;
}

int main(){
    double x= 2.00000;
    int n = -2;

    cout<< Pow_x(x,n);
    return 0;
}