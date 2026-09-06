#include<iostream>
using namespace std;

//.....Buy & sell stock
void maxProfit(int *price, int n) {
    int bestBuy[100000];
    bestBuy[0] =  INT_MAX;
    // cout<<bestBuy[0]<<",";
    for(int i=1; i<n; i++) {
        bestBuy[i] = min(bestBuy[i-1], price[i-1]);
        // cout<<bestBuy[i] <<",";
    }

    int maxProfit = 0;
    for(int i=0; i<n; i++) {
        int currProfit = price[i] - bestBuy[i];
        maxProfit = max(maxProfit, currProfit);
    }
    //O(n + n ) = O(2n) = O(n)
    cout<< "Max Profit = "<<maxProfit<<endl;
}
int main() {
    int price[6] = {7, 1, 3, 5, 6, 2};
    int n = sizeof(price) / sizeof(int);
    maxProfit(price, n);

    return 0;
}
