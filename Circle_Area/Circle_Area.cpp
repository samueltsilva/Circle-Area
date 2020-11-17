#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double a, area, pi = 3.14159;

    cout << "Enter the circle radius: ";
    cin >> a;

    area = pi * pow(a, 2);

    cout << "Area = " << fixed << setprecision(4) << area << " a.u." << endl;

    return 0;

}
