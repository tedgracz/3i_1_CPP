#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    /*
          a <-2
          a > 2 dobrze
          niedobrze
    */
    if((a<-2) || (a>2))
    {
        cout << "dobrze";
    }
    else
    {

        cout << "niedobrze";
    }

    return 0;
}
