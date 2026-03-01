#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

string revstring(string s){
    reverse(s.begin(), s.end());

    return s;
}

bool isAlphaNumeric(char ch){             // isalnum STL no need to write this    
    if((ch>='0' && ch<='9') || (tolower(ch)>='a' && tolower(ch)<='z')) return true;   // tolower is used to lower the uppercase letters
    else return false;
}

bool isPalindrome(string s){
    int st=0 , end=s.length()-1;

    while(st<end){

        if(!isAlphaNumeric(s[st])) {
            st++; continue;              // continue in while loop skips the other conditions and moves to next iterator // if dont want to use it use if else and else
        }
        if(!isAlphaNumeric(s[end])){          // isalnum STL 
            end--; continue;
        }
        if (tolower(s[st]) != tolower(s[end])){
            return false;
        }
        st++; end--;
    }
    return true;
}

int main(){

    string s = "A man, a plan, a canal: Panama";

    string rev = revstring(s);

    cout<<"original: "<<s<<endl;
    cout<<"reversed: "<<rev<<endl;

    if(isPalindrome(s)){
        cout<<"it is Plalindrome"<<endl;
    } else{ 
        cout<<"it is not a palindrome"<<endl;
    }

    return 0;
}

// what is palindrome : it is palindrome if we reverse a word or sentence it will be same as oricginal eg. madam ==> madam