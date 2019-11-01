#include <iostream>

/*
 Program oblicza pole trójk¹ta.

*/

using namespace std;

int main()
{
    double a,h,pole;
    cout << "podaj dlugosc podstawy trojkata: ";
    cin >> a;
    cout << "podaj wysokosc trojkata: ";
    cin >> h;

    pole = 0.5 * a * h;
    cout << "pole wynosi: " << pole << endl;
    return 0;
}
