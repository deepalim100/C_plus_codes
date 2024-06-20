#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution{
public:
    int searchInsert(vector<int>& nums, int target){
        for (int i=0;i < nums.size(); i++){
            if (target == nums[i]){
                return i;
            }
        }
        nums.push_back(target);
        sort(nums.begin(), nums.end());

        for (int i =0 ; i <nums.size(); i++){
            if (target == nums[i]){
                return i;
            }
        }
        return -1;
    }
};

int main() {
    Solution solution;
    vector<int> arr(5); // Declare a vector of size 5
    int target;

    cout << "Enter the target: ";
    cin >> target;

    cout << "Enter the array :";
    for (int i=0; i< 5; i++)
    {
        cin >> arr[i];
    }

    int index = solution.searchInsert(arr, target);
    cout << " position of target " << index << endl;

};
