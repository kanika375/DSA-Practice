#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>prices = {7, 1, 5, 3, 6, 4};
    int maxProfit = 0;
    int buyPrice = prices[0];
    for (int i = 1; i < prices.size(); i++)
    {
        if(prices[i] > buyPrice){
            maxProfit = max(maxProfit, prices[i] - buyPrice);
        }
        buyPrice = min(buyPrice, prices[i]);
    }
    cout<<maxProfit;
    
    return 0;
}