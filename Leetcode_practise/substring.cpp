#include <iostream>
#include <string>

using namespace std;

class Solution{
public:
    int substring(const string& needle, const string& haystack)
    {
        size_t index = haystack.find(needle);
        if (index != string::npos)
        {
            return static_cast<int>(index); // convert index to int
        }
        else{
            return -1;
        }
    }
};


int main(){
    string needle;
    string haystack;

    cout << "Enter the substring :";
    getline(cin , needle);
    cout << "Enter the main string :";
    getline(cin, haystack);

    Solution solution;
    int index = solution.substring(needle, haystack);

    if (index != -1)
    {
        cout << "substring found at index :" << index << endl;
    }
    else{
        cout << "substring not found." << endl;
    }

    return 0;
}