#include<iostream>
using namespace std;


int findWays(int n){
    if(n==0)return 0;
    if(n==1)return 1;

    int prev2=1,prev1=2,curr;

    for(int i=3;i<=n;i++){
        curr=prev1+prev2;
        prev2=prev1;
        prev1=curr;
    }

    return prev1;

}

int main(){

    int n;
    cout<<"Enter the steps to reach at the top: ";
    cin>>n;

    cout<<"total distinct  way to go to top: "<<findWays(n);

    return 0;
}