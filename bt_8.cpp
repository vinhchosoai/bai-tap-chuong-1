#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
int main()
{
    float a, b, c, d, x, y, z;
    cout << " Nhap a =";
    cin >> a;
    cout << " Nhap b =";
    cin >> b;
    cout << " Nhap c =";
    cin >> c;
    cout << " Nhap d =";
    cin >> d;
    cout << " Nhap x =";
    cin >> x;
    cout << " Nhap y =";
    cin >> y;
    cout << " Nhap z =";
    cin >> z;
    float numerator = fabs(a*x+b*y+c*z+d);
    float denominator = sqrt(a * a + b * b + c * c);
    cout << "The distance =" << numerator/denominator<< endl;
}

