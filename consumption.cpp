#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    int distanceTraveled; double spentFuel;

    cin >> distanceTraveled;
    cin >> spentFuel;

    cout << fixed << setprecision(3);
    cout << distanceTraveled / spentFuel << " km/l" << endl;
 
    return 0;
}