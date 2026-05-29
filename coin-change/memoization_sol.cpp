#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


// memoization technique  for solving coin chnage problem


int f(vector<int>&coins,int idx,int amount, vector<vector<int>>&dp){

    if(idx==0){
        if(amount%coins[0]==0) return amount/coins[0];
             return 1e9;

    }

    if(dp[idx][amount]!=-1) return dp[idx][amount];

    int nTake=0+f(coins,idx-1,amount,dp);

    int take=1e9;

    if(coins[idx]<=amount) take=1+f(coins,idx,amount-coins[idx],dp);


return dp[idx][amount]=min(take,nTake);
}

int main(){
    int n;
    cout<<"Enter the no of coins: ";
    cin>>n;

    int amt;
    cout<<"Enter the amount to check: ";
    cin>>amt;

    vector<int>coins(n);
    cout<<"Enter the value for each coin: ";
    for(int i=0;i<n;i++)cin>>coins[i];


    vector<vector<int>>dp(n+1,vector<int>(amt+1,-1));
    int ans=f(coins,n-1,amt,dp);

    if(ans>=1e9) return -1;

    return ans;

}