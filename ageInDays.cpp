#include <iostream>
 
using namespace std;
 
int main() {
 
    int age;
    
    cin >> age;

    int years = age / 365;
    age = age - (years * 365);

    int months = age / 30;
    
    int days = age - (months * 30);

    cout << years << " ano(s)" << "\n" << months << " mes(es)" << "\n" << 
    days << " dia(s)" << endl;
 
    return 0;
}
