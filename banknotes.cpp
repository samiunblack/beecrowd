#include <iostream>
 
using namespace std;
 
int main() {
 
    int amount;

    cin >> amount;

    int realAmount = amount;

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

    int notesOf1 = amount / 1;


    cout << realAmount << endl;
    cout << notesOf100 << " nota(s) de R$ 100,00" << endl;
    cout << notesOf50 << " nota(s) de R$ 50,00" << endl;
    cout << notesOf20 << " nota(s) de R$ 20,00" << endl;
    cout << notesOf10 << " nota(s) de R$ 10,00" << endl;
    cout << notesOf5 << " nota(s) de R$ 5,00" << endl;
    cout << notesOf2 << " nota(s) de R$ 2,00" << endl;
    cout << notesOf1 << " nota(s) de R$ 1,00" << endl;
 
    return 0;
}