#include <iostream>
#include <vector>
using namespace std;

int calculateArraySum(vector<int> m, int k)
{
    // remove the i element of the list
    m.erase(m.begin() + k);

    // create counter
    int count = 1;

    // multiply
    for (const auto &value : m)
    {
        count *= value;
    }
    return count;
}

int main()
{
    cout << "Hello Problem 2" << endl;

    // arrays
    int input[3] = {2, 4, 8};
    int output[3] = {0, 0, 0};

    // convert to a vector
    int n = sizeof(input) / sizeof(input[0]);
    vector<int> vect(input, input + n);

    // calculate
    for (int i = 0; i < n; i++)
    {
        output[i] = calculateArraySum(vect, i);
    };

    // Print
    for (int i = 0; i < 3; ++i)
    {
        cout << output[i] << "," << endl;
    };

    return 0;
}
