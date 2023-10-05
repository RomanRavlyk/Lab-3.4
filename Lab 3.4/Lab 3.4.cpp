#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double R, a, x, y;
    const double p = atan(1.0) * 4;
    cout << " R = "; cin >> R; //1
    cout << " a = "; cin >> a; //-1
    cout << " x = "; cin >> x; //1
    cout << " y = "; cin >> y; //0

    double area_circle = p * pow(R, 2);

    // Перевірка, чи точка (x, y) потрапляє в замальовану частину фігури
    if (x >= -R && x <= R && y >= -R && y <= R && (x * x + y * y) >= (R * R) && (x * x + y * y) <= (R * R)) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}