#include<iostream>
#include<vector>
using namespace std;


// coin change 2 problem focues on the no of ways we can add upto the amount using coins vector element



int cntWays(vector<int>&coins,int idx,int amt){


    // at the last index
    if(idx==0){
    if(amt%coins[0]==0) return 1;
    return 0;

    }


    int nPick=cntWays(coins,idx-1,amt);

    int pick=0;
    if(coins[idx]<=amt) pick=cntWays(coins,idx,amt-coins[idx]);

    return pick+nPick;


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


    int ways=cntWays(coins,n-1,amt);

    cout<<"the no of possiblities: "<<ways;

    return 0;
}