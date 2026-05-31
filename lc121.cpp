#include<iostream>
using namespace std;

/* 121. best time to buy and sell stock */

void maxprofit(int *prices , int n){
int bestbuy[100000];       // size
bestbuy [0] = INT_MAX;    // day 1 

// best minimum buy for overall week/year (smallest price to buy.......)
for (int i = 1; i < n; i++)
{
    bestbuy [i] = min(bestbuy[i-1],prices[i-1]);    
    }
// maximum profit after selling 
int maxprofit=0;
for (int i = 0; i < n; i++){
    int currprofit = (prices[i] - bestbuy[i]);   // today price - minimum prize  5-1=4 , 6-1=5 ....
     maxprofit = max(maxprofit , currprofit);   
}
    cout<<"max profit = "<<maxprofit<<endl;
}

int main(){
int prices[6]={7,1,5,3,6,4};
int n = sizeof(prices)/sizeof(int);

maxprofit( prices , n);

    return 0;
}
