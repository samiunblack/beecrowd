#include <iostream>
 
using namespace std;
 
int main() {
 
    double amount;

    cin >> amount;

    int notesOf100 = amount / 100;
    amount = amount - (100 * notesOf100);

    int notesOf50 = amount / 50;
    amount = amount - (50 * notesOf50);

    int notesOf20 = amount / 20;
    amount = amount - (20 * notesOf20);

    int notesOf10 = amount / 10;
    amount = amount - (10 * notesOf10);

    int notesOf5 = amount / 5;
    amount = amount - (5 * notesOf5);

    int notesOf2 = amount / 2;
    amount = amount - (2 * notesOf2);


    int coinsOf1 = amount / 1;
    amount = amount - (1 * coinsOf1);

    int coinsOf05 = amount / 0.50;
    amount = amount - (0.50 * coinsOf05);

    int coinsOf025 = amount / 0.25;
    amount = amount - (0.25 * coinsOf025);

    int coinsOf010 = amount /0.10;
    amount = amount - (0.10 * coinsOf010);

    int coinsOf005 = amount / 0.05;
    amount = amount - (0.05 * coinsOf005);

    int coinsOf001 = amount / 0.01;
    amount = amount - (0.01 * coinsOf001);

    cout << "NOTAS:\n";
    cout << notesOf100 << " nota(s) de R$ 100.00\n";
    cout << notesOf50 << " nota(s) de R$ 50.00\n";
    cout << notesOf20 << " nota(s) de R$ 20.00\n";
    cout << notesOf10 << " nota(s) de R$ 10.00\n";
    cout << notesOf5 << " nota(s) de R$ 5.00\n";
    cout << notesOf2 << " nota(s) de R$ 2.00\n";

    cout << "MOEDAS:\n";

    cout << coinsOf1 << " moeda(s) de R$ 1.00\n";
    cout << coinsOf05 << " moeda(s) de R$ 0.50\n";
    cout << coinsOf025 << " moeda(s) de R$ 0.25\n";
    cout << coinsOf010 << " moeda(s) de R$ 0.10\n";
    cout << coinsOf005 << " moeda(s) de R$ 0.05\n";
    cout << coinsOf001 << " moeda(s) de R$ 0.01\n";
 
    return 0;
}