#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
 
int main() {
    
    double a, b, c;

    cin >> a >> b >> c;

    double x1 = (-b + sqrt((b*b) - 4 * a * c))/(2*a);
    double x2 = (-b - sqrt((b*b) - 4 * a * c))/(2*a);

    if (((b*b) - 4 * a * c) < 0 || a == 0){
        cout << "Impossivel calcular" << endl;
    }
    else {
        cout << fixed << setprecision(5);
        cout << "R1 = " << x1 << endl;
        cout << "R2 = " << x2 << endl;
    }
    
 
    return 0;
}