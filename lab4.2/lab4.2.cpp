#include <iostream> 
#include <iomanip> 
#include <cmath> 

using namespace std;

int main()
{
    double x, xp, xk, dx, A, y;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << "     |"
        << setw(7) << "y" << "       |" << endl;
    cout << "---------------------------" << endl;

    x = xp;
    while (x <= xk) {
        A = 13.5 - 2 * x;
        if (x <= -1)
            y = A - exp(0.4 + x);
        else
            if (x < 1)
                y = A - 1 - (sin(x) * sin(x));
            else
                y = A - cos(x) / (1 + sin(x) * sin(x));
        cout << "|" << setw(7) << setprecision(2) << x
            << "   |" << setw(10) << setprecision(3) << y
            << "    |" << endl;
        x += dx;
    }
    cout << "---------------------------" << endl;
    cin.get();
    return 0;
}