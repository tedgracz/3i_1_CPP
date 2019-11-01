#include <iostream>

using namespace std;

int main()
{
    cout << "Podaj imie: ";
    string imie;

    cin >> imie;

    cout << "Witaj " << imie << endl;
    int wiek;
    cout << "Podaj swoj wiek: ";
    cin >> wiek;
    cout << "masz " << wiek << " lat." << endl;

    int rokUrodzenia = 2019 - wiek;
    cout << "Urodziles sie w " << rokUrodzenia << endl;
    return 0;
}
