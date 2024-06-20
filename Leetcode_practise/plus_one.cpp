#include <iostream>
#include <vector>
#include <string>

using namespace std;

class solution {
public:
    vector<int> plus_one(vector<int>& digits)
    {
        string num_str = "";
        for (int digit:digits)
        {
            num_str += to_string(digit); // convert list to string
        }

        long long num = stoll(num_str) + 1;
        num_str = to_string(num);
        vector<int> result;
        for (char ch:num_str){
            result.push_back(ch - '0');
        }
        return result;
    }
};

int main()
{
    int n;
    cout << "Enter the length :" << endl;
    cin >> n;
    vector<int> digits(n);
    cout << " Enter the list :" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> digits[i];
    }
    
    solution solution;
    vector<int> result;
    result = solution.plus_one(digits);
    cout << "Result array"<< endl;
    for (int i : result)
    {
        cout << i << endl;
    }

    return 0;

}