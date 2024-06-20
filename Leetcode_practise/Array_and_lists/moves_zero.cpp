#include <iostream>
#include <vector>

using namespace std;

class Solution{
public:
    void moves_zero(vector<int>& nums)
    {
        int non_zero = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            int current = nums[i];
            if (nums[i] != 0)
            {
                nums[non_zero] = current;
                non_zero += 1;
            }
        }

        while (non_zero < nums.size())
        {
            nums[non_zero] = 0;
            non_zero += 1;
        }
    }
};

int main()
{
    vector<int> arr = {0,1,2,0,12};
    Solution sol;
    sol.moves_zero(arr);
    cout << "Zero moved array";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
