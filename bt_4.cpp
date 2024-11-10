#include <iostream>
using namespace std;
int main()
{
    float a, b, total, vat;
    cout << "So luong = " ;
    cin >> a;
    cout << "Don gia =";
    cin >> b;
    total = a * b;
    cout <<"Tien = " << total << endl;
    cout << "Thue gia tri =" << total*10/100 << endl;
}