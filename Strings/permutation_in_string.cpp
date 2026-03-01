//Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.
//In other words, return true if one of s1's permutations is the substring of s2.

#include<iostream>
using namespace std;

bool isFreqSame(int freq1[],int freq2[]){
    for(int i=0; i<26; i++){
        if(freq1[i] != freq2[i]) return false;
    }
    return true;
}

bool checkInClusion(string s1,string s2){
    int freq[26]= {0};

    for(int i=0; i<s1.length(); i++){
        freq[s1[i]-'a']++;    // freq[a-a]=freq[0] so at index zero freq will be + by 1
    }

    int windsize =s1.length();
    for(int i=0; i<s2.length(); i++){
        int windfreq[26]={0}, idx =i, windIDX=0;

        while(windIDX<windsize && idx < s2.length()){
            windfreq[s2[idx]-'a']++;
            windIDX++; idx++;
        }
        if(isFreqSame(freq,windfreq)){
        return true;
        }
    }
    return false;
}

int main(){

    return 0;
}