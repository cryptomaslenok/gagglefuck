#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double poly, poly2, x, y, dvd;
    cout << "input x - " << endl;
    cin >> x;
    cout << "input y - ";
    cin >> y;

    poly = ((9.2 * pow(x, 6)) - (2.6 * pow(x, 4)) - (43.7)) * pow(x, 2);
    poly2 = pow(y, 3) * ((5.0001 * pow(y, 3) - (3.0001 * y) - 9.0001));
    dvd = poly / poly2;
    cout << dvd << endl;

    cout << "polycalculating v3.4" <<endl;
    cout << "Eremin Egor 9005" <<endl;
}
