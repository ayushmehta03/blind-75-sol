#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;


// max subarray product

//tc=O(N)
//sc=O(1)
int maxSubProd(vector<int>&nums){

    int n=nums.size();


    // USING prefix and suffix concept
    int pre=1;
    int suff=1;

    int ans=INT_MIN;

    for(int i=0;i<n;i++){
        if(pre==0)pre=1;
        if(suff==0)suff=1;
        
        //calculating prefix and suffix
        pre=pre*nums[i];
        suff=suff*nums[n-i-1];


        // take the maximum b/w them

        ans=max(ans,max(pre,suff));


    }

    return ans;






}


int main(){

    int n;
    cout<<"Enter the no of element: ";
    cin>>n;

    vector<int>nums(n);

    cout<<"Enter the entry for the element: ";
    for(int i=0;i<n;i++)cin>>nums[i];

    int maxPsum=maxSubProd(nums);

    cout<<"the maxxi prod from subarr will be: "<<maxPsum;

    return 0;
}