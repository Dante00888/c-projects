#include <iostream>
#include <string>

using namespace std;
int main()
{
    string message= "Coding is fun!";
    for(char character : message)
    {
        cout<<character<<"";
    }
    return 0;
}
