#include<iostream>
#include<vector>
using namespace std;

int compress(vector<char> &chars){
    int idx = 0;
    int n = chars.size();

    int i=0;
    while(i<n){
        int count = 0;
        char ch = chars[i];

        while(i<n && chars[i] == ch ){
            count++; i++;
        }

        // now to rewrite the character vector 
        if( count == 1 ){ 
            chars[idx++] = ch;
        } else {
            chars[idx++] = ch;
            string str = to_string(count); // to_string is fun that converts int into char

            for(char dig : str){
                chars[idx++] = dig;
            }
        }
    }
    chars.resize(idx); // idx is the one who deciding size as it moving forward while rewriting.
    return idx;  // idx is 
}

int main(){
    vector<char> chars = {'a','a','b','b','c','c','c'};

    cout<<compress(chars)<<endl;  
    return 0;
}