#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int upperBound;
    cout << "Enter the Upperbound of range: ";
    cin >> upperBound;

    int sum = 0, i = 0;
    do
    {
        sum += i;
        i++;
    }while (i <= upperBound);
    cout << sum;
    return 0;
}
