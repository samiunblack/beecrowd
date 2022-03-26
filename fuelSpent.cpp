#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
 
    int spentTime, averageSpeed;

    cin >> spentTime;
    cin >> averageSpeed;

    double distance = spentTime * averageSpeed;

    cout << fixed << setprecision(3);

    cout << distance / 12.00 << endl;
 
    return 0;
}