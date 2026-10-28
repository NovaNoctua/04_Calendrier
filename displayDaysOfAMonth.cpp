//
// Created by m01 on 28/10/2026.
//

#include "displayDaysOfAMonth.h"

#include <iomanip>
#include <iostream>
#include "isALapYear.h"
#include "lastDayOfWeekOfMonth.h"

using namespace std;

void displayDaysOfAMonth(int year, int month, int firstDay) {
    switch (month) {
        case 1: cout << "janvier "; break;
        case 2: cout << "fevrier "; break;
        case 3: cout << "mars "; break;
        case 4: cout << "avril "; break;
        case 5: cout << "mai "; break;
        case 6: cout << "juin "; break;
        case 7: cout << "juillet "; break;
        case 8: cout << "aout "; break;
        case 9: cout << "septembre "; break;
        case 10: cout << "octobre "; break;
        case 11: cout << "novembre "; break;
        case 12: cout << "decembre "; break;
    }
    cout << year << endl;

    int max_days;

    if (month == 2) {
        if (isALeapYear(year)) max_days = 29;
        else max_days = 28;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        max_days = 30;
    }
    else {
        max_days = 31;
    }

    cout << setw(2) << "L" << setw(3) << "M" << setw(3) << "M" << setw(3) << "J" << setw(3) << "V" << setw(3) << "S" << setw(3) << "D" << endl;

    const int n_col = 7;
    int current_col = firstDay - 1;

    for (int i = 1; i <= max_days; i++) {
        cout << setw(i == 1 ? 2 + ((current_col) * 3) :current_col == 0 ? 2 : 3) << i;
        current_col++;
        if (current_col == n_col) {
            current_col = 0;
            cout << endl;
        }
    }

    cout << endl;
}
