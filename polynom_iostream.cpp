#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    
    double x, first_step, second_step, third_step, fouth_step, fifth_step, poly;
    cout << "first polynom" << endl;
    cout << "((9.2 * x ^ 6) / (2.6 * x ^ 4) - 43.7) * x ^ 2" << endl;
    cout << "Input vaule of x ";
    cin >> x;

    first_step = 9.2 * pow(x, 6);
    cout << "result of first step (9.2 * x^6) - " << first_step << endl;

    second_step = 2.6 * pow(x, 4);
    cout << "result of second step(2.6 * x^4) - " << second_step << endl;

    third_step = first_step - second_step;
    cout << "result of third step(9.2 * x^6)/(2.6 * x^4) - " << third_step << endl;

    fouth_step = third_step - 43.7;
    cout << "result of fouth step is((9.2 * x^6)/(2.6 * x^4)-43.7) - " << fouth_step << endl;

    fifth_step = pow(x, 2) * fouth_step;
    cout << "result of fifth step is ((9.2 * x^6)/(2.6 * x^4)-43.7)*x^2 - " << fifth_step << endl;

    cout << endl;
    poly = ( (9.2 * pow(x, 6)) - (2.6 * pow(x, 4)) - (43.7) ) * pow(x, 2);

    cout << "this is quick c++ calculation of our first polynom -  " << poly << endl;
    cout << "my result by steps is - " << fifth_step << endl;
    cout << endl;
    cout << endl;

    double y, stp1, stp2, stp3, stp4, stp5, poly2;
    cout << "second polynom" << endl;
    cout << "y^3 * ((5,0001 * y^3) - (3,0001 * y) - 9,0001) " << endl;
    cout << "enter vaule of y ";
    cin >> y;

    stp1 = 5.0001 * pow(y, 3);
    cout << "result of 1 step (5.0001 * y^3) - "<< stp1 << endl;

    stp2 = 3.0001 * y;
    cout << "result of 2 step (3.0001 * y) - " << stp2 << endl;

    stp3 = stp1 - stp2;
    cout << "result of 3 step (5.0001 * y^3) - (3.0001 * y) -  " << stp3 << endl;

    stp4 = stp3 - 9.0001;
    cout << "result of 4 step (5.0001 * y^3) - (3.0001 * y) - 9.0001 - " << stp4 << endl;

    stp5 = pow(y, 3) * stp4;
    cout << "result of 5 step  y^3 * ((5.0001 * y^3) - (3.0001 * y) - 9.0001) - " << stp5 << endl;
    cout << endl;

    poly2 = pow(y, 3) * ((5.0001 * pow(y, 3) - (3.0001 * y) - 9.0001));
    cout << "result of quick c++ calculation -  " << poly2 << endl;
    cout << "my result by steps - " << stp5 << endl;
    cout << endl;
    cout << endl;

    cout << "OK, lets dividing" << endl;

    double trudiv;
    cout << "(9.2 * x ^ 6) / (2.6 * x ^ 4) - 43.7) * x ^ 2" << endl;
    cout << "_____________________________________________________" << endl;
    cout << "y ^ 3 * ((5, 0001 * y ^ 3) - (3, 0001 * y) - 9, 0001)" << endl;

    trudiv = poly / poly2;
    cout << endl;
    cout << endl;
    cout << "result of dividing - " << trudiv << endl;
    cout << endl;
    cout << endl;

    cout << "polycalulating v 1.666" << endl;
    cout << "Eremin Egor 9005";
    cout << endl;
    cout << endl;
}