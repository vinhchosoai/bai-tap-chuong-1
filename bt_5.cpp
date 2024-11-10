#include <iostream>
using namespace std;
int main()
{
    float toan, ly, hoa;
    int hs_toan, hs_ly, hs_hoa;
    cout <<"Diem va he so mon toan : " << endl;
    cin >> toan >> hs_toan;
    cout <<"Diem va he so mon ly : " << endl;
    cin >> ly >> hs_ly;
    cout <<"Diem va he so mon hoa : " << endl;
    cin >> hoa >> hs_hoa;
    float tong_diem = (toan * hs_toan) + (ly * hs_ly) + (hoa * hs_hoa);
    int tong_he_so = hs_toan + hs_ly + hs_hoa;
    float diem_trung_binh = tong_diem / tong_he_so;
    cout << "Diem trung binh cua sinh vien = " << diem_trung_binh << endl;
    return 0;
}