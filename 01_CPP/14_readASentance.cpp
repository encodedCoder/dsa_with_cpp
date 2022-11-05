#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char ch;
    ch = cin.get(); //This reads the whitespace also.

    while (ch != '.') 
    {
        cout <<  ch;
        ch = cin.get();
    }
    return 0;
}
