#include <iostream>
#include <cmath>
using namespace std;
double k(const double x);
int main()
{
    double zp, zk, z, r;
    int n;
    cout << "zp = "; cin >> zp;
    cout << "zk = "; cin >> zk;
    cout << "n = "; cin >> n;
    double zg = (zk - zp) / n;
    z = zp;
    while (z <= zk)
    {
        r = k(z * z + 1) - k(z * z - 1) + 2 * k(z);
        cout << "z:" << " " << z << endl;
        z += zg;
    }
    return 0;
}
double k(const double x)
{
    if (abs(x) >= 1)
        return ((exp(x) + sin(x)) / ((cos(x) * cos(x) + 1)));
    else
    {
        double S = 0;
        int i = 0;
        double a = 1;
        double x = 1;
        S = a;
        int ñ = 1 / exp(x);
        do
        {
            i++;
            double R = pow(x, i) / i;
            a *= R;
            S += a;
        } while (i < 5);
        double result = ñ * S;
        return result;
    }
}
