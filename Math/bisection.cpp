// bisection.cpp
// Segment division method in half for f(x) = 0.
// a ~ 0, b ~ 2 for this function (see below), 
// e.g. a = 0.015, b = 1.995 and calculations will run.
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
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
    // Check that the Bolzano-Cauchy theorem is satisfied for this segment [a, b].
    if (a < b && (math_func(a) * math_func(b)) < 0)
    {
        double x = bisection(a, b);
        cout << "\nSolving the equation f(x) = 0, obtained x ~ " << x << endl;
    }
    else
    {
        cout << "Incorrect input a, b. You need to enter another.\n";
        cout << "Program terminated.\n";
        exit(EXIT_FAILURE);
    }

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
    cout << endl << right << fixed << setprecision(5);
    cout << setw(WIDTH) << "a" << setw(WIDTH) << "b"
         << setw(WIDTH) << "dx" << setw(WIDTH) << "x" << setw(WIDTH) << "f(x)" << endl;
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
