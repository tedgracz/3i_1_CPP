#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "podaj liczbe: ";
    cin >> a;
    if(( a % 2 == 0) || ( a > 10))
    {
        cout << "liczba dobra.\n";

    }
    else
    {
        cout << "liczba nie spelnia kryteriow. \n";
    }
    return 0;
}
