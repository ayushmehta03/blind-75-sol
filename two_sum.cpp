#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


//two sum problem 

// the basic idea for this problem is to check wether the sum which is given macthes two pair 
//inside the array or vector whose adddition gives value equal to the sum 


// best approach-> use hashmap to store the index and element the lookup complexity is O(1)

// time complexity-> O(n) insert each elent to hashmap
// space complexity-> O(n) check for each value matching

// function which will return index pair of the matching element

vector<int>twoSum(vector<int>&nums,int target){

// declare the map
unordered_map<int,int>mpp;

// simple for loop for  tarversing inside the array 

for(int i=0;i<nums.size();i++){


    // get the difference of target and current element diff will be the second element
    int diff=target-nums[i];

    // if the difference is avilabe inside the map the first and second both element have been found 
    // simply return

    if(mpp.count(diff)){

        // return the current element index and the index stored for diff value 
        return{mpp[diff],i};

    }

    // value mapped with index

    mpp[nums[i]]=i;

}

// if the checks failed simply return empty result 

return{};



}

int main(){

    // take the array/vector size input
    int n;
    cout<<"Enter the size for the vector: ";
    cin>>n;

    //declare vector with size n and take the input for each element
    vector<int>nums(n);

    cout<<"Enter the elements for the vector: ";

    for(int i=0;i<n;i++){
     cin>>nums[i];
     
    }

    // input for the target
    int target;
    cout<<"Enter the target: ";
    cin>>target;


    vector<int>ans=twoSum(nums,target);

    if(ans.empty()){
        cout<<"No elements avilable ";
    }


else{
    
    cout<<"The pair index are: "<<ans[0]<<","<<ans[1];

}


return 0;


}