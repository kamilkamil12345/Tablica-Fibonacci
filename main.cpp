#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int ile;
    cout << "Ile elementow Ciagu Fibonacciego pokazac?" << endl;    cin >> ile;
    long double fib[ile];


    for (int i=2; i<=ile; i++)
    {
        fib[0] = 1;
        fib[1] = 1;
        fib[i] = fib[i-1]+fib[i-2];
    }
    cout << setprecision(10000); //zmuszenie programu do pokazania tyu znaków po przecinku
    for (int i=0; i<ile; i++)
    {
        cout << i+1 << ". element ciagu Fibonacciego to: " << fib[i] << endl;
    }

    cout << "Zlota liczba z tego ciagu to:" << fib[ile-1]/fib[ile-2] << endl;
    return 0;
}
