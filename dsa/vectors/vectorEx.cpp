#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec(3, 0);
    vec.push_back(1);

    cout << vec.back() << endl;
}