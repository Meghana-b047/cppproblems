#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip> // to use fixed and setprecision
using namespace std;


int main() {
    int a;
    long double b;
    char c;
    float d;
    double e;

    cin >> a >> b >> c >> d >> e;
    //by default cout uses scientific notation to print long double and long float
    cout << a << "\n";
    cout <<fixed << setprecision(10)<< b << "\n";
    cout << c<< "\n";
    cout <<fixed << setprecision(10)<<  d << "\n";
    cout <<fixed << setprecision(10)<< e << "\n";
    return 0;
}
