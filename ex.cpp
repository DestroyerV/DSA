#include <iostream>
#include <string>
using namespace std;

string check(string input)
{
    string result = "hello";
    int j = 0;
    for (char c : input)
    {
        if (c == result[j])
        {
            j++;
        }
        if (j == result.size())
        {
            return "YES";
        }
    }
    return "NO";
}

int main()
{
    string input;
    cout << "Give Input: ";
    cin >> input;
    cout << check(input) << endl;
    return 0;
}
