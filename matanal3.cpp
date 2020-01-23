#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
	double epsilon;
	cout << "input vaule of epsilon -" << endl;
	cin >> epsilon;
	cout << endl;

	double x;
	cout << "input vaule of x -" << endl;
	cin >> x;
	cout << endl;

	double a, sum, number;
	
	int i = 1;
	a = 4 * x;
	sum = a;

	cout << setw(20) << "number of iteration" << '|'
		<< setiosflags(ios::scientific)
		<< setiosflags(ios::showpos)
		<< setiosflags(ios::showpoint)
		<< setw(20) << setprecision(8) << "element" << '|'
		<< setiosflags(ios::scientific)
		<< setiosflags(ios::showpos)
		<< setiosflags(ios::showpoint)
		<< setw(20) << setprecision(8) << "total vaule" << '\n';


	cout << setw(20) << i << '|'
		<< setiosflags(ios::scientific)
		<< setiosflags(ios::showpos)
		<< setiosflags(ios::showpoint)
		<< setw(20) << setprecision(8) << a << '|'
		<< setiosflags(ios::scientific)
		<< setiosflags(ios::showpos)
		<< setiosflags(ios::showpoint)
		<< setw(20) << setprecision(8) << sum << '\n';

	while (a >= epsilon)
	{
		double r, t;

		r = 4.0 * x;
		t = (i + 1.0) * (i + 1.0);
		a = (r / t) * a;
		//a = a * ((4 * x) / (i + 1) * (i + 1));

		sum = sum + a;
		i = i + 1;

		number = i;
		if (i == 1000) break;
	}

	int ii = 1;
	double aa = 4 * x;
	double sumsum = aa;

	double* Amassive = new double[number];
	double *SUMmassive=new double[number]; 

	*(Amassive) = aa;
	*(SUMmassive) = sumsum;

	while (aa >= epsilon)
	{
		double rr, tt;

		rr = 4.0 * x;
		tt = (i + 1.0) * (ii + 1.0);
		aa = (rr / tt) * aa;
		//a = a * ((4 * x) / (i + 1) * (i + 1));
		sumsum = sumsum + aa;


		*(Amassive + ii) = aa;
		*(SUMmassive + ii) = sumsum;
		

		cout << setw(20) << ii << '|' << setiosflags(ios::scientific)
			<< setiosflags(ios::showpos)
			<< setiosflags(ios::showpoint)
			<< setw(20) << setprecision(8) << *(Amassive + ii) << '|'
			<< setiosflags(ios::scientific)
			<< setiosflags(ios::showpos)
			<< setiosflags(ios::showpoint)
			<< setw(20) << setprecision(8) << *(SUMmassive + ii) << '\n';

		ii = ii + 1;

		if (i == 1000) break;
	}

	cout << endl;
	cout << endl;
	cout << "hardmatanaloperator v 667.100500" << endl;
	cout << "Eremin Egor; 9005";
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
}