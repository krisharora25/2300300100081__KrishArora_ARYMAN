#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;

        for (int price : prices) {
            minPrice = min(minPrice, price);          
            maxProfit = max(maxProfit, price - minPrice);
        }

        return maxProfit;
    }
};

int main() {
    Solution obj;
    int n;

    cout << "Enter number of days: ";
    cin >> n;

    vector<int> prices(n);
    cout << "Enter prices: ";
    for(int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    int result = obj.maxProfit(prices);
    cout << "Maximum Profit: " << result << endl;

    return 0;
}