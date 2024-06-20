#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class solution {
public:
    vector<int> twosum(vector<int>& nums, int target)
    {
        unordered_map<int, int> num_map;
        for(int i; i < nums.size(); ++i)
        {
            int complement = target - nums[i];
            if (num_map.find(complement) != num_map.end())
            {
                return {num_map[complement], i};
            }
            num_map[nums[i]] = i;
        }
        return {};
    }

};

int main()
{
    solution sol;
    vector<int> nums= {1,2,3,4};
    int target = 6;
    vector<int> result = sol.twosum(nums, target);
    if (!result.empty()) {
        cout << "The indices of the two numbers that add up to " << target << " are: " << result[0] << " and " << result[1] << endl;
    } else {
        cout << "No solution found" << endl;
    }
    return 0;
}
