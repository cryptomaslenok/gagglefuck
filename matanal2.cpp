#include <iostream>
#include <math.h>
#include <iomanip>
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

	double a, sum;
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
	
	//cout << i << " a[" << i << "]= " << a << " sum = " << sum << endl;
	
	double Amassive[1000], SUMmassive[1000]; // статически создаваемый массив

	Amassive[0] = a;
	SUMmassive[0] = a;

	while (a >= epsilon)
	{
		double r, t;
		r = 4.0 * x;
		t = (i + 1.0) * (i + 1.0);
		a = (r / t) * a;
		//a = a * ((4 * x) / (i + 1) * (i + 1));

		sum = sum + a;
		i = i + 1;
		Amassive[i - 1] = a;
		SUMmassive[i - 1] = sum;
		if (i == 1000) break;

		//cout << i << " a[" << i << "]= " << Amassive[i-1] << " sum = " << SUMmassive[i-1] << endl;
		
		cout << setw(20) << i << '|' << setiosflags(ios::scientific)
			<< setiosflags(ios::showpos)
			<< setiosflags(ios::showpoint)
			<< setw(20) << setprecision(8) << Amassive[i - 1] << '|'
			<< setiosflags(ios::scientific)
			<< setiosflags(ios::showpos)
			<< setiosflags(ios::showpoint)
			<< setw(20) << setprecision(8) << SUMmassive[i - 1] << '\n';

	}
	cout << endl;
	cout << endl;
	cout << "hardmatanaloperator v 666.1" << endl;
	cout << "Eremin Egor; 9005";
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;

	
}