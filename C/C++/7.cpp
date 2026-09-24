#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    // %.5f 直接控制保留5位小数，(double)保证浮点数除法
    printf("%d %d %.5f\n", a / b, a % b, (double)a / b);  
    return 0;
}