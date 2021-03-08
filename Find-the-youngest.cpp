// Problem to find the youngest among the three given values.

#include <iostream>
using namespace std;

int main() {

    int ageOne, ageTwo, ageThree;
    cout << "Enter the age of Ali, Asad, Saad: ";
    cin >> ageOne, ageTwo, ageThree;

    if (ageOne < ageTwo && ageOne < ageThree)
        cout << "Ali is Youngest!" << endl;
    else if (ageTwo < ageOne && ageTwo < ageThree)
        cout << "Asad is Youngest!" << endl;
    else 
        cout << "Saad is Youngest!" << endl;
    return 0;
}
