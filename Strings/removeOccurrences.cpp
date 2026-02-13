#include<iostream>
// #include<cstring>
using namespace std;

string removeOccurrences(string s, string part){
    while(s.length()>0 && s.find(part)< s.length()){  
        s.erase(s.find(part), part.length());                  // s.find is STL that give the starting itarator of the to find part 
    }
    return s;
}

int main(){
    string  s = "daabcbaabcbc";
    string part = "abc";

    string removed = removeOccurrences(s,part);

    cout<< removed ;

    return 0;
}