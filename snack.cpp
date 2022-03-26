#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    
    int snack1, amount;
    cin >> snack1 >> amount;

    double snackPrices[5] = {4.00, 4.50, 5.00, 2.00, 1.50};

    cout << fixed << setprecision(2);
    cout << "Total: R$ " << snackPrices[snack1 - 1] * amount << endl;
 
    return 0;
}