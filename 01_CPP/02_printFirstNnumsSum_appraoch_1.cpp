#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int upperBound;
    cout << "Enter the Upperbound of range: ";
    cin >> upperBound;

    cout << "Sum of first " << upperBound << " numbers is: " << upperBound*(upperBound+1)/2;
    return 0;
}
