#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
    double a, b, c;

    cin >> a >> b >> c;


    double triangle = a * c * 0.5;

    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << triangle << endl;
    cout << "CIRCULO: " << c * c * 3.14159 << endl;
    cout << "TRAPEZIO: " << 0.5 * (a + b) * c << endl;
    cout << "QUADRADO: " << b * b << endl;
    cout << "RETANGULO: " << a * b << endl;
    
    return 0;
}