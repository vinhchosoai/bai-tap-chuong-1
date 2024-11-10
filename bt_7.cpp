#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float x1, y1, x2, y2, x3, y3;
    cout << "Nhap toa do diem A (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Nhap toa do diem B (x2, y2): ";
    cin >> x2 >> y2;
    cout << "Nhap toa do diem C (x3, y3): ";
    cin >> x3 >> y3;
    float AB = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    float BC = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
    float CA = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
    float chu_vi = AB + BC + CA;
    float p = chu_vi / 2;
    float dien_tich = sqrt(p * (p - AB) * (p - BC) * (p - CA));
    cout << "Chu vi cua tam giac = " << chu_vi << endl;
    cout << "Dien tich cua tam giac = " << dien_tich << endl;
    return 0;
}
