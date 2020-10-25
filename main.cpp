#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char **argv)
{

    vector<string> msg {"Hello", "C++", "World", "from", "VS Code!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    } 
    cout << endl;

    int four = 4;
    double six = 6e0;
    double res = four * six;
    cout << "Number: " << res << endl;
}