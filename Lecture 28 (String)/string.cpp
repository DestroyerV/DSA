#include <iostream>
using namespace std;

int main()
{
    char str[] = {'a', 'b', 'c', '\0'};
    char str2[] = "hello";
    char str3[100];
    // cin.getline(str3, 100);
    string name = "vaibhav";
    string college;
    getline(cin, college);
    cout << college << endl;
}