//
// Created by Akmaljon Toshbotirov on 09/06/25.
//
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    double discriminant = b*b - 4*a*c;
    if (discriminant >= 0) {
        double x1 = (-b + sqrt(discriminant)) / (2*a);
        double x2 = (-b - sqrt(discriminant)) / (2*a);
        if (x1 == x2)
            cout << "x1=x2=" << x1;
        else
            cout << "x1=" << x1 << endl << "x2=" << x2;
    } else {
        cout << "No real roots";
    }
    return 0;
}

