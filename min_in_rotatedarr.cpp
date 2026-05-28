#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>
using namespace std;


// tc=O(logn )
//sc=O(1)

int minElement(vector<int>&nums){

    // for the sorted roted array either left or right part is always sorted

    // for sorted arr-> binary search most optimal

    int low=0;
    int high=nums.size()-1;
    int ans=INT_MAX;


    while(low<=high){


        int mid=(low+high)/2;

        //case 1 whole arr is sorted the most left and the right parts are in asec order

        if(nums[low]<=nums[high]){
        ans=min(ans,nums[low]);
        break;
            
        }


        // case 2 only left half is sorted set the min ans move to the other half

        if(nums[low]<=nums[mid]){
         ans=min(ans,nums[low]);
         low=mid+1;
        }

        //case 3
        else{
            high=mid-1;
            ans=min(ans,nums[mid]);
        }





    }



    return ans;

}

int main(){

    int n;
    cout<<"Enter the no of element for the vector: ";
    cin>>n;

    vector<int>nums(n);

    cout<<"Enter the els for the vector/arr: ";
    for(int i=0;i<n;i++)cin>>nums[i];

    cout<<"the min element in the arr/vector is: "<<minElement(nums);

    return 0;
}