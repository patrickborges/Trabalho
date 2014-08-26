// using Swith

#include <iostream>
#include <string>

using namespace std;

int main ()
{
    int x;

    cout << "Digite um valor de 1 a 3 \n";
    cin >> x;

    switch (x){
        case 1:
            cout << "O valor e: " << x <<endl;
            break;
        case 2:
            cout << "O valor e: " << x <<endl;
            break;
        case 3:
            cout << "O valor e: " << x <<endl;
            break;
        default:
            cout << "Valor digitado incorreto" <<endl;
    }

    return 0;
}
