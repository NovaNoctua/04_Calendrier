#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <limits>
#include <cmath>

#include "displayDaysOfAYear.h"

using namespace std;

int main() {
    const int max_year = 2100;
    const int min_year = 1800;
    int user_year;

    do {

        cout << "entrer une valeur [" << min_year << " - " << max_year <<  "] : ";
        cin >> user_year;
        if (!cin || user_year < min_year || user_year > max_year) {
            cout << "/!\\ erreur de saisie" << endl;
        }

        // https://stackoverflow.com/questions/5864540/infinite-loop-with-cin-when-typing-string-while-a-number-is-expected
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

    } while (!cin || user_year > max_year || user_year < min_year);

    for (int i = 1; i <= 12; i++) {
        displayDaysOfAMonth(user_year, i);
        cout << endl;
    }

    return 0;
}
