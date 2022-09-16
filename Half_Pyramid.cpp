#include <iostream>
#include <string>
using namespace std;

int main()
{
    // A nested loop to print a half pyramid in ascending order
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "+";
        }
        cout << endl;
    }

    cout << endl;
    // A nested loop to print a half pyramid in descending order
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 10; j >= i; j--)
        {
            cout << "+";
        }
        cout << endl;
    }
}