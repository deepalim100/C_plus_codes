#include <iostream>
#include <vector>

using namespace std;

class Solution{
public:
    int removeduplicates(vector<int>& nums)
    {
        if (nums.empty())
        {
            return 0;
        } 
        int j = 1;
        for (int i=1;i<nums.size(); ++i)
        {
            if (nums[i] != nums[i-1])
            {
                nums[j] = nums[i];
                ++j;
            }
        }
        return j;

    }
    
};


int main()
{
    Solution sol;
    vector<int> nums = {1,2,2,3,3,4};
    int length = sol.removeduplicates(nums);
    cout << " Here is the number of unique numbers in array." << endl;
    for (int i = 0; i < nums.size(); ++i)
    {
        cout << nums[i] << ' ' << endl;
    }
    cout << "unique length :" << length << endl;
    return 0;
}