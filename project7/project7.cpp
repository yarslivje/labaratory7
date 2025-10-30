#include <iostream>
#include <iomanip>
#include "cmath"

using namespace std;
int main()
{
	double y, x, h, minX, maxX;
	cout << "Enter [minX, maxX], h ";
	cin >> minX >> maxX >> h;
	cout << "x -> [" << minX << " , " << maxX << "] , h = " << h << endl;
	cout << "\tWHILE\n" << setw(8) << "x|" << setw(7) << "y" << endl;
	cout << setw(16) << setfill('-') << '\n' << setfill(' ');
	x = minX;
	while (x <= maxX) {
		 y = sin(x) + pow(x, 2);
		cout << fixed << setprecision(2) << setw(7) << x << '|' << setw(7) << y << endl;
		x += h;

	}
	cout << "\n\tDO_WHILE\n" << setw(8) << "x|" << setw(7) << "y" << endl;
	cout << setw(16) << setfill('-') << "\n" << setfill(' ');
	x = minX;
	do {
		y = sin(x) + pow(x, 2);
		cout << fixed << setprecision(2) << setw(7) << x << '|' << setw(7) << y << endl;
		x += h;
	} 
	while (x <= maxX);
}
