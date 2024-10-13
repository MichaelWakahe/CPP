#include <iostream>
#include <vector>
#include <string>

using namespace std;

/*
To compile: g++ helloworld.cpp -o helloworld
To run: ./helloworld
*/
int main()
{
    vector<string> msg{"Hello", "C++", "World"};

    for (const string &word : msg)
    {
        cout << word << " ";
    }
    cout << endl;

    return 0;
}
