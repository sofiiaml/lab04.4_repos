#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double R1, R2, x, xp, xk, dx, y;
	cout << "R1 ="; cin >> R1;
	cout << "R2 ="; cin >> R2;
	cout << "xp ="; cin >> xp;
	cout << "xk ="; cin >> xk;
	cout << "dx ="; cin >> dx;
	cout << fixed;
	cout << "------------" << endl;
	cout << "|" << setw(5) << "y" << "     |" << endl;
	cout << "------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x <= -R1)
			y = -R1 * (x + 2) / (-R1 + 2);
		if (-R1 < x && x <= 0)
			y = -R1 + sqrt(R1 * R1 - x * x);
		if (0 < x && x <= R2)
			y = R2 - sqrt(R2 * R2 - x * x);
		if (R2 < x && x <= 4)
			y = -R1;
		else 
			y = R1 * (x - 6) / 2;
		cout << "|" << setw(5) << setprecision(2) << y
			<< "     |" << endl;
		x += dx;
	}
	cout << "------------" << endl;
		
return 0;
}

