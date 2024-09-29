// Lab 5_1
#include <iostream>
#include <cmath>
using namespace std;


double h(const double x, const double y);


int main()
{
    double s, t;

    cout << "s = ";
    cin >> s; 
    cout << "t = ";
    cin >> t; 

    
    double c = (h(s * s, 1 + t) + h(1, s * t)) / (1 + pow(h(s, t), 2));

   
    cout << "c = " << c << endl;

    return 0;
}


double h(const double x, const double y)
{
    return (x + y + (x * x) * (y * y)) / ((x * x) + (y * y));
}
