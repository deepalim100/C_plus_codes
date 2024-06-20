#include <iostream>

using namespace std;

class solution{
public:
    int climbing_stairs(int n){
        if (n == 0 or n == 1){
            return n;
        }

        int a = 1, b = 1;
        for(int i = 2; i < (n+1); i++)
        {
            int temp = b;
            b = a + b;
            a = temp;
        }

        return b;

    }

};


int main()
{
    int result;
    int n;
    cout << "Enter the number :" << endl;
    cin >> n;

    solution climb;
    result = climb.climbing_stairs(n);
    cout << "here is the climbing result number" << result;
}