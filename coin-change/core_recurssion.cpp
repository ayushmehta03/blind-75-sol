#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


// core recurssion for solving coin chnage problem


int f(vector<int>&coins,int idx,int amount){

    if(idx==0){
        if(amount%coins[0]==0) return amount/coins[0];
             return 1e9;

    }

    int nTake=0+f(coins,idx-1,amount);

    int take=1e9;

    if(coins[idx]<=amount) take=1+f(coins,idx,amount-coins[idx]);


return min(take,nTake);
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

    int ans=f(coins,n-1,amt);

    if(ans>=1e9) return -1;

    return ans;

}