#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    float x1,x2,y1,y2;
    cout <<"Toa do A (x1;y1)" << endl;
    cin >> x1 >> y1;
    cout <<"Toa do B (x2;y2)" << endl;
    cin >> x2 >> y2;
    float distance = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1))
    cout << "Do dai vecto AB " << distance << endl;
    return 0;
}