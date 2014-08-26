// using Do While

#include <iostream>
#include <string>

using namespace std;

int main ()
{
    string str;
    do {
        cout << "Enter text: " << endl;
        getline (cin,str);
        cout << "You entered: " << str << endl;
    } while (str != "goodbye");

    return 0;

}
