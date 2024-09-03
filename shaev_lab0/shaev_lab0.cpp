#include <iostream>
using namespace std;

int main()
{
    cout << "print your name\n";
    char* some_value = new char[25];
    cin >> some_value;

    cout << "hello world " << some_value;
    return 0;
}
