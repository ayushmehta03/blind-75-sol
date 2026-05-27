#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;


// simple problem to check duplicate isnide an array


// func to check duplicate with the help of set ds

bool ContainsDup(vector<int>&arr){


    // declaring unordered set

        unordered_set<int> seen;

        // iterating for each value if it exists in the set return t or else insert that into the set

        for(int num:arr){
      if(seen.count(num)>0)
        return true;
        seen.insert(num);
    
    }

    // no matches above return false at the last
    return false;
        

}


int main(){


    // declaring size and taking i/p for the values
    int n; 
    cout<<"Enter the total elements: ";
    cin>>n;


    vector<int>nums(n);

    cout<<"Enter the values for elements: ";
    for(int i=0;i<n;i++)cin>>nums[i];



    if (ContainsDup(nums)){
    cout<<"the v/a has dupliacte element inside";
    }

    else{
        cout<<"No dup element found ";

    }

    return 0;

}