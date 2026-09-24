#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    int r;
    cin >> r;
    const double pi = 3.14159265358979;
    printf("%.6f %.6f\n", pi * r * r, 2 * pi * r);
    return 0;
}