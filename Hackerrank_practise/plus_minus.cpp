#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

class Solution{
public:
    void plusminus(vector<int>& arr)
    {
        int pos_num = 0, neg_num = 0, zero_num = 0, n = arr.size();

        for(int i : arr)
        {
            if (i > 0)
            {
                pos_num++;
            }
            else if (i < 0)
            {
                neg_num++;
            }
            else
            {
                zero_num++;
            }

        }
        // calculating the average
        double pos_count = static_cast<double>(pos_num) / n;
        double neg_count = static_cast<double>(neg_num) / n;
        double zero_count = static_cast<double>(zero_num) / n;

        // print the precise number on terminal
        cout << "Here are the results" << endl;
        cout << fixed << setprecision(6) << pos_count << endl;
        cout << fixed << setprecision(6) << neg_count << endl;
        cout << fixed << setprecision(6) << zero_count << endl;
    }
};


int main()
{
    int n;
    cout << " Enter the number of elements :" << endl;
    cin >> n;
    vector<int> arr(n);

    for(int i =0 ; i < n ; i++)
    {
        cin >> arr[i];
    }

    Solution solution;
    solution.plusminus(arr);

    return 0;
}