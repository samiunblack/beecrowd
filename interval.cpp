#include <iostream>
 
using namespace std;
 
int main() {
 
    double number;

    cin >> number;

    if (number < 0.00 || number > 100.00){
        cout << "Fora de intervalo\n";
    }

    else {
        if(number <= 25.00){
            cout << "Intervalo [0,25]\n";
        }

        else if (number <= 50.00){
            cout << "Intervalo (25,50]\n";
        }

        else if (number <= 75.00){
            cout << "Intervalo (50,75]\n";
        }

        else if (number <= 100.00){
            cout << "Intervalo (75,100]\n";
        }
    }
 
    return 0;
}