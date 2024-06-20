#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class solution{
public:
    int maxprofit(vector<int>& prices)
    {
        if (prices.size() <= 1)
        {
            return 0;
        }
        int min_num = prices[0];
        int max_num = 0;

        for (int i = 0; i < prices.size(); i++)
        {
            min_num = min(min_num, prices[i]);
            max_num = max(max_num, prices[i]-min_num);
        }
        return max_num;
    }
};

int main()
{
    vector<int> arr = {1,2,1,2,0};
    solution sol;
    int res = sol.maxprofit(arr);
    cout << "Maximum profit :" << res << endl; 
}

