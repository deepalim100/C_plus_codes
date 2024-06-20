#include <iostream>
#include <string>
#include <bitset>

using namespace std;

class Solution{
public:
    string add_bin(const string& num1, const string& num2)
    {
        unsigned long n1 = bitset<64>(num1).to_ulong();
        unsigned long n2 = bitset<64>(num2).to_ulong();

        unsigned long s = n1 + n2;

        string result = bitset<64>(s).to_string();
        size_t pos = result.find('1');
        if (pos != string::npos){
            result = result.substr(pos);
        }
        else{
            result = "0";
        }
        return result;
    }
};

int main()
{
    string n1 = "11";
    string n2 = "1";

    Solution solution;
    string result = solution.add_bin(n1,n2);
    cout << "binary number :" << result << endl;
    return 0;
}