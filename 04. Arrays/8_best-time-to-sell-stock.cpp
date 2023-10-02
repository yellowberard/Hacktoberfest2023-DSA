#include <iostream>
#include <vector>
#include <climits>
using namespace std;
class Solution
{
public:
    int maxProfit(std::vector<int> &prices)
    {
        int lsf = INT_MAX;
        int op = 0;
        int pist = 0;
        for (int i = 0; i < prices.size(); i++)
        {
            if (prices[i] < lsf)
            {
                lsf = prices[i];
            }
            pist = prices[i] - lsf;
            if (op < pist)
            {
                op = pist;
            }
        }
        return op;
    }
};

int main()
{
    Solution solution;
    vector<int> prices{7, 1, 5, 3, 6, 4};

    int maxProfit = solution.maxProfit(prices);
    cout << "Max Profit: " << maxProfit << std::endl;
    return 0;
}
