#include <iostream>
#include <iomanip> 

using namespace std;
 
int main() {
 
    double n1, n2, n3, n4, n5;

    cin >> n1 >> n2 >> n3 >> n4;


    n1 *= 2;
    n2 *= 3;
    n3 *= 4;
    n4 *= 1;

    double average = (n1 + n2 + n3 + n4) / 10;

    cout << fixed << setprecision(1);
    cout << "Media: " << average << endl;

    if(average >= 7.0) {
        cout << "Aluno aprovado." << endl;
    }

    else if (average < 5.0){
        cout << "Aluno reprovado." << endl;
    }

    else if (average >= 5.0 && average <= 6.9) {
        cout << "Aluno em exame." << endl;

        cin >> n5;

        cout << "Nota do exame: " << n5 << endl;

        double new_average = (average + n5)/2;

        if(new_average >= 5.0) {
            cout << "Aluno aprovado." << endl;
        }

        else if (new_average < 5.0){
            cout << "Aluno reprovado." << endl;
        }

        cout << "Media final: " << new_average << endl;
        
    }


 
    return 0;
}