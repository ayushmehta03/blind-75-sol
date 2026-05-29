#include<iostream>
#include<vector>
using namespace std;


// coin change 2 problem focues on the no of ways we can add upto the amount using coins vector element



int cntWays(vector<int>&coins,int idx,int amt, vector<vector<int>>&dp){


    // at the last index
    if(idx==0){
    if(amt%coins[0]==0) return 1;
    return 0;

    }

    if(dp[idx][amt]!=-1) return dp[idx][amt];


    int nPick=cntWays(coins,idx-1,amt,dp);

    int pick=0;
    if(coins[idx]<=amt) pick=cntWays(coins,idx,amt-coins[idx],dp);

    return dp[idx][amt]= pick+nPick;


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
    int ways=cntWays(coins,n-1,amt,dp);

    cout<<"the no of possiblities: "<<ways;

    return 0;
}