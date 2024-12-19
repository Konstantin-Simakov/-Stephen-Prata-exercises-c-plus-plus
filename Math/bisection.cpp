// bisection.cpp
// Segment division method in half.
// a ~ 0, b ~ 2 for this function (see below).
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cfloat>
using namespace std;

const double EPS = 3e-4;

double math_func(double x);
double bisection(double x_left, double x_right);

int main(void)
{   
    // Data input.
    double a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    // Data calculations and output.
    bisection(a, b);

    return 0;
}

double math_func(double x)
{
    return (log(1 + x) + (10.0 / 3) * exp(0.01 * x)) / (2 * sqrt(x)) - x;
}

double bisection(double x_left, double x_right)
{
    const int WIDTH = 13;
    double x_distance = x_right - x_left;
    double x_middle = x_left + x_distance;
    
    // Calculations with output.
    cout << right << fixed << setprecision(5);
    cout << setw(WIDTH) << "a" << setw(WIDTH) << "b"
         << setw(WIDTH) << "dx" << setw(WIDTH) << "x" << setw(WIDTH) << "y" << endl;
    cout << setw(WIDTH) << x_left << setw(WIDTH) << x_right
         << setw(WIDTH) << x_distance << setw(WIDTH) << x_middle << setw(WIDTH) << math_func(x_middle) << endl;

    while (x_distance >= EPS + DBL_EPSILON)
    {
        x_distance /= 2;
        x_middle = x_left + x_distance;

        if (math_func(x_left) * math_func(x_middle) < 0)
            x_right = x_middle;
        else
            x_left = x_middle;

        cout << setw(WIDTH) << x_left << setw(WIDTH) << x_right
             << setw(WIDTH) << x_distance << setw(WIDTH) << x_middle << setw(WIDTH) << math_func(x_middle) << endl;
    }

    return x_middle;
}
