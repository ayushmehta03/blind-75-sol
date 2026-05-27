#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;


// using kadane algo calcualting the max sub array problem 

//1. two rules for kadane switch with the max and replace with the min

//1st if the var 1 is greater than var 2 var 2 will be =var1
//2nd if the value of var1 is negative then replace with 0


int maxSubArrS(vector<int>&nums){

    int ans=0;
    int maxSum=INT_MIN;


    for(int i=0;i<nums.size();i++){
        ans+=nums[i];

        // rule 1
        if(ans>maxSum)maxSum=ans;

        // rule 2
        if(ans<0) ans=0;
    }

    return maxSum;



}

int main(){

    int n;
    cout<<"Enter the total no of elements: ";
    cin>>n;

    vector<int>nums(n);
    cout<<"Enter the values for the elements: ";
    for(int i=0;i<n;i++) cin>>nums[i];


    cout<<"the max sum will be: "<<maxSubArrS(nums);


}