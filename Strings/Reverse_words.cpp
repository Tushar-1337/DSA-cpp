// Given an input string s, reverse the order of the words.

// A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.

// Return a string of the words in reverse order concatenated by a single space.

// Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.


#include<iostream>
#include<algorithm>
using namespace std;

string ReverseWords(string str){
    int n = str.length();
    string ans = "";

    reverse(str.begin(), str.end());

    for(int i=0; i<n ; i++){
        string word ="";

        while(i<n && str[i] != ' '){
            word += str[i];
            i++;
        }
        reverse(word.begin(), word.end());
        if ( word.length()>0 ){
            ans += " "+word;
        }  
    }
    return ans.substr(1);
}

int main(){

    string s1 = "  hello world  ";
    string s2 = "a good   example";

    cout<<ReverseWords(s1) << endl;
    cout<<ReverseWords(s2) <<endl;

    return 0;
}

/* approach : reverse whole string then add string of endividual word without spaces through a condn then reverse the word string 
and add it to ans string with starting from a space and return ans string with STL ans.substr(1) (it will start string form 1 index) */