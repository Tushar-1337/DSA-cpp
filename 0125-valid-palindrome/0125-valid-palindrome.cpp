class Solution {
public:
    bool isPalindrome(string s) {
        int i=0, j=s.length()-1;
        while(i<=j){
            if( !isalnum(s[i]) ){
                i++;
                continue;
            }
            if( !isalnum(s[j]) ){
                j--;
                continue;
            }
            if( tolower(s[i]) != tolower(s[j]) ){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};

//where i got stuck : i revise the concept of continue (skip current iteration and start the next one & It does NOT reach this: if (!isalnum(s[j])) )