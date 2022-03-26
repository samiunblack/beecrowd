#include <iostream>
 
using namespace std;
 
int main() {
    int max;

    int n1, n2, n3;

    cin >> n1 >> n2 >> n3;

    if(n1 > n2){
        max = n1;
    } else {
        max = n2;
    }

    if (n3 > max) {
        max = n3;
    }

    cout << max << " eh o maior" << endl;
 
    return 0;
}