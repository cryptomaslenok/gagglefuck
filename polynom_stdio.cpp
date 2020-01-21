#include <stdio.h>
#include <math.h>

int main()
{
    double x, x2, x4, x6, first_step, second_step, third_step, fouth_step, fifth_step, poly;

    printf("first polynom \n");
    printf("((9.2 * x ^ 6) - (2.6 * x ^ 4) - 43.7) * x ^ 2 \n");
    printf("Input vaule of x \n");
    scanf_s("%lf", &x);
    printf("%lf\n", x);

    x2 = x * x;
    x4 = x * x * x *x;
    x6 = x * x * x * x * x * x;

   /* printf("azazazazazazazazazazazaza\n");
    printf("%lf\n", x);
    printf("x = %0.2lf\n", x);
    */


    first_step = 9.2 * x6;
    printf("result of first step - ");
    printf("first_step = %0.2lf\n",first_step);

    second_step = 2.6 * x4;
    printf("result of second step - ");
    printf("second_step = %0.2lf\n", second_step);

    third_step = first_step - second_step;
    printf("result of third step - ");
    printf("third_step = %0.2lf\n", third_step);

    fouth_step = third_step - 43.7;
    printf("result of fouth step - ");
    printf("fouth_step = %0.2lf\n", fouth_step);

    fifth_step = fouth_step * x2;
    printf("result of fifth step - ");
    printf("fifth_step = %0.2lf\n\n", fifth_step);

    poly = ((9.2 * x6) - (2.6 * x4) - 43.7) * x2;
    printf("result of c++ calculation - ");
    printf("poly = %0.2lf\n", poly);

    printf("result by steps - ");
    printf("fifth_step = %0.2lf\n\n", fifth_step);

    double y, y3, stp1, stp2, stp3, stp4, stp5, poly2;

    printf("second polynom \n");
    printf("y^3 * ((5,0001 * y^3) - (3,0001 * y) - 9,0001)  \n");
    printf("Input vaule of y \n");
    scanf_s("%lf", &y);
    printf("%lf\n", y);

    y3 = y * y * y;

    stp1 = 5.0001 * y3;
    printf("result of first step - ");
    printf("stp1 = %0.2lf\n", stp1);

    stp2 = 3.0001 * y;
    printf("result of second step - ");
    printf("stp2 = %0.2lf\n", stp2);

    stp3 = stp1 - stp2;
    printf("result of third step - ");
    printf("stp3 = %0.2lf\n", stp3);

    stp4 = stp3 - 9.0001;
    printf("result of fouth step - ");
    printf("stp4 = %0.2lf\n", stp4);

    stp5 = y3 * stp4;
    printf("result of fifth step - ");
    printf("stp5 = %0.2lf\n\n", stp5);

    poly2 = y3 * ((5.0001 * y3) - (3.0001 * y) - 9.0001);
    printf("result of c++ calculation - ");
    printf("poly2 = %0.2lf\n", poly2);

    printf("my result step by step - ");
    printf("stp5 = %0.2lf\n\n", stp5);

    printf("OK, lets dividing\n\n");

    double trudiv;
    printf("(9.2 * x ^ 6) / (2.6 * x ^ 4) - 43.7) * x ^ 2\n");
    printf("_____________________________________________________\n");
    printf("y ^ 3 * ((5, 0001 * y ^ 3) - (3, 0001 * y) - 9, 0001)\n\n\n");

    trudiv = poly / poly2;
    printf("result of dividing - ");
    printf("trudiv = %0.2lf\n\n", trudiv);

    printf("polycalulating v 2.666\n");
    printf("Eremin Egor 9005\n");
}