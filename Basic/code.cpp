#include <iostream>
using namespace std;
int main(){

    bool isSafe = true; // boolen true -> 1 & False -> 0
    cout<<" DSA \n";
    cout<< isSafe << endl;


    char grade ='A';// ASCII value 65 
    int value= grade;
    cout<< value << endl; // conversion (implicit) samll to large data type

    double price = 100.98;
    int newPrice = (int)price; // Type casting (explicit) large to small data type
    cout << newPrice << endl;

    float number;
    cout<< "Enter number = ";
    cin>> number;
    cout<< "You ENTERED number = "<< number << endl;

    /* Operators Arimetic 
    Relation(<>!=) gives true/flase 
    logical(AND&&,OR||,NOT) */

    int a = 10, b = 2;
    cout << "sum =" << (a+b) << endl;
    cout<< "difference =" << (a-b) << endl;
    cout << "multiplication =" << (a*b)<< endl; // * => asterisk
    cout << "modulo =" << (a%b) << endl; // gives remainder
    cout << "division =" << (a/b) << endl;
    cout << !(3<1) << endl; 
    cout <<  (  (3<1) || (3>1) ) << endl;  // in OR if any one statement is true then it is true , in AND && if any one statement is false then it is false
    
    return 0;
}


