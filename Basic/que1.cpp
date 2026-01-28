#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int n, fact= 1;
    cout<<"enter n : ";
    cin>>n;

    // for(int i=1; i<=n; i++){
    //     if(i%3==0){
    //         sum=sum+i;
            
    //     }
    // }
    // cout<<sum<<endl;

    for(int i=1; i<=n; i++){
        fact= fact*i;
    }
    cout<<fact<<endl;

return 0;

}