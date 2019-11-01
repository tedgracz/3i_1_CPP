#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a,b;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    float pierwiastek = sqrt(a);
    cout << "pierwiastek = "<<pierwiastek<<endl;
    float potega = pow(a,b);
    cout <<" a^b = " << potega << endl;
    cout << "koniec dzialania programu" << endl;
    return 0;
}
