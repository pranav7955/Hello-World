#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "\nHello World.." << endl;
    cout << "What is your name ?\n" ;
    getline (cin, str);
    cout << "Hello, " << str ;
    
    return 0;
}
