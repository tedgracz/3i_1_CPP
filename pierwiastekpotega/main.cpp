#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a;
    cout << "podaj liczbe:";
    cin >> a;
    int kwadrat = a * a;

    double pierwiastek = sqrt(a);

    cout << "a^2 = " << kwadrat << endl;
    cout << "pierwiastek z a: " << pierwiastek << endl;
    return 0;
}
