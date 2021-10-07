
#include <iomanip>
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
	double x, y, xp, xk, dx, R;

	cout << "R = "; cin >> R;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;

	x = xp;
	while (x <= xk)
	{
		if (x <= -4)
			y = -2;
		else
			if (x > -4 && x <= 0)
				y = 1. / 4 * x; 
			else
				if (x >= 0 && x <= 2)
					y = x * x;
				else
						y = 5 - (1. / 2 * x);

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;

	return 0;
}
