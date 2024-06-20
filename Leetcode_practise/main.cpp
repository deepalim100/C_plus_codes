#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        // Convert the integer to a string
        string s = to_string(x);
        // Check if the string is equal to its reverse
        if (s == string(s.rbegin(), s.rend())) {
            return true;
        } else {
            return false;
        }
    }
};

int main() {
    Solution solution;
    int number;
    
    // Prompt the user for input
    cout << "Enter an integer: ";
    cin >> number;
    
    // Check if the number is a palindrome
    bool result = solution.isPalindrome(number);
    
    // Print the result
    if (result) {
        cout << number << " is a palindrome." << endl;
    } else {
        cout << number << " is not a palindrome." << endl;
    }
    
    return 0;
}
