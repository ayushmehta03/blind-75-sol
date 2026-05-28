#include<iostream>
#include<unordered_map>
using namespace std;


// valid annagarams leetcode string problem

// tc=0(2n)~O(n)
//sc=O(n)

bool validAnagram(string &s,string &t){

    unordered_map<char,int>mpp;

    // size mismatch can never be anagarams ret false instantly
    if(s.size()!=t.size()) return false;

    for(int i=0;i<s.size();i++){

        //increase the char cnt for string s
        mpp[s[i]]++;

        // decrease the char cnt for string t
        mpp[t[i]]--;
    }

    // as a result if both of them have equal count of character then ops will make them 0

    // if not zero then they are not valid anagaram

    for(auto &it:mpp){
        if(it.second!=0) return false;
    }
    

    return true;


}


int main(){
    string s;
    cout<<"Enter the first word: ";
    cin>>s;

    string t;
    cout<<"Enter the second word: ";
    cin>>t;


    if(validAnagram(s,t)){
        cout<<"both the string are valid anagram";
    }

    else{
        cout<<"not valid";
    }

    return 0;
}