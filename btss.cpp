//best time to sell a stock 1

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// the basic intution for the problem is to get the maximum profit after buying and selling stock

// time complexity= O(N) traversing the array

// space complecity= O(1) variable based checking

int maximum_profit(vector<int>&prices){


    //declare max profit as minimum and lowest price as starting element
    int maximumP=INT_MIN;
    int low=prices[0];


    for(int i=0;i<prices.size();i++){


        // take the minimu for the buying price
        int low=min(low,prices[i]);

        // calcuate the max profit with currentday price- minimum bought price
        maximumP=max(maximumP,prices[i]-low);
    }

    // for negative profit convert it to 0 and return
    if(maximumP<0) maximumP=0;

    return maximumP;


}


int main(){

    // take the input for the prices length array/vector
    int n;
    cout<<"Enter the total enteries for the prices: ";
    cin>>n;

    vector<int>prices(n);

    // take the input for entry of  the prices array/vector
    cout<<"Enter the prices data: ";
    for(int i=0;i<n;i++){
     cin>>prices[i];
    }

    // store the maximu profit value return by the function with these conditions

    int maxi=maximum_profit(prices);

    if(maxi==0){
        cout<<"No chances for  profit with this data";
    }

    else{
        cout<<"the maximum profit will be "<<maxi;
    }



}