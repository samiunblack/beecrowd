#include <iostream>
 
using namespace std;
 
int main() {
 
    int durationInSeconds;

    cin >> durationInSeconds;

    int hours = durationInSeconds / (60 * 60);
    durationInSeconds = durationInSeconds - (hours * 60 * 60);

    int minutes = durationInSeconds / 60;
    int seconds = durationInSeconds - (minutes * 60);

    cout << hours << ":" << minutes << ":" << seconds << endl;
 
    return 0;
}