#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    double poly, poly2, x, y, dvd;
    cout << "first polynom" << endl;
    cout << "x^2 * ((9.2 * x^6) - (2.6 * x^4) - 43.7))" << endl;
    cout << "input x for first polynom - " << endl;
    cin >> x;
    cout << endl;
    cout << endl;
    cout << "second polynom" << endl;
    cout << "y^3 * ((5.0001 * y^3) - (3.0001 * y) - 9.0001))" << endl;
    cout << "input y for second polynom - ";
    cin >> y;

    poly = ((9.2 * pow(x, 6)) - (2.6 * pow(x, 4)) - (43.7)) * pow(x, 2);
    poly2 = pow(y, 3) * ((5.0001 * pow(y, 3) - (3.0001 * y) - 9.0001));

    cout << endl;
    cout << endl;

    cout << "x^2 * ((9.2 * x^6) - (2.6 * x^4) - 43.7))" << endl;
    cout << "_________________________________________________" << endl;
    cout << "y^3 * ((5.0001 * y^3) - (3.0001 * y) - 9.0001))" << endl;
    dvd = poly / poly2;
    cout << endl;
    cout << "result of dividing - " << dvd << endl;
    cout << endl;
    cout << "rounded result - " << setprecision(3) << dvd << endl;
    cout << endl;
    cout << endl;
    cout << "polycalculating v3.4" <<endl;
    cout << "Eremin Egor 9005" <<endl;
}
