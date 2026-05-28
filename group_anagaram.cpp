#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

// Group Anagrams

// TC = O(n * k log k)
// SC = O(n * k)

vector<vector<string>> groupAnagram(vector<string>& strs){

    vector<vector<string>> ans;

    unordered_map<string, vector<string>> mpp;

    for(auto &str : strs){

        string word = str;

        // sorting to create same key for anagrams
        sort(str.begin(), str.end());

        mpp[str].push_back(word);
    }

    for(auto &it : mpp){
        ans.push_back(it.second);
    }

    return ans;
}

int main(){

    int n;
    cout<<"Enter the length for the vector: ";
    cin>>n;

    vector<string> strs(n);

    cout<<"Enter the words: ";

    for(int i=0;i<n;i++){
        cin>>strs[i];
    }

    vector<vector<string>> ans = groupAnagram(strs);

    if(ans.size()==0){
        cout<<"No group anagrams formed";
    }

    else{

        for(int i=0;i<ans.size();i++){

            cout<<"Group "<<i+1<<" : ";

            for(auto it : ans[i]){
                cout<<it<<" ";
            }

            cout<<endl;
        }
    }

    return 0;
}