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