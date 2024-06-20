// importing the libraries

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

class Solution{
public:
    void minmaxsum(vector<int> arr)
    {
        sort(arr.begin(), arr.end());
        long long min_sum = accumulate(arr.begin(), arr.end() - 1, 0); // Sum first 4 elements
        long long max_sum = accumulate(arr.begin() + 1, arr.end(), 0); 
        cout << min_sum << " " << max_sum << endl;
    }
};

int main()
{
    vector<int> arr(5);

    cout << "Enter the array :";
    for (int i=0; i < 5 ; i++){
        cin >> arr[i];
    }

    Solution solution;
    cout << "Minimum and maximum sum.";
    solution.minmaxsum(arr);

    return 0;

}